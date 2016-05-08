//
//  VKMarketItem.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 08.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import <VKSdkFramework/VKSdkFramework.h>

@class VKPrice;
@class VKMarketCategory;
@class VKPhotoArray;


@interface VKMarketItemLikesInfo : VKApiObject

@property(nonatomic, assign) bool user_likes;
@property(nonatomic, strong) NSNumber* count;

@end

@interface VKMarketItem : VKApiObject

@property(nonatomic, strong) NSNumber* id;
@property(nonatomic, strong) NSNumber* owner_id;

@property(nonatomic, strong) NSString* title;
@property(nonatomic, strong) NSString* item_description;
@property(nonatomic, strong) VKPrice* price;
@property(nonatomic, strong) VKMarketCategory* category;
@property(nonatomic, strong) NSNumber* date;
@property(nonatomic, strong) NSNumber* availability;
@property(nonatomic, strong) VKPhotoArray* photos;
@property(nonatomic, assign) bool can_comment;
@property(nonatomic, assign) bool can_repost;
@property(nonatomic, strong) VKMarketItemLikesInfo* likes;

@end


