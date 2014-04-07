//
//  STCSpaceObject.h
//  Out of this World

#import <Foundation/Foundation.h>

@interface STCSpaceObject : NSObject

@property (strong, nonatomic)NSString *name;
@property (nonatomic)float gravitationalForce;
@property (nonatomic)float diameter;
@property (nonatomic)float yearLength;
@property (nonatomic)float dayLength;
@property (nonatomic)float temperature;
@property (nonatomic)int numberOfMoons;
@property (strong, nonatomic)NSString *nickname;
@property (strong, nonatomic)NSString *interestFact;

@property (strong, nonatomic)UIImage *spaceImage;

- (id)initWithData:(NSDictionary *)data andImage:(UIImage *)image;

@end
