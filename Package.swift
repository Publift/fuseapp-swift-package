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
            .upToNextMinor(from: "13.11.0")
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "3.1.0"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-liftoffmonetize.git",
            exact: "7.7.800"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-inmobi.git",
            exact: "11.5.000"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-meta.git",
            exact: "6.22.000"
        )
    ],
    targets: [
        .target(
            name: "FuseAppSDKTargets",
            dependencies: [
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                .product(name: "GoogleUserMessagingPlatform", package: "swift-package-manager-google-user-messaging-platform"),
                .product(name: "InMobiAdapterTarget", package: "googleads-mobile-ios-mediation-inmobi"),
                .product(name: "LiftoffMonetizeAdapterTarget", package: "googleads-mobile-ios-mediation-liftoffmonetize"),
                .product(name: "MetaAdapterTarget", package: "googleads-mobile-ios-mediation-meta"),
                .target(name: "ConfiantSDK"),
                .target(name: "DTBiOSSDK"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "PrebidMobile"),
                .target(name: "PrebidMobileOMSDK"),
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "ConfiantSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/ConfiantSDK-iOS-6.3.0.zip",
            checksum: "3aa7ba12ea51f1981017f8b5a790cccc6b000e35e7a82594a6f6ad3dfecd96d2"
        ),
        .binaryTarget(
            name: "DTBiOSSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/DTBiOSSDK-5.6.1.zip",
            checksum: "8e07f4929156fd05ab7a2307625210a32f77d0c743e45e4a02dadd743bd6a453"
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-2.8.1.zip",
            checksum: "91fd4aecc1708a17a45b793f71f3131babc2471dbec4f7857c56a45fd6b810f0"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobile-iOS-3.4.1.zip",
            checksum: "934e27ae51d5de1b9d62c574445a795fed2a96d70962a1a45947b8590f741286"
        ),
        .binaryTarget(
            name: "PrebidMobileOMSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobileOMSDK-iOS-1.5.5.zip",
            checksum: "8a463aebf191b055e08a365d21dad89581e275a8ce7c9804e7079e1da1a043db"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-2.8.1.zip",
            checksum: "4965c8d0d2beb38c5a1efaaac8c7753d92c14387cc9b7f1be0bf55ae7b67abe3"
        )
    ]
)
