//scroll view: https://www.youtube.com/watch?v=mUHUaj_wuPM
//  ViewController.h
//  Json
//
//  Created by Matt on 6/21/14.
//  Copyright (c) 2014 RWS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DetailViewController.h"

@interface ViewController : UIViewController <UITextFieldDelegate>

- (IBAction)showJson:(id)sender;

@property (weak, nonatomic) IBOutlet UITextField *txtFieldEmail;
@property (weak, nonatomic) IBOutlet UITextField *txtFieldPassword;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activityIndicator;
@property (weak, nonatomic) IBOutlet UIButton *btnOutletJson;
@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;


@end
