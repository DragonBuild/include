//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol SBFIdleTimerBehaviorProviding, SBIdleTimerCoordinating;

@protocol SBLockScreenIdleTimerControlling <NSObject>
@property(nonatomic) __weak id <SBIdleTimerCoordinating> idleTimerCoordinator;

@optional
- (void)removeIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (void)addIdleTimerDisabledAssertionReason:(NSString *)arg1;
- (id <SBFIdleTimerBehaviorProviding>)requestIdleTimerBehaviorForReason:(NSString *)arg1;
@end

