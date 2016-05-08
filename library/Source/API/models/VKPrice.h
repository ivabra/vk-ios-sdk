//
//  VKPrice.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 08.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"

@class VKCurrency;

@interface VKPrice : VKApiObject
@property(nonatomic, strong) NSNumber* amount;
@property(nonatomic, strong) NSString* text;
@property(nonatomic, strong) VKCurrency* currency;
@end
