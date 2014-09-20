/* Generated by RuntimeBrowser.
   Image: /usr/lib/libnfshared.dylib
 */

@class NSData, AWDNFCSEAIDSelectEvent, NSString;

@interface NFAWDSelect : NSObject <NFAWDEventProtocol> {
    NSData *aid;
    AWDNFCSEAIDSelectEvent *_metric;
}

@property(retain) NSData * aid;
@property AWDNFCSEAIDSelectEvent * metric;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (id)getMetric;
- (unsigned int)getMetricId;
- (unsigned long long)updateTransactionStateInfoPreviousState:(unsigned long long)arg1 withUUID:(id)arg2 withUUIDRefTimestamp:(unsigned long long)arg3;
- (id)aid;
- (void)setAid:(id)arg1;
- (id)metric;
- (void)setMetric:(id)arg1;
- (id)init;
- (void)dealloc;

@end
