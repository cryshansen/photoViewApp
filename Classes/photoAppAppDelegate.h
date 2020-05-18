//
//  photoAppAppDelegate.h
//  photoApp
//
//  Created by Crystal Hansen on 11-02-06.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class photoAppViewController;

@interface photoAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    photoAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet photoAppViewController *viewController;

@end

