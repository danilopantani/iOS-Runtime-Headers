/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class SASRecognition, NSString;

@interface SASSpeechRecognized : SABaseClientBoundCommand  {
}

@property(retain) SASRecognition * recognition;
@property(copy) NSString * sessionId;

+ (id)speechRecognizedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)speechRecognized;

- (id)groupIdentifier;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (void)setRecognition:(id)arg1;
- (id)recognition;
- (BOOL)requiresResponse;
- (id)encodedClassName;

@end
