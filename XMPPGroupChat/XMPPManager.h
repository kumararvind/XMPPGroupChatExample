//
//  XMPPManager.h
//  XMPPGroupChat
//
//  Created by Dylan Shine on 7/30/15.
//  Copyright (c) 2015 Dylan Shine. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <XMPP.h>
#import <XMPPRoomMemoryStorage.h>


@protocol MessageDelegate <NSObject>
@required
- (void)messageReceived:(NSDictionary *)message;
@end

@interface XMPPManager : NSObject
@property (nonatomic, weak) id<MessageDelegate>messageDelegate;
@property (nonatomic) XMPPStream *xmppStream;
@property (nonatomic) XMPPRoom *xmppRoom;

+ (instancetype)sharedManager;
-(void)joinOrCreateRoom;
-(BOOL)connect;
-(void)disconnect;

@end
