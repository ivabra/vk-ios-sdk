//
//  VKDialog.m
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 10.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKDialog.h"

@implementation VKDialog

@end

@implementation VKDialogs

-(instancetype) initWithDictionary:(NSDictionary *)dict {
  return [super initWithDictionary:dict objectClass:[VKDialog class]];
}

-(instancetype) initWithArray:(NSArray *)array {
  return  [super initWithArray:array objectClass:[VKDialog class]];
}

@end

@implementation VKDialogResponse

@end