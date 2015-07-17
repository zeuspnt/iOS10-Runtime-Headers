/* Generated by RuntimeBrowser.
 */

@protocol TSPObjectDelegate <TSPObjectModifyDelegate>

@required

- (BOOL)canSetObjectUUIDForObject:(TSPObject *)arg1;
- (TSPObjectContext *)context;
- (BOOL)isObjectInDocument:(TSPObject *)arg1;
- (long long)modifyObjectTokenForNewObject;
- (long long)newObjectIdentifier;
- (NSUUID *)newObjectUUIDForObject:(TSPObject *)arg1;
- (TSPObjectUUIDMap *)objectUUIDMap;

@end