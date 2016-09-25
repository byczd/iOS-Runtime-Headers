/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFTableColumnAlignment : NSObject <NSSecureCoding> {
    unsigned int  _columnAlignment;
    unsigned int  _dataAlignment;
    BOOL  _isEqualWidth;
}

@property unsigned int columnAlignment;
@property unsigned int dataAlignment;
@property BOOL isEqualWidth;

+ (BOOL)supportsSecureCoding;

- (unsigned int)columnAlignment;
- (unsigned int)dataAlignment;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualWidth;
- (void)setColumnAlignment:(unsigned int)arg1;
- (void)setDataAlignment:(unsigned int)arg1;
- (void)setIsEqualWidth:(BOOL)arg1;
- (int)textAlignment;

@end