/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SocialDaemon.framework/SocialDaemon
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <SLDFacebookPostUploadDelegate><NSObject>, ACAccount, NSString, SLFacebookPost, NSMutableArray, SLDFacebookImageAssetDataProvider;

@interface SLDFacebookPostUpload : NSObject  {
    NSMutableArray *_uploadQueue;
    NSMutableArray *_failedUploads;
    SLDFacebookImageAssetDataProvider *_imageAssetDataProvider;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _postCompletion;

    BOOL _suppressAlerts;
    SLFacebookPost *_post;
    <SLDFacebookPostUploadDelegate><NSObject> *_delegate;
    ACAccount *_account;
    NSString *_sourceAppIdentifier;
}

@property(retain) SLFacebookPost * post;
@property(retain) NSString * sourceAppIdentifier;
@property(retain) ACAccount * account;
@property(retain) <SLDFacebookPostUploadDelegate><NSObject> * delegate;
@property(copy) id postCompletion;
@property BOOL suppressAlerts;


- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void).cxx_destruct;
- (void)setAccount:(id)arg1;
- (id)account;
- (void)setSourceAppIdentifier:(id)arg1;
- (void)setSuppressAlerts:(BOOL)arg1;
- (void)setPostCompletion:(id)arg1;
- (id)postCompletion;
- (void)startUpload;
- (id)initWithPost:(id)arg1 account:(id)arg2;
- (id)facebookIconURL;
- (BOOL)suppressAlerts;
- (void)handleResponse:(id)arg1 withError:(id)arg2;
- (id)sourceAppIdentifier;
- (void)_post:(id)arg1 didReceiveAssetData:(id)arg2 error:(id)arg3;
- (id)imageAssetDataProvider;
- (void)_startUploadWithPost:(id)arg1;
- (id)_nextPost;
- (void)_processUploadQueue;
- (BOOL)_uploadQueueEmpty;
- (void)_handleRetry;
- (void)_directUserToCheckpointURL:(id)arg1;
- (void)_notifyDelegateWithSuccess:(BOOL)arg1;
- (void)_requestCredentialRenewal;
- (id)post;
- (void)setPost:(id)arg1;

@end
