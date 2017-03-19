//
//  VKAttachment.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 10.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"
#import "VKApiObjectArray.h"

@class VKPhoto;
@class VKDocs;
@class VKAudio;
@class VKMarketItem;

@interface VKAttachment : VKApiObject
@property (nonatomic, copy)   NSString* type;
@property (nonatomic, strong) VKPhoto* photo;
@property (nonatomic, strong) VKAudio* audio;
@property (nonatomic, strong) VKDocs* docs;
@property (nonatomic, strong) VKMarketItem* market;
@end



@interface VKAttachments : VKApiObjectArray

@end