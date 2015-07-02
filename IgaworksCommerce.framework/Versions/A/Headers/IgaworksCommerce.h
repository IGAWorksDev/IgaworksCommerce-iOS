//
//  IgaworksCommerce.h
//  IgaworksAd
//
//  Created by 강기태 on 2015. 6. 9..
//  Copyright (c) 2015년 wonje,song. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, IgaworksCommerceCurrencyType)
{
    IgaworksCommerceCurrencyKRW = 1,
    IgaworksCommerceCurrencyUSD = 2,
    IgaworksCommerceCurrencyJPY = 3,
    IgaworksCommerceCurrencyEUR = 4,
    IgaworksCommerceCurrencyGBP = 5,
    IgaworksCommerceCurrencyCHY = 6,
    IgaworksCommerceCurrencyTWD = 7,
    IgaworksCommerceCurrencyHKD = 8
};

@interface IgaworksCommerce : NSObject

/*!
 @abstract
 singleton IgaworksCommerce 객체를 반환한다.
 */
+ (instancetype)shared;

- (void)purchase:(NSString *)productId price:(double)price currencyString:(NSString *)currencyString category:(NSArray*)categories quantity:(NSUInteger)quantity productName:(NSString*)productName;

- (NSString *)currencyName:(NSUInteger)currency;

@end
