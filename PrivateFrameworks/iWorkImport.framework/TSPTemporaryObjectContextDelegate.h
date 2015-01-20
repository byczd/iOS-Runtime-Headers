/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class <NSFilePresenter>, NSError, NSMutableSet, NSSet, NSString, NSURL, NSUUID;

@interface TSPTemporaryObjectContextDelegate : NSObject <TSPFileCoordinatorDelegate, TSPObjectContextDelegate> {
    NSError *_error;
    NSURL *_packageURL;
    NSMutableSet *_persistenceWarnings;
    bool_ignoreDocumentSupport;
}

@property(readonly) bool areNewExternalReferencesToDataAllowed;
@property(readonly) NSUUID * baseUUIDForObjectUUID;
@property(readonly) bool canUpgradeDocumentSupport;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) NSError * error;
@property(readonly) <NSFilePresenter> * filePresenter;
@property(readonly) unsigned long long hash;
@property bool ignoreDocumentSupport;
@property(readonly) bool isDocumentSupportTemporary;
@property(copy) NSURL * packageURL;
@property(readonly) NSSet * persistenceWarnings;
@property(readonly) bool preserveDocumentRevisionIdentifierForSequenceZero;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addPersistenceWarnings:(id)arg1;
- (id)error;
- (bool)ignoreDocumentSupport;
- (id)init;
- (id)initWithPackageURL:(id)arg1;
- (id)packageURL;
- (void)performReadUsingAccessor:(id)arg1;
- (id)persistenceWarnings;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(bool)arg2 isExternal:(bool)arg3;
- (void)presentPersistenceError:(id)arg1;
- (void)setIgnoreDocumentSupport:(bool)arg1;
- (void)setPackageURL:(id)arg1;

@end