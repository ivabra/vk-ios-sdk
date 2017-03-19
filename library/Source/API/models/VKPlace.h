//
//  VKPlace.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 09.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"

@interface VKPlace : VKApiObject

@property(nonatomic, strong) NSNumber *id;
@property(nonatomic, copy) NSString* title; 
@property(nonatomic, strong) NSNumber* latitude;
@property(nonatomic, strong) NSNumber* longitude;
@property(nonatomic, strong) NSNumber* created;
@property(nonatomic, copy) NSString* icon;
@property(nonatomic, copy) NSString* country;
@property(nonatomic, copy) NSString* city;

@end
