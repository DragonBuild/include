//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBNestingViewController.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/SBFolderControllerBackgroundViewDelegate-Protocol.h>
#import <SpringBoardHome/SBFolderControllerDelegate-Protocol.h>
#import <SpringBoardHome/SBFolderObserver-Protocol.h>
#import <SpringBoardHome/SBFolderViewDelegate-Protocol.h>
#import <SpringBoardHome/SBIconListViewDragObserver-Protocol.h>
#import <SpringBoardHome/SBIconLocationPresenting-Protocol.h>
#import <SpringBoardHome/SBIconViewQuerying-Protocol.h>
#import <SpringBoardHome/SBScaleIconZoomAnimationContaining-Protocol.h>

@class NSArray, NSIndexPath, NSMutableSet, NSSet, NSString, NSTimer, SBFolder, SBFolderContainerView, SBFolderControllerAnimationContext, SBFolderControllerBackgroundView, SBFolderControllerConfiguration, SBFolderIconImageCache, SBFolderView, SBHIconImageCache, SBHIconModel, SBIconAnimator, SBIconLayoutOverrideStrategy, SBIconListPageControl, SBIconListView, SBIconPageIndicatorImageSetCache, SBIconView, UIColor, UIStatusBar, UIView, UIWindow, _UILegibilitySettings;
@protocol BSInvalidatable, SBFolderControllerDelegate, SBIconListLayoutProvider, SBIconViewProviding;

@interface SBFolderController : SBNestingViewController <SBFolderControllerDelegate, SBFolderObserver, SBIconListViewDragObserver, SBFolderControllerBackgroundViewDelegate, SBFolderViewDelegate, SBScaleIconZoomAnimationContaining, BSDescriptionProviding, SBIconLocationPresenting, SBIconViewQuerying>
{
    SBFolderContainerView *_containerView;
    SBFolderView *_contentView;
    SBFolderControllerBackgroundView *_backgroundView;
    NSTimer *_closeFolderTimer;
    BOOL _grabbedIconHasEverEnteredFolderView;
    SBIconAnimator *_iconAnimator;
    NSMutableSet *_draggingEnteredIconListViews;
    NSMutableSet *_fakeStatusBarHidingReasons;
    NSMutableSet *_realStatusBarHidingReasons;
    BOOL _isOpen;
    BOOL _isEditing;
    BOOL _isAnimating;
    BOOL _rotating;
    BOOL _occluded;
    BOOL _active;
    id <SBFolderControllerDelegate> _folderDelegate;
    SBFolder *_folder;
    id <SBIconListLayoutProvider> _listLayoutProvider;
    long long _orientation;
    NSUInteger _allowedOrientations;
    id <SBIconViewProviding> _iconViewProvider;
    id _context;
    SBIconView *_folderIconView;
    UIView *_headerView;
    _UILegibilitySettings *_legibilitySettings;
    NSString *_originatingIconLocation;
    UIColor *_defaultAccessibilityTintColor;
    SBFolderIconImageCache *_folderIconImageCache;
    SBHIconImageCache *_iconImageCache;
    SBIconPageIndicatorImageSetCache *_iconPageIndicatorImageSetCache;
    id <BSInvalidatable> _statusBarAssertion;
    UIStatusBar *_fakeStatusBar;
    SBFolderControllerConfiguration *_configuration;
    SBFolderControllerAnimationContext *_animationContext;
    SBIconListPageControl *_pageControl;
}

