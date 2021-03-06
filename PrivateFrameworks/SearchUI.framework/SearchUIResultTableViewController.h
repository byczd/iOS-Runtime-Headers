/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIResultTableViewController : SearchUITableViewController <SKStoreProductViewControllerDelegatePrivate, SearchUITableHeaderViewDelegate, UIGestureRecognizerDelegate, _MKPlaceViewControllerFeedbackDelegate> {
    double  _cachedHeaderHeight;
    NSMutableSet * _expandedSections;
    unsigned long long  _lastVisibleResultsFeedbackEvent;
    NSArray * _latestVisibleHeadersAccountedForInFeedback;
    NSMutableOrderedSet * _latestVisibleResultsAccountedForInFeedback;
    NSMutableArray * _potentiallyVisibleCells;
    NSMutableArray * _potentiallyVisibleHeaders;
    NSArray * _sections;
    NSMutableSet * _sectionsThatHaveBeenExpanded;
}

@property double cachedHeaderHeight;
@property (readonly) NSString *currentQueryString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableSet *expandedSections;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) double headerHeight;
@property unsigned long long lastVisibleResultsFeedbackEvent;
@property (retain) NSArray *latestVisibleHeadersAccountedForInFeedback;
@property (retain) NSMutableOrderedSet *latestVisibleResultsAccountedForInFeedback;
@property (retain) NSMutableArray *potentiallyVisibleCells;
@property (retain) NSMutableArray *potentiallyVisibleHeaders;
@property (retain) NSArray *sections;
@property (retain) NSMutableSet *sectionsThatHaveBeenExpanded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)cachedHeaderHeight;
- (id)cellForIndexPath:(id)arg1 reuseIfPossible:(bool)arg2;
- (void)clearResultsFromSection:(id)arg1;
- (id)currentQueryString;
- (bool)defaultApplicationExistsAndSupportsOpenInPlaceForResult:(id)arg1 open:(bool)arg2;
- (void)didEngageActionItem:(id)arg1 actionPerformed:(bool)arg2;
- (void)didEngageResult:(id)arg1;
- (bool)downloadDemotedAppIfNecessaryForBundleIdentifier:(id)arg1;
- (id)expandedSections;
- (id)fallbackPeekViewControllerForIndexPath:(id)arg1;
- (unsigned long long)handleSelectionAtIndexPath:(id)arg1 wasPop:(bool)arg2;
- (unsigned long long)handleSelectionOfResult:(id)arg1;
- (double)headerHeight;
- (unsigned long long)indexOfSection:(id)arg1;
- (id)indexPathToSelectForKeyboardOnQuickReturn;
- (id)init;
- (unsigned long long)lastVisibleResultsFeedbackEvent;
- (id)latestVisibleHeadersAccountedForInFeedback;
- (id)latestVisibleResultsAccountedForInFeedback;
- (void)modalViewControllerClosed;
- (double)offScreenContentScrollDistance;
- (void)openUserActivityForResult:(id)arg1;
- (void)performExpansion:(bool)arg1 withSectionIndex:(unsigned long long)arg2;
- (void)placeViewController:(id)arg1 shouldLogFeedbackOfType:(int)arg2;
- (id)potentiallyVisibleCells;
- (id)potentiallyVisibleHeaders;
- (void)productViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)reloadResult:(id)arg1 inResultSection:(id)arg2;
- (void)replaceResult:(id)arg1 withResult:(id)arg2 inResultSection:(id)arg3;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (bool)sectionIsClearable:(id)arg1;
- (bool)sectionShouldBeExpanded:(id)arg1;
- (id)sections;
- (id)sectionsThatHaveBeenExpanded;
- (void)sendVisibleFeedbackIfNecessary;
- (void)setCachedHeaderHeight:(double)arg1;
- (void)setExpandedSections:(id)arg1;
- (void)setLastVisibleResultsFeedbackEvent:(unsigned long long)arg1;
- (void)setLatestVisibleHeadersAccountedForInFeedback:(id)arg1;
- (void)setLatestVisibleResultsAccountedForInFeedback:(id)arg1;
- (void)setPotentiallyVisibleCells:(id)arg1;
- (void)setPotentiallyVisibleHeaders:(id)arg1;
- (void)setSections:(id)arg1;
- (void)setSectionsThatHaveBeenExpanded:(id)arg1;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndDisplayingHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)toggleExpansionForSection:(id)arg1;
- (void)updateDataModel;
- (void)updateWithResultSections:(id)arg1;
- (bool)view:(id)arg1 isVisibleInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)viewControllerForIndexPath:(id)arg1 isPeek:(bool)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end
