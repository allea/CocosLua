//
//  DataPacket.h
//  CocosLua
//
//  Created by Xiliang Chen on 12-5-17.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum MessageType {
    MessageTypeNone = 0,
    MessageTypeString,
    MessageTypeFile,
} MessageType;

@interface MessagePacket : NSObject <NSCoding>

@property (nonatomic) MessageType type;
@property (nonatomic, readonly) id content;

- (id)initWithType:(MessageType)type content:(id)content;

- (void)execute;

@end
