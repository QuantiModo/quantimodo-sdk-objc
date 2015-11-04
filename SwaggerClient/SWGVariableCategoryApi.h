#import <Foundation/Foundation.h>
#import "SWGInlineResponse20023.h"
#import "SWGInlineResponse20024.h"
#import "SWGVariableCategory.h"
#import "SWGInlineResponse2002.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGVariableCategoryApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGVariableCategoryApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGVariableCategoryApi*) sharedAPI;
///
///
/// Get all VariableCategories
/// Get all VariableCategories
///
/// @param name name
/// @param fillingValue filling_value
/// @param maximumAllowedValue maximum_allowed_value
/// @param minimumAllowedValue minimum_allowed_value
/// @param durationOfAction duration_of_action
/// @param onsetDelay onset_delay
/// @param combinationOperation combination_operation
/// @param updated updated
/// @param causeOnly cause_only
/// @param public public
/// @param outcome outcome
/// @param createdAt created_at
/// @param updatedAt updated_at
/// @param imageUrl image_url
/// @param defaultUnitId default_unit_id
/// @param limit limit
/// @param offset offset
/// @param sort sort
/// 
///
/// @return SWGInlineResponse20023*
-(NSNumber*) variableCategoriesGetWithCompletionBlock :(NSString*) name 
     fillingValue:(NSNumber*) fillingValue 
     maximumAllowedValue:(NSNumber*) maximumAllowedValue 
     minimumAllowedValue:(NSNumber*) minimumAllowedValue 
     durationOfAction:(NSNumber*) durationOfAction 
     onsetDelay:(NSNumber*) onsetDelay 
     combinationOperation:(NSString*) combinationOperation 
     updated:(NSNumber*) updated 
     causeOnly:(NSNumber*) causeOnly 
     public:(NSNumber*) public 
     outcome:(NSNumber*) outcome 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     imageUrl:(NSString*) imageUrl 
     defaultUnitId:(NSNumber*) defaultUnitId 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse20023* output, NSError* error))completionBlock;
    


///
///
/// Store VariableCategory
/// Store VariableCategory
///
/// @param body VariableCategory that should be stored
/// 
///
/// @return SWGInlineResponse20024*
-(NSNumber*) variableCategoriesPostWithCompletionBlock :(SWGVariableCategory*) body 
    
    completionHandler: (void (^)(SWGInlineResponse20024* output, NSError* error))completionBlock;
    


///
///
/// Get VariableCategory
/// Get VariableCategory
///
/// @param _id id of VariableCategory
/// 
///
/// @return SWGInlineResponse20024*
-(NSNumber*) variableCategoriesIdGetWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse20024* output, NSError* error))completionBlock;
    


///
///
/// Update VariableCategory
/// Update VariableCategory
///
/// @param _id id of VariableCategory
/// @param body VariableCategory that should be updated
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) variableCategoriesIdPutWithCompletionBlock :(NSNumber*) _id 
     body:(SWGVariableCategory*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    


///
///
/// Delete VariableCategory
/// Delete VariableCategory
///
/// @param _id id of VariableCategory
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) variableCategoriesIdDeleteWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    



@end
