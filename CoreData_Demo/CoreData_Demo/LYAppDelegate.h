//
//  LYAppDelegate.h
//  CoreData_Demo
//
//  Created by 老岳 on 14-4-17.
//  Copyright (c) 2014年 老岳. All rights reserved.
//
//  学习文档：http://weibo.com/1905373741/B0aFknwNS

#import <UIKit/UIKit.h>
#import "CoreDataManager.h"

@interface LYAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) CoreDataManager *coreManager;


@end
