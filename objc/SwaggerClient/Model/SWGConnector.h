#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* QuantiModo
* QuantiModo makes it easy to retrieve normalized user data from a wide array of devices and applications. [Learn about QuantiModo](https://quantimo.do), check out our [docs](https://github.com/QuantiModo/docs) or contact us at [help.quantimo.do](https://help.quantimo.do). 
*
* OpenAPI spec version: 2.0
* 
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
* http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/



@protocol SWGConnector
@end

@interface SWGConnector : SWGObject

/* Connector ID number 
 */
@property(nonatomic) NSNumber* _id;
/* Connector lowercase system name 
 */
@property(nonatomic) NSString* name;
/* Connector pretty display name 
 */
@property(nonatomic) NSString* displayName;
/* URL to the image of the connector logo 
 */
@property(nonatomic) NSString* image;
/* URL to a site where one can get this device or application 
 */
@property(nonatomic) NSString* getItUrl;
/* True if the authenticated user has this connector enabled 
 */
@property(nonatomic) NSString* connected;
/* URL and parameters used when connecting to a service 
 */
@property(nonatomic) NSString* connectInstructions;
/* Epoch timestamp of last sync 
 */
@property(nonatomic) NSNumber* lastUpdate;
/* Number of measurements obtained during latest update 
 */
@property(nonatomic) NSNumber* totalMeasurementsInLastUpdate;

@end