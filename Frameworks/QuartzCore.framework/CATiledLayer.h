/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CATiledLayer : CALayer  {
}

@property struct CGColor { }* fillColor;
@property float maximumTileScale;
@property(getter=isDrawingEnabled) BOOL drawingEnabled;
@property unsigned int levelsOfDetail;
@property unsigned int levelsOfDetailBias;
@property struct CGSize { float width; float height; } tileSize;

+ (id)defaultValueForKey:(id)arg1;
+ (double)fadeDuration;
+ (BOOL)shouldDrawOnMainThread;
+ (unsigned int)prefetchedTiles;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)displayDisableFadeOptions;
+ (id)displayUncollectableOptions;

- (void)setContents:(id)arg1;
- (void)setLevelsOfDetail:(unsigned long)arg1;
- (void)setLevelsOfDetailBias:(unsigned long)arg1;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (struct CGColor { }*)fillColor;
- (struct CGSize { float x1; float x2; })tileSize;
- (void)setFillColor:(struct CGColor { }*)arg1;
- (void)setDrawingEnabled:(BOOL)arg1;
- (void)_display;
- (void)_dealloc;
- (void)setTileSize:(struct CGSize { float x1; float x2; })arg1;
- (void)invalidateContents;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didChangeValueForKey:(id)arg1;
- (void)dealloc;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)displayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (BOOL)queueIsEmpty;
- (void)setMaximumTileScale:(float)arg1;
- (BOOL)canDrawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (BOOL)isDrawingEnabled;
- (unsigned long)levelsOfDetail;
- (unsigned long)levelsOfDetailBias;
- (float)maximumTileScale;
- (BOOL)_canDisplayConcurrently;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2;
- (void)displayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;
- (void)setNeedsDisplayInMapRect:(struct { struct { double x_1_1_1; double x_1_1_2; } x1; struct { double x_2_1_1; double x_2_1_2; } x2; })arg1 levelOfDetail:(int)arg2 options:(id)arg3;

@end