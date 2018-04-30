//
//  ViewController.h
//  MyFirstApp
//
//  Created by SBT on 30/04/2018.
//  Copyright © 2018 SBT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)ActionButton:(id)sender;
@property (weak, nonatomic) IBOutlet UILabel *Label;
- (IBAction)segmentControl:(id)sender;
@property (weak, nonatomic) IBOutlet UISegmentedControl *segmentOutlet;

- (IBAction)ManualButton:(id)sender;
@end

