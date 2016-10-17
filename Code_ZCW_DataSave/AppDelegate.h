//
//  AppDelegate.h
//  Code_ZCW_DataSave
//
//  Created by 张朝伟 on 2016/10/17.
//  Copyright © 2016年 张朝伟. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

