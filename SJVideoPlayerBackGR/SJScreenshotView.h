//
//  SJScreenshotView.h
//  SJBackGR
//
//  Created by BlueDancer on 2017/9/27.
//  Copyright © 2017年 SanJiang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef NS_ENUM(NSUInteger, SJScreenshotTransitionMode) {
    SJScreenshotTransitionModeShifting,
};

@interface SJScreenshotView : UIView

@property (nonatomic) SJScreenshotTransitionMode transtitionMode;

@property (nonatomic, strong, readwrite, nullable) UIImage *image;

- (void)beginTransition;

- (void)transitioningWithOffset:(CGFloat)offset;

- (void)reset;

- (void)finishedTransition;

@end

NS_ASSUME_NONNULL_END
