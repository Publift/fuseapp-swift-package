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
            .upToNextMinor(from: "12.14.0")
        ),
        .package(
            url: "https://github.com/googleads/swift-package-manager-google-user-messaging-platform.git",
            from: "3.0.0"
        ),
        .package(
            url: "https://github.com/googleads/googleads-mobile-ios-mediation-liftoffmonetize.git",
            exact: "7.6.0"
        )
    ],
    targets: [
        .target(
            name: "FuseAppSDKTargets",
            dependencies: [
                .product(name: "GoogleMobileAds", package: "swift-package-manager-google-mobile-ads"),
                .product(name: "GoogleUserMessagingPlatform", package: "swift-package-manager-google-user-messaging-platform"),
                .product(name: "LiftoffMonetizeAdapterTarget", package: "googleads-mobile-ios-mediation-liftoffmonetize"),
				.target(name: "APSiOSSharedLib"),
                .target(name: "DTBiOSSDK"),
                .target(name: "FBAudienceNetwork"),
                .target(name: "FuseAppSDKFramework"),
                .target(name: "GoogleMobileAdsMediationFacebook"),
                .target(name: "GoogleMobileAdsMediationInMobi"),
                .target(name: "InMobiSDK"),
                .target(name: "PrebidMobile"),
                .target(name: "PrebidMobileOMSDK"),
                .target(name: "PubliftShared")
            ]
        ),
        .binaryTarget(
            name: "APSiOSSharedLib",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/APSiOSSharedLib-5.4.0.zip",
            checksum: "eaff35fd4a97ab200a6a17dd4962e44e109b17806b1ef28581d53d0e2f7344e9"
        ),
        .binaryTarget(
            name: "DTBiOSSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/DTBiOSSDK-5.4.0.zip",
            checksum: "b778f3c5f66f084ab97414d1d79e89363f2bcfea15cbff5c4fbb9a775b569bc2"
        ),
        .binaryTarget(
            name: "FBAudienceNetwork",
            url: "https://developers.facebook.com/resources/FBAudienceNetwork-6.21.0.zip",
            checksum: "de44e20e5f3e45753487f2e03beea385253573e024a4f2f24e18adfab35eca53"
        ),
        .binaryTarget(
            name: "FuseAppSDKFramework",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/FuseAppSDK-iOS-2.4.0.zip",
            checksum: "ea532f48b688f5872058b99708f07a37fc89ac064d39956d46e4b934bf94cd90"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationFacebook",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/meta/MetaAdapter-6.21.0.1.zip",
            checksum: "f998ab78d31e7411b55cf319f74d5dbbcd623dff852a072fe7d11fed0fb13eda"
        ),
        .binaryTarget(
            name: "GoogleMobileAdsMediationInMobi",
            url: "https://dl.google.com/googleadmobadssdk/mediation/ios/inmobi/InMobiAdapter-11.1.1.0.zip",
            checksum: "e256fc5ec51499c54375404c5a048ac9ff3929fdbcc5b09f33a00ceeccc311b4"
        ),
        .binaryTarget(
            name: "InMobiSDK",
            url: "https://dl.inmobi.com/inmobi-sdk/IM/InMobi-iOS-SDK-11.1.1.zip",
            checksum: "578dd32285cc8cea05e04ef3ffd03ccf0c93bc010d1e3abbed28690fe0dfffb2"
        ),
        .binaryTarget(
            name: "PrebidMobile",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobile-iOS-3.2.1.zip",
            checksum: "5dbfa93fd63b2a23f9456845810a4578c4d5a1f674fbd214e3d8f505ff14d40e"
        ),
        .binaryTarget(
            name: "PrebidMobileOMSDK",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PrebidMobileOMSDK-iOS-1.5.5.zip",
            checksum: "8a463aebf191b055e08a365d21dad89581e275a8ce7c9804e7079e1da1a043db"
        ),
        .binaryTarget(
            name: "PubliftShared",
            url: "https://dl.cloudsmith.io/BrnMk9bbufLlX4Vd/publift/fuseapp/raw/files/PubliftShared-iOS-2.4.0.zip",
            checksum: "cf9ab5803387ea8788500876aed9a0109c287c69d7a0e83d3285809b08bf8a1f"
        )
    ]
)
