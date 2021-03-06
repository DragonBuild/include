//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class SBChainableModifier, SBModifierCacheCoordinator;

@interface SBModifierMethodCache : NSObject <NSCopying>
{
    SBChainableModifier *_modifier;
    SEL _selectors;
    long long _selectorCount;
    /* void * CDUnknownFunctionPointerType _imps */;
    NSUInteger _genCount;
    SBModifierCacheCoordinator *_cacheCoordinator;
    struct SBModifierCacheDispatchData _dispatchCache;
    /* void * CDUnknownFunctionPointerType _nextFunc */;
}

@property(retain, nonatomic) SBModifierCacheCoordinator *cacheCoordinator; // @synthesize cacheCoordinator=_cacheCoordinator;
@property(nonatomic) SBChainableModifier *modifier; // @synthesize modifier=_modifier;
// - (void).cxx_destruct;
- (id)unimplementedMethods;
@property(readonly, nonatomic) BOOL hasNonTrampolineIMPs;
- (void)dealloc;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithIMPs:(/* void * CDUnknownFunctionPointerType  */)arg1 selectorList:(id)arg2 subsequentMethodCacheFunc:(/* void * /* void * CDUnknownFunctionPointerType */ */)arg3;

@end

