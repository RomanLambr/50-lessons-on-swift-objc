//
//  UIView+MKAnnotationView.h
//  MapTest2
//
//  Created by Руслан on 05.12.16.
//  Copyright © 2016 Ruslan Timchenko. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MKAnnotationView;

@interface UIView (MKAnnotationView)

- (MKAnnotationView *) superAnnotationView;

@end
