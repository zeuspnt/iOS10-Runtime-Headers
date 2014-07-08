/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSString;

@interface MIPArtist : PBCodable <NSCopying> {
    long long _storeId;
    NSString *_artworkId;
    NSString *_name;
    NSString *_sortName;
    struct { 
        unsigned int storeId : 1; 
    } _has;
}

@property bool hasStoreId;
@property long long storeId;
@property(readonly) bool hasName;
@property(retain) NSString * name;
@property(readonly) bool hasSortName;
@property(retain) NSString * sortName;
@property(readonly) bool hasArtworkId;
@property(retain) NSString * artworkId;


- (bool)hasName;
- (void)copyTo:(id)arg1;
- (id)artworkId;
- (bool)hasArtworkId;
- (void)setArtworkId:(id)arg1;
- (id)sortName;
- (bool)hasSortName;
- (void)setSortName:(id)arg1;
- (void)setHasStoreId:(bool)arg1;
- (void)setStoreId:(long long)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;
- (long long)storeId;
- (bool)hasStoreId;
- (void)setName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;

@end