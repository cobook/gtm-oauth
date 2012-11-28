@protocol GTMOAuthCallbackDecider <NSObject>
- (BOOL)shouldContinueAuthAfterReceivingResponse:(NSString*)response;
@end
