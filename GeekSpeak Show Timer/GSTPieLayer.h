#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

@interface GSTPieLayer : CALayer


@property (nonatomic) CGFloat startAngle;
@property (nonatomic) CGFloat endAngle;

@property (nonatomic) BOOL clipToCircle;
@property (nonatomic, strong) UIColor *fillColor;
@end
