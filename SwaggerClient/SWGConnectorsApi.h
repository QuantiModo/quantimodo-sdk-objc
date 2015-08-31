#import <Foundation/Foundation.h>
#import "SWGConnector.h"
#import "SWGConnectorInfo.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGConnectorsApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGConnectorsApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
///
///
/// List of Connectors
/// Returns a list of all available connectors. A connector pulls data from other data providers using their API or a screenscraper.
///
/// 
///
/// @return NSArray<SWGConnector>*
-(NSNumber*) v1ConnectorsListGetWithCompletionBlock :
    (void (^)(NSArray<SWGConnector>* output, NSError* error))completionBlock;
    


///
///
/// Obtain a token from 3rd party data source
/// Attempt to obtain a token from the data provider, store it in the database. With this, the connector to continue to obtain new user data until the token is revoked.
///
/// @param connector Lowercase system name of the source application or device. Get a list of available connectors from the /connectors/list endpoint.
/// 
///
/// @return 
-(NSNumber*) v1ConnectorsConnectorConnectGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


///
///
/// Delete stored connection info
/// The disconnect method deletes any stored tokens or connection information from the connectors database.
///
/// @param connector Lowercase system name of the source application or device. Get a list of available connectors from the /connectors/list endpoint.
/// 
///
/// @return 
-(NSNumber*) v1ConnectorsConnectorDisconnectGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;


///
///
/// Get connector info for user
/// Returns information about the connector such as the connector id, whether or not is connected for this user (i.e. we have a token or credentials), and its update history for the user.
///
/// @param connector Lowercase system name of the source application or device. Get a list of available connectors from the /connectors/list endpoint.
/// 
///
/// @return SWGConnectorInfo*
-(NSNumber*) v1ConnectorsConnectorInfoGetWithCompletionBlock :(NSString*) connector 
    
    completionHandler: (void (^)(SWGConnectorInfo* output, NSError* error))completionBlock;
    


///
///
/// Sync with data source
/// The update method tells the QM Connector Framework to check with the data provider (such as Fitbit or MyFitnessPal) and retrieve any new measurements available.
///
/// @param connector Lowercase system name of the source application or device
/// 
///
/// @return 
-(NSNumber*) v1ConnectorsConnectorUpdateGetWithCompletionBlock :(NSString*) connector 
    
    
    completionHandler: (void (^)(NSError* error))completionBlock;



@end
