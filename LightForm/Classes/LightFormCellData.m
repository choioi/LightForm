//
// Created by Farshid Ghods on 12/6/16.
// Copyright (c) 2016 Farshid Ghods. All rights reserved.
//

#import "LightFormCellData.h"


@implementation LightFormCellData {


}

/**
 * deep copy
 * @param zone
 * @return
 */
- (id)copyWithZone:(NSZone *)zone {

    LightFormCellData *copy = [[LightFormCellData alloc] init];
    if (self.accessoryImageUrl) {
        copy.accessoryImageUrl = [NSString stringWithString:self.accessoryImageUrl];
    }
    if (self.placeholder) {
        copy.placeholder = [NSString stringWithString:self.placeholder];
    }
    if (self.value) {
        copy.value = [NSString stringWithString:self.value];
    }
    return copy;

}

/**
 * create LightFromCellData object from the given dictionary
 * dictionary keys accepted include :
 *  - accessoryImageUrl
 *  - placeholder
 *  - value
 * @param dictionary
 * @return
 */
+ (LightFormCellData *)fromDictionary:(NSDictionary *)dictionary {
    LightFormCellData *obj = [[LightFormCellData alloc] init];
    if (dictionary) {
        if (dictionary[@"accessoryImageUrl"]) {
            obj.accessoryImageUrl;
        }
        if (dictionary[@"placeholder"]) {
            obj.placeholder = dictionary[@"placeholder"];
        }
        if (dictionary[@"value"]) {
            obj.value = dictionary[@"value"];
        }
        if (dictionary[@"error"]) {
            obj.error = dictionary[@"error"];
        }
    }
    return obj;
}


@end