#import <Foundation/Foundation.h>






@protocol LightFormStyle <NSObject>

@required

@property(nonatomic, retain) NSString *title;

@optional

@property(nonatomic, retain) UIColor *borderColor;
@property(nonatomic, retain) UIColor *selectedBorderColor;
@property(nonatomic) NSUInteger borderWidth;
@property(nonatomic) NSUInteger selectedBorderWidth;
@property(nonatomic) float borderOpacity;
@property(nonatomic) float selectedBorderOpacity;
@property(nonatomic, retain) UIColor *errorColor;
@property(nonatomic, retain) UIFont *errorFont;
@property(nonatomic, retain) UIFont *titleFont;
@property(nonatomic, retain) UIColor *titleColor;
@property(nonatomic, retain) UIFont *placeholderFont;
@property(nonatomic, retain) UIColor *placeholderColor;
@property(nonatomic, retain) UIImage *accessoryImage;
@property(nonatomic) UIKeyboardType keyboardType;
@property(nonatomic) UITextAutocorrectionType autocorrectionType;
@property(nonatomic) UIReturnKeyType returnKeyType;

@end

@interface LightFormInternalStyles : NSObject

+(UIColor *)UIColorFromHex:(NSUInteger)rgbValue alpha:(float)alpha;

+ (UIColor *)borderColor;

+ (UIColor *)selectedBorderColor;

+ (NSUInteger)borderWidth;

+ (NSUInteger)selectedBorderWidth;

+ (float)borderOpacity;

+ (float)selectedBorderOpacity;

+ (UIColor *)errorColor;

+ (UIFont *)errorFont;

+ (UIColor *)titleColor;

+ (UIFont *)titleFont;

+ (UIColor *)placeholderColor;

+ (UIFont *)placeholderFont;


+ (UIKeyboardType)keyboardType;

+ (UITextAutocorrectionType)autocorrectionType;

+ (UIReturnKeyType)returnKeyType;


@end

@interface LightFormDefaultStyle : NSObject <LightFormStyle>

@property(nonatomic, retain) NSString *title;
@property(nonatomic, retain) UIColor *borderColor;
@property(nonatomic, retain) UIColor *selectedBorderColor;
@property(nonatomic) NSUInteger borderWidth;
@property(nonatomic) NSUInteger selectedBorderWidth;
@property(nonatomic) float borderOpacity;
@property(nonatomic) float selectedBorderOpacity;
@property(nonatomic, retain) UIColor *errorColor;
@property(nonatomic, retain) UIFont *errorFont;
@property(nonatomic, retain) UIFont *titleFont;
@property(nonatomic, retain) UIColor *titleColor;
@property(nonatomic, retain) UIFont *placeholderFont;
@property(nonatomic, retain) UIColor *placeholderColor;
@property(nonatomic, retain) UIImage *accessoryImage;
@property(nonatomic) UIKeyboardType keyboardType;
@property(nonatomic) UITextAutocorrectionType autocorrectionType;
@property(nonatomic) UIReturnKeyType returnKeyType;

@end


