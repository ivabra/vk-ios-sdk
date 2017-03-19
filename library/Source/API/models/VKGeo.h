//
//  VKGeo.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 09.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h" 

@class VKPlace;

@interface VKGeo : VKApiObject

@property(nonatomic, copy) NSString *type;
@property(nonatomic, strong) NSObject *coordinates;
@property(nonatomic, strong) VKPlace * place;
@end
