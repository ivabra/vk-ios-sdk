//
//  VKAttachment.m
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 10.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKAttachment.h"

@implementation VKAttachment

@end

@implementation VKAttachments

-(instancetype) initWithDictionary:(NSDictionary *)dict {
  return [super initWithDictionary:dict objectClass:[VKAttachment class]];
}

-(instancetype) initWithArray:(NSArray *)array {
  return  [super initWithArray:array objectClass:[VKAttachment class]];
}

@end