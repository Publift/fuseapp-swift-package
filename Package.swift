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
            url: "https://dl.cloudsmith.io/MuoLsp1oKgkvmnkF/publift/fuseapp-dev/raw/versions/1.2.1/FuseAppSDK.xcframework.zip",
            checksum: "f1f8d232e37f3be36963c49a4af1d33bed097944ccb417da5d952f6f4d100e32"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/MuoLsp1oKgkvmnkF/publift/fuseapp-dev/raw/versions/2.2.0/PrebidMobile.xcframework.zip",
            checksum: "fdfab96b1b998dbf81846dba416387177bb574e134ee73a9d9099d211546fbdc"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/MuoLsp1oKgkvmnkF/publift/fuseapp-dev/raw/versions/1.2.1/PubliftShared.xcframework.zip",
            checksum: "679312dd6d8d7ab7671259f631d8ddc27f5be629b30a7e7a99bcf15f023a54ee"
        )
    ]
)
