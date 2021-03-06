//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBTouchTemplateGestureRecognizer.h>

#import <SpringBoard/SBGestureRecognizerPanGestureProviding-Protocol.h>
#import <SpringBoard/SBGestureRecognizerTouchHistoryProviding-Protocol.h>

@class SBFluidSwitcherViewController, SBTouchHistory;

@interface SBFluidScrunchGestureRecognizer : SBTouchTemplateGestureRecognizer <SBGestureRecognizerTouchHistoryProviding, SBGestureRecognizerPanGestureProviding>
{
    SBFluidSwitcherViewController *_switcherViewController;
    double _absoluteScale;
    double _lastPerimeter;
    SBTouchHistory *_touchHistory;
    CGPoint _initialCentroid;
    CGPoint _absoluteTranslation;
    CGPoint _additionalTranslationDueToChangingAnchorPoints;
}

@property(retain, nonatomic) SBTouchHistory *touchHistory; // @synthesize touchHistory=_touchHistory;
@property(nonatomic) double lastPerimeter; // @synthesize lastPerimeter=_lastPerimeter;
@property(nonatomic) CGPoint additionalTranslationDueToChangingAnchorPoints; // @synthesize additionalTranslationDueToChangingAnchorPoints=_additionalTranslationDueToChangingAnchorPoints;
@property(nonatomic) CGPoint absoluteTranslation; // @synthesize absoluteTranslation=_absoluteTranslation;
@property(nonatomic) CGPoint initialCentroid; // @synthesize initialCentroid=_initialCentroid;
@property(nonatomic) double absoluteScale; // @synthesize absoluteScale=_absoluteScale;
@property(nonatomic) __weak SBFluidSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;
// - (void).cxx_destruct;
- (double)incrementalGestureMotionForCandidate:(id)arg1 withTransformAnalyzerInfo:(id)arg2;
- (double)animationDistance;
- (id)logCategory;
- (BOOL)_isMatchedTemplateScrunchTemplate;
- (void)_installTemplates;
- (CGPoint)_centroidInSwitcherViewForPolygon:(id)arg1;
- (id)_switcherView;
- (double)peakSpeed;
- (double)averageTouchPathAngleOverTimeDuration:(double)arg1;
- (CGPoint)averageTouchVelocityOverTimeDuration:(double)arg1;
- (CGPoint)translationWithoutConsideringScaleInView:(id)arg1;
- (CGPoint)velocityInView:(id)arg1;
- (CGPoint)translationInView:(id)arg1;
- (CGPoint)locationInView:(id)arg1;
- (double)_hysteresis;
@property(readonly, nonatomic) CGPoint centroid;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (BOOL)_shouldAddNewTouchesAfterGestureRecognition;
- (void)_computeGestureMotionWithTouches:(id)arg1 polygon:(id)arg2;
- (void)_setMatchedPolygon:(id)arg1;
- (void)setState:(long long)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

