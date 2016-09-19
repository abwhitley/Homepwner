//
//  ItemStore.h
//  HomePwner
//
//  Created by Austins Work on 9/18/16.
//  Copyright © 2016 AustinsIronYard. All rights reserved.
//

#import <Foundation/Foundation.h>
@class Item;

@interface ItemStore : NSObject
- (NSArray *)allItems;
- (Item *)createItem;
- (void)removeItem:(Item *)item;
- (void)moveItemAtIndex:(NSUInteger)oldIndex
                toIndex:(NSUInteger)newIndex;

@end
