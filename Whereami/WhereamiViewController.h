//
//  WhereamiViewController.h
//  Whereami
//
//  Created by Alexander Auritt on 1/11/13.
//  Copyright (c) 2013 Alexander Auritt. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiViewController : UIViewController<CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}

@end
