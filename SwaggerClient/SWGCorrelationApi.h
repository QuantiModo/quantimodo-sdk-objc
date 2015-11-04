#import <Foundation/Foundation.h>
#import "SWGInlineResponse2007.h"
#import "SWGInlineResponse2008.h"
#import "SWGCorrelation.h"
#import "SWGInlineResponse2002.h"
#import "SWGObject.h"
#import "SWGApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface SWGCorrelationApi: NSObject

@property(nonatomic, assign)SWGApiClient *apiClient;

-(instancetype) initWithApiClient:(SWGApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(SWGCorrelationApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(SWGCorrelationApi*) sharedAPI;
///
///
/// Get all Correlations
/// Get all Correlations
///
/// @param timestamp timestamp
/// @param userId user_id
/// @param correlation correlation
/// @param causeId cause_id
/// @param effectId effect_id
/// @param onsetDelay onset_delay
/// @param durationOfAction duration_of_action
/// @param numberOfPairs number_of_pairs
/// @param valuePredictingHighOutcome value_predicting_high_outcome
/// @param valuePredictingLowOutcome value_predicting_low_outcome
/// @param optimalPearsonProduct optimal_pearson_product
/// @param vote vote
/// @param statisticalSignificance statistical_significance
/// @param causeUnit cause_unit
/// @param causeUnitId cause_unit_id
/// @param causeChanges cause_changes
/// @param effectChanges effect_changes
/// @param qmScore qm_score
/// @param error error
/// @param createdAt created_at
/// @param updatedAt updated_at
/// @param reversePearsonCorrelationCoefficient reverse_pearson_correlation_coefficient
/// @param predictivePearsonCorrelationCoefficient predictive_pearson_correlation_coefficient
/// @param limit limit
/// @param offset offset
/// @param sort sort
/// 
///
/// @return SWGInlineResponse2007*
-(NSNumber*) correlationsGetWithCompletionBlock :(NSNumber*) timestamp 
     userId:(NSNumber*) userId 
     correlation:(NSNumber*) correlation 
     causeId:(NSNumber*) causeId 
     effectId:(NSNumber*) effectId 
     onsetDelay:(NSNumber*) onsetDelay 
     durationOfAction:(NSNumber*) durationOfAction 
     numberOfPairs:(NSNumber*) numberOfPairs 
     valuePredictingHighOutcome:(NSNumber*) valuePredictingHighOutcome 
     valuePredictingLowOutcome:(NSNumber*) valuePredictingLowOutcome 
     optimalPearsonProduct:(NSNumber*) optimalPearsonProduct 
     vote:(NSNumber*) vote 
     statisticalSignificance:(NSNumber*) statisticalSignificance 
     causeUnit:(NSString*) causeUnit 
     causeUnitId:(NSNumber*) causeUnitId 
     causeChanges:(NSNumber*) causeChanges 
     effectChanges:(NSNumber*) effectChanges 
     qmScore:(NSNumber*) qmScore 
     error:(NSString*) error 
     createdAt:(NSString*) createdAt 
     updatedAt:(NSString*) updatedAt 
     reversePearsonCorrelationCoefficient:(NSNumber*) reversePearsonCorrelationCoefficient 
     predictivePearsonCorrelationCoefficient:(NSNumber*) predictivePearsonCorrelationCoefficient 
     limit:(NSNumber*) limit 
     offset:(NSNumber*) offset 
     sort:(NSString*) sort 
    
    completionHandler: (void (^)(SWGInlineResponse2007* output, NSError* error))completionBlock;
    


///
///
/// Store Correlation
/// Store Correlation
///
/// @param body Correlation that should be stored
/// 
///
/// @return SWGInlineResponse2008*
-(NSNumber*) correlationsPostWithCompletionBlock :(SWGCorrelation*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error))completionBlock;
    


///
///
/// Get Correlation
/// Get Correlation
///
/// @param _id id of Correlation
/// 
///
/// @return SWGInlineResponse2008*
-(NSNumber*) correlationsIdGetWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse2008* output, NSError* error))completionBlock;
    


///
///
/// Update Correlation
/// Update Correlation
///
/// @param _id id of Correlation
/// @param body Correlation that should be updated
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) correlationsIdPutWithCompletionBlock :(NSNumber*) _id 
     body:(SWGCorrelation*) body 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    


///
///
/// Delete Correlation
/// Delete Correlation
///
/// @param _id id of Correlation
/// 
///
/// @return SWGInlineResponse2002*
-(NSNumber*) correlationsIdDeleteWithCompletionBlock :(NSNumber*) _id 
    
    completionHandler: (void (^)(SWGInlineResponse2002* output, NSError* error))completionBlock;
    



@end