#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGMeasurementExport
@end

@interface SWGMeasurementExport : SWGObject

/* id [optional]
 */
@property(nonatomic) NSNumber* _id;
/* ID of User [optional]
 */
@property(nonatomic) NSNumber* userId;
/* Status of Measurement Export [optional]
 */
@property(nonatomic) NSString* status;
/* Error message [optional]
 */
@property(nonatomic) NSString* errorMessage;
/* created_at [optional]
 */
@property(nonatomic) NSDate* createdAt;
/* updated_at [optional]
 */
@property(nonatomic) NSDate* updatedAt;

@end
