/************************************************************
  *  * Hyphenate CONFIDENTIAL 
  * __________________ 
  * Copyright (C) 2016 Hyphenate Inc. All rights reserved. 
  *  
  * NOTICE: All information contained herein is, and remains 
  * the property of Hyphenate Inc.
  * Dissemination of this information or reproduction of this material 
  * is strictly forbidden unless prior written permission is obtained
  * from Hyphenate Inc.
  */

#import <UIKit/UIKit.h>

/**
 *  群组成员类型
 *  Type of Group Occupant
 */
typedef enum{
    GroupOccupantTypeOwner,//创建者,owner
    GroupOccupantTypeMember,//成员,member
}GroupOccupantType;

@interface ChatGroupDetailViewController : UITableViewController

- (instancetype)initWithGroup:(EMGroup *)chatGroup;

- (instancetype)initWithGroupId:(NSString *)chatGroupId;

@end