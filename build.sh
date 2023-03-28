#!/bin/bash

# exit when any command fails
set -e

# The -f option force the rebuild of the runtime frameworks.
while getopts hf flag; do
    case "${flag}" in
    f) FORCE_REBUILD="YES" ;;
    *)
        echo "$0 -h|-f"
        echo "  -h : display this message"
        echo "  -f : force rebuild runtime frameworks"
        exit 0
        ;;
    esac
done

PROJECT=sentencepiece
SCRIPT_DIR=$(dirname "$(readlink -f "${BASH_SOURCE[0]}")")
SRC_DIR=$SCRIPT_DIR
BUILD_DIR=$SCRIPT_DIR/build
XCFRAMEWORK="$BUILD_DIR"/$PROJECT.xcframework


# Build the $PROJECT into a framework for each target.
if [[ $FORCE_REBUILD == "YES" ]]; then
    echo "┌------------------------------------------------------------------------------┐"
    echo "  Deleting existig the runtime frameworks ..."
    echo "└------------------------------------------------------------------------------┘"
    rm -rf "$BUILD_DIR"
fi

function build_for_device() {
    case $1 in
    ios-sim) sysname=iOS; sdk=iphonesimulator ;;
    ios-dev) sysname=iOS; sdk=iphoneos ;;
    tv-sim) sysname=tvOS; sdk=appletvsimulator ;;
    tv-dev) sysname=tvOS; sdk=appletvos ;;
    watch-sim) sysname=watchOS; sdk=watchsimulator ;;
    watch-dev) sysname=watchOS; sdk=watchos ;;
    *)
        echo "Error: Unknown target $1"
        exit 5
        ;;
    esac

    arch=$2
    label=$1-"$arch"
    build_dir="$BUILD_DIR"/"$label"

    test_file="$build_dir"/$PROJECT.framework/$PROJECT
    if test -f "$test_file" && lipo -info "$test_file"; then
        echo "Skip building iree.framework for $label."
    else
        echo "┌------------------------------------------------------------------------------┐"
        echo "  Building for $label ..."
        echo "   src: $SRC_DIR "
        echo "   build: $build_dir "
        echo "   build log: $build_dir/build.log"
        echo "└------------------------------------------------------------------------------┘"
        mkdir -p "$build_dir" # So to create the build.log file.
        cmake -S . \
            -B "$build_dir" \
            -GNinja \
	    -DSPM_ENABLE_SHARED=OFF \
	    -DSPM_ENABLE_TCMALLOC=OFF \
            -DCMAKE_SYSTEM_NAME=$sysname \
            -DCMAKE_OSX_SYSROOT="$(xcodebuild -version -sdk $sdk Path)" \
            -DCMAKE_OSX_ARCHITECTURES="$arch" \
            -DCMAKE_SYSTEM_PROCESSOR="$arch" \
            -DCMAKE_OSX_DEPLOYMENT_TARGET=16.0 \
            -DCMAKE_INSTALL_PREFIX="$build_dir"/install \
            >"$build_dir"/build.log 2>&1
        cmake --build "$build_dir" >>"$build_dir"/build.log 2>&1
    fi
}

function build_for_macos() {
    arch=$1
    label=macos-"$arch"
    build_dir="$BUILD_DIR"/"$label"

    test_file="$build_dir"/$PROJECT.framework/$PROJECT
    if test -f "$test_file" && lipo -info "$test_file"; then
        echo "Skip building iree.framework for $label."
    else
        echo "┌------------------------------------------------------------------------------┐"
        echo "  Building for $label ..."
        echo "   src: $SRC_DIR "
        echo "   build: $build_dir "
        echo "   build log: $build_dir/build.log"
        echo "└------------------------------------------------------------------------------┘"
        mkdir -p "$build_dir" # So to create the build.log file.
        cmake -S . \
            -B "$build_dir" \
            -GNinja \
	    -DSPM_ENABLE_SHARED=OFF \
	    -DSPM_ENABLE_TCMALLOC=OFF \
            -DCMAKE_OSX_ARCHITECTURES="$arch" >"$build_dir"/build.log 2>&1
        cmake --build "$build_dir" >>"$build_dir"/build.log 2>&1
    fi
}

function merge_fat_static_library() {
    src_label=$2
    dst_label=$1

    src="$BUILD_DIR"/$src_label/src/$PROJECT-apple.framework/$PROJECT-apple
    dst="$BUILD_DIR"/$dst_label/src/$PROJECT-apple.framework/$PROJECT-apple

    if lipo -info "$dst" | grep 'Non-fat' >/dev/null; then
        echo "┌------------------------------------------------------------------------------┐"
        echo "  Building FAT static library ..."
        echo "   merge: $src"
        echo "    into: $dst"
        echo "└------------------------------------------------------------------------------┘"
        merged=/tmp/libmerged-"$src_label"-"$dst_label".a
        lipo "$src" "$dst" -create -output "$merged"
        mv "$merged" "$dst"
    fi
}

# Step 1. Build the following frameworks
#
# Note: We cannot build for dev-x86_64 because Apple does not offer
# SDK for it. If we do so, CMake will prompt us about missing required
# architecture x86_64 in file
# /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS16.2.sdk/usr/lib/libc++.tbd
# build_for_ios dev x86_64
#
# This step also merge dependent static libraries into the target library.
build_for_device ios-sim arm64
build_for_device ios-sim x86_64
build_for_device ios-dev arm64
build_for_device ios-dev arm64e
build_for_device tv-sim arm64
build_for_device tv-sim x86_64
build_for_device tv-dev arm64
build_for_device tv-dev arm64e
build_for_device watch-sim arm64
build_for_device watch-sim x86_64
build_for_device watch-dev arm64
build_for_device watch-dev arm64e
build_for_macos x86_64
build_for_macos arm64

# Step 2. Merge the frameworks of the same OS platform
#  ios-simulator-arm64+x86_64
#  macos-arm64+x86_64
merge_fat_static_library ios-sim-arm64 ios-sim-x86_64
merge_fat_static_library ios-dev-arm64 ios-dev-arm64e
merge_fat_static_library tv-sim-arm64 tv-sim-x86_64
merge_fat_static_library tv-dev-arm64 tv-dev-arm64e
merge_fat_static_library watch-sim-arm64 watch-sim-x86_64
merge_fat_static_library watch-dev-arm64 watch-dev-arm64e
merge_fat_static_library macos-arm64 macos-x86_64

# Step 3. Merge the above frameworks into an XCFramework
echo "┌------------------------------------------------------------------------------┐"
echo "  Aggregating frameworks into an xcframework ..."
echo "└------------------------------------------------------------------------------┘"
rm -rf "$XCFRAMEWORK"
xcodebuild -create-xcframework \
    -framework "$BUILD_DIR"/macos-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/ios-sim-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/ios-dev-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/tv-sim-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/tv-dev-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/watch-sim-arm64/src/$PROJECT-apple.framework \
    -framework "$BUILD_DIR"/watch-dev-arm64/src/$PROJECT-apple.framework \
    -output "$XCFRAMEWORK"
tree -L 1 -d "$XCFRAMEWORK"
