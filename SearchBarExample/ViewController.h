//
//  ViewController.h
//  SearchBarExample
//
//  Created by chaitanya on 05/10/16.
//  Copyright © 2016 chaitanya. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController<UITableViewDelegate,UITableViewDataSource,UISearchBarDelegate>

@property (weak, nonatomic) IBOutlet UITableView *MyTableView;

@property(strong, nonatomic)NSMutableArray *artistName;
@property(strong, nonatomic)NSMutableArray *artistID;
@property(strong, nonatomic)NSArray *artistsObject;
- (IBAction)Download:(id)sender;

@end

