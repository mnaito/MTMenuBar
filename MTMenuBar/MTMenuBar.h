//
//  UIMenuBar.h
//  TesdXcodeUserGuideDemo
//
//  Created by xd.su on 13-2-19.
//  Copyright (c) 2013年 su xinde. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "MTMenuBarItem.h"

@class MTMenuBar;

@protocol MTMenuBarDelegate <NSObject>
@optional
- (void)menuBar:(MTMenuBar *)menuBar didSelectAtIndex:(int)index;

@end

@interface MTMenuBar : UIView <UIScrollViewDelegate>//,UIAppearance>
{
@private
    id<MTMenuBarDelegate>  __weak _delegate;
    NSMutableArray        *_items;
    MTMenuBarItem         *__weak _selectedItem;
    UIColor               *_tintColor;
    
    NSInteger              _pages;                  
    UIScrollView          *_containerView;          
    UIPageControl         *_pageControl;            
    NSMutableArray        *_containerScrollViews;
    CGSize                 _originalSize;
    CGSize                 _halfOriginalSize;
}

@property (nonatomic, weak) id<MTMenuBarDelegate> delegate;     // weak reference. default is nil
@property (nonatomic, copy)   NSMutableArray       *items;
@property (nonatomic, weak) MTMenuBarItem        *selectedItem; // will show feedback based on mode. default is nil
@property (nonatomic, strong) UIColor              *tintColor;    // Default is black.

- (id)initWithFrame:(CGRect)frame items:(NSArray *)items;
- (void)setItems:(NSMutableArray *)items;
- (void)show;  
- (void)dismiss; 

@end
