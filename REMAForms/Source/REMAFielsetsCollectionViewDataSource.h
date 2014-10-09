//
//  REMAFielsetsCollectionViewDataSource.h

//
//  Created by Elvis Nunez on 10/6/14.
//  Copyright (c) 2014 Hyper. All rights reserved.
//

@import Foundation;
@import UIKit;

#import "REMAFielsetsLayout.h"

#import "REMABaseFormFieldCell.h"
#import "REMAFieldsetHeaderView.h"

#import "REMAFormField.h"
#import "REMAFieldset.h"

typedef void (^REMAFieldConfigureCellBlock)(id cell, NSIndexPath *indexPath, REMAFormField *field);
typedef void (^REMAFieldConfigureHeaderViewBlock)(REMAFieldsetHeaderView *headerView, NSString *kind, NSIndexPath *indexPath, REMAFieldset *fieldset);

@interface REMAFielsetsCollectionViewDataSource : NSObject <REMAFielsetsLayoutDataSource, UICollectionViewDataSource>

- (instancetype)initWithCollectionView:(UICollectionView *)collectionView;

@property (nonatomic, strong) NSArray *fieldsets;
@property (nonatomic, strong) NSMutableArray *collapsedFieldsets;

@property (nonatomic, copy) REMAFieldConfigureCellBlock configureCellBlock;
@property (nonatomic, copy) REMAFieldConfigureHeaderViewBlock configureHeaderViewBlock;

- (void)collapseFieldsInSection:(NSInteger)section collectionView:(UICollectionView *)collectionView;
- (CGSize)sizeForItemAtIndexPath:(NSIndexPath *)indexPath;

@end