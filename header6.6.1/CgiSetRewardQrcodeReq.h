//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSMutableArray, NSString;

@interface CgiSetRewardQrcodeReq : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *amtList; // @dynamic amtList;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *desc; // @dynamic desc;
@property(nonatomic) _Bool firstOpenFlag; // @dynamic firstOpenFlag;
@property(nonatomic) _Bool modifyDefaultAmt; // @dynamic modifyDefaultAmt;
@property(retain, nonatomic) NSString *photoAeskey; // @dynamic photoAeskey;
@property(retain, nonatomic) NSString *photoUrl; // @dynamic photoUrl;

@end
