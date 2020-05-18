//
//  photoAppViewController.h
//  photoApp
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface photoAppViewController : UIViewController < UIImagePickerControllerDelegate, UINavigationControllerDelegate>   
{
	UIImageView *imageView;
	UIButton *choosePhotoBtn;
	UIButton *takePhotoBtn;
}
@property (nonatomic, retain) IBOutlet UIImageView *imageView;
@property (nonatomic, retain) IBOutlet UIButton *choosePhotoBtn;
@property (nonatomic, retain) IBOutlet UIButton *takePhotoBtn;

-(IBAction) getPhoto:(id) sender;

@end

