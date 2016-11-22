//
//  cellRepo.h
//  Github Repo
//
//  Created by Ali Dahesh on 2016-11-21.
//  Copyright © 2016 Ali Dahesh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface cellRepo : NSObject

@property (nonatomic) NSString *title;
@property (nonatomic) NSString *description;
@property (nonatomic) int priorityNum;
@property (nonatomic) BOOL isCompleted;

@end
