//
//  PathMasterViewController.h
//  PathImages
//
//  Created by Terrence Taylor on 11/7/13.
//  Copyright (c) 2013 Marcus Johnson. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PathDetailViewController;

#import <CoreData/CoreData.h>

@interface PathMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) PathDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
