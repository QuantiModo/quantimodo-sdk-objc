#import <Foundation/Foundation.h>
#import "SWGUserTokenFailedResponse.h"
#import "SWGUserTokenSuccessfulResponse.h"
#import "SWGUserTokenRequest.h"
#import "SWGUser.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGUserApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGUserApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGUserApi*) sharedAPI;
///
///
/// Get user tokens for existing users, create new users
/// Get user tokens for existing users, create new users
///
/// @param organizationId Organization ID
/// @param body Provides organization token and user ID
/// @param accessToken User&#39;s OAuth2 access token
/// 
///
/// @return SWGUserTokenSuccessfulResponse*
-(NSNumber*) v1OrganizationsOrganizationIdUsersPostWithCompletionBlock :(NSNumber*) organizationId 
     body:(SWGUserTokenRequest*) body 
     accessToken:(NSString*) accessToken 
    
    completionHandler: (void (^)(SWGUserTokenSuccessfulResponse* output, NSError* error))completionBlock;
    


///
///
/// Get all available units for variableGet authenticated user
/// Returns user info for the currently authenticated user.
///
/// 
///
/// @return SWGUser*
-(NSNumber*) v1UserMeGetWithCompletionBlock :
    (void (^)(SWGUser* output, NSError* error))completionBlock;
    



@end
