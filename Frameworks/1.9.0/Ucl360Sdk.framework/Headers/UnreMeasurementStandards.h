//
//  UnreMeasurementStandards.h
//  unrelib
//
//  Created by unre on 2021/6/1.
//

#ifndef UnreMeasurementStandards_h
#define UnreMeasurementStandards_h

NS_ASSUME_NONNULL_BEGIN

@interface Design : NSObject

@property(nonatomic,copy) NSString* standard_value;
@property(nonatomic,copy) NSString* standard_value2;
@property(nonatomic,copy) NSString* measurement_item_name;
@property(nonatomic,copy) NSString* measurement_item_id;

@end

@interface Standard : NSObject

@property(nonatomic,copy) NSString* min_value;
@property(nonatomic,copy) NSString* max_value;
@property(nonatomic,copy) NSString* conditions;
@property(nonatomic,copy) NSString* measurement_item_name;
@property(nonatomic,copy) NSString* quality_algotithm;
@property(nonatomic,copy) NSString* measurement_item_id;
@property(nonatomic,copy) NSString* unit;

@end

@interface UnreMeasurementStandards: NSObject

@property(nonatomic) NSArray<Standard*> * standards;
@property(nonatomic) NSArray<Design*>* designs;

@end

NS_ASSUME_NONNULL_END
#endif /* UnreMeasurementStandards_h */
