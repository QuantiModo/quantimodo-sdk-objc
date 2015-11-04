#import <Foundation/Foundation.h>
#import "SWGInlineResponse2009.h"
#import "SWGInlineResponse20010.h"
#import "SWGCredential.h"
#import "SWGInlineResponse2002.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGCredentialApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGCredentialApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGCredentialApi*) sharedAPI;
///
///
/// Get all Credentials
/// Get all Credentials
///
/// @param connectorId connector_id
/// @param attrKey attr_key
/// @param attrValue attr_value
/// @param createdAt created_at
/// @param updatedAt updated_at
/// @param limit limit
/// @param offset offset
/// @param sort sort
/// 
///
/// @return SWGInlineResponse2009*
-(NSNumber*) credentialsGetWithCompletionBlock :(NSNumber*) connectorId 
     attrKey:(NSString*) attrKey 
     attrValue:(NSString*) attrValue 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse2009* output, NSError* error))completionBlock;
    


///
///
/// Store Credential
/// Store Credential
///
/// @param body Credential that should be stored
/// 
///
/// @return SWGInlineResponse20010*
-(NSNumber*) credentialsPostWithCompletionBlock :(SWGCredential*) body 
    
    completionHandler: (void (^)(SWGInlineResponse20010* output, NSError* error))completionBlock;
    


///
///
/// Get Credential
/// Get Credential
///
/// @param _id connector id
/// @param attrKey attrKey
/// 
///
/// @return SWGInlineResponse20010*
-(NSNumber*) credentialsIdGetWithCompletionBlock :(NSNumber*) _id 
     attrKey:(NSString*) attrKey 
    
    completionHandler: (void (^)(SWGInlineResponse20010* output, NSError* error))completionBlock;
    


///
///
/// Update Credential
/// Update Credential
///
/// @param _id connector id
/// @param attrKey attrKey
/// @param body Credential that should be updated
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) credentialsIdPutWithCompletionBlock :(NSNumber*) _id 
     attrKey:(NSString*) attrKey 
     body:(SWGCredential*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    


///
///
/// Delete Credential
/// Delete Credential
///
/// @param _id connector id
/// @param attrKey attrKey
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) credentialsIdDeleteWithCompletionBlock :(NSNumber*) _id 
     attrKey:(NSString*) attrKey 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    



@end