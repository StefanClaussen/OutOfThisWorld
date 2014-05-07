//
//  STCAddSpaceObjectViewController.h
//  Out of this World

#import <UIKit/UIKit.h>
#import "STCSpaceObject.h"

@protocol STCAddSpaceObjectViewControllerDelegate <NSObject>

@required

-(void)addSpaceObject:(STCSpaceObject *)spaceObject;
-(void)didCancel;

@end

@interface STCAddSpaceObjectViewController : UIViewController

@property (weak, nonatomic) id <STCAddSpaceObjectViewControllerDelegate>delegate;

@property (strong, nonatomic) IBOutlet UITextField *nameTextField;
@property (strong, nonatomic) IBOutlet UITextField *nicknameTextField;
@property (strong, nonatomic) IBOutlet UITextField *diameterTextField;
@property (strong, nonatomic) IBOutlet UITextField *temperatureTextField;
@property (strong, nonatomic) IBOutlet UITextField *numberOfMoonsTextField;
@property (strong, nonatomic) IBOutlet UITextField *interestingFactTextField;

- (IBAction)cancelButtonPressed:(UIButton *)sender;
- (IBAction)addButtonPressed:(UIButton *)sender;

@end
