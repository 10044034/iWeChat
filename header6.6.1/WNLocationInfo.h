//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WNLocationInfo : NSObject
{
    double lat;
    double lng;
    double scale;
    NSString *address;
    NSString *poiName;
}

@property(retain, nonatomic) NSString *poiName; // @synthesize poiName;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) double scale; // @synthesize scale;
@property(nonatomic) double lng; // @synthesize lng;
@property(nonatomic) double lat; // @synthesize lat;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
