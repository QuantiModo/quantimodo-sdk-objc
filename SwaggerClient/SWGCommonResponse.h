#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol SWGCommonResponse
@end

@interface SWGCommonResponse : SWGObject

/* Status code 
 */
@property(nonatomic) NSNumber* status;
/* Message [optional]
 */
@property(nonatomic) NSString* message;

@property(nonatomic) NSNumber* success;

@end
