//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMPickerViewDelegate-Protocol.h"
#import "MMRegionPickerViewControllerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "settingModifySignDelegate-Protocol.h"

@class CUsrInfo, MMHeadImageView, MMLoadingView, MMPickerView, MMTableView, NSString;
@protocol EditBottleProfileDelegate;

@interface BottleProfileEditViewController : MMUIViewController <MMSightCameraViewControllerDelegate, MessageObserverDelegate, MMPickerViewDelegate, settingModifySignDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, MMRegionPickerViewControllerDelegate, MMImagePickerManagerDelegate>
{
    MMTableView *m_tableView;
    CUsrInfo *m_oUsrInfo;
    MMHeadImageView *m_headImage;
    MMPickerView *m_pickerView;
    unsigned int m_curPickerMode;
    MMLoadingView *m_loadingView;
    unsigned int m_uiUploadHeadEventID;
    _Bool m_bIsFirstIn;
    id <EditBottleProfileDelegate> m_delegate;
    map_490096f0 m_map;
}

@property(nonatomic) _Bool m_bIsFirstIn; // @synthesize m_bIsFirstIn;
@property(nonatomic) __weak id <EditBottleProfileDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CUsrInfo *m_oUsrInfo; // @synthesize m_oUsrInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)showModifySignView;
- (void)saveNewSign:(id)arg1;
- (void)showModifyAddressView;
- (void)showModifySexView:(id)arg1;
- (void)MMPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showChangeImg;
- (void)showImagePicker:(long long)arg1;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (id)getViewController;
- (void)handleImage:(id)arg1;
- (void)initLoadingView;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoading;
- (void)startLoading;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeSetDetailProfileCell:(id)arg1 row:(long long)arg2;
- (void)makeSetSignatureCell:(id)arg1;
- (int)getLinesForSignature:(id)arg1;
- (void)makeSetAddressCell:(id)arg1;
- (void)makeSetSexCell:(id)arg1;
- (void)makeSetHeadImageCell:(id)arg1;
- (void)updateHead:(id)arg1;
- (id)getSettingHeadImage;
- (void)makeCellInfoInternal:(id)arg1 col:(id)arg2 value:(id)arg3 mustFill:(_Bool)arg4;
- (id)makeMustFillLabel;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (id)init;
- (void)OnSave;
- (void)goToSandyBeach;
- (void)OnReturn;
- (void)OnPop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

