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
            from: "12.9.0"
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "3.0.0"
        ),
        .package(
            url: "https://github.com/prebid/prebid-mobile-ios.git",
            exact: "3.1.0"
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
                .product(name: "PrebidMobile", package: "prebid-mobile-ios"),
                .product(name: "VungleAdsSDK", package: "VungleAdsSDK-SwiftPackageManager"),
                .target(name: "AmazonPublisherServicesSDK"),
                .target(name: "FBAudienceNetwork"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "GoogleMobileAdsMediationFacebook"),
                .target(name: "GoogleMobileAdsMediationInMobi"),
                .target(name: "GoogleMobileAdsMediationVungle"),
                .target(name: "InMobiSDK"),
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
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-2.0.0.zip",
            checksum: "58764a0629b593ff8459a7a2699ad9ede9732304ab488381dec94e7f9a91657f"
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
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-2.0.0.zip",
            checksum: "c31884e6e408ccc93a5c6b4cddbddb6bd1620d282a2d86960c547104410f8daf"
        )
    ]
)
