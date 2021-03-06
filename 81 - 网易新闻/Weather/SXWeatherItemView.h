//
//  PG_MainViewController.m
//  1031
//
//  Created by pangang on 15/10/31.
//  Copyright © 2015年 pangang. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SXWeatherItemView : UIView
@property (weak, nonatomic) IBOutlet UILabel *titleLbl;
@property (weak, nonatomic) IBOutlet UILabel *tLbl;
@property (weak, nonatomic) IBOutlet UILabel *weatherLbl;
@property (weak, nonatomic) IBOutlet UILabel *windLbl;
@property (weak, nonatomic) IBOutlet UIImageView *weatherImg;
@property(nonatomic,copy)NSString *weather;
+ (instancetype)view;
@end
