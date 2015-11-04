#import <Foundation/Foundation.h>
#import "SWGInlineResponse2003.h"
#import "SWGInlineResponse2004.h"
#import "SWGConnection.h"
#import "SWGInlineResponse2002.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGConnectionApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGConnectionApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGConnectionApi*) sharedAPI;
///
///
/// Get all Connections
/// Get all Connections
///
/// @param userId user_id
/// @param connectorId connector_id
/// @param connectStatus connect_status
/// @param connectError connect_error
/// @param updateRequestedAt update_requested_at
/// @param updateStatus update_status
/// @param updateError update_error
/// @param lastSuccessfulUpdatedAt last_successful_updated_at
/// @param createdAt created_at
/// @param updatedAt updated_at
/// @param limit limit
/// @param offset offset
/// @param sort sort
/// 
///
/// @return SWGInlineResponse2003*
-(NSNumber*) connectionsGetWithCompletionBlock :(NSNumber*) userId 
     connectorId:(NSNumber*) connectorId 
     connectStatus:(NSString*) connectStatus 
     connectError:(NSString*) connectError 
     updateRequestedAt:(NSString*) updateRequestedAt 
     updateStatus:(NSString*) updateStatus 
     updateError:(NSString*) updateError 
     lastSuccessfulUpdatedAt:(NSString*) lastSuccessfulUpdatedAt 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse2003* output, NSError* error))completionBlock;
    


///
///
/// Store Connection
/// Store Connection
///
/// @param body Connection that should be stored
/// 
///
/// @return SWGInlineResponse2004*
-(NSNumber*) connectionsPostWithCompletionBlock :(SWGConnection*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2004* output, NSError* error))completionBlock;
    


///
///
/// Get Connection
/// Get Connection
///
/// @param _id id of Connection
/// 
///
/// @return SWGInlineResponse2004*
-(NSNumber*) connectionsIdGetWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse2004* output, NSError* error))completionBlock;
    


///
///
/// Update Connection
/// Update Connection
///
/// @param _id id of Connection
/// @param body Connection that should be updated
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) connectionsIdPutWithCompletionBlock :(NSNumber*) _id 
     body:(SWGConnection*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    


///
///
/// Delete Connection
/// Delete Connection
///
/// @param _id id of Connection
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) connectionsIdDeleteWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    



@end