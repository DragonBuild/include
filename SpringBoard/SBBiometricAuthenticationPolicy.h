//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBUIBiometricAuthenticationPolicy-Protocol.h>

@protocol SBFLockOutStatusProvider;

@interface SBBiometricAuthenticationPolicy : NSObject <SBUIBiometricAuthenticationPolicy>
{
    id <SBFLockOutStatusProvider> _lockOutStatusProvider;
}

// - (void).cxx_destruct;
- (BOOL)shouldRelockAfterBioUnlock;
- (id)initWithLockOutProvider:(id)arg1;

@end

