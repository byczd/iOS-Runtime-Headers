/* Generated by RuntimeBrowser.
 */

@protocol SXVideoLoadingStateObserving <NSObject>

@required

- (id /* block */)failedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SXVideoLoadingStateObserving> *, void*, id, SEL
- (id /* block */)finishedBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SXVideoLoadingStateObserving> *, void*, id, SEL
- (void)onFailed:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXVideoLoadingStateObserving> *, void*
- (void)onFinished:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXVideoLoadingStateObserving> *, void*
- (void)onStart:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SXVideoLoadingStateObserving> *, void*
- (id /* block */)startBlock:(void *)arg1; // needs 1 arg types, found 5: id /* block */, <SXVideoLoadingStateObserving> *, void*, id, SEL
- (unsigned long long)state;

@end