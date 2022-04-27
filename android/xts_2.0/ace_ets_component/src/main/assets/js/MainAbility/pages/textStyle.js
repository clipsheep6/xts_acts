/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\textStyle.ets?entry ***!
  \**************************************************************************************************************************/
class TextStyle extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__fontColor = new ObservedPropertySimple(Color.Red, this, "fontColor");
        this.__fontSize = new ObservedPropertySimple(20, this, "fontSize");
        this.__fontStyle = new ObservedPropertySimple(FontStyle.Italic, this, "fontStyle");
        this.__fontWeight = new ObservedPropertySimple(700, this, "fontWeight");
        this.__fontFamily = new ObservedPropertySimple('sans-serif', this, "fontFamily");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.fontStyle !== undefined) {
            this.fontStyle = params.fontStyle;
        }
        if (params.fontWeight !== undefined) {
            this.fontWeight = params.fontWeight;
        }
        if (params.fontFamily !== undefined) {
            this.fontFamily = params.fontFamily;
        }
    }
    aboutToBeDeleted() {
        this.__fontColor.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__fontStyle.aboutToBeDeleted();
        this.__fontWeight.aboutToBeDeleted();
        this.__fontFamily.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get fontStyle() {
        return this.__fontStyle.get();
    }
    set fontStyle(newValue) {
        this.__fontStyle.set(newValue);
    }
    get fontWeight() {
        return this.__fontWeight.get();
    }
    set fontWeight(newValue) {
        this.__fontWeight.set(newValue);
    }
    get fontFamily() {
        return this.__fontFamily.get();
    }
    set fontFamily(newValue) {
        this.__fontFamily.set(newValue);
    }
    render() {
        Column.create({ space: 20 });
        Column.width('100%');
        Column.margin({ top: 20 });
        Text.create('default text');
        Text.fontSize(20);
        Text.pop();
        Text.create(`text font color ${this.fontColor}`);
        Text.fontColor(this.fontColor);
        Text.fontSize(20);
        Text.key('fontColor');
        Text.pop();
        Text.create(`text font size ${this.fontSize}`);
        Text.fontSize(this.fontSize);
        Text.key('fontSize');
        Text.pop();
        Text.create(`text font style ${this.fontStyle}`);
        Text.fontStyle(this.fontStyle);
        Text.fontSize(20);
        Text.key('fontStyle');
        Text.pop();
        Text.create(`text fontWeight ${this.fontWeight}`);
        Text.fontWeight(this.fontWeight);
        Text.fontSize(20);
        Text.key('fontWeight');
        Text.pop();
        Text.create(`text fontFamily ${this.fontFamily}`);
        Text.fontFamily(this.fontFamily);
        Text.fontSize(20);
        Text.key('fontFamily');
        Text.pop();
        Text.create('red 20 Italic bold cursive text');
        Text.fontColor(Color.Red);
        Text.fontSize(20);
        Text.fontStyle(FontStyle.Italic);
        Text.fontWeight(700);
        Text.fontFamily('cursive');
        Text.textAlign(TextAlign.Center);
        Text.width('90%');
        Text.pop();
        Text.create('Orange 18 Normal source-sans-pro text');
        Text.fontColor(Color.Orange);
        Text.fontSize(20);
        Text.fontStyle(FontStyle.Normal);
        Text.fontWeight(400);
        Text.fontFamily('source-sans-pro,cursive,sans-serif');
        Text.pop();
        Column.pop();
    }
    onPageShow() {
    }
}
loadDocument(new TextStyle("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textStyle.js.map