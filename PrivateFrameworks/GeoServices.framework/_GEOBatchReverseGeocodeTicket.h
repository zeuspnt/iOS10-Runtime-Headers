/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOBatchReverseGeocodeTicket : NSObject <GEOMapServiceTicket> {
    GEOBatchRevGeocodeRequest * _batchReverseGeocodeRequest;
    GEOMapRegion * _resultBoundingRegion;
    bool  _shiftLocationsIfNeeded;
    GEOMapServiceTraits * _traits;
}

@property (getter=isChainResultSet, nonatomic, readonly) bool chainResultSet;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) GEORelatedSearchSuggestion *defaultRelatedSuggestion;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *relatedSearchSuggestions;
@property (nonatomic, readonly) NSDictionary *responseUserInfo;
@property (nonatomic, readonly) GEOMapRegion *resultBoundingRegion;
@property (nonatomic, readonly) NSString *resultDisplayHeader;
@property (nonatomic, readonly) NSString *resultSectionHeader;
@property (nonatomic, readonly) int searchResultType;
@property (nonatomic, readonly) bool shouldEnableRedoSearch;
@property (readonly) Class superclass;
@property (nonatomic, readonly) GEOMapServiceTraits *traits;

- (void)_batchReverseGeocodeWithRequest:(id)arg1 handler:(id /* block */)arg2 networkActivity:(id /* block */)arg3;
- (void)applyToCorrectedSearch:(id)arg1;
- (void)applyToPlaceInfo:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (id)defaultRelatedSuggestion;
- (id)description;
- (id)initWithBatchReverseGeocodeRequest:(id)arg1 shiftLocationsIfNeeded:(bool)arg2 traits:(id)arg3;
- (bool)isChainResultSet;
- (bool)isEqualForHistoryToTicket:(id)arg1;
- (id)relatedSearchSuggestions;
- (id)responseUserInfo;
- (id)resultBoundingRegion;
- (id)resultDisplayHeader;
- (id)resultSectionHeader;
- (int)searchResultType;
- (bool)shouldEnableRedoSearch;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2;
- (void)submitWithRefinedHandler:(id /* block */)arg1 networkActivity:(id /* block */)arg2 queue:(id)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3;
- (void)submitWithRefinedHandler:(id /* block */)arg1 timeout:(long long)arg2 networkActivity:(id /* block */)arg3 queue:(id)arg4;
- (id)traits;

@end
