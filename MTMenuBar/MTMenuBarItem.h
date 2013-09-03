//
//  UIMenuItem.h
//  TesdXcodeUserGuideDemo
//
//  Created by xd.su on 13-2-19.
//  Copyright (c) 2013年 su xinde. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_6_0
#define ALIGN_CENTER NSTextAlignmentCenter
#define LINEBREAK_TRUNC NSLineBreakByTruncatingTail
#else
#define ALIGN_CENTER UITextAlignmentCenter
#define LINEBREAK_TRUNC UILineBreakModeTailTruncation
#endif

@interface MTMenuBarItem : NSObject
{
    NSString    *_title;
    UIImage     *_image;
    id           _target;
    SEL          _action;
    UIControl   *_containView;
    UIImageView *_imageView;
    UILabel     *_titleLabel;
    CGFloat     _sizeValue;
}

@property (nonatomic) SEL action;
@property (nonatomic, strong, readonly) NSString *title;
@property (nonatomic, strong, readonly) UIImage *image;
@property (nonatomic, strong) UIControl *containView;
@property (nonatomic, readonly) CGFloat sizeValue;

- (id)initWithTitle:(NSString *)title
             target:(id)target
              image:(UIImage *)image
             action:(SEL)action;

@end
