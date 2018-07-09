/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXMediaSelectionViewController : UITableViewController {
    <SXMediaSelectionViewControllerDataSource> * _dataSource;
    <SXMediaSelectionViewControllerDelegate> * _delegate;
}

@property (nonatomic, readonly) <SXMediaSelectionViewControllerDataSource> *dataSource;
@property (nonatomic, readonly) <SXMediaSelectionViewControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)dataSource;
- (id)delegate;
- (id)displayNameForGroup:(unsigned long long)arg1;
- (id)displayNameForOptionAtIndexPath:(id)arg1;
- (void)done:(id)arg1;
- (unsigned long long)indexOfSelectionOptionInGroup:(unsigned long long)arg1;
- (id)initWithDelegate:(id)arg1 dataSource:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)selectedOptionAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)title;
- (void)viewDidLoad;

@end