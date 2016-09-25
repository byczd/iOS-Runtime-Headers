/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInterfaceActionGroupView : UIView <UIGestureRecognizerDelegatePrivate, UIInterfaceActionGroupDisplayPropertyObserver, UIInterfaceActionGroupDisplaying, UIScrollViewDelegate, _UIInterfaceActionPresenting> {
    UIInterfaceActionGroup * _actionGroup;
    <UIInterfaceActionHandlerInvocationDelegate> * _actionHandlerInvocationDelegate;
    int  _actionLayoutAxis;
    UIInterfaceActionSelectionTrackingController * _actionSelectionController;
    UILongPressGestureRecognizer * _actionSelectionGestureRecognizer;
    UIView<UISeparatorDisplaying> * _actionSequenceTopSeparatorView;
    _UIInterfaceActionRepresentationsSequenceView * _actionSequenceView;
    NSLayoutConstraint * _actionSequenceViewWidthAnchoredToConstantConstraint;
    NSLayoutConstraint * _actionSequenceViewWidthAnchoredToContentGuideConstraint;
    UIInterfaceActionVisualStyle * _activeTestingVisualStyle;
    NSArray * _allowedActionLayoutAxisByPriority;
    UIInterfaceActionVisualStyle * _appliedVisualStyle;
    NSMutableArray * _arrangedScrollableHeaderViews;
    UIView * _backgroundView;
    _UIContentConstraintsLayoutGuide * _contentGuide;
    BOOL  _drawsBackground;
    BOOL  _isSettingVisualStyle;
    BOOL  _needsInitialViewLoading;
    BOOL  _needsUpdateActionSequenceViewArrangement;
    BOOL  _needsUpdateTopLevelViewsArrangement;
    UIInterfaceActionRepresentationView * _preferredActionRepresentation;
    int  _presentationStyle;
    float  _requiredActionRepresentationWidth;
    BOOL  _showsSeparatorAboveActions;
    UIView * _topLevelItemsView;
    NSArray * _topLevelViewArrangementConstraints;
    UIInterfaceActionVisualStyle * _visualStyle;
    UIInterfaceActionSeparatorAttributes * _visualStyleOverrideSeparatorAttributes;
    UIFont * _visualStyleOverrideTitleLabelFont;
    <UIInterfaceActionVisualStyleProviding> * _visualStyleProvider;
    NSPointerArray * _weakSimultaneouslyPresentedGroupViews;
}

@property (nonatomic, readonly) UIInterfaceActionGroup *actionGroup;
@property (nonatomic) <UIInterfaceActionHandlerInvocationDelegate> *actionHandlerInvocationDelegate;
@property (nonatomic, readonly) int actionLayoutAxis;
@property (nonatomic, readonly) UIInterfaceActionSelectionTrackingController *actionSelectionController;
@property (nonatomic, retain) UILongPressGestureRecognizer *actionSelectionGestureRecognizer;
@property (nonatomic, readonly) UIView<UISeparatorDisplaying> *actionSequenceTopSeparatorView;
@property (nonatomic, readonly) _UIInterfaceActionRepresentationsSequenceView *actionSequenceView;
@property (nonatomic, readonly) NSLayoutConstraint *actionSequenceViewWidthAnchoredToConstantConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *actionSequenceViewWidthAnchoredToContentGuideConstraint;
@property (nonatomic, retain) NSArray *allowedActionLayoutAxisByPriority;
@property (nonatomic, retain) UIInterfaceActionVisualStyle *appliedVisualStyle;
@property (nonatomic, readonly) NSArray *arrangedHeaderViews;
@property (nonatomic, readonly) NSMutableArray *arrangedScrollableHeaderViews;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic, readonly) _UIContentConstraintsLayoutGuide *contentGuide;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=_drawsBackground, setter=_setDrawsBackground:, nonatomic) BOOL drawsBackground;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) UIInterfaceActionRepresentationView *preferredActionRepresentation;
@property (nonatomic) int presentationStyle;
@property (nonatomic) float requiredActionRepresentationWidth;
@property (nonatomic) BOOL showsSeparatorAboveActions;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIView *topLevelItemsView;
@property (nonatomic, readonly) NSArray *topLevelViewArrangementConstraints;
@property (nonatomic, retain) UIInterfaceActionVisualStyle *visualStyle;
@property (getter=_visualStyleOverrideSeparatorAttributes, setter=_setVisualStyleOverrideSeparatorAttributes:, nonatomic, retain) UIInterfaceActionSeparatorAttributes *visualStyleOverrideSeparatorAttributes;
@property (getter=_visualStyleOverrideTitleLabelFont, setter=_setVisualStyleOverrideTitleLabelFont:, nonatomic, retain) UIFont *visualStyleOverrideTitleLabelFont;
@property (nonatomic) <UIInterfaceActionVisualStyleProviding> *visualStyleProvider;
@property (nonatomic, readonly) NSPointerArray *weakSimultaneouslyPresentedGroupViews;

