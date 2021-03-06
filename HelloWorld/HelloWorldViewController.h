//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Onur Ak on 3/11/13.
//  Copyright (c) 2013 Onur Ak. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>

@property (copy, nonatomic) NSString *userName;

@property (weak, nonatomic) IBOutlet UILabel *label;

@property (weak, nonatomic) IBOutlet UITextField *textField;

- (IBAction)changeGreeting:(id)sender;

@end
