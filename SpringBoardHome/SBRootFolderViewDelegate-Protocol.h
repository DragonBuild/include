//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBFolderViewDelegate-Protocol.h>

@class SBRootFolderView, UIView;

@protocol SBRootFolderViewDelegate <SBFolderViewDelegate>

@optional
- (void)rootFolderView:(SBRootFolderView *)arg1 didEndOverscrollOnFirstPageWithVelocity:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didOverscrollOnFirstPageByAmount:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didChangeEffectiveSidebarVisibilityProgress:(double)arg2;
- (void)rootFolderView:(SBRootFolderView *)arg1 didChangeSidebarVisibilityProgress:(double)arg2;
- (UIView *)backgroundViewForEditingDoneButtonForRootFolderView:(SBRootFolderView *)arg1;
- (UIView *)backgroundViewForDockForRootFolderView:(SBRootFolderView *)arg1;
- (double)preferredExternalDockVerticalMarginForRootFolderView:(SBRootFolderView *)arg1;
- (double)externalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)maxExternalDockHeightForRootFolderView:(SBRootFolderView *)arg1;
- (double)distanceToTopOfSpotlightIconsForRootFolderView:(SBRootFolderView *)arg1;
- (void)rootFolderView:(SBRootFolderView *)arg1 wantsToAdjustTodayContentForEdgeBounceForScrollOffset:(CGPoint)arg2;
@end

