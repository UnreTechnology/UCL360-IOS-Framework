//
//  UnnreMeasurementRegion.h
//  unrelib
//
//  Created by unre on 2021/6/1.
//

#ifndef UnreMeasurementRegion_h
#define UnreMeasurementRegion_h

NS_ASSUME_NONNULL_BEGIN

@interface UnreMeasurementRegion : NSObject

@property(nonatomic,copy) NSString* unreId;
@property(nonatomic,copy) NSString* pointId;
@property(nonatomic,copy) NSString* projectId;
@property(nonatomic,copy) NSString* buildingId;
@property(nonatomic,copy) NSString* suiteId;
@property(nonatomic,copy) NSString* floorId;
@property(nonatomic,copy) NSString* stageId;
//@property(nonatomic) NSArray* taskCoordinate ;
@property(nonatomic,copy) NSString* opRole;
@property(nonatomic,copy) NSString* details;

@end

NS_ASSUME_NONNULL_END

#endif /* UnreMeasurementRegion_h */
