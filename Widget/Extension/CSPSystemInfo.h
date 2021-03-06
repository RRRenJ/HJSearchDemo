//	Permission is hereby granted, free of charge, to any person obtaining a
//	copy of this software and associated documentation files (the "Software"),
//	to deal in the Software without restriction, including without limitation
//	the rights to use, copy, modify, merge, publish, distribute, sublicense,
//	and/or sell copies of the Software, and to permit persons to whom the
//	Software is furnished to do so, subject to the following conditions:
//
//	The above copyright notice and this permission notice shall be included in
//	all copies or substantial portions of the Software.
//
//	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//	FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
//	IN THE SOFTWARE.
//

#if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#define IOS10_OR_LATER   ( ([[UIDevice currentDevice] systemVersion].floatValue >= 10.0) )
#define IOS9_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 9.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"9.0"] != NSOrderedAscending )
#define IOS8_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 8.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"8.0"] != NSOrderedAscending )
#define IOS7_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 7.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"7.0"] != NSOrderedAscending )
#define IOS6_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 6.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"6.0"] != NSOrderedAscending )
#define IOS5_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 5.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"5.0"] != NSOrderedAscending )
#define IOS4_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 4.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"4.0"] != NSOrderedAscending )
#define IOS3_OR_LATER    ( ([[UIDevice currentDevice] systemVersion].floatValue >= 3.0) ) //( [[[UIDevice currentDevice] systemVersion] compare:@"3.0"] != NSOrderedAscending )

#else	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

#define IOS6_OR_LATER	(NO)
#define IOS5_OR_LATER	(NO)
#define IOS4_OR_LATER	(NO)
#define IOS3_OR_LATER	(NO)

#endif	// #if (TARGET_OS_IPHONE || TARGET_IPHONE_SIMULATOR)

@interface CSPSystemInfo : NSObject

+ (NSString *)OSVersion;

+ (NSString *)appVersion;

+ (NSString *)appBuildVersion;

+ (NSString *)appIdentifier;

+ (NSString *)deviceModel;

+ (NSString *)deviceUUID;

+ (BOOL)isJailBroken        NS_AVAILABLE_IOS(4_0);

+ (NSString *)jailBreaker    NS_AVAILABLE_IOS(4_0);

+ (BOOL)isDevicePhone;

+ (BOOL)isDevicePad;

+ (BOOL)isPhone35;

+ (BOOL)isPhoneRetina35;

+ (BOOL)isPhoneRetina4;

+ (BOOL)isPhoneRetina6;

+ (BOOL)isPhoneRetina6Plus;

+ (BOOL)isPad;

+ (BOOL)isPadRetina;

+ (BOOL)isScreenSize:(CGSize)size;

@end
