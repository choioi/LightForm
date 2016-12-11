//
// Created by Farshid Ghods on 12/6/16.
// Copyright (c) 2016 Farshid Ghods. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface LightFormCellData : NSObject <NSCopying>

@property(nonatomic, retain) NSString *placeholder;
@property(nonatomic, retain) NSString *value;
@property(nonatomic, retain) NSArray *errors;
@property(nonatomic) BOOL hasNext;
@property(nonatomic) BOOL secureEntry;
@property(nonatomic, retain) NSString *accessoryImageUrl;

+ (LightFormCellData *)fromDictionary:(NSDictionary *)dictionary;

@end