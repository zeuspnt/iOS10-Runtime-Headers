/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AXHearingAidSupport.framework/AXHearingAidSupport
 */

@interface AXHAXPCClient : NSObject {
    unsigned long long _requestedUpdates;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property (nonatomic) unsigned long long requestedUpdates;
@property (nonatomic, retain) NSObject<OS_xpc_object> *xpcConnection;

+ (id)clientWithConnection:(id)arg1;

- (void)dealloc;
- (id)description;
- (id)initWithConnection:(id)arg1;
- (unsigned long long)requestedUpdates;
- (void)sendMessage:(id)arg1 withError:(id*)arg2;
- (void)setRequestedUpdates:(unsigned long long)arg1;
- (void)setWantsUpdates:(BOOL)arg1 forIdentifier:(unsigned long long)arg2;
- (void)setXpcConnection:(id)arg1;
- (void)teardownConnection;
- (BOOL)wantsUpdatesForIdentifier:(unsigned long long)arg1;
- (id)xpcConnection;

@end