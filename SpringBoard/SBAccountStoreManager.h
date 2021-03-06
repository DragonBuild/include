//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ACAccount, ACAccountStore;
@protocol OS_dispatch_queue;

@interface SBAccountStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    ACAccountStore *_accountStore;
    ACAccount *_primaryAppleAccount;
}

@property(retain) ACAccount *primaryAppleAccount; // @synthesize primaryAppleAccount=_primaryAppleAccount;
@property(readonly, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;
// - (void).cxx_destruct;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_queue_updatePrimaryAppleAccountAndNotify:(BOOL)arg1;
- (void)_updatePrimaryAppleAccount;
- (id)init;

@end

