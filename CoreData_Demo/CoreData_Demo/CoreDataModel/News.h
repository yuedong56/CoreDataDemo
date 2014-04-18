//
//  News.h
//  CoreData_Demo
//
//  Created by 老岳 on 14-4-18.
//  Copyright (c) 2014年 老岳. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface News : NSManagedObject

@property (nonatomic, retain) NSString * title;
@property (nonatomic, retain) NSString * newsid;
@property (nonatomic, retain) NSString * islook;
@property (nonatomic, retain) NSString * imgurl;
@property (nonatomic, retain) NSString * descr;

@end
