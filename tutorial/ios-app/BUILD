cc_library(
    name = "global-constructor",
    srcs = ["global_constructor.cc"],
    copts = [
        "-DOS_IOS",
        "-miphoneos-version-min=7.0",
        "-arch armv7",
        "-arch armv7s",
        "-arch arm64",
        "-isysroot /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS9.2.sdk/",
    ],
)

objc_library(
    name = "UrlGetClasses",
    srcs = [
        "UrlGet/AppDelegate.m",
        "UrlGet/UrlGetViewController.m",
    ],
    hdrs = glob(["UrlGet/*.h"]),
    xibs = ["UrlGet/UrlGetViewController.xib"],
    deps = [":global-constructor"],
)

objc_binary(
    name = "ios-app-binary",
    srcs = [
        "UrlGet/main.m",
    ],
    deps = [
        ":UrlGetClasses",
    ],
)

ios_application(
    name = "ios-app",
    binary = ":ios-app-binary",
    infoplist = "UrlGet/UrlGet-Info.plist",
)