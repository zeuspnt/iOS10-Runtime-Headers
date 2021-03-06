/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSCachingFetchRequest : NSFetchRequest {
    struct __CFDictionary { } * _cachedInfo;
    bool  _hasCachedInfo;
    id  _identifier;
    int  _lock;
    NSDictionary * _substitutionVariables;
}

@property (nonatomic, readonly) id _identifier;
@property (nonatomic, copy) NSDictionary *substitutionVariables;

+ (id)_generateIdentifier;

- (void)_cacheInfo:(id)arg1 forRequestor:(id)arg2;
- (id)_cachedInfoForRequestor:(id)arg1;
- (id)_copyForDirtyContext;
- (id)_identifier;
- (bool)_isCachingFetchRequest__;
- (void)_sanityCheckVariables:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (void)setSubstitutionVariables:(id)arg1;
- (id)substitutionVariables;

@end
