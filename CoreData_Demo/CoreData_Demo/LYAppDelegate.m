//
//  LYAppDelegate.m
//  CoreData_Demo
//
//  Created by 老岳 on 14-4-17.
//  Copyright (c) 2014年 老岳. All rights reserved.
//

#import "LYAppDelegate.h"
#import "CoreDataManager.h"
#import "News.h"

@implementation LYAppDelegate

- (NSMutableArray *)resultArr
{
    NSMutableArray *resultArray = [NSMutableArray arrayWithCapacity:0];
    for (int i = 0; i <= 5; i++)
    {
        NSEntityDescription *entity = [NSEntityDescription entityForName:TableName inManagedObjectContext:self.coreManager.managedObjectContext];
        News *news = [[News alloc] initWithEntity:entity insertIntoManagedObjectContext:self.coreManager.managedObjectContext];//注意News类继承于NSManagedObject，不能用简单的alloc、init初始化
        news.title = [NSString stringWithFormat:@"名称%d",i];
        news.descr = [NSString stringWithFormat:@"描述%d",i];
        news.islook = @"0";
        news.newsid = [NSString stringWithFormat:@"100-%d",i];
        [resultArray addObject:news];
    }
    return resultArray;
}

#pragma mark - 程序入口

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    self.window = [[UIWindow alloc] initWithFrame:[[UIScreen mainScreen] bounds]];
    self.window.backgroundColor = [UIColor whiteColor];
    [self.window makeKeyAndVisible];
    
    self.coreManager = [[CoreDataManager alloc] init];
    

//    //增
    [self.coreManager insertCoreData:[self resultArr]];
    
//    //删
//    [self.coreManager deleteData];
    
//    //改
//    [self.coreManager updateData:@"100-0" withIsLook:@"已看过"];
    
//    //查
//    [self.coreManager selectData];
    
    return YES;
}

@end
