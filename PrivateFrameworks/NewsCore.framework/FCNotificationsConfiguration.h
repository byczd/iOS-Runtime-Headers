/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCNotificationsConfiguration : NSObject {
    NSArray * _preSubscribedNotificationsChannelIDs;
    NSArray * _recommendedNotificationChannels;
}

@property (nonatomic, readonly) NSArray *preSubscribedNotificationsChannelIDs;
@property (nonatomic, readonly) NSArray *recommendedNotificationChannelIDs;
@property (nonatomic, readonly) NSArray *recommendedNotificationChannels;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithPresubscribedChannels:(id)arg1 recommendedPBNotificationChannels:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)preSubscribedNotificationsChannelIDs;
- (id)recommendedNotificationChannelIDs;
- (id)recommendedNotificationChannels;

@end
