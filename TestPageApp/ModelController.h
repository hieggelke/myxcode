//
//  ModelController.h
//  TestPageApp
//
//  Created by Justin Hieggelke on 7/2/14.
//  Copyright (c) 2014 ___JUSTINHIEGGELKE___. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end
