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
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "2.7.0"
        ),
        .package(
            url: "https://github.com/Vungle/VungleAdsSDK-SwiftPackageManager.git",
            exact: "7.4.4"
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
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "AmazonPublisherServicesSDK",
            url: "https://mdtb-sdk-packages.s3.us-west-2.amazonaws.com/iOS_APS_SDK/APS_iOS_SDK-4.10.2.zip",
            checksum: "58cef8142747cdaeb0ada352b0fd49e09a116e4116407ac9fc825768293be4dd"
        ),
        .binaryTarget(
            name: "FBAudienceNetwork",
            url: "https://developers.facebook.com/resources/FBAudienceNetwork-6.16.0.zip",
            checksum: "e31927bdf5ef05bfa1c8a977a71c9a68e0598f31a055d6dd5049821faa1b206c"
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-1.6.1.zip",
            checksum: "30463adbc5493c3cfe8c3e7f7adaa9e6076b0cc22d6caa4f37179cc49d1e39d4"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationFacebook",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/meta/MetaAdapter-6.16.0.0.zip",
            checksum: "71a13abb8057caa971cb863890fb5d74a252906b83b299082a26183dffbc1b7c"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationInMobi",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/inmobi/InMobiAdapter-10.8.0.0.zip",
            checksum: "1dcafd497811bcc6e78649a8e75ca32141091e2453daae09f786551f2998d770"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationVungle",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/liftoffmonetize/LiftoffMonetizeAdapter-7.4.4.0.zip",
            checksum: "53dfc65108904f522334a6663a18cd9b275097b4a2f6036b2344127a349a2662"
        ),
        .binaryTarget(
            name: "InMobiSDK",
            url: "https://dl.inmobi.com/inmobi-sdk/IM/InMobi-iOS-SDK-10.8.0.zip",
            checksum: "689e37040a5e07006be4c7b389699d086da0093ff45b68cb3927081ee2281884"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobile-iOS-2.4.0.zip",
            checksum: "259c3471991f89db4961ec5a47980db2cad559da681ed5a8072d270e1e55154c"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-1.6.1.zip",
            checksum: "84a32b12146e2493a3899868e248282bc31f1b09a2a3da952f4778ea693e7903"
        )
    ]
)
