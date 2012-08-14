//
//  Isgl3dViewController.h
//  isgl3DYAVFoundation
//
//  Created by Pablo Flores Guridi on 12/05/12.
//  Copyright 2012 pablofloresguridi@gmail.com. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>
#import "HelloWorldView.h"
#import "processing.h"
#import "lsd.h"
#import "segments.h"
#import "marker.h"
#import "Composit.h"

@interface Isgl3dViewController : UIViewController <AVCaptureVideoDataOutputSampleBufferDelegate>{
    
}
@property (nonatomic) double* rotacion;
@property (nonatomic) double* traslacion;
@property (readwrite, retain) IBOutlet UIImageView* videoView;
@property (readwrite, retain) IBOutlet Isgl3dView* isgl3DView;

@end
