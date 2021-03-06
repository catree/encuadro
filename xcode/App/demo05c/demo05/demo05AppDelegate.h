//
//  demo05AppDelegate.h
//  demo05
//
//  Created by Pablo Flores Guridi on 17/07/12.
//  Copyright 2012 pablofloresguridi@gmail.com. All rights reserved.
//

#import "claseDibujar.h"
#import "simple.h"
#import "VistaViewController.h"

@class Isgl3dViewController;

@interface demo05AppDelegate : NSObject <UIApplicationDelegate> {
    
@private
	Isgl3dViewController * _viewController;
    VistaViewController *_vistaController;
	UIWindow * _window;
}

@property (nonatomic, retain) UIWindow * window;
@property (nonatomic, retain) Isgl3dViewController * viewController;
@property (nonatomic, retain) VistaViewController * vistaController;
- (void) createViews ;
- (void) switchViews;

@end

