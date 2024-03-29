//
//  PNavigationDelegateIml.h
//  ImageBrowser
//
//  Created by yimin on 2018/6/30.
//  Copyright © 2018年 hongyimin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PTransitionAnimation;

@interface PNavigationDelegateImpl : NSObject <UINavigationControllerDelegate>

@property (nonatomic, strong) PTransitionAnimation *animator;

@end
