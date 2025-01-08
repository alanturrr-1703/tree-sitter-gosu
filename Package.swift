// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSittergosu",
    products: [
        .library(name: "TreeSittergosu", targets: ["TreeSittergosu"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSittergosu",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSittergosuTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSittergosu",
            ],
            path: "bindings/swift/TreeSittergosuTests"
        )
    ],
    cLanguageStandard: .c11
)