- (void).cxx_destruct;
- (int)_actionLayoutAxisUnknowDisallowed;
- (BOOL)_actionLayoutAxisUnknownDisallowedIsVertical;
- (id)_actionRepresentationViewForAction:(id)arg1;
- (void)_actionSequenceViewContentSizeDidChange;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_actionSequenceVisibleRectForMakingCenteredAction:(id)arg1;
- (void)_addBackgroudViewToViewHierarchy:(id)arg1;
- (void)_addConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (id)_alertController;
- (id)_allActionViews;
- (void)_applyVisualStyle;
- (void)_applyVisualStyleCornerRadius;
- (void)_applyVisualStyleToActionsViewScrollView;
- (void)_applyVisualStyleToBackgroundViewDisplay;
- (void)_arrangeActionViewsInActionSequenceView;
- (void)_arrangeTopLevelViews;
- (void)_associateWeakSimultaneouslyPresentedGroupViews:(id)arg1 bidirectional:(BOOL)arg2;
- (void)_commonInitWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (id)_constraintsToPinView:(id)arg1 layoutGuide:(id)arg2 identifier:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_contentEdgeFrame;
- (id)_currentlyFocusedActionView;
- (id)_defaultOrderingForActionRepresentationViews:(id)arg1;
- (void)_determineActualLayoutAxis;
- (BOOL)_drawsBackground;
- (BOOL)_hasLoadedStackViewContents;
- (id)_initWithActionGroup:(id)arg1 visualStyleProvider:(id)arg2 actionHandlerInvocationDelegate:(id)arg3;
- (id)_interfaceActionGroupViewState;
- (id)_interfaceActionOfFocusedRepresentationView;
- (BOOL)_isCornerRadiusDisplayEnabled;
- (void)_loadActionSequenceView;
- (void)_loadTopLevelItemsView;
- (void)_loadViewsIfNeeded;
- (id)_loadVisualStyleForTraitCollection:(id)arg1;
- (id)_newActionGroupBackgroundView;
- (id)_newSeparatorViewForSeparatingTitleAndButtons;
- (id)_orderedTopLevelViews;
- (void)_reloadStackViewContentsIfNeeded;
- (void)_reloadTopSeparatorView;
- (void)_removeConstraintToActiveTopLevelViewArrangementConstraints:(id)arg1;
- (void)_removeUsAsThePresentingViewControllerForAllActions;
- (void)_scrollActionRepresentationViewToVisibleForAction:(id)arg1 animated:(BOOL)arg2;
- (void)_scrollPreferredActionRepresentationViewToVisibleAnimated:(BOOL)arg1;
- (void)_setAndApplyVisualStyle:(id)arg1;
- (void)_setDrawsBackground:(BOOL)arg1;
- (void)_setLayoutDebuggingIdentifier:(id)arg1;
- (void)_setNeedsUpdateActionSequenceViewArrangement;
- (void)_setNeedsUpdateTopLevelViewsArrangement;
- (void)_setUsAsThePresentingViewControllerForAllActions;
- (void)_setVisualStyleOverrideSeparatorAttributes:(id)arg1;
- (void)_setVisualStyleOverrideTitleLabelFont:(id)arg1;
- (BOOL)_shouldAllowPassthroughToLayersBehindUsForTouches:(id)arg1;
- (BOOL)_shouldShowSeparatorAboveActionsSequenceView;
- (void)_updateActionSequenceScrollability;
- (void)_updateActionSequenceViewActionLayoutAxis;
- (void)_updateActionSequenceViewDebugLayoutIdentifier;
- (void)_updateRequiredActionRepresentationSizeConstraints;
- (id)_viewContainingTopLevelItems;
- (id)_viewDisplayingRoundedBackground;
- (id)_visualStyleByApplyingOurTraitsToVisualStyle:(id)arg1 traitCollection:(id)arg2;
- (id)_visualStyleOverrideSeparatorAttributes;
- (id)_visualStyleOverrideTitleLabelFont;
- (id)_widthAnchoredToContentGuideConstraintForTopLevelView:(id)arg1;
- (id)actionGroup;
- (id)actionHandlerInvocationDelegate;
- (int)actionLayoutAxis;
- (id)actionSelectionController;
- (id)actionSelectionGestureRecognizer;
- (id)actionSequenceTopSeparatorView;
- (id)actionSequenceView;
- (id)actionSequenceViewWidthAnchoredToConstantConstraint;
- (id)actionSequenceViewWidthAnchoredToContentGuideConstraint;
- (id)allowedActionLayoutAxisByPriority;
- (id)appliedVisualStyle;
- (id)arrangedHeaderViews;
- (id)arrangedScrollableHeaderViews;
- (id)backgroundView;
- (void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1;
- (void)configureForDismissAlongsideTransitionCoordinator:(id)arg1;
- (void)configureForPresentAlongsideTransitionCoordinator:(id)arg1;
- (id)contentGuide;
- (void)dealloc;
- (id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(int)arg2;
- (id)initWithActionGroup:(id)arg1 actionHandlerInvocationDelegate:(id)arg2;
- (void)insertArrangedHeaderView:(id)arg1 atIndex:(unsigned int)arg2 scrollable:(BOOL)arg3;
- (void)interfaceAction:(id)arg1 invokeActionHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentActionGroupProperties:(id)arg2;
- (void)interfaceActionGroup:(id)arg1 reloadDisplayedContentVisualStyle:(id)arg2;
- (void)layoutSubviews;
- (id)preferredActionRepresentation;
- (id)preferredFocusedView;
- (int)presentationStyle;
- (void)reloadVisualStyle;
- (void)removeArrangedHeaderView:(id)arg1;
- (float)requiredActionRepresentationWidth;
- (void)scrollToCenterForInterfaceAction:(id)arg1;
- (void)setActionGroup:(id)arg1;
- (void)setActionHandlerInvocationDelegate:(id)arg1;
- (void)setActionLayoutAxis:(int)arg1;
- (void)setActionSelectionGestureRecognizer:(id)arg1;
- (void)setActiveTestingVisualStyle:(id)arg1;
- (void)setAllowedActionLayoutAxisByPriority:(id)arg1;
- (void)setAppliedVisualStyle:(id)arg1;
- (void)setPreferredActionRepresentation:(id)arg1;
- (void)setPresentationStyle:(int)arg1;
- (void)setRequiredActionRepresentationWidth:(float)arg1;
- (void)setShowsSeparatorAboveActions:(BOOL)arg1;
- (void)setSimultaneouslyPresentedGroupViews:(id)arg1;
- (void)setVisualStyle:(id)arg1;
- (void)setVisualStyleProvider:(id)arg1;
- (BOOL)showsSeparatorAboveActions;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)topLevelItemsView;
- (id)topLevelViewArrangementConstraints;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (id)visualStyle;
- (id)visualStyleProvider;
- (id)weakSimultaneouslyPresentedGroupViews;

@end