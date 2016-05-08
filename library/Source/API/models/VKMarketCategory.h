//
//  VKMarketCategory.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 08.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"
@class VKMarketSection;

@interface VKMarketCategory : VKApiObject

@property(nonatomic, strong) NSNumber* id;
@property(nonatomic, strong) NSString* name;
@property(nonatomic, strong) VKMarketSection* section;

@end
