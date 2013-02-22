//
//  BNRMapPoint.m
//  Whereami
//
//  Created by Alexander Auritt on 1/15/13.
//  Copyright (c) 2013 Alexander Auritt. All rights reserved.
//

#import "BNRMapPoint.h"

@implementation BNRMapPoint

@synthesize coordinate, title, date, description;

- (id)initWithCoordinate:(CLLocationCoordinate2D)c description:(NSString *)des andDate:(NSDate *)d
{
    self = [super init];
    if (self) {
        coordinate = c;
        [self setDescription:des];
        [self setDate:d];
        
        
        NSDateFormatter *dateFormatter = [[NSDateFormatter alloc] init];
        [dateFormatter setDateFormat:@"MMM dd, yyyy HH:mm"];
        
        NSString *tagStart = [des stringByAppendingString:@": "];
        [self setTitle: [tagStart stringByAppendingString:[dateFormatter stringFromDate:d]]];
    }
    return self;
}

- (id)init
{
    return [self initWithCoordinate:CLLocationCoordinate2DMake(43.07, -89.32) description:@"Hometown" andDate:[NSDate date]];
}

@end
