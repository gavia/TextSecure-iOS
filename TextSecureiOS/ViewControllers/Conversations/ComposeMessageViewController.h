//
//  ComposeMessageViewController.m
//  TextSecureiOS
//
//  Created by Frederic Jacobs on 10/30/13.
//  Copyright (c) 2013 Open Whisper Systems. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TITokenField.h"
#import "JSMessagesViewController.h"
#import "TSContact.h"

@class TSMessage;
@interface ComposeMessageViewController : JSMessagesViewController <TITokenFieldDelegate, UITextViewDelegate, JSMessagesViewDelegate, JSMessagesViewDataSource>

@property (nonatomic, retain) TSContact *contact;
@property (nonatomic) int threadID;
// Need to be initialized with one of those methods

- (id) initWithConversationID:(NSString*)contactID;
- (id) initNewConversation;


-(void) messageSent:(TSMessage*) message;
-(void) messageRecieved:(TSMessage*) message;
-(void)addMessage:(TSMessage*)message;
@end

