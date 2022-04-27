/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\touchAble.ets?entry ***!
  \**************************************************************************************************************************/
class TouchAbleExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text1 = new ObservedPropertySimple('', this, "text1");
        this.__text2 = new ObservedPropertySimple('', this, "text2");
        this.__touchableValue = new ObservedPropertySimple(false, this, "touchableValue");
        this.stateChangCallBack = (eventData) => {
            console.info("[TouchAble] page stateChangCallBack");
            if (eventData != null) {
                console.info("[TouchAble] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.touchableValue != null) {
                    this.touchableValue = eventData.data.touchableValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text1 !== undefined) {
            this.text1 = params.text1;
        }
        if (params.text2 !== undefined) {
            this.text2 = params.text2;
        }
        if (params.touchableValue !== undefined) {
            this.touchableValue = params.touchableValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__text1.aboutToBeDeleted();
        this.__text2.aboutToBeDeleted();
        this.__touchableValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text1() {
        return this.__text1.get();
    }
    set text1(newValue) {
        this.__text1.set(newValue);
    }
    get text2() {
        return this.__text2.get();
    }
    set text2(newValue) {
        this.__text2.set(newValue);
    }
    get touchableValue() {
        return this.__touchableValue.get();
    }
    set touchableValue(newValue) {
        this.__touchableValue.set(newValue);
    }
    onPageShow() {
        console.info('[TouchAble] page show called');
    }
    render() {
        Stack.create();
        Stack.margin(100);
        Rect.create();
        Rect.fill(Color.Gray);
        Rect.width(150);
        Rect.height(150);
        Rect.onClick(() => {
            console.info(this.text1 = 'Rect Clicked');
        });
        Rect.overlay(this.text1, { align: Alignment.Bottom, offset: { x: 0, y: 20 } });
        Ellipse.create();
        Ellipse.fill(Color.Pink);
        Ellipse.width(150);
        Ellipse.height(80);
        Ellipse.key('ellipse');
        Ellipse.touchable(this.touchableValue);
        Ellipse.onClick(() => {
            this.text2 = 'Ellipse Clicked';
            console.info("touchAble text2:" + this.text2);
        });
        Ellipse.overlay(this.text2, { align: Alignment.Bottom, offset: { x: 0, y: 20 } });
        Stack.pop();
    }
}
loadDocument(new TouchAbleExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=touchAble.js.map