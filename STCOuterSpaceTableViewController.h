//
//  STCOuterSpaceTableViewController.h
//  Out of this World

#import <UIKit/UIKit.h>
#import "STCSpaceObject.h"
#import "STCAddSpaceObjectViewController.h"

@interface STCOuterSpaceTableViewController : UITableViewController <STCAddSpaceObjectViewControllerDelegate>

@property (strong, nonatomic) NSMutableArray *planets;
@property (strong, nonatomic) NSMutableArray *addedSpaceObjects;

@end
