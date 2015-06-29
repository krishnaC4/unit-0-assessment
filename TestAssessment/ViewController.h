//
//  ViewController.h
//  TestAssessment
//
//  Created by Michael Kavouras on 6/27/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface ViewController : UIViewController

- (NSInteger)shouldReturnAPositiveNSInteger;
- (CGFloat)shouldReturnANegativeCGFloat;
- (BOOL)shouldReturnAFalseyBool;
- (char)shouldReturnACharAtoZ;
- (int)shouldReturnSumOfArrayValues:(int *)arr withSize:(int)arrSize;
- (NSInteger)shouldReturnSumOf0To100;
- (NSInteger)sumOfAnInteger:(NSInteger)aNumber andAnotherInteger:(NSInteger)bNumber;
- (BOOL)isOdd:(NSInteger)number;
- (BOOL)isMultipleOfFive:(NSInteger)number;
- (NSString *)shouldReturnPersonsName:(Person *)person;
- (void)changePersonsNameToAdaLovelace:(Person *)person;
- (Person *)createAndReturnPersonWithSomeProperties;
- (void)makePersonSitInChair:(Chair *)chair;
- (void)makePersonStandUp:(Person *)person;
- (NSArray *)createAndReturnNSArray;
- (void)changeValueOfIndexFourInArray:(NSMutableArray *)arr toPersonsName:(Person *)person;
- (NSString *)repeatString:(NSString *)str numberOfTimes:(NSInteger)numberOfTimes;

@end

