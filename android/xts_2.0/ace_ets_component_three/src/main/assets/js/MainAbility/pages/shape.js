/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/shape.ets?entry ***!
  \***************************************************************************************************************************************/
class ShapeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__strokeDashOffset = new ObservedPropertySimple(0, this, "strokeDashOffset");
        this.__strokeLineCap = new ObservedPropertySimple(LineCapStyle.Butt, this, "strokeLineCap");
        this.__strokeLineJoin = new ObservedPropertySimple(LineJoinStyle.Miter, this, "strokeLineJoin");
        this.__strokeMiterLimit = new ObservedPropertySimple(4, this, "strokeMiterLimit");
        this.__strokeOpacity = new ObservedPropertySimple(1, this, "strokeOpacity");
        this.__strokeWidth = new ObservedPropertySimple(1, this, "strokeWidth");
        this.__antiAlias = new ObservedPropertySimple(true, this, "antiAlias");
        this.__strokeDashArray = new ObservedPropertyObject([20], this, "strokeDashArray");
        this.__fillOpacity = new ObservedPropertySimple(0, this, "fillOpacity");
        this.__strokeValue = new ObservedPropertySimple('#FF000000', this, "strokeValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("text page state change called:" + JSON.stringify(eventData));
                if (eventData.data.strokeDashOffset != null) {
                    this.strokeDashOffset = parseInt(eventData.data.strokeDashOffset);
                }
                if (eventData.data.strokeLineCap != null) {
                    this.strokeLineCap = eventData.data.strokeLineCap;
                }
                if (eventData.data.strokeLineJoin != null) {
                    this.strokeLineJoin = eventData.data.strokeLineJoin;
                }
                if (eventData.data.strokeMiterLimit != null) {
                    this.strokeMiterLimit = parseInt(eventData.data.strokeMiterLimit);
                }
                if (eventData.data.strokeOpacity != null) {
                    this.strokeOpacity = parseInt(eventData.data.strokeOpacity);
                }
                if (eventData.data.fillOpacity != null) {
                    this.fillOpacity = parseInt(eventData.data.fillOpacity);
                }
                if (eventData.data.antiAlias != null) {
                    this.antiAlias = eventData.data.antiAlias;
                }
                if (eventData.data.strokeDashArrayOne != null) {
                    this.strokeDashArray[0] = parseInt(eventData.data.strokeDashArrayOne);
                }
                if (eventData.data.strokeDashArrayTwo != null) {
                    this.strokeDashArray[1] = parseInt(eventData.data.strokeDashArrayTwo);
                }
                if (eventData.data.strokeDashArrayThree != null) {
                    this.strokeDashArray[2] = parseInt(eventData.data.strokeDashArrayThree);
                }
                if (eventData.data.stroke != null) {
                    this.stroke = eventData.data.stroke;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.strokeDashOffset !== undefined) {
            this.strokeDashOffset = params.strokeDashOffset;
        }
        if (params.strokeLineCap !== undefined) {
            this.strokeLineCap = params.strokeLineCap;
        }
        if (params.strokeLineJoin !== undefined) {
            this.strokeLineJoin = params.strokeLineJoin;
        }
        if (params.strokeMiterLimit !== undefined) {
            this.strokeMiterLimit = params.strokeMiterLimit;
        }
        if (params.strokeOpacity !== undefined) {
            this.strokeOpacity = params.strokeOpacity;
        }
        if (params.strokeWidth !== undefined) {
            this.strokeWidth = params.strokeWidth;
        }
        if (params.antiAlias !== undefined) {
            this.antiAlias = params.antiAlias;
        }
        if (params.strokeDashArray !== undefined) {
            this.strokeDashArray = params.strokeDashArray;
        }
        if (params.fillOpacity !== undefined) {
            this.fillOpacity = params.fillOpacity;
        }
        if (params.strokeValue !== undefined) {
            this.strokeValue = params.strokeValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__strokeDashOffset.aboutToBeDeleted();
        this.__strokeLineCap.aboutToBeDeleted();
        this.__strokeLineJoin.aboutToBeDeleted();
        this.__strokeMiterLimit.aboutToBeDeleted();
        this.__strokeOpacity.aboutToBeDeleted();
        this.__strokeWidth.aboutToBeDeleted();
        this.__antiAlias.aboutToBeDeleted();
        this.__strokeDashArray.aboutToBeDeleted();
        this.__fillOpacity.aboutToBeDeleted();
        this.__strokeValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get strokeDashOffset() {
        return this.__strokeDashOffset.get();
    }
    set strokeDashOffset(newValue) {
        this.__strokeDashOffset.set(newValue);
    }
    get strokeLineCap() {
        return this.__strokeLineCap.get();
    }
    set strokeLineCap(newValue) {
        this.__strokeLineCap.set(newValue);
    }
    get strokeLineJoin() {
        return this.__strokeLineJoin.get();
    }
    set strokeLineJoin(newValue) {
        this.__strokeLineJoin.set(newValue);
    }
    get strokeMiterLimit() {
        return this.__strokeMiterLimit.get();
    }
    set strokeMiterLimit(newValue) {
        this.__strokeMiterLimit.set(newValue);
    }
    get strokeOpacity() {
        return this.__strokeOpacity.get();
    }
    set strokeOpacity(newValue) {
        this.__strokeOpacity.set(newValue);
    }
    get strokeWidth() {
        return this.__strokeWidth.get();
    }
    set strokeWidth(newValue) {
        this.__strokeWidth.set(newValue);
    }
    get antiAlias() {
        return this.__antiAlias.get();
    }
    set antiAlias(newValue) {
        this.__antiAlias.set(newValue);
    }
    get strokeDashArray() {
        return this.__strokeDashArray.get();
    }
    set strokeDashArray(newValue) {
        this.__strokeDashArray.set(newValue);
    }
    get fillOpacity() {
        return this.__fillOpacity.get();
    }
    set fillOpacity(newValue) {
        this.__fillOpacity.set(newValue);
    }
    get strokeValue() {
        return this.__strokeValue.get();
    }
    set strokeValue(newValue) {
        this.__strokeValue.set(newValue);
    }
    onPageShow() {
        console.info('qrCode page show called');
        var stateChangeEvent = {
            eventId: 192
        };
    }
    render() {
        Column.create({ space: 2 });
        Column.width('100%');
        Column.margin({ top: 15 });
        Text.create('basic');
        Text.fontSize(30);
        Text.fontColor(0xCCCCCC);
        Text.width(320);
        Text.pop();
        Shape.create();
        Shape.key('shape');
        Shape.viewPort({ x: -2, y: -2, width: 304, height: 130 });
        Shape.fill(0x317Af7);
        Shape.stroke(this.strokeValue);
        Shape.strokeDashArray(ObservedObject.GetRawObject(this.strokeDashArray));
        Shape.strokeDashOffset(this.strokeDashOffset);
        Shape.strokeLineCap(this.strokeLineCap);
        Shape.strokeLineJoin(this.strokeLineJoin);
        Shape.strokeMiterLimit(this.strokeMiterLimit);
        Shape.strokeOpacity(this.strokeOpacity);
        Shape.strokeWidth(this.strokeWidth);
        Shape.antiAlias(this.antiAlias);
        Shape.fillOpacity(this.fillOpacity);
        Shape.mesh([], 1, 1);
        Rect.create();
        Rect.width(300);
        Rect.height(50);
        Ellipse.create();
        Ellipse.width(300);
        Ellipse.height(50);
        Ellipse.offset({ x: 0, y: 60 });
        Path.create();
        Path.width(300);
        Path.height(10);
        Path.commands('M0 0 L900 0');
        Path.offset({ x: 0, y: 120 });
        Shape.pop();
        Column.pop();
    }
}
loadDocument(new ShapeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=shape.js.map