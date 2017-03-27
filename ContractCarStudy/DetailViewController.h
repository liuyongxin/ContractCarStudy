//
//  DetailViewController.h
//  ContractCarStudy
//
//  Created by DZH_Louis on 2017/3/24.
//  Copyright © 2017年 DZH_Louis. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ContractCarStudy+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

