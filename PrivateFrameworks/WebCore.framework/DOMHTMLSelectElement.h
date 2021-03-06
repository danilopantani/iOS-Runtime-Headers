/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLFormElement, NSString, DOMHTMLOptionsCollection;

@interface DOMHTMLSelectElement : DOMHTMLElement  {
}

@property BOOL autofocus;
@property BOOL disabled;
@property(readonly) DOMHTMLFormElement * form;
@property BOOL multiple;
@property(copy) NSString * name;
@property int size;
@property(readonly) NSString * type;
@property(readonly) DOMHTMLOptionsCollection * options;
@property(readonly) int length;
@property int selectedIndex;
@property(copy) NSString * value;
@property(readonly) BOOL willValidate;


- (void)setName:(id)arg1;
- (id)name;
- (id)type;
- (int)length;
- (int)structuralComplexityContribution;
- (id)form;
- (id)item:(unsigned int)arg1;
- (id)options;
- (void)_activateItemAtIndex:(int)arg1;
- (void)_activateItemAtIndex:(int)arg1 allowMultipleSelection:(BOOL)arg2;
- (id)listItemAtIndex:(int)arg1;
- (unsigned int)completeLength;
- (BOOL)multiple;
- (void)setDisabled:(BOOL)arg1;
- (BOOL)disabled;
- (id)value;
- (void)setValue:(id)arg1;
- (void)setSelectedIndex:(int)arg1;
- (int)selectedIndex;
- (void)setSize:(int)arg1;
- (int)size;
- (void)add:(id)arg1 :(id)arg2;
- (void)add:(id)arg1 before:(id)arg2;
- (id)selectedOptions;
- (void)setRequired:(BOOL)arg1;
- (BOOL)required;
- (void)setMultiple:(BOOL)arg1;
- (id)namedItem:(id)arg1;
- (void)setCustomValidity:(id)arg1;
- (BOOL)checkValidity;
- (id)labels;
- (id)validationMessage;
- (id)validity;
- (BOOL)willValidate;
- (void)setAutofocus:(BOOL)arg1;
- (BOOL)autofocus;
- (void)remove:(int)arg1;
- (id)createPeripheral;
- (BOOL)nodeCanBecomeFirstResponder;
- (BOOL)_supportsAutoFill;
- (BOOL)_requiresInputView;
- (BOOL)_requiresAccessoryView;
- (void)_stopAssistingDocumentView:(id)arg1;
- (void)_startAssistingDocumentView:(id)arg1;

@end
