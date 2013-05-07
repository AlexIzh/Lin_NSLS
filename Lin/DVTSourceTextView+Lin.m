//
//  DVTSourceTextView+Lin.m
//  Lin
//
//  Created by alexandr on 4/27/13.
//  Copyright (c) 2013 Katsuma Tanaka. All rights reserved.
//

#import "DVTSourceTextView+Lin.h"
#import "PopoverContentView.h"

@implementation DVTSourceTextView (Lin)

- (void)keyDown:(NSEvent*)theEvent
{
    BOOL isLinKeys = (theEvent.keyCode == 126) || (theEvent.keyCode == 125) || (theEvent.keyCode == 36) || (theEvent.keyCode == 48);
    BOOL linShowed = [[self nextResponder] isKindOfClass:[PopoverContentView class]];
    if (isLinKeys && linShowed) {
        [[self nextResponder] keyDown:theEvent];
    } else {
        [super keyDown:theEvent];
    }
}

@end
