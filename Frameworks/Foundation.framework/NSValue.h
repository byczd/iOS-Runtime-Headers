/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface NSValue : NSObject <NSCopying, NSCoding> {
}

+ (id)value:(const void*)arg1 withObjCType:(const char *)arg2;
+ (id)valueWithSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithPointer:(const void*)arg1;
+ (id)valueWithPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
+ (id)valueWithNonretainedObject:(id)arg1;
+ (id)valueWithRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (void)initialize;
+ (id)valueWithBytes:(const void*)arg1 objCType:(const char *)arg2;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)valueWithCATransform3D:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithCAPoint3D:(struct CAPoint3D { float x1; float x2; float x3; })arg1;
+ (id)_web_valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithUIOffset:(struct UIOffset { float x1; float x2; })arg1;
+ (id)valueWithUIEdgeInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
+ (id)valueWithCGAffineTransform:(struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
+ (id)valueWithDDRange:(struct _DDRange { unsigned long long x1; unsigned long long x2; })arg1;
+ (id)valueWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
+ (id)valueWithCMTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
+ (id)valueWithCMTimeMapping:(struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })arg1;
+ (id)valueWithML3NameOrder:(struct { long long x1; int x2; })arg1;
+ (id)valueWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
+ (id)valueWithCGSize:(struct CGSize { float x1; float x2; })arg1;
+ (id)valueWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

- (id)initWithBytes:(const void*)arg1 objCType:(const char *)arg2;
- (void*)pointerValue;
- (struct CGPoint { float x1; float x2; })pointValue;
- (BOOL)isEqualToValue:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })rangeValue;
- (struct CGSize { float x1; float x2; })sizeValue;
- (Class)classForCoder;
- (id)nonretainedObjectValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectValue;
- (void)getValue:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isNSValue__;
- (const char *)objCType;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })CATransform3DValue;
- (struct CAPoint3D { float x1; float x2; float x3; })CAPoint3DValue;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (id)CA_addValue:(id)arg1 multipliedBy:(int)arg2;
- (id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2;
- (float)CA_distanceToValue:(id)arg1;
- (id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const struct ValueInterpolator { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; boolx10; }*)arg4;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })CGRectValue;
- (struct UIOffset { float x1; float x2; })UIOffsetValue;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })UIEdgeInsetsValue;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })CGAffineTransformValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })CGRectValue;
- (struct CGPoint { float x1; float x2; })CGPointValue;
- (struct CGSize { float x1; float x2; })CGSizeValue;
- (int)ddrangeCompare:(id)arg1;
- (struct _DDRange { unsigned long long x1; unsigned long long x2; })ddrangeValue;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })CMTimeValue;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })CMTimeRangeValue;
- (struct { struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_1_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_1_1_2; } x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; })CMTimeMappingValue;
- (struct { long long x1; int x2; })ML3NameOrderValue;
- (struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })MKMapRectValue;
- (id)_mapkit_initWithMKMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; })_mapkit_zoomRegionValue;
- (id)_mapkit_initWithZoomRegion:(struct { int x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)_mapkit_initWithCGRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })CADoubleRectValue;
- (id)_mapkit_initWithCADoubleRect:(struct CADoubleRect { struct CADoublePoint { double x_1_1_1; double x_1_1_2; } x1; struct CADoubleSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CADoublePoint { double x1; double x2; })CADoublePointValue;
- (id)_mapkit_initWithCADoublePoint:(struct CADoublePoint { double x1; double x2; })arg1;
- (id)_mapkit_initWithCGPoint:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })cgPointValue;
- (struct CGSize { float x1; float x2; })cgSizeValue;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })cgRectValue;

@end