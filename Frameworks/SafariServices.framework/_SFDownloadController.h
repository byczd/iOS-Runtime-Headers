/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/SafariServices.framework/SafariServices
 */

@interface _SFDownloadController : NSObject <WBSFluidProgressStateSource, _WKDownloadDelegate> {
    <_SFDownloadControllerDelegate> * _delegate;
    unsigned long long  _downloadBackgroundTaskIdentifier;
    long long  _downloadBytesExpected;
    unsigned long long  _downloadBytesLoaded;
    bool  _downloadHasFailed;
    bool  _downloadWasCanceled;
    long long  _downloadingFileType;
    _WKDownload * _fileDownload;
    NSString * _fileDownloadPath;
    NSURL * _fileDownloadSourceURL;
    WBSFluidProgressController * _fluidProgressController;
    WBSFluidProgressState * _fluidProgressState;
    double  _timeLastProgressNotificationWasSent;
    _WKUserInitiatedAction * _userInitiatedActionForNextDownload;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_SFDownloadControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long downloadingFileType;
@property (nonatomic, retain) WBSFluidProgressController *fluidProgressController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginDownloadBackgroundTask:(id)arg1;
- (void)_clearFileDownloadState;
- (void)_download:(id)arg1 decideDestinationWithSuggestedFilename:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)_download:(id)arg1 didFailWithError:(id)arg2;
- (void)_download:(id)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(id)arg1 didReceiveResponse:(id)arg2;
- (void)_downloadDidCancel:(id)arg1;
- (void)_downloadDidFinish:(id)arg1;
- (void)_downloadDidStart:(id)arg1;
- (void)_endDownloadBackgroundTask;
- (void)cancel;
- (void)clearFluidProgressState;
- (bool)createFluidProgressState;
- (id)delegate;
- (long long)downloadingFileType;
- (double)estimatedProgress;
- (id)expectedOrCurrentURL;
- (id)fluidProgressController;
- (bool)hasFailedURL;
- (id)progressState;
- (void)setDelegate:(id)arg1;
- (void)setFluidProgressController:(id)arg1;
- (bool)startDownloadWithType:(long long)arg1 userInitiatedAction:(id)arg2;

@end