+ (id)iconLocation;
+ (Class)listViewClass;
+ (Class)_contentViewClass;
+ (Class)configurationClass;
@property(retain, nonatomic) SBIconListPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) SBFolderControllerAnimationContext *animationContext; // @synthesize animationContext=_animationContext;
@property(copy, nonatomic) SBFolderControllerConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) UIStatusBar *fakeStatusBar; // @synthesize fakeStatusBar=_fakeStatusBar;
@property(retain, nonatomic) id <BSInvalidatable> statusBarAssertion; // @synthesize statusBarAssertion=_statusBarAssertion;
@property(nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property(readonly, nonatomic) SBIconPageIndicatorImageSetCache *iconPageIndicatorImageSetCache; // @synthesize iconPageIndicatorImageSetCache=_iconPageIndicatorImageSetCache;
@property(retain, nonatomic) SBHIconImageCache *iconImageCache; // @synthesize iconImageCache=_iconImageCache;
@property(readonly, nonatomic) SBFolderIconImageCache *folderIconImageCache; // @synthesize folderIconImageCache=_folderIconImageCache;
@property(retain, nonatomic) UIColor *defaultAccessibilityTintColor; // @synthesize defaultAccessibilityTintColor=_defaultAccessibilityTintColor;
@property(nonatomic, getter=isOccluded) BOOL occluded; // @synthesize occluded=_occluded;
@property(copy, nonatomic) NSString *originatingIconLocation; // @synthesize originatingIconLocation=_originatingIconLocation;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic, getter=isRotating) BOOL rotating; // @synthesize rotating=_rotating;
@property(readonly, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) SBIconView *folderIconView; // @synthesize folderIconView=_folderIconView;
@property(readonly, nonatomic) id context; // @synthesize context=_context;
@property(readonly, nonatomic) __weak id <SBIconViewProviding> iconViewProvider; // @synthesize iconViewProvider=_iconViewProvider;
@property(readonly, nonatomic) NSUInteger allowedOrientations; // @synthesize allowedOrientations=_allowedOrientations;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, nonatomic) id <SBIconListLayoutProvider> listLayoutProvider; // @synthesize listLayoutProvider=_listLayoutProvider;
@property(retain, nonatomic) SBFolder *folder; // @synthesize folder=_folder;
@property(nonatomic) __weak id <SBFolderControllerDelegate> folderDelegate; // @synthesize folderDelegate=_folderDelegate;
@property(nonatomic, getter=isAnimating) BOOL animating; // @synthesize animating=_isAnimating;
@property(readonly, nonatomic, getter=isEditing) BOOL editing; // @synthesize editing=_isEditing;
@property(nonatomic, getter=isOpen) BOOL open; // @synthesize open=_isOpen;
// - (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)accessibilityTintColorForScreenRect:(CGRect)arg1;
@property(readonly, copy, nonatomic) NSSet *presentedIconLocations;
- (BOOL)isPresentingIconLocation:(id)arg1;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (void)folder:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3;
- (void)folder:(id)arg1 didAddIcons:(id)arg2 removedIcons:(id)arg3;
- (void)folder:(id)arg1 didRemoveLists:(id)arg2 atIndexes:(id)arg3;
- (void)folder:(id)arg1 didAddList:(id)arg2;
- (void)_noteFolderListsDidChange;
- (void)iconListView:(id)arg1 iconDropSessionDidEnd:(id)arg2;
- (void)iconListView:(id)arg1 concludeIconDrop:(id)arg2;
- (void)folderViewDidChangeOrientation:(id)arg1;
- (id)folderView:(id)arg1 accessibilityTintColorForRect:(CGRect)arg2;
- (UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderView:(id)arg1;
- (void)folderView:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (BOOL)folderView:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (id)folderView:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (void)folderView:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4;
- (id)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderView:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (BOOL)folderView:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (double)minimumHomeScreenScaleForFolderView:(id)arg1;
- (void)folderViewShouldEndEditing:(id)arg1;
- (void)folderViewShouldBeginEditing:(id)arg1;
- (void)folderViewShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderView:(id)arg1 willAnimateScrollToPageIndex:(long long)arg2;
- (void)folderViewDidEndScrolling:(id)arg1;
- (void)folderViewDidScroll:(id)arg1;
- (void)folderViewWillUpdatePageDuringScrolling:(id)arg1;
- (void)folderViewWillBeginScrolling:(id)arg1;
- (void)folderViewWillEndDragging:(id)arg1;
- (void)folderViewWillBeginDragging:(id)arg1;
- (void)folderView:(id)arg1 currentPageIndexDidChange:(long long)arg2;
- (void)folderView:(id)arg1 currentPageIndexWillChange:(long long)arg2;
- (BOOL)folderView:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (id)iconLocationForFolderView:(id)arg1;
- (Class)iconListViewClassForFolderView:(id)arg1;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (void)folderController:(id)arg1 willUseIconTransitionAnimator:(id)arg2 forOperation:(long long)arg3 onViewController:(id)arg4 animated:(BOOL)arg5;
- (id)folderController:(id)arg1 iconAnimatorForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4 initialDelay:(double )arg5;
- (UIEdgeInsets)statusBarEdgeInsetsForFolderController:(id)arg1;
- (id)statusBarStyleRequestForFolderController:(id)arg1;
- (void)folderController:(id)arg1 willRemoveFakeStatusBar:(id)arg2;
- (id)fakeStatusBarForFolderController:(id)arg1;
- (id)folderControllerWantsToHideStatusBar:(id)arg1;
- (void)folderControllerDidClose:(id)arg1;
- (void)folderControllerWillClose:(id)arg1;
- (void)folderControllerDidOpen:(id)arg1;
- (void)folderControllerWillOpen:(id)arg1;
- (void)folderController:(id)arg1 willCreateInnerFolderControllerWithConfiguration:(id)arg2;
- (id)folderController:(id)arg1 accessibilityTintColorForScreenRect:(CGRect)arg2;
- (UIEdgeInsets)contentOverlayInsetsFromParentIfAvailableForFolderController:(id)arg1;
- (void)folderController:(id)arg1 iconListView:(id)arg2 springLoadedInteractionForIconDragDidCompleteOnIconView:(id)arg3;
- (BOOL)folderController:(id)arg1 iconListView:(id)arg2 shouldAllowSpringLoadedInteractionForIconDropSession:(id)arg3 onIconView:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDragItem:(id)arg3 willAnimateDropWithAnimator:(id)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 previewForDroppingIconDragItem:(id)arg3 proposedPreview:(id)arg4;
- (void)folderController:(id)arg1 iconListView:(id)arg2 performIconDrop:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidExit:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSession:(id)arg3 didPauseAtLocation:(CGPoint)arg4;
- (id)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidUpdate:(id)arg3;
- (void)folderController:(id)arg1 iconListView:(id)arg2 iconDropSessionDidEnter:(id)arg3;
- (BOOL)folderController:(id)arg1 iconListView:(id)arg2 canHandleIconDropSession:(id)arg3;
- (void)folderControllerDidEndScrolling:(id)arg1;
- (void)folderControllerWillBeginScrolling:(id)arg1;
- (void)folderControllerShouldEndEditing:(id)arg1;
- (double)minimumHomeScreenScaleForFolderController:(id)arg1;
- (void)folderControllerShouldBeginEditing:(id)arg1;
- (BOOL)folderControllerShouldClose:(id)arg1 withPinchGesture:(id)arg2;
- (void)folderController:(id)arg1 draggedIconShouldDropFromListView:(id)arg2;
- (BOOL)folderController:(id)arg1 canChangeCurrentPageIndexToIndex:(long long)arg2;
- (Class)controllerClassForFolder:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (UIEdgeInsets)statusBarInsetsForOrientation:(long long)arg1;
@property(readonly, copy, nonatomic) NSArray *extraViews;
@property(readonly, nonatomic) BOOL shouldAnimateFirstTwoViewsAsOne;
@property(readonly, nonatomic) BOOL shouldAnimateLastTwoViewsAsOne;
@property(readonly, nonatomic) UIView *extraViewsContainer;
- (void)setContentAlpha:(double)arg1;
- (void)prepareForAnimation:(id)arg1 withTargetIcon:(id)arg2;
- (void)returnScalingView;
- (id)borrowScalingView;
@property(readonly, nonatomic) SBIconListView *dockIconListView;
- (void)enumerateDisplayedIconViewsForIcon:(id)arg1 usingBlock:(id /* CDUnknownBlockType */)arg2;
- (void)enumerateDisplayedIconViewsUsingBlock:(id /* CDUnknownBlockType */)arg1;
@property(readonly, nonatomic) SBHIconModel *iconModel;
@property(readonly, nonatomic) UIView *fallbackIconContainerView;
@property(readonly, nonatomic) UIWindow *animationWindow;
- (id)matchMoveSourceViewForIconView:(id)arg1;
@property(readonly, nonatomic) UIView *containerView;
- (void)prepareToLaunchTappedIcon:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
@property(readonly, nonatomic) NSIndexPath *currentIndexPath;
- (BOOL)restoreExpandedIndexPath:(id)arg1;
- (BOOL)shouldOpenFolderIcon:(id)arg1;
- (void)popFolderAnimated:(BOOL)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)configureInnerFolderControllerConfiguration:(id)arg1;
- (void)pushFolderIcon:(id)arg1 location:(id)arg2 animated:(BOOL)arg3 completion:(id /* CDUnknownBlockType */)arg4;
- (void)prepareToClose;
- (void)prepareToOpen;
- (BOOL)_iconAppearsOnCurrentPage:(id)arg1;
- (BOOL)_listIndexIsVisible:(NSUInteger)arg1;
- (NSUInteger)_depth;
- (id)_newAnimatorForZoomUp:(BOOL)arg1;
- (void)_clearIconAnimator;
- (void)unscatterAnimated:(BOOL)arg1 afterDelay:(double)arg2 withCompletion:(id /* CDUnknownBlockType */)arg3;
- (void)noteIconDragDidEnd:(id)arg1;
- (void)noteIconDrag:(id)arg1 didExitIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didChangeInIconListView:(id)arg2;
- (void)noteIconDrag:(id)arg1 didEnterIconListView:(id)arg2;
- (void)noteUserIsInteractingWithIcons;
- (BOOL)_canAcceptIconDropSession:(id)arg1 inListView:(id)arg2;
- (void)_setCloseFolderTimerIfNecessary;
- (void)_closeFolderTimerFired;
- (void)_cancelCloseFolderTimer;
@property(readonly, nonatomic) BOOL disablesScrollingWhileIconDragIsDropping;
@property(readonly, nonatomic) BOOL canAcceptFolderIconDrags;
@property(readonly, nonatomic) BOOL closesAfterDragExits;
- (void)_cancelAllInteractionTimers;
- (BOOL)_allowUserInteraction;
- (void)_compactFolder;
- (id)_addEmptyListForce:(BOOL)arg1;
- (id)addEmptyListView;
- (void)layoutIconLists:(double)arg1 animationType:(long long)arg2 forceRelayout:(BOOL)arg3;
- (void)_resetIconLists;
- (void)prepareToTearDown;
@property(nonatomic) double pageControlAlpha;
@property(nonatomic, getter=isPageControlHidden) BOOL pageControlHidden;
- (void)_updateStateOfAssociatedController:(id)arg1 animated:(BOOL)arg2;
- (void)_updateAssociatedControllerStateAnimated:(BOOL)arg1;
- (void)_unhideStatusBarForReason:(id)arg1;
- (void)_hideStatusBarForReason:(id)arg1;
- (void)_unhideFakeStatusBarForReason:(id)arg1;
- (void)_hideFakeStatusBarForReason:(id)arg1;
- (void)_removeFakeStatusBarAndAssertionIfExists;
- (void)_removeFakeStatusBar;
- (void)_resetFakeStatusBarMatchMoveAnimation;
- (void)_resetFakeStatusBarFrameOnly;
- (void)_resetFakeStatusBarSettingsIfNecessary;
- (void)_addFakeStatusBarView;
- (void)_fadeHomescreenAndDockIfNecessaryForFolderOpen:(BOOL)arg1;
- (void)_updateHomescreenAndDockFade;
- (BOOL)_homescreenAndDockShouldFade;
- (void)_setHomescreenAndDockAlpha:(double)arg1;
@property(readonly, nonatomic) long long userInterfaceLayoutDirection;
@property(readonly, nonatomic) NSUInteger userInterfaceLayoutDirectionHandling;
- (void)revealIcon:(id)arg1 animated:(BOOL)arg2 completionHandler:(id /* CDUnknownBlockType */)arg3;
- (void)updateContentViewOcclusionWithOverriddenHasInnerFolder:(BOOL)arg1;
- (void)updateContentViewOcclusion;
- (BOOL)isEffectivelyOccludedIfHasInnerFolder:(BOOL)arg1;
- (BOOL)isEffectivelyOccluded;
- (id)iconLocation;
- (void)cancelScrolling;
- (void)setScrollingDisabled:(BOOL)arg1 forReason:(id)arg2;
@property(readonly, nonatomic) BOOL suspendsWallpaperAnimationWhileOpen;
- (void)fadeContentForMinificationFraction:(double)arg1;
- (void)fadeContentForMagnificationFraction:(double)arg1;
- (id)beginModifyingDockOffscreenFractionForReason:(id)arg1;
@property(readonly, nonatomic) SBIconListView *dockListView;
@property(readonly, nonatomic) BOOL hasDock;
- (id)firstIconViewForIcon:(id)arg1 excludingLocations:(id)arg2;
- (id)firstIconViewForIcon:(id)arg1;
- (id)firstIconViewForIcon:(id)arg1 inLocations:(id)arg2;
- (id)iconViewForIcon:(id)arg1 location:(id)arg2;
- (BOOL)isDisplayingIconView:(id)arg1 inLocation:(id)arg2;
- (BOOL)isDisplayingIconView:(id)arg1;
- (BOOL)isDisplayingIcon:(id)arg1 inLocations:(id)arg2;
- (BOOL)isDisplayingIcon:(id)arg1 inLocation:(id)arg2;
- (BOOL)isDisplayingIcon:(id)arg1;
- (long long)pageIndexForIconListViewIndex:(NSUInteger)arg1;
- (NSUInteger)iconListViewIndexForPageIndex:(long long)arg1;
- (id)iconListViewForDrag:(id)arg1;
- (id)iconListViewForTouch:(id)arg1;
- (id)iconListViewAtPoint:(CGPoint)arg1;
- (id)iconListViewAtIndex:(NSUInteger)arg1;
- (BOOL)doesPageContainIconListView:(long long)arg1;
@property(readonly, nonatomic) SBIconListView *currentIconListView;
@property(readonly, nonatomic) NSUInteger iconListViewCount;
@property(readonly, copy, nonatomic) NSArray *iconListViews;
- (id)folderControllerForFolder:(id)arg1;
@property(readonly, nonatomic) SBFolderController *deepestFolderController;
@property(readonly, nonatomic) __weak SBFolderController *outerFolderController;
@property(readonly, nonatomic) SBFolderController *innerFolderController;
- (void)_configureForInnerFolderController:(id)arg1;
@property(readonly, nonatomic) long long lastIconPageIndex;
@property(readonly, nonatomic) long long firstIconPageIndex;
@property(readonly, nonatomic) long long maximumPageIndex;
@property(readonly, nonatomic) long long minimumPageIndex;
@property(readonly, nonatomic) long long defaultPageIndex;
- (void)animateScrollToDefaultPageWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)setCurrentPageIndexToListDirectlyContainingIcon:(id)arg1 animated:(BOOL)arg2;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (BOOL)setCurrentPageIndex:(long long)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) SBIconLayoutOverrideStrategy *iconLayoutOverrideStrategy;
@property(nonatomic) double statusBarHeight;
- (void)beginEditingTitle;
- (void)_updateFolderRequiredTrailingEmptyListCount;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
@property(readonly, nonatomic) double currentScrollingOffset;
@property(readonly, nonatomic) long long currentPageIndex;
@property(readonly, nonatomic, getter=isScrollTracking) BOOL scrollTracking;
@property(readonly, nonatomic, getter=isScrollDecelerating) BOOL scrollDecelerating;
@property(readonly, nonatomic, getter=isScrollDragging) BOOL scrollDragging;
@property(readonly, nonatomic, getter=isScrolling) BOOL scrolling;
- (void)orientationDidChange:(long long)arg1;
@property(readonly, nonatomic) SBFolderContainerView *folderContainerView;
@property(readonly, nonatomic) SBFolderView *folderViewIfLoaded;
@property(readonly, nonatomic) SBFolderView *folderView;
@property(readonly, nonatomic) UIView *contentView;
- (id)_makeContentViewWithConfiguration:(id)arg1;
- (void)removeViewFromHierarchyForNestedViewController:(id)arg1;
- (void)addViewToHierarchyForNestedViewController:(id)arg1;
- (void)viewWillTransitionToSize:(CGSize)arg1 forOperation:(long long)arg2 withTransitionCoordinator:(id)arg3;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4;
- (void)viewDidLoad;
- (void)loadView;
- (void)invalidate;
- (void)_invalidate;
- (void)parentDelegateDidChange;
- (void)delegateDidChange;
- (id)initWithConfiguration:(id)arg1;

@end

