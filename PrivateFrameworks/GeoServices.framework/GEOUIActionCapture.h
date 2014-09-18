/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUIActionCapture : PBCodable <NSCopying> {
    struct { 
        unsigned int duration : 1; 
        unsigned int actionType : 1; 
        unsigned int sequenceNumber : 1; 
    int _actionType;
    double _duration;
    } _has;
    int _sequenceNumber;
}

@property int actionType;
@property double duration;
@property bool hasActionType;
@property bool hasDuration;
@property bool hasSequenceNumber;
@property int sequenceNumber;

- (int)actionType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (bool)hasActionType;
- (bool)hasDuration;
- (bool)hasSequenceNumber;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)sequenceNumber;
- (void)setActionType:(int)arg1;
- (void)setDuration:(double)arg1;
- (void)setHasActionType:(bool)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasSequenceNumber:(bool)arg1;
- (void)setSequenceNumber:(int)arg1;
- (void)writeTo:(id)arg1;

@end