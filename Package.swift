// swift-tools-version:5.5.0
import PackageDescription

let package = Package(
    name: "Target2sellSDK",
    platforms: [
        .iOS(.v14)
    ],
    products: [
        .library(
            name: "Target2sellSDK",
            targets: ["Target2sellSDK"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "Target2sellSDK",
            path: "./Target2sellSDK.xcframework"
        ),
    ]
)
