#import "CDRExampleReporter.h"

@class CDRExample;

@interface CDRDefaultReporter : NSObject <CDRExampleReporter> {
    NSArray *rootGroups_;

    NSMutableArray *pendingMessages_;
    NSMutableArray *failureMessages_;

    NSDate *startTime_;
    unsigned int exampleCount_;
}
@end

@interface CDRDefaultReporter (Protected)
- (NSString *)successToken;
- (NSString *)pendingToken;
- (NSString *)pendingMessageForExample:(CDRExample *)example;
- (NSString *)failureToken;
- (NSString *)failureMessageForExample:(CDRExample *)example;
- (NSString *)errorToken;
- (NSString *)errorMessageForExample:(CDRExample *)example;
@end
