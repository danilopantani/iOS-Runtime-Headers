/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class CNFRegController;

@interface CNFRegListController : PSListController <CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener> {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _appearBlock;

    BOOL _appeared;
    BOOL _showingChildController;
    BOOL _shouldRerootPreferences;
    CNFRegController *_regController;
}

@property(readonly) int currentAppearanceStyle;
@property(retain) CNFRegController * regController;
@property(copy) id appearBlock;
@property BOOL showingChildController;
@property BOOL shouldRerootPreferences;
@property(readonly) BOOL appeared;


- (BOOL)appeared;
- (void)_setupEventHandlers;
- (void)_setLabel:(id)arg1 forSpecifier:(id)arg2 header:(BOOL)arg3;
- (int)currentAppearanceStyle;
- (void)_setFieldsEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)_setSpecifierEnabled:(id)arg1 enabled:(BOOL)arg2 animated:(BOOL)arg3;
- (BOOL)_showWiFiAlertIfNecessary;
- (BOOL)shouldSelectResponderOnAppearance;
- (id)initWithParentController:(id)arg1;
- (void)_updateTableLabel:(id)arg1 withTableView:(id)arg2 isTopMostHeader:(BOOL)arg3;
- (id)_existingLabelForSection:(int)arg1 header:(BOOL)arg2;
- (void)_updateExistingLabelForSpecifier:(id)arg1 header:(BOOL)arg2;
- (id)_existingLabelForSpecifier:(id)arg1 header:(BOOL)arg2;
- (BOOL)showingChildController;
- (void)handleURL:(id)arg1;
- (BOOL)_handleURLDictionary:(id)arg1;
- (void)setShouldRerootPreferences:(BOOL)arg1;
- (BOOL)shouldRerootPreferences;
- (void)setShowingChildController:(BOOL)arg1;
- (BOOL)wantsWiFiChooser;
- (void)setAppearBlock:(id)arg1;
- (id)appearBlock;
- (void)_performAppearBlock;
- (id)logName;
- (id)customTitle;
- (id)specifiers;
- (id)specifierList;
- (id)initWithRegController:(id)arg1;
- (void)removeAllHandlers;
- (void)setRegController:(id)arg1;
- (void)authorizationController:(id)arg1 authorizedAccount:(BOOL)arg2;
- (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;
- (void)changePasswordControllerDidCancel:(id)arg1;
- (id)regController;
- (void)dealloc;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)applicationDidResume;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillResignActive;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)_updateTitle;
- (void)setSpecifier:(id)arg1;

@end
