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
            .upToNextMinor(from: "12.9.0")
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "3.0.0"
        ),
        .package(
            url: "https://github.com/Vungle/VungleAdsSDK-SwiftPackageManager.git",
            exact: "7.5.3"
        )
    ],
    targets: [
        .target(
            name: "FuseAppSDKTargets",
            dependencies: [
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                .product(name: "GoogleUserMessagingPlatform", package: "swift-package-manager-google-user-messaging-platform"),
                .product(name: "VungleAdsSDK", package: "VungleAdsSDK-SwiftPackageManager"),
                .target(name: "AmazonPublisherServicesSDK"),
                .target(name: "FBAudienceNetwork"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "GoogleMobileAdsMediationFacebook"),
                .target(name: "GoogleMobileAdsMediationInMobi"),
                .target(name: "GoogleMobileAdsMediationVungle"),
                .target(name: "InMobiSDK"),
                .target(name: "PrebidMobile"),
                .target(name: "PrebidMobileOMSDK"),
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "AmazonPublisherServicesSDK",
            url: "https://d14jk8f50gmy3e.cloudfront.net/iOS_APS_SDK/APS_iOS_SDK-5.3.0.zip",
            checksum: "3c317306e0147b899b70ecf8f3b54a7a5c73a1677da7260a313bf785ce64d044"
        ),
        .binaryTarget(
            name: "FBAudienceNetwork",
            url: "https://developers.facebook.com/resources/FBAudienceNetwork-6.20.1.zip",
            checksum: "7e6560c585a8f224643500e89e053b909793a266ec483384d4c98215f0e870e4"
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-2.0.1.zip",
            checksum: "cef567f49c0982ef35b0f30b5763065840d3545b723080d260923ec8328930f7"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationFacebook",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/meta/MetaAdapter-6.20.1.0.zip",
            checksum: "3d1a8ca528d87aadf2124d46425848702c3194a71e9b738c452a84806bbae58a"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationInMobi",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/inmobi/InMobiAdapter-10.8.6.0.zip",
            checksum: "3dcd1c6b2bc8ab0267642d3e9cc64be6f1cb8b353b64742effd56211d26d0450"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationVungle",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/liftoffmonetize/LiftoffMonetizeAdapter-7.5.3.0.zip",
            checksum: "d461bafea2b79e0505dae9773fc4ca4b3fc527c3bdcf98ceeaf844d0665fbedd"
        ),
        .binaryTarget(
            name: "InMobiSDK",
            url: "https://dl.inmobi.com/inmobi-sdk/IM/InMobi-iOS-SDK-10.8.6.zip",
            checksum: "ab0f05cd8aa0a7b1085a2b4f57f06ba27ae5dc310e1d9c1241011bba6ba98949"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobile-iOS-3.1.0.zip",
            checksum: "410c61af942550469ccc17ef748b9a2f4e5321094e18f910099f3d334db8391a"
        ),
        .binaryTarget(
            name: "PrebidMobileOMSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobileOMSDK-iOS-1.5.5.zip",
            checksum: "8a463aebf191b055e08a365d21dad89581e275a8ce7c9804e7079e1da1a043db"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-2.0.1.zip",
            checksum: "94062905dbdc0ad39f39c0cdadd451fb25230ce3d5e156d4cb4d560b53ca4ce2"
        )
    ]
)
