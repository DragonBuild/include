//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NCNotificationAction, NCNotificationDispatcher, NCNotificationRequest, NSDictionary, NSString;
@protocol NCNotificationDestination;

@protocol NCNotificationDispatcherDelegate <NSObject>
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchBackgroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 launchForegroundApplicationForAction:(NCNotificationAction *)arg2 notificationRequest:(NCNotificationRequest *)arg3 fromDestination:(NSString *)arg4 withParameters:(NSDictionary *)arg5;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 didExecuteAction:(NCNotificationAction *)arg2 forNotificationRequest:(NCNotificationRequest *)arg3;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 willExecuteAction:(NCNotificationAction *)arg2 forDestination:(id <NCNotificationDestination>)arg3 notificationRequest:(NCNotificationRequest *)arg4 requestAuthentication:(BOOL)arg5 withParameters:(NSDictionary *)arg6 completionBlock:(void (^)(BOOL))arg7;
- (void)dispatcher:(NCNotificationDispatcher *)arg1 requestPermissionToExecuteAction:(NCNotificationAction *)arg2 forDestination:(id <NCNotificationDestination>)arg3 notificationRequest:(NCNotificationRequest *)arg4 withParameters:(NSDictionary *)arg5 completionBlock:(void (^)(BOOL))arg6;
@end

