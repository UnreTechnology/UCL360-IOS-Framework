//
//  UnreMeasureentRule.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/4.
//

#ifndef UnreMeasureentRule_h
#define UnreMeasureentRule_h

NS_ASSUME_NONNULL_BEGIN

@interface UnreMeasurementRule: NSObject

@property(nonatomic,copy) NSString* ruleId;
@property(nonatomic,copy) NSString* ruleName;
@property(nonatomic,copy) NSString* drawType;
@property(nonatomic,copy) NSString* stageMapping;

@end

NS_ASSUME_NONNULL_END

#endif /* UnreMeasureentRule_h */
