// swift-tools-version: 5.10
import PackageDescription

let package = Package(
    name: "FuseAppSDK",
    platforms: [
        .iOS(.v15)
    ],
    products: [
        .library(
            name: "FuseAppSDK",
            targets: ["FuseAppSDKTargets"]
        )
    ],
    dependencies: [
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-mobile-ads.git",
            from: "11.2.0"
        )
    ],
    targets: [
        .target(
            name: "FuseAppSDKTargets",
            dependencies: [
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "PrebidMobile"),
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            path: "Frameworks/FuseAppSDK.xcframework"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            path: "Frameworks/PrebidMobile.xcframework"
        ),
        .binaryTarget(
            name: "PubliftShared",
            path: "Frameworks/PubliftShared.xcframework"
        )
    ]
)
