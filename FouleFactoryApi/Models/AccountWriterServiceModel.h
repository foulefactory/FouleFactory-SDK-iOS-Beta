//
//  AccountWriterServiceModel.h
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/16/2016
//
#ifndef APIMATIC_ACCOUNTWRITERSERVICEMODEL
#define APIMATIC_ACCOUNTWRITERSERVICEMODEL

#import <Foundation/Foundation.h>
#import "JSONModel.h"
#import "APIHelper.h"



//protocol defined for deserialization of JSON
@protocol AccountWriterServiceModel
@end

@interface AccountWriterServiceModel : JSONModel

/**
* TODO: Write general description for this field
*/
@property int idGender;

/**
* TODO: Write general description for this field
*/
@property NSString* firstName;

/**
* TODO: Write general description for this field
*/
@property NSString* name;

/**
* TODO: Write general description for this field
*/
@property NSString* email;

/**
* TODO: Write general description for this field
*/
@property NSString* phone;

/**
* TODO: Write general description for this field
*/
@property NSDate* birthday;

/**
* TODO: Write general description for this field
*/
@property NSString* address1;

/**
* TODO: Write general description for this field
*/
@property NSString* city;

/**
* TODO: Write general description for this field
*/
@property NSString* postalCode;

/**
* TODO: Write general description for this field
*/
@property NSString* countryCode;

/**
* TODO: Write general description for this field
*/
@property NSString* nationality;

/**
* TODO: Write general description for this field
*/
@property BOOL optin;

/**
* TODO: Write general description for this field
*/
@property NSString* company;

/**
* TODO: Write general description for this field
*/
@property NSString* address2;

/**
* TODO: Write general description for this field
*/
@property NSString* billAddress1;

/**
* TODO: Write general description for this field
*/
@property NSString* billAddress2;

/**
* TODO: Write general description for this field
*/
@property NSString* billCity;

/**
* TODO: Write general description for this field
*/
@property NSString* billPostalCode;


/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap;

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper;

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName;

@end
#endif