//
//  TemplateColumnWriterServiceModel.m
//  FouleFactoryApi
//
//  This file was automatically generated by APIMATIC v2.0 ( https://apimatic.io ) on 09/14/2016
//
#import "TemplateColumnWriterServiceModel.h"

@implementation TemplateColumnWriterServiceModel

/**
* TODO: Write general description for this method
*/
@synthesize idTemplateColumnType;

/**
* TODO: Write general description for this method
*/
@synthesize column;

/**
* TODO: Write general description for this method
*/
@synthesize order;



/**
* Key mappings for the json serialization and deserialization
*/
+(NSDictionary*) keyMap
{
    NSMutableDictionary* map = [[NSMutableDictionary alloc] init];
    [map addEntriesFromDictionary: @{
        @"IdTemplateColumnType": @"idTemplateColumnType",
        @"Column": @"column",
        @"Order": @"order"  
    }];

    return map;
}

/**
* Key mapper for json serialization and deserialization
*/
+(JSONKeyMapper*) keyMapper
{ 
  return [[JSONKeyMapper alloc] initWithDictionary: [self keyMap]];
}

/**
* Helps avoiding deserialization errors when one or more properties are missing
* @returns	True, indicating that all properties are optional for deserialization
*/
+(BOOL)propertyIsOptional:(NSString*) propertyName
{
    return YES;
}

@end