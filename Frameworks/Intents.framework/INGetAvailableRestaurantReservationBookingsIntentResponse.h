/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INGetAvailableRestaurantReservationBookingsIntentResponse : INIntentResponse <INGetAvailableRestaurantReservationBookingsIntentResponseExport> {
    NSArray * _availableBookings;
    NSString * _localizedBookingAdvisementText;
    NSString * _localizedRestaurantDescriptionText;
    INTermsAndConditions * _termsAndConditions;
}

@property (nonatomic, readonly) NSArray *availableBookings;
@property (nonatomic, readonly) int code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *localizedBookingAdvisementText;
@property (nonatomic, copy) NSString *localizedRestaurantDescriptionText;
@property (readonly) Class superclass;
@property (nonatomic, copy) INTermsAndConditions *termsAndConditions;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)availableBookings;
- (int)code;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAvailableBookings:(id)arg1 code:(int)arg2 userActivity:(id)arg3;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithCode:(int)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localizedBookingAdvisementText;
- (id)localizedRestaurantDescriptionText;
- (void)setLocalizedBookingAdvisementText:(id)arg1;
- (void)setLocalizedRestaurantDescriptionText:(id)arg1;
- (void)setTermsAndConditions:(id)arg1;
- (id)termsAndConditions;

@end