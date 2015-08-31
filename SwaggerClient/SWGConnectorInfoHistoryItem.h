#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGConnectorInfoHistoryItem
@end

@interface SWGConnectorInfoHistoryItem : SWGObject

/* Number of measurements 
 */
@property(nonatomic) NSNumber* numberOfMeasurements;
/* True if the update was successfull 
 */
@property(nonatomic) NSNumber* success;
/* Error message. 
 */
@property(nonatomic) NSString* message;
/* Date and time of the update 
 */
@property(nonatomic) NSString* createdAt;

@end
