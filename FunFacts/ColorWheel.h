//
//  ColorWheel.h
//  FunFacts
//
//  Created by yaogang on 2017/2/4.
//  Copyright © 2017年 Treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ColorWheel : NSObject

@property (strong, nonatomic) NSArray *colors;

- (UIColor *)randomColor;

@end
