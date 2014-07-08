/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@class NSString, CUIRenditionKey, NSObject<TDCustomAssetSource>, NSDate;

@interface TDCustomAssetImportInfo : NSObject  {
    CUIRenditionKey *_renditionKey;
    NSString *_elementName;
    NSString *_partName;
    NSObject<TDCustomAssetSource> *_customAsset;
    NSDate *_modificationDate;
    long long _renditionType;
    long long _resizingMode;
    long long _templateRenderingMode;
    NSString *_name;
    struct CGSize { 
        double width; 
        double height; 
    } _resizableSliceSize;
    struct { 
        double top; 
        double left; 
        double bottom; 
        double right; 
    } _sliceInsets;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    } _alignmentRect;
}

@property(copy) CUIRenditionKey * renditionKey;
@property(copy) NSString * elementName;
@property(copy) NSString * partName;
@property(retain) NSObject<TDCustomAssetSource> * customAsset;
@property(copy) NSDate * modificationDate;
@property struct { double x1; double x2; double x3; double x4; } sliceInsets;
@property long long renditionType;
@property long long resizingMode;
@property struct CGSize { double x1; double x2; } resizableSliceSize;
@property bool isTemplate;
@property long long templateRenderingMode;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } alignmentRect;
@property(copy) NSString * name;


- (void)setCustomAsset:(id)arg1;
- (void)setElementName:(id)arg1;
- (void)setRenditionKey:(id)arg1;
- (void)setResizableSliceSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSliceInsets:(struct { double x1; double x2; double x3; double x4; })arg1;
- (id)elementName;
- (id)customAsset;
- (void)setAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })resizableSliceSize;
- (struct { double x1; double x2; double x3; double x4; })sliceInsets;
- (long long)renditionSubtype;
- (void)setRenditionType:(long long)arg1;
- (void)setPartName:(id)arg1;
- (id)partName;
- (void)setModificationDate:(id)arg1;
- (void)setName:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })alignmentRect;
- (long long)resizingMode;
- (bool)isTemplate;
- (void)setIsTemplate:(bool)arg1;
- (long long)renditionType;
- (id)renditionKey;
- (long long)templateRenderingMode;
- (id)name;
- (void)dealloc;
- (id)modificationDate;
- (void)setResizingMode:(long long)arg1;
- (void)setTemplateRenderingMode:(long long)arg1;

@end