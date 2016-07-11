/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
 */

@interface WFLocationQueryGeocode : NSObject <WFLocationQuery> {
    bool  _finished;
    WFResponse * _response;
    id /* block */  _resultHandler;
    MKLocalSearchCompletion * _searchCompletion;
    NSString * _searchString;
    struct CLLocationCoordinate2D { 
        double latitude; 
        double longitude; 
    }  _unshiftedCoordinate;
    WFTaskIdentifier * identifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) WFTaskIdentifier *identifier;
@property (retain) WFResponse *response;
@property (copy) id /* block */ resultHandler;
@property (readonly) MKLocalSearchCompletion *searchCompletion;
@property (readonly) NSString *searchString;
@property (readonly) Class superclass;
@property (nonatomic) struct CLLocationCoordinate2D { double x1; double x2; } unshiftedCoordinate;

+ (id)geoCodeCache;
+ (id)queryWithCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithDictionaryRepresentation:(id)arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithSearchCompletion:(id)arg1 resultHandler:(id /* block */)arg2;
+ (id)queryWithSearchString:(id)arg1 resultHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_handleErrorResponse:(id)arg1;
- (void)handleSearchResponse:(id)arg1 error:(id)arg2;
- (id)identifier;
- (id)initWithSearchCompletion:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)initWithSearchString:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)response;
- (id /* block */)resultHandler;
- (id)searchCompletion;
- (id)searchRequest;
- (id)searchString;
- (void)setIdentifier:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;
- (void)setUnshiftedCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)start;
- (struct CLLocationCoordinate2D { double x1; double x2; })unshiftedCoordinate;

@end