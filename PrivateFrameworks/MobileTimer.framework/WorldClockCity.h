/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@class ALCity, NSString, City, NSDictionary, NSNumber, NSURL;

@interface WorldClockCity : NSObject  {
    ALCity *_alCity;
    City *_weatherCity;
    NSString *_timeZone;
    NSString *_name;
    NSString *_countryName;
    NSString *_countryCode;
    NSString *_unlocalizedName;
    NSString *_unlocalizedCountryName;
}

@property(readonly) NSDictionary * properties;
@property(readonly) ALCity * alCity;
@property(readonly) NSNumber * alCityId;
@property(retain) City * weatherCity;
@property(readonly) NSString * timeZone;
@property(readonly) NSString * name;
@property(readonly) NSString * countryName;
@property(readonly) NSString * unlocalizedCityName;
@property(readonly) NSString * unlocalizedCountryName;
@property(readonly) NSString * countryCode;
@property(readonly) NSURL * idUrl;

+ (BOOL)isWorldClockCityProperties:(id)arg1;

- (id)name;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;
- (id)properties;
- (id)timeZone;
- (id)alCity;
- (void)setWeatherCity:(id)arg1;
- (id)weatherCity;
- (id)initWithTimeZone:(id)arg1 countryCode:(id)arg2 name:(id)arg3 countryName:(id)arg4 unlocalizedName:(id)arg5 unlocalizedCountryName:(id)arg6;
- (id)initWithALCityIdentifier:(int)arg1;
- (id)idUrl;
- (id)initWithALCity:(id)arg1;
- (id)countryName;
- (id)countryCode;
- (id)unlocalizedCountryName;
- (id)unlocalizedCityName;
- (id)alCityId;

@end
