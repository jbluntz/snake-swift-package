// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "SnakeModel",
    platforms: [
        .iOS(.v13)
    ],
    products: [
        .library(
            name: "SnakeModel",
            targets: ["SnakeModel"]
        ),
    ],
    targets: [
        .binaryTarget(
            name: "SnakeModel",
            path: "./SnakeModel.xcframework"
        ),
    ]
)
