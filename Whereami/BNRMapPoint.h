//
//  BNRMapPoint.h
//  Whereami
//
//  Created by Alexander Auritt on 1/15/13.
//  Copyright (c) 2013 Alexander Auritt. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreLocation/CoreLocation.h>
#import <MapKit/MapKit.h>

@interface BNRMapPoint : NSObject<MKAnnotation>
{
}

- (id)initWithCoordinate:(CLLocationCoordinate2D)c description:(NSString *)des andDate:(NSDate *)d;

@property (nonatomic, readonly) CLLocationCoordinate2D coordinate;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSDate *date;

@end
