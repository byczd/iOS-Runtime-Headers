/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface AWDSharingProximityiOSSetupResult : PBCodable <NSCopying> {
    unsigned int  _durationMs;
    int  _errorCode;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int durationMs : 1; 
        unsigned int errorCode : 1; 
        unsigned int incorrectPINCount : 1; 
        unsigned int smoothedRSSI : 1; 
    }  _has;
    unsigned int  _incorrectPINCount;
    NSString * _sessionUUID;
    int  _smoothedRSSI;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int durationMs;
@property (nonatomic) int errorCode;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasErrorCode;
@property (nonatomic) bool hasIncorrectPINCount;
@property (nonatomic, readonly) bool hasSessionUUID;
@property (nonatomic) bool hasSmoothedRSSI;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) unsigned int incorrectPINCount;
@property (nonatomic, retain) NSString *sessionUUID;
@property (nonatomic) int smoothedRSSI;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationMs;
- (int)errorCode;
- (bool)hasDurationMs;
- (bool)hasErrorCode;
- (bool)hasIncorrectPINCount;
- (bool)hasSessionUUID;
- (bool)hasSmoothedRSSI;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (unsigned int)incorrectPINCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)sessionUUID;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setErrorCode:(int)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasErrorCode:(bool)arg1;
- (void)setHasIncorrectPINCount:(bool)arg1;
- (void)setHasSmoothedRSSI:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setIncorrectPINCount:(unsigned int)arg1;
- (void)setSessionUUID:(id)arg1;
- (void)setSmoothedRSSI:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (int)smoothedRSSI;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
