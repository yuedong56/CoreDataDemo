//
//  CoreDataManager.h
//  CoreData_Demo
//
//  Created by 老岳 on 14-4-18.
//  Copyright (c) 2014年 老岳. All rights reserved.
//

//1、NSManagedObjectContext 管理对象，上下文，持久性存储模型对象
//2、NSManagedObjectModel 被管理的数据模型，数据结构
//3、NSPersistentStoreCoordinator 连接数据库的
//4、NSManagedObject 被管理的数据记录
//5、NSFetchRequest 数据请求
//6、NSEntityDescription 表格实体结构

#define TableName @"News"
#define SQLFileName @"NewsModel.sqlite"

#import <Foundation/Foundation.h>
#import "News.h"

@interface CoreDataManager : NSObject

/** 上下文对象(管理对象，上下文，持久性存储模型对象) */
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
/** 数据模型对象(被管理的数据模型，数据结构) */
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
/** 持久性存储区(连接数据库的) */
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;


/** 插入数据 */
- (void)insertCoreData:(NSMutableArray*)dataArray;
/** 查询 */
- (NSMutableArray*)selectData;
/** 删除 */
- (void)deleteData;
/** 更新 */
- (void)updateData:(NSString*)newsId withIsLook:(NSString*)islook;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
