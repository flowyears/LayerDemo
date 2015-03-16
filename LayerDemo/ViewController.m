//
//  ViewController.m
//  LayerDemo
//
//  Created by 沈佳雄 on 15/3/4.
//  Copyright (c) 2015年 shenjx. All rights reserved.
//

#import "ViewController.h"
#import "UtilsMacro.h"
@interface ViewController ()

@end

@implementation ViewController
#pragma mark - life cycle
- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = ColorWithRGB(237, 237, 237);
    [self addUI];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
#pragma mark - UI
- (void)addUI
{
    float scale = [[UIScreen mainScreen] scale];//得到设备的分辨率
    NSLog(@"==%f",scale);
    UIImage *image = [UIImage imageNamed:@"1"];

    UIView *view1 = [[UIView alloc] init];
    view1.backgroundColor = [UIColor yellowColor];
    view1.contentMode = UIViewContentModeScaleAspectFill;
    view1.layer.contentsGravity = kCAGravityResizeAspect;
    view1.layer.contentsScale = [UIScreen mainScreen].scale;
    view1.layer.contents = (__bridge id)(image.CGImage);
    //view1.layer.contentsRect = KDFrame(0, 0, 1, 1);
    view1.layer.contentsCenter = CGRectMake(0.25, 0.25, 0.5, 0.5);
    view1.layer.masksToBounds = YES;
    view1.layer.timeOffset = 0.8;
    [self.view addSubview:view1];
    
    [view1 makeConstraints:^(MASConstraintMaker *make) {
        make.width.equalTo(200);
        make.height.equalTo(200);
        //make.center.equalTo(view1.superview.center);
        make.centerX.equalTo(view1.superview.centerX);
        make.centerY.equalTo(view1.superview.centerY);
    }];
    
//    CALayer *blueLayer = [CALayer layer];
//    blueLayer.frame = CGRectMake(50.0f, 50.0f, 100.0f, 100.0f);
//    blueLayer.backgroundColor = [UIColor blueColor].CGColor;
//    [view1.layer addSublayer:blueLayer];
    
}
@end
