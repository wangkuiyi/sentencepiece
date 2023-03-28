# SentencePiece

This is a fork of https://github.com/google/sentencepiece with the following changes.

1. This fork adds `./build.sh`. Running this script builds `src/*` into an Apple XCFramework `./build/sentencepiece.xcframework`.
1. The result XCFramework supports more Apple platforms than the official repo, which builds for only iOS, whereas this fork supports the following Apple platforms:
   - iOS/tvOS/watchOS devices arm64
   - iOS/tvOS/watchOS devices arm64e
   - iOS/tvOS/watchOS simulator arm64
   - iOS/tvOS/watchOS simulator x86_64
   - macOS arm64
   - macOS x86_64
1. This fork does no longer require `cmake/ios.toolchain.cmake`, because modern CMake supports building for Apple platforms without any toolchain.
