//
//  ItemsViewController.h
//  HomePwner
//
//  Created by Austins Work on 9/18/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <UIKit/UIKit.h>
@class ItemStore;

@interface ItemsViewController : UITableViewController
@property (nonatomic) ItemStore *itemStore;
@end
