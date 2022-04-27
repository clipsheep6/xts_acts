/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Text.ets?entry ***!
  \************************************************************************************************************/
// @ts-nocheck
var router = globalThis.requireNativeModule('system.router');
var paramInfo = router.getParams();
console.info("cd paramInfo" + JSON.stringify(paramInfo));
class text_textcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__textAlign = new ObservedPropertySimple(TextAlign.End, this, "textAlign");
        this.__lineHeight = new ObservedPropertySimple('15fp', this, "lineHeight");
        this.__overflow = new ObservedPropertySimple(TextOverflow.Ellipsis, this, "overflow");
        this.__textOverflow = new ObservedPropertyObject({ "overflow": this.overflow }, this, "textOverflow");
        this.__maxLines = new ObservedPropertySimple(2, this, "maxLines");
        this.__baselineOffset = new ObservedPropertySimple(0, this, "baselineOffset");
        this.__textCase = new ObservedPropertySimple(TextCase.Normal, this, "textCase");
        this.__decoration = new ObservedPropertyObject({ type: TextDecorationType.Underline, color: Color.Red }, this, "decoration");
        this.__color = new ObservedPropertySimple(Color.Red, this, "color");
        this.__width = new ObservedPropertySimple("200", this, "width");
        this.__height = new ObservedPropertySimple("100", this, "height");
        this.__size = new ObservedPropertyObject({ width: 200, height: 100 }, this, "size");
        this.__marginBottom = new ObservedPropertySimple("10px", this, "marginBottom");
        this.__marginTop = new ObservedPropertySimple("10px", this, "marginTop");
        this.__marginLeft = new ObservedPropertySimple("10px", this, "marginLeft");
        this.__marginRingt = new ObservedPropertySimple("10px", this, "marginRingt");
        this.__paddingBottom = new ObservedPropertySimple("5", this, "paddingBottom");
        this.__paddingTop = new ObservedPropertySimple("5", this, "paddingTop");
        this.__paddingLeft = new ObservedPropertySimple("5", this, "paddingLeft");
        this.__paddingRingt = new ObservedPropertySimple("5", this, "paddingRingt");
        this.__constraintSize = new ObservedPropertyObject({ minWidth: 20, maxWidth: 200, minHeight: 0, maxHeight: 50 }, this, "constraintSize");
        this.__layoutPriority = new ObservedPropertySimple("9px", this, "layoutPriority");
        this.__layoutWeight = new ObservedPropertySimple("10px", this, "layoutWeight");
        this.__align = new ObservedPropertySimple(Alignment.Center, this, "align");
        this.__direction = new ObservedPropertySimple(Direction.Auto, this, "direction");
        this.__position = new ObservedPropertyObject({ x: "50", y: "50" }, this, "position");
        this.__markAnchor = new ObservedPropertyObject({ x: "50", y: "50" }, this, "markAnchor");
        this.__offset = new ObservedPropertyObject({ x: "50", y: "50" }, this, "offset");
        this.__flexGrow = new ObservedPropertySimple(5, this, "flexGrow");
        this.__flexShrink = new ObservedPropertySimple(2, this, "flexShrink");
        this.__flexBasis = new ObservedPropertySimple(0, this, "flexBasis");
        this.__alignSelf = new ObservedPropertySimple(ItemAlign.Auto, this, "alignSelf");
        this.__borderStyle = new ObservedPropertySimple(BorderStyle.Dashed, this, "borderStyle");
        this.__borderRadius = new ObservedPropertySimple(10, this, "borderRadius");
        this.__borderWidth = new ObservedPropertySimple("4px", this, "borderWidth");
        this.__borderColor = new ObservedPropertySimple(Color.Blue, this, "borderColor");
        this.__backgroundColor = new ObservedPropertySimple(Color.Pink, this, "backgroundColor");
        this.__backgroundImageSize = new ObservedPropertySimple(ImageSize.Cover, this, "backgroundImageSize");
        this.__backgroundImagePosition = new ObservedPropertySimple(Alignment.Center, this, "backgroundImagePosition");
        this.__opacity = new ObservedPropertySimple(1, this, "opacity");
        this.__visibility = new ObservedPropertySimple(Visibility.Visible, this, "visibility");
        this.__enabled = new ObservedPropertySimple(false, this, "enabled");
        this.__zIndex = new ObservedPropertySimple(1, this, "zIndex");
        this.__fontStyle = new ObservedPropertySimple(FontStyle.Italic, this, "fontStyle");
        this.__fontSize = new ObservedPropertySimple(15, this, "fontSize");
        this.__minFontSize = new ObservedPropertySimple(15, this, "minFontSize");
        this.__maxFontSize = new ObservedPropertySimple(15, this, "maxFontSize");
        this.__letterSpacing = new ObservedPropertySimple(10, this, "letterSpacing");
        this.__fontWeight = new ObservedPropertySimple(FontWeight.Bold, this, "fontWeight");
        this.__fontColor = new ObservedPropertySimple(Color.Black, this, "fontColor");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.content = "Text Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.textAlign !== undefined) {
            this.textAlign = params.textAlign;
        }
        if (params.lineHeight !== undefined) {
            this.lineHeight = params.lineHeight;
        }
        if (params.overflow !== undefined) {
            this.overflow = params.overflow;
        }
        if (params.textOverflow !== undefined) {
            this.textOverflow = params.textOverflow;
        }
        if (params.maxLines !== undefined) {
            this.maxLines = params.maxLines;
        }
        if (params.baselineOffset !== undefined) {
            this.baselineOffset = params.baselineOffset;
        }
        if (params.textCase !== undefined) {
            this.textCase = params.textCase;
        }
        if (params.decoration !== undefined) {
            this.decoration = params.decoration;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.width !== undefined) {
            this.width = params.width;
        }
        if (params.height !== undefined) {
            this.height = params.height;
        }
        if (params.size !== undefined) {
            this.size = params.size;
        }
        if (params.marginBottom !== undefined) {
            this.marginBottom = params.marginBottom;
        }
        if (params.marginTop !== undefined) {
            this.marginTop = params.marginTop;
        }
        if (params.marginLeft !== undefined) {
            this.marginLeft = params.marginLeft;
        }
        if (params.marginRingt !== undefined) {
            this.marginRingt = params.marginRingt;
        }
        if (params.paddingBottom !== undefined) {
            this.paddingBottom = params.paddingBottom;
        }
        if (params.paddingTop !== undefined) {
            this.paddingTop = params.paddingTop;
        }
        if (params.paddingLeft !== undefined) {
            this.paddingLeft = params.paddingLeft;
        }
        if (params.paddingRingt !== undefined) {
            this.paddingRingt = params.paddingRingt;
        }
        if (params.constraintSize !== undefined) {
            this.constraintSize = params.constraintSize;
        }
        if (params.layoutPriority !== undefined) {
            this.layoutPriority = params.layoutPriority;
        }
        if (params.layoutWeight !== undefined) {
            this.layoutWeight = params.layoutWeight;
        }
        if (params.align !== undefined) {
            this.align = params.align;
        }
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.position !== undefined) {
            this.position = params.position;
        }
        if (params.markAnchor !== undefined) {
            this.markAnchor = params.markAnchor;
        }
        if (params.offset !== undefined) {
            this.offset = params.offset;
        }
        if (params.flexGrow !== undefined) {
            this.flexGrow = params.flexGrow;
        }
        if (params.flexShrink !== undefined) {
            this.flexShrink = params.flexShrink;
        }
        if (params.flexBasis !== undefined) {
            this.flexBasis = params.flexBasis;
        }
        if (params.alignSelf !== undefined) {
            this.alignSelf = params.alignSelf;
        }
        if (params.borderStyle !== undefined) {
            this.borderStyle = params.borderStyle;
        }
        if (params.borderRadius !== undefined) {
            this.borderRadius = params.borderRadius;
        }
        if (params.borderWidth !== undefined) {
            this.borderWidth = params.borderWidth;
        }
        if (params.borderColor !== undefined) {
            this.borderColor = params.borderColor;
        }
        if (params.backgroundColor !== undefined) {
            this.backgroundColor = params.backgroundColor;
        }
        if (params.backgroundImageSize !== undefined) {
            this.backgroundImageSize = params.backgroundImageSize;
        }
        if (params.backgroundImagePosition !== undefined) {
            this.backgroundImagePosition = params.backgroundImagePosition;
        }
        if (params.opacity !== undefined) {
            this.opacity = params.opacity;
        }
        if (params.visibility !== undefined) {
            this.visibility = params.visibility;
        }
        if (params.enabled !== undefined) {
            this.enabled = params.enabled;
        }
        if (params.zIndex !== undefined) {
            this.zIndex = params.zIndex;
        }
        if (params.fontStyle !== undefined) {
            this.fontStyle = params.fontStyle;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.minFontSize !== undefined) {
            this.minFontSize = params.minFontSize;
        }
        if (params.maxFontSize !== undefined) {
            this.maxFontSize = params.maxFontSize;
        }
        if (params.letterSpacing !== undefined) {
            this.letterSpacing = params.letterSpacing;
        }
        if (params.fontWeight !== undefined) {
            this.fontWeight = params.fontWeight;
        }
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__textAlign.aboutToBeDeleted();
        this.__lineHeight.aboutToBeDeleted();
        this.__overflow.aboutToBeDeleted();
        this.__textOverflow.aboutToBeDeleted();
        this.__maxLines.aboutToBeDeleted();
        this.__baselineOffset.aboutToBeDeleted();
        this.__textCase.aboutToBeDeleted();
        this.__decoration.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        this.__width.aboutToBeDeleted();
        this.__height.aboutToBeDeleted();
        this.__size.aboutToBeDeleted();
        this.__marginBottom.aboutToBeDeleted();
        this.__marginTop.aboutToBeDeleted();
        this.__marginLeft.aboutToBeDeleted();
        this.__marginRingt.aboutToBeDeleted();
        this.__paddingBottom.aboutToBeDeleted();
        this.__paddingTop.aboutToBeDeleted();
        this.__paddingLeft.aboutToBeDeleted();
        this.__paddingRingt.aboutToBeDeleted();
        this.__constraintSize.aboutToBeDeleted();
        this.__layoutPriority.aboutToBeDeleted();
        this.__layoutWeight.aboutToBeDeleted();
        this.__align.aboutToBeDeleted();
        this.__direction.aboutToBeDeleted();
        this.__position.aboutToBeDeleted();
        this.__markAnchor.aboutToBeDeleted();
        this.__offset.aboutToBeDeleted();
        this.__flexGrow.aboutToBeDeleted();
        this.__flexShrink.aboutToBeDeleted();
        this.__flexBasis.aboutToBeDeleted();
        this.__alignSelf.aboutToBeDeleted();
        this.__borderStyle.aboutToBeDeleted();
        this.__borderRadius.aboutToBeDeleted();
        this.__borderWidth.aboutToBeDeleted();
        this.__borderColor.aboutToBeDeleted();
        this.__backgroundColor.aboutToBeDeleted();
        this.__backgroundImageSize.aboutToBeDeleted();
        this.__backgroundImagePosition.aboutToBeDeleted();
        this.__opacity.aboutToBeDeleted();
        this.__visibility.aboutToBeDeleted();
        this.__enabled.aboutToBeDeleted();
        this.__zIndex.aboutToBeDeleted();
        this.__fontStyle.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__minFontSize.aboutToBeDeleted();
        this.__maxFontSize.aboutToBeDeleted();
        this.__letterSpacing.aboutToBeDeleted();
        this.__fontWeight.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get textAlign() {
        return this.__textAlign.get();
    }
    set textAlign(newValue) {
        this.__textAlign.set(newValue);
    }
    get lineHeight() {
        return this.__lineHeight.get();
    }
    set lineHeight(newValue) {
        this.__lineHeight.set(newValue);
    }
    get overflow() {
        return this.__overflow.get();
    }
    set overflow(newValue) {
        this.__overflow.set(newValue);
    }
    get textOverflow() {
        return this.__textOverflow.get();
    }
    set textOverflow(newValue) {
        this.__textOverflow.set(newValue);
    }
    get maxLines() {
        return this.__maxLines.get();
    }
    set maxLines(newValue) {
        this.__maxLines.set(newValue);
    }
    get baselineOffset() {
        return this.__baselineOffset.get();
    }
    set baselineOffset(newValue) {
        this.__baselineOffset.set(newValue);
    }
    get textCase() {
        return this.__textCase.get();
    }
    set textCase(newValue) {
        this.__textCase.set(newValue);
    }
    get decoration() {
        return this.__decoration.get();
    }
    set decoration(newValue) {
        this.__decoration.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    get width() {
        return this.__width.get();
    }
    set width(newValue) {
        this.__width.set(newValue);
    }
    get height() {
        return this.__height.get();
    }
    set height(newValue) {
        this.__height.set(newValue);
    }
    get size() {
        return this.__size.get();
    }
    set size(newValue) {
        this.__size.set(newValue);
    }
    get marginBottom() {
        return this.__marginBottom.get();
    }
    set marginBottom(newValue) {
        this.__marginBottom.set(newValue);
    }
    get marginTop() {
        return this.__marginTop.get();
    }
    set marginTop(newValue) {
        this.__marginTop.set(newValue);
    }
    get marginLeft() {
        return this.__marginLeft.get();
    }
    set marginLeft(newValue) {
        this.__marginLeft.set(newValue);
    }
    get marginRingt() {
        return this.__marginRingt.get();
    }
    set marginRingt(newValue) {
        this.__marginRingt.set(newValue);
    }
    get paddingBottom() {
        return this.__paddingBottom.get();
    }
    set paddingBottom(newValue) {
        this.__paddingBottom.set(newValue);
    }
    get paddingTop() {
        return this.__paddingTop.get();
    }
    set paddingTop(newValue) {
        this.__paddingTop.set(newValue);
    }
    get paddingLeft() {
        return this.__paddingLeft.get();
    }
    set paddingLeft(newValue) {
        this.__paddingLeft.set(newValue);
    }
    get paddingRingt() {
        return this.__paddingRingt.get();
    }
    set paddingRingt(newValue) {
        this.__paddingRingt.set(newValue);
    }
    get constraintSize() {
        return this.__constraintSize.get();
    }
    set constraintSize(newValue) {
        this.__constraintSize.set(newValue);
    }
    get layoutPriority() {
        return this.__layoutPriority.get();
    }
    set layoutPriority(newValue) {
        this.__layoutPriority.set(newValue);
    }
    get layoutWeight() {
        return this.__layoutWeight.get();
    }
    set layoutWeight(newValue) {
        this.__layoutWeight.set(newValue);
    }
    get align() {
        return this.__align.get();
    }
    set align(newValue) {
        this.__align.set(newValue);
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    get position() {
        return this.__position.get();
    }
    set position(newValue) {
        this.__position.set(newValue);
    }
    get markAnchor() {
        return this.__markAnchor.get();
    }
    set markAnchor(newValue) {
        this.__markAnchor.set(newValue);
    }
    get offset() {
        return this.__offset.get();
    }
    set offset(newValue) {
        this.__offset.set(newValue);
    }
    get flexGrow() {
        return this.__flexGrow.get();
    }
    set flexGrow(newValue) {
        this.__flexGrow.set(newValue);
    }
    get flexShrink() {
        return this.__flexShrink.get();
    }
    set flexShrink(newValue) {
        this.__flexShrink.set(newValue);
    }
    get flexBasis() {
        return this.__flexBasis.get();
    }
    set flexBasis(newValue) {
        this.__flexBasis.set(newValue);
    }
    get alignSelf() {
        return this.__alignSelf.get();
    }
    set alignSelf(newValue) {
        this.__alignSelf.set(newValue);
    }
    get borderStyle() {
        return this.__borderStyle.get();
    }
    set borderStyle(newValue) {
        this.__borderStyle.set(newValue);
    }
    get borderRadius() {
        return this.__borderRadius.get();
    }
    set borderRadius(newValue) {
        this.__borderRadius.set(newValue);
    }
    get borderWidth() {
        return this.__borderWidth.get();
    }
    set borderWidth(newValue) {
        this.__borderWidth.set(newValue);
    }
    get borderColor() {
        return this.__borderColor.get();
    }
    set borderColor(newValue) {
        this.__borderColor.set(newValue);
    }
    get backgroundColor() {
        return this.__backgroundColor.get();
    }
    set backgroundColor(newValue) {
        this.__backgroundColor.set(newValue);
    }
    get backgroundImageSize() {
        return this.__backgroundImageSize.get();
    }
    set backgroundImageSize(newValue) {
        this.__backgroundImageSize.set(newValue);
    }
    get backgroundImagePosition() {
        return this.__backgroundImagePosition.get();
    }
    set backgroundImagePosition(newValue) {
        this.__backgroundImagePosition.set(newValue);
    }
    get opacity() {
        return this.__opacity.get();
    }
    set opacity(newValue) {
        this.__opacity.set(newValue);
    }
    get visibility() {
        return this.__visibility.get();
    }
    set visibility(newValue) {
        this.__visibility.set(newValue);
    }
    get enabled() {
        return this.__enabled.get();
    }
    set enabled(newValue) {
        this.__enabled.set(newValue);
    }
    get zIndex() {
        return this.__zIndex.get();
    }
    set zIndex(newValue) {
        this.__zIndex.set(newValue);
    }
    get fontStyle() {
        return this.__fontStyle.get();
    }
    set fontStyle(newValue) {
        this.__fontStyle.set(newValue);
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get minFontSize() {
        return this.__minFontSize.get();
    }
    set minFontSize(newValue) {
        this.__minFontSize.set(newValue);
    }
    get maxFontSize() {
        return this.__maxFontSize.get();
    }
    set maxFontSize(newValue) {
        this.__maxFontSize.set(newValue);
    }
    get letterSpacing() {
        return this.__letterSpacing.get();
    }
    set letterSpacing(newValue) {
        this.__letterSpacing.set(newValue);
    }
    get fontWeight() {
        return this.__fontWeight.get();
    }
    set fontWeight(newValue) {
        this.__fontWeight.set(newValue);
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    onPageShow() {
        console.info('Text page show called');
    }
    onBuildDone() {
        console.info('Text page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test,Text Anto test,test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test');
        Text.width(this.width);
        Text.height(this.height);
        Text.padding({ bottom: this.paddingBottom, top: this.paddingTop, right: this.paddingRingt, left: this.paddingLeft });
        Text.margin({ bottom: this.marginBottom, top: this.marginTop, right: this.marginRingt, left: this.marginLeft });
        Text.constraintSize(ObservedObject.GetRawObject(this.constraintSize));
        Text.layoutWeight(this.layoutWeight);
        Text.align(this.align);
        Text.direction(this.direction);
        Text.position(ObservedObject.GetRawObject(this.position));
        Text.markAnchor(ObservedObject.GetRawObject(this.markAnchor));
        Text.offset(ObservedObject.GetRawObject(this.offset));
        Text.flexBasis(this.flexBasis);
        Text.flexGrow(this.flexGrow);
        Text.flexShrink(this.flexShrink);
        Text.alignSelf(this.alignSelf);
        Text.borderStyle(this.borderStyle);
        Text.borderRadius(this.borderRadius);
        Text.borderWidth(this.borderWidth);
        Text.borderColor(this.borderColor);
        Text.backgroundColor(this.backgroundColor);
        Text.opacity(this.opacity);
        Text.visibility(this.visibility);
        Text.enabled(this.enabled);
        Text.zIndex(this.zIndex);
        Text.fontColor(this.fontColor);
        Text.fontSize(this.fontSize);
        Text.minFontSize(this.minFontSize);
        Text.letterSpacing(this.letterSpacing);
        Text.maxFontSize(this.maxFontSize);
        Text.fontWeight(this.fontWeight);
        Text.fontStyle(this.fontStyle);
        Text.fontFamily("sans-serif");
        Text.textAlign(this.textAlign);
        Text.textOverflow(ObservedObject.GetRawObject(this.textOverflow));
        Text.lineHeight(this.lineHeight);
        Text.baselineOffset(this.baselineOffset);
        Text.maxLines(2);
        Text.textCase(this.textCase);
        Text.decoration(ObservedObject.GetRawObject(this.decoration));
        Text.aspectRatio(1);
        Text.fontColor(Color.Black);
        Text.key('Text');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test');
        Text.size({ width: 100, height: 50 });
        Text.padding({ bottom: 5, top: 5, right: 5, left: 10 });
        Text.margin({ bottom: 15, top: 10, right: 10, left: 10 });
        Text.fontSize('13');
        Text.textAlign(TextAlign.Start);
        Text.align(Alignment.Start);
        Text.direction(Direction.Ltr);
        Text.alignSelf(ItemAlign.Start);
        Text.borderStyle(BorderStyle.Dotted);
        Text.borderWidth(2);
        Text.visibility(Visibility.Hidden);
        Text.enabled(true);
        Text.fontWeight(FontWeight.Normal);
        Text.textAlign(TextAlign.Start);
        Text.textOverflow(TextOverflow.Clip);
        Text.maxLines(2);
        Text.textCase(TextCase.LowerCase);
        Text.decoration({ "type": TextDecorationType.LineThrough, "color": Color.Red });
        Text.fontColor(Color.White);
        Text.key('Text1');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.width('100%');
        Text.textAlign(TextAlign.Center);
        Text.align(Alignment.TopEnd);
        Text.direction(Direction.Rtl);
        Text.alignSelf(ItemAlign.Center);
        Text.borderStyle(BorderStyle.Solid);
        Text.borderWidth(2);
        Text.visibility(Visibility.None);
        Text.fontWeight(FontWeight.Bolder);
        Text.textAlign(TextAlign.Center);
        Text.textOverflow(TextOverflow.None);
        Text.textCase(TextCase.UpperCase);
        Text.decoration({ "type": TextDecorationType.None, "color": Color.Red });
        Text.fontColor(Color.Blue);
        Text.key('Text2');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.Top);
        Text.alignSelf(ItemAlign.End);
        Text.borderWidth(2);
        Text.width('100%');
        Text.fontWeight(FontWeight.Lighter);
        Text.decoration({ type: TextDecorationType.Overline, color: Color.Red });
        Text.fontColor(Color.Gray);
        Text.key('Text3');
        Text.pop();
        Text.create('Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.TopStart);
        Text.alignSelf(ItemAlign.Baseline);
        Text.borderWidth(2);
        Text.width('100%');
        Text.fontWeight(FontWeight.Medium);
        Text.fontColor(Color.Brown);
        Text.key('Text4');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.End);
        Text.alignSelf(ItemAlign.Stretch);
        Text.borderWidth(2);
        Text.width('100%');
        Text.fontWeight(FontWeight.Regular);
        Text.fontColor(Color.Grey);
        Text.key('Text5');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.BottomEnd);
        Text.width('100%');
        Text.fontColor(Color.Orange);
        Text.key('Text6');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.Bottom);
        Text.width('100%');
        Text.fontColor(Color.Yellow);
        Text.key('Text7');
        Text.pop();
        Text.create('Text Anto test,Text Anto test,Text Anto test');
        Text.fontSize(13);
        Text.align(Alignment.BottomStart);
        Text.width('100%');
        Text.key('Text8');
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new text_textcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Text.js.map