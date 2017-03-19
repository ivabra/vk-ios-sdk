//
//  VKMessage.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 09.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"
#import "VKApiObjectArray.h"

@class VKGeo;
@class VKAttachments;

@interface VKMessages : VKApiObjectArray
@property(nonatomic, strong) NSNumber *amount;
@end

@interface VKMessage : VKApiObject
@property(nonatomic, strong) NSNumber *id;
@property(nonatomic, strong) NSNumber *user_id;
@property(nonatomic, strong) NSNumber *from_id;
@property(nonatomic, strong) NSDate *date;
@property(nonatomic, assign) bool read_state;
@property(nonatomic, assign) bool out;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *body;
@property(nonatomic, strong) VKGeo* geo;
@property(nonatomic, strong) VKAttachments* attachments;
@property(nonatomic, strong) VKMessages *fwd_messages;
@property(nonatomic, assign) bool emoji;
@property(nonatomic, assign) bool important;
@property(nonatomic, assign) bool deleted;
@property(nonatomic, copy) NSString* random_id;


@property(nonatomic, strong) NSNumber *chat_id;
@property(nonatomic, strong) NSArray<NSString *> *chat_active;
@property(nonatomic, copy) NSString* puch_settings;
@property(nonatomic, strong) NSNumber* users_count;
@property(nonatomic, strong) NSNumber* admin_id;
@property(nonatomic, copy) NSString* action;
@property(nonatomic, strong) NSNumber* action_mid;
@property(nonatomic, copy) NSString* action_email;
@property(nonatomic, copy) NSString* action_text;
@property(nonatomic, copy) NSString* photo_50;
@property(nonatomic, copy) NSString* photo_100;
@property(nonatomic, copy) NSString* photo_200;
@end

