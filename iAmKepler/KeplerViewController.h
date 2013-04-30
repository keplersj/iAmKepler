//
//  KeplerViewController.h
//  iAmKepler
//
//  Created by Kepler Sticka-Jones on 4/29/13.
//  Copyright (c) 2013 Kepler Sticka-Jones. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KeplerViewController : UIViewController

@property (weak, nonatomic) IBOutlet UIButton *mainMenuButton;
- (IBAction)mainMenuButtonPush:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *fullNameText;
@property (weak, nonatomic) IBOutlet UILabel *userNameText;

@end
