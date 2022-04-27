/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\shapeClipping.ets?entry ***!
  \***********************************************************************************************************************************/
class ClipAndMaskExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__isMaskRect = new ObservedPropertySimple(true, this, "isMaskRect");
        this.__isClipCircle = new ObservedPropertySimple(true, this, "isClipCircle");
        this.__maskType = new ObservedPropertyObject(new Rect({ width: 280, height: 280 }), this, "maskType");
        this.__clipType = new ObservedPropertyObject(new Circle({ width: 280, height: 280 }), this, "clipType");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("shapeClipping page state change called:" + JSON.stringify(eventData));
                if (eventData.data.maskValue != null) {
                    this.maskType = new Circle({ width: 280, height: 280 });
                }
            }
        };
        this.shapeChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("shapeClipping page shape change called:" + JSON.stringify(eventData));
                if (eventData.data.clipValue != null) {
                    this.clipType = new Rect({ width: 280, height: 280 });
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.isMaskRect !== undefined) {
            this.isMaskRect = params.isMaskRect;
        }
        if (params.isClipCircle !== undefined) {
            this.isClipCircle = params.isClipCircle;
        }
        if (params.maskType !== undefined) {
            this.maskType = params.maskType;
        }
        if (params.clipType !== undefined) {
            this.clipType = params.clipType;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
        if (params.shapeChangCallBack !== undefined) {
            this.shapeChangCallBack = params.shapeChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__isMaskRect.aboutToBeDeleted();
        this.__isClipCircle.aboutToBeDeleted();
        this.__maskType.aboutToBeDeleted();
        this.__clipType.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get isMaskRect() {
        return this.__isMaskRect.get();
    }
    set isMaskRect(newValue) {
        this.__isMaskRect.set(newValue);
    }
    get isClipCircle() {
        return this.__isClipCircle.get();
    }
    set isClipCircle(newValue) {
        this.__isClipCircle.set(newValue);
    }
    get maskType() {
        return this.__maskType.get();
    }
    set maskType(newValue) {
        this.__maskType.set(newValue);
    }
    get clipType() {
        return this.__clipType.get();
    }
    set clipType(newValue) {
        this.__clipType.set(newValue);
    }
    onPageShow() {
        console.info('shapeClipping page show called');
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 5 });
        Text.create('clip');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Image.create('/images/clip.png');
        Image.clip(ObservedObject.GetRawObject(this.clipType));
        Image.width('500px');
        Image.height('280px');
        Image.key('image_clip');
        Row.create();
        Row.clip(true);
        Row.borderRadius(20);
        Row.key('image_clip_true');
        Image.create('/images/clip.png');
        Image.width('500px');
        Image.height('280px');
        Row.pop();
        Text.create('mask');
        Text.fontSize(9);
        Text.width('90%');
        Text.fontColor(0xCCCCCC);
        Text.pop();
        Image.create('/images/clip.png');
        Image.mask(ObservedObject.GetRawObject(this.maskType));
        Image.width('500px');
        Image.height('280px');
        Image.key('image_mask');
        Column.pop();
    }
}
loadDocument(new ClipAndMaskExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=shapeClipping.js.map