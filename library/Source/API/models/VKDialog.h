//
//  VKDialog.h
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 10.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKApiObject.h"
#import "VKApiObjectArray.h"

@class VKMessage;

@interface VKDialog : VKApiObject
@property (nonatomic, strong) VKMessage* message;
@property (nonatomic, strong) NSNumber* in_read;
@property (nonatomic, strong) NSNumber* out_read;
@end


@interface VKDialogs : VKApiObjectArray

@end

@interface VKDialogResponse : VKApiObject

@property (nonatomic, strong) NSNumber* count;
@property (nonatomic, strong) VKDialogs* items;
@property (nonatomic, strong) NSNumber* unread_dialogs;
@property (nonatomic, strong) NSNumber* real_offset;

@end
 