//
//  PathDetailViewController.h
//  PathImages
//
//  Created by Terrence Taylor on 11/7/13.
//  Copyright (c) 2013 Marcus Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PathDetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
