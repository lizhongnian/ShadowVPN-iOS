//
// Created by clowwindy on 6/6/13.
// Copyright (c) 2013 clowwindy. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <UIKit/UIKit.h>

typedef void (^SimpleTableViewSourceSelectionBlock)(NSObject *value);

@interface SimpleTableViewController : UITableViewController

-(id)initWithLabels:(NSArray *)labels values:(NSArray *)values initialValue:(NSObject *)value selectionBlock:(SimpleTableViewSourceSelectionBlock)block;

@end