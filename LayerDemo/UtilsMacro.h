//
//  UtilsMacro.h
//  LayerDemo
//
//  Created by 沈佳雄 on 15/3/5.
//  Copyright (c) 2015年 shenjx. All rights reserved.
//

#ifndef LayerDemo_UtilsMacro_h
#define LayerDemo_UtilsMacro_h


#endif
//UtilsMacro.h 里放的是一些方便使用的宏定义

// ☆ ★
//获取屏幕尺寸
#define SCREEN_SIZE_WIDTH         [[UIScreen mainScreen] bounds].size.width
#define SCREEN_SIZE_HEIGHT        [[UIScreen mainScreen] bounds].size.height
#define ColorWithRGB(R,G,B)       [UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:1.0]
#define ColorWithRGBA(R,G,B,A)       [UIColor colorWithRed:(R)/255.0f green:(G)/255.0f blue:(B)/255.0f alpha:A]

#define KDFrame(x,y,w,h)  CGRectMake((x), (y), (w), (h))
#define KDSize(w,h) CGSizeMake((w),(h))

//单行文本size
#define MB_TEXTSIZE(text, font) [text length] > 0 ? [text \
sizeWithAttributes:@{NSFontAttributeName:font}] : CGSizeZero;
//多行文本size
#define MULTILINE_TEXTSIZE(text, font, maxSize, mode) [text length] > 0 ? [text \
boundingRectWithSize:maxSize options:(NSStringDrawingUsesLineFragmentOrigin) \
attributes:@{NSFontAttributeName:font} context:nil].size : CGSizeZero;

#define SHAREDAPP               [UIApplication sharedApplication]

#define DEVICE_OS_VERSION       [UIDevice currentDevice].systemVersion.floatValue
#define systemOlderThan(f)        [[[UIDevice currentDevice] systemVersion] floatValue] < f
#define systemNewerThan(f)        [[[UIDevice currentDevice] systemVersion] floatValue] >= f




#define AtoZ @[@"A",@"B",@"C",@"D",@"E",@"F",@"G",\
@"H",@"I",@"J",@"K",@"L",@"M",@"N",\
@"O",@"P",@"Q",@"R",@"S",@"T",@"U",@"V",@"W",@"X",@"Y",@"Z"]

#define AtoOhter @[@"A",@"B",@"C",@"D",@"E",@"F",@"G",\
@"H",@"I",@"J",@"K",@"L",@"M",@"N",\
@"O",@"P",@"Q",@"R",@"S",@"T",@"U",@"V",@"W",@"X",@"Y",@"Z",@"#"]

#define OhterToZ @[@"#",@"A",@"B",@"C",@"D",@"E",@"F",@"G",\
@"H",@"I",@"J",@"K",@"L",@"M",@"N",\
@"O",@"P",@"Q",@"R",@"S",@"T",@"U",@"V",@"W",@"X",@"Y",@"Z"]

#define NullFilter(str)  ([str isKindOfClass:[NSNull class]]||str == nil) ? @"" : str