//
//  STCSpaceImageViewController.h
//  Out of this World

#import <UIKit/UIKit.h>
#import "STCSpaceObject.h"

@interface STCSpaceImageViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;
@property (strong, nonatomic) STCSpaceObject *spaceObject;

@end
