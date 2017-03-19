//
//  VKMessage.m
//  VK-ios-sdk
//
//  Created by Ivan Brazhnikov on 09.05.16.
//  Copyright © 2016 VK. All rights reserved.
//

#import "VKMessage.h"

@implementation VKMessage

@end

@implementation VKMessages
-(instancetype) initWithDictionary:(NSDictionary *)dict {
  self = [super initWithDictionary:dict objectClass:[VKMessage class]];
  
  if (!self) {
    return nil;
  }
  
  self.amount = dict[@"count"];
  return self;
}

-(instancetype) initWithArray:(NSArray *)array {
  return  [super initWithArray:array objectClass:[VKMessage class]];
}
@end