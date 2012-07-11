//
//  ViewController.h
//  PiecewiseAffineWarp
//
//  Created by DINA BURRI on 7/3/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "PiecewiseAffineWarp.h"

@interface ViewController : UIViewController < UIImagePickerControllerDelegate, UINavigationControllerDelegate > 
{
    IBOutlet UIImageView *imageView;
    IBOutlet UISegmentedControl *segControl;
    PiecewiseAffineWarp *PAW;
}

@property (retain) IBOutlet UIImageView *imageView;
@property (retain) IBOutlet UISegmentedControl *segControl;
@property (nonatomic, retain) PiecewiseAffineWarp *PAW;

- (IBAction)loadImageLibrary:(id)sender;
- (IBAction)loadImageCamera:(id)sender;
- (IBAction)selectImage:(id)sender;

- (void)setImageView;

@end
