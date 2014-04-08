//
//  STCSpaceDataViewController.h
//  Out of this World

#import <UIKit/UIKit.h>
#import "STCSpaceObject.h"

@interface STCSpaceDataViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (strong, nonatomic) IBOutlet UITableView *tableView;
@property (strong, nonatomic) STCSpaceObject *spaceObject;

@end
