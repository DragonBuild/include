//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBHIconModel.h>

@protocol SBIconModelApplicationDataSource;

@interface SBIconModel : SBHIconModel
{
    BOOL _iconsHaveBeenLoadedOnce;
    BOOL _createsIconsForInternalApps;
    id <SBIconModelApplicationDataSource> _applicationDataSource;
    BOOL _allowsWebClips;
}

+ (id)migratedIdentifierForLeafIdentifier:(id)arg1;
@property(nonatomic) BOOL allowsWebClips; // @synthesize allowsWebClips=_allowsWebClips;
@property(readonly, nonatomic) id <SBIconModelApplicationDataSource> applicationDataSource; // @synthesize applicationDataSource=_applicationDataSource;
// - (void).cxx_destruct;
- (id)modernizeRootArchive:(id)arg1;
- (BOOL)importState:(id)arg1;
- (id)exportFlattenedState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportPendingState:(BOOL)arg1 includeMissingIcons:(BOOL)arg2;
- (id)exportState:(BOOL)arg1;
- (id)forecastedLayoutForIconState:(id)arg1 includeMissingIcons:(BOOL)arg2;
- (id)description;
- (void)willLayout;
- (void)_replaceAppIconsWithDownloadingIcons:(id)arg1;
- (void)_noteApplicationIconImageChanged:(id)arg1;
- (void)_replaceAppIconsWithDownloadingIcons;
- (BOOL)shouldAvoidPlacingIconOnFirstPage:(id)arg1;
- (id)indexPathForIconInPlatformState:(id)arg1;
- (id)placeholdersByDisplayID;
- (id)applicationWithBundleIdentifier:(id)arg1;
- (id)applicationIconForBundleIdentifier:(id)arg1;
- (id)expectedIconForDisplayIdentifier:(id)arg1 createIfNecessary:(BOOL)arg2;
- (id)expectedIconForDisplayIdentifier:(id)arg1;
- (id)_applicationIcons;
- (void)loadAllIcons;
- (BOOL)shouldAvoidCreatingIconForApplication:(id)arg1;
- (void)addIconForApplication:(id)arg1 force:(BOOL)arg2;
- (void)addIconForApplication:(id)arg1;
- (id)addBookmarkIconForWebClip:(id)arg1;
- (id)bookmarkIconForWebClipIdentifier:(id)arg1;
- (id)addDownloadingIconForDownload:(id)arg1;
- (BOOL)isIconVisible:(id)arg1;
- (void)adjustIconsToShow:(id)arg1 iconsToHide:(id)arg2 afterChangeToVisibleIconTags:(id)arg3 hiddenIconTags:(id)arg4;
- (void)localeChanged;
- (void)dealloc;
- (id)initWithStore:(id)arg1 applicationDataSource:(id)arg2;

@end

