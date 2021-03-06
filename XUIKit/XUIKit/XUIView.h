//
//  XUIView.h
//  XUIKit
//
//  Created by Jovi on 6/11/17.
//  Copyright © 2017 Jovi. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "NSView+XUIAdditions.h"

@class XUIView;
typedef void(^XUIViewDrawRect)(XUIView *view, NSRect dirtyRect);
typedef void(^XUIHyperFocusCompletion)(BOOL cancelled);

@interface XUIView : NSView

/*
 Supply a block as an alternative to overriding -(void)drawRect
 */
- (void)setDrawRectBlock:(XUIViewDrawRect)drawRectBlock;
- (XUIViewDrawRect)drawRectBlock;

/*
 HyperFocus methods
 */
- (void)hyperFocus:(XUIView *)focusView completion:(XUIHyperFocusCompletion)completion;
- (void)endHyperFocus:(BOOL)cancel;

@end
