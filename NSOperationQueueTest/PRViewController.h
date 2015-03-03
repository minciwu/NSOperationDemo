//
//  PRViewController.h
//  NSOperationQueueTest
//
//  Created by Prasen on 03/03/15.
//  Copyright (c) 2015 FafadiaTech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PRViewController : UIViewController
@property (retain, nonatomic) IBOutlet UILabel *label1;
@property (retain, nonatomic) IBOutlet UILabel *label2;
@property (retain, nonatomic) IBOutlet UILabel *label3;

- (IBAction)applyBackgroundColor1;
- (IBAction)applyBackgroundColor2;
- (IBAction)applyBackgroundColor3;

-(void)counterTask;
-(void)colorRotatorTask;
@end
