//
//  Header.h
//  Ucl360Sdk
//
//  Created by unre on 2021/6/10.
//

#ifndef MeasureData_h
#define MeasureData_h

NS_ASSUME_NONNULL_BEGIN


@interface MeasureValue : NSObject

@property NSArray<NSString*>* value;
@property NSString* result;
@property NSString* ruleNo;
@property NSString* designValues;
@property NSArray<NSArray<NSNumber*>*>* coordinate;
@property NSArray<NSNumber*>* cadCoordinate;
@property NSArray<NSArray<NSNumber*>*>* rules;
@property NSArray<NSNumber*>* contourCoordinate;
@property NSString* id;

@end

@interface Measurement : NSObject

@property NSString* id;
@property NSArray<MeasureValue*>* points;

@end

@interface MeasureObject : NSObject

@property NSString* id;
@property NSArray<Measurement*>* measurements;
@property NSString* walls;

@end


@interface MeasureData: NSObject

@property MeasureObject* room;
@property NSArray<MeasureObject*>* ceiling;
@property MeasureObject* floor;
@property NSArray<MeasureObject*>* walls;
@property NSArray<MeasureObject*>* multiwalls;
@property NSArray<MeasureObject*>* openings;

@end


NS_ASSUME_NONNULL_END

#endif /* MeasureData_h */
