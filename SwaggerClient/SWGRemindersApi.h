#import <Foundation/Foundation.h>
#import "SWGInlineResponse200.h"
#import "SWGInlineResponse2001.h"
#import "SWGTrackingReminder.h"
#import "SWGTrackingReminderDelete.h"
#import "SWGCommonResponse.h"
#import "SWGInlineResponse2002.h"
#import "SWGTrackingReminderPendingSkip.h"
#import "SWGTrackingReminderPendingSnooze.h"
#import "SWGTrackingReminderPendingTrack.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGRemindersApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGRemindersApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGRemindersApi*) sharedAPI;
///
///
/// Get repeating tracking reminder settings
/// Users can be reminded to track certain variables at a specified frequency with a default value.
///
/// @param accessToken User&#39;s OAuth2 access token
/// @param createdAt When the record was first created. Use ISO 8601 datetime format. Time zone should be UTC and not local.
/// @param updatedAt When the record was last updated. Use ISO 8601 datetime format. Time zone should be UTC and not local.
/// @param limit The LIMIT is used to limit the number of results returned. So if you have 1000 results, but only want to the first 10, you would set this to 10 and offset to 0. The maximum limit is 200 records.
/// @param offset OFFSET says to skip that many rows before beginning to return rows to the client. OFFSET 0 is the same as omitting the OFFSET clause. If both OFFSET and LIMIT appear, then OFFSET rows are skipped before starting to count the LIMIT rows that are returned.
/// @param sort Sort by given field. If the field is prefixed with &#39;-&#39;, it will sort in descending order.
/// 
///
/// @return SWGInlineResponse200*
-(NSNumber*) v1TrackingRemindersGetWithCompletionBlock :(NSString*) accessToken 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse200* output, NSError* error))completionBlock;
    


///
///
/// Store a Tracking Reminder
/// This is to enable users to create reminders to track a variable with a default value at a specified frequency
///
/// @param accessToken User&#39;s OAuth2 access token
/// @param body TrackingReminder that should be stored
/// 
///
/// @return SWGInlineResponse2001*
-(NSNumber*) v1TrackingRemindersPostWithCompletionBlock :(NSString*) accessToken 
     body:(SWGTrackingReminder*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2001* output, NSError* error))completionBlock;
    


///
///
/// Delete tracking reminder
/// Delete previously created tracking reminder
///
/// @param body Id of reminder to be deleted
/// @param accessToken User&#39;s OAuth2 access token
/// 
///
/// @return SWGCommonResponse*
-(NSNumber*) v1TrackingRemindersDeletePostWithCompletionBlock :(SWGTrackingReminderDelete*) body 
     accessToken:(NSString*) accessToken 
    
    completionHandler: (void (^)(SWGCommonResponse* output, NSError* error))completionBlock;
    


///
///
/// Get specific pending tracking reminders
/// Specfic pending reminder instances that still need to be tracked.
///
/// @param accessToken User&#39;s OAuth2 access token
/// @param createdAt When the record was first created. Use ISO 8601 datetime format. Time zone should be UTC and not local.
/// @param updatedAt When the record was last updated. Use ISO 8601 datetime format. Time zone should be UTC and not local.
/// @param limit The LIMIT is used to limit the number of results returned. So if you have 1000 results, but only want to the first 10, you would set this to 10 and offset to 0. The maximum limit is 200 records.
/// @param offset OFFSET says to skip that many rows before beginning to return rows to the client. OFFSET 0 is the same as omitting the OFFSET clause. If both OFFSET and LIMIT appear, then OFFSET rows are skipped before starting to count the LIMIT rows that are returned.
/// @param sort Sort by given field. If the field is prefixed with &#39;-&#39;, it will sort in descending order.
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) v1TrackingRemindersPendingGetWithCompletionBlock :(NSString*) accessToken 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    


///
///
/// Skip a pending tracking reminder
/// Deletes the pending tracking reminder
///
/// @param body Id of the pending reminder to be skipped or deleted
/// @param accessToken User&#39;s OAuth2 access token
/// 
///
/// @return SWGCommonResponse*
-(NSNumber*) v1TrackingRemindersPendingSkipPostWithCompletionBlock :(SWGTrackingReminderPendingSkip*) body 
     accessToken:(NSString*) accessToken 
    
    completionHandler: (void (^)(SWGCommonResponse* output, NSError* error))completionBlock;
    


///
///
/// Snooze a pending tracking reminder
/// Changes the reminder time to now plus one hour
///
/// @param body Id of the pending reminder to be snoozed
/// @param accessToken User&#39;s OAuth2 access token
/// 
///
/// @return SWGCommonResponse*
-(NSNumber*) v1TrackingRemindersPendingSnoozePostWithCompletionBlock :(SWGTrackingReminderPendingSnooze*) body 
     accessToken:(NSString*) accessToken 
    
    completionHandler: (void (^)(SWGCommonResponse* output, NSError* error))completionBlock;
    


///
///
/// Track a pending tracking reminder
/// Adds the default measurement for the pending tracking reminder with the reminder time as the measurment start time
///
/// @param body Id of the pending reminder to be tracked
/// @param accessToken User&#39;s OAuth2 access token
/// 
///
/// @return SWGCommonResponse*
-(NSNumber*) v1TrackingRemindersPendingTrackPostWithCompletionBlock :(SWGTrackingReminderPendingTrack*) body 
     accessToken:(NSString*) accessToken 
    
    completionHandler: (void (^)(SWGCommonResponse* output, NSError* error))completionBlock;
    



@end
