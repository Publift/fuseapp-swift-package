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
            .upToNextMinor(from: "13.2.0")
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "3.0.0"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-liftoffmonetize.git",
            exact: "7.7.0"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-inmobi.git",
            exact: "11.2.000"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-meta.git",
            exact: "6.21.100"
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
                .target(name: "DTBiOSSDK"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "PrebidMobile"),
                .target(name: "PrebidMobileOMSDK"),
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "DTBiOSSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/DTBiOSSDK-5.6.1.zip",
            checksum: "8e07f4929156fd05ab7a2307625210a32f77d0c743e45e4a02dadd743bd6a453"
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-2.5.1.zip",
            checksum: "29d0c2de3f73ee462549b8fdb2866f35a12795e260e0937fb219f76bc9215bba"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobile-iOS-3.3.0.zip",
            checksum: "3727d0a05e3b2fa3162b92353102aa5b5899e4c017a1653a05f36c97924b582b"
        ),
        .binaryTarget(
            name: "PrebidMobileOMSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobileOMSDK-iOS-1.5.5.zip",
            checksum: "8a463aebf191b055e08a365d21dad89581e275a8ce7c9804e7079e1da1a043db"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-2.5.1.zip",
            checksum: "f9d168ffa15ff666c4acb6d78fa0ed648d99986cbc117c7ddfc64ae093f86998"
        )
    ]
)
