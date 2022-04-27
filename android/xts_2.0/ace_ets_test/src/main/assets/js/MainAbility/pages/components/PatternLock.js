/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/PatternLock.ets?entry ***!
  \*********************************************************************************************************************************************/
class PatternLockTest extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__passwords = new ObservedPropertyObject([], this, "passwords");
        this.__length = new ObservedPropertySimple(200, this, "length");
        this.__redius = new ObservedPropertySimple(10, this, "redius");
        this.__color1 = new ObservedPropertySimple('#DB7093', this, "color1");
        this.__color2 = new ObservedPropertySimple('#7B68EE', this, "color2");
        this.__color3 = new ObservedPropertySimple('#20B2AA', this, "color3");
        this.__color4 = new ObservedPropertySimple('#BDB76B', this, "color4");
        this.__color5 = new ObservedPropertySimple('#FF8C00', this, "color5");
        this.__stroke = new ObservedPropertySimple(30, this, "stroke");
        this.__isAutoReset = new ObservedPropertySimple(true, this, "isAutoReset");
        this.patternLockController = new PatternLockController();
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.passwords !== undefined) {
            this.passwords = params.passwords;
        }
        if (params.length !== undefined) {
            this.length = params.length;
        }
        if (params.redius !== undefined) {
            this.redius = params.redius;
        }
        if (params.color1 !== undefined) {
            this.color1 = params.color1;
        }
        if (params.color2 !== undefined) {
            this.color2 = params.color2;
        }
        if (params.color3 !== undefined) {
            this.color3 = params.color3;
        }
        if (params.color4 !== undefined) {
            this.color4 = params.color4;
        }
        if (params.color5 !== undefined) {
            this.color5 = params.color5;
        }
        if (params.stroke !== undefined) {
            this.stroke = params.stroke;
        }
        if (params.isAutoReset !== undefined) {
            this.isAutoReset = params.isAutoReset;
        }
        if (params.patternLockController !== undefined) {
            this.patternLockController = params.patternLockController;
        }
    }
    aboutToBeDeleted() {
        this.__passwords.aboutToBeDeleted();
        this.__length.aboutToBeDeleted();
        this.__redius.aboutToBeDeleted();
        this.__color1.aboutToBeDeleted();
        this.__color2.aboutToBeDeleted();
        this.__color3.aboutToBeDeleted();
        this.__color4.aboutToBeDeleted();
        this.__color5.aboutToBeDeleted();
        this.__stroke.aboutToBeDeleted();
        this.__isAutoReset.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get passwords() {
        return this.__passwords.get();
    }
    set passwords(newValue) {
        this.__passwords.set(newValue);
    }
    get length() {
        return this.__length.get();
    }
    set length(newValue) {
        this.__length.set(newValue);
    }
    get redius() {
        return this.__redius.get();
    }
    set redius(newValue) {
        this.__redius.set(newValue);
    }
    get color1() {
        return this.__color1.get();
    }
    set color1(newValue) {
        this.__color1.set(newValue);
    }
    get color2() {
        return this.__color2.get();
    }
    set color2(newValue) {
        this.__color2.set(newValue);
    }
    get color3() {
        return this.__color3.get();
    }
    set color3(newValue) {
        this.__color3.set(newValue);
    }
    get color4() {
        return this.__color4.get();
    }
    set color4(newValue) {
        this.__color4.set(newValue);
    }
    get color5() {
        return this.__color5.get();
    }
    set color5(newValue) {
        this.__color5.set(newValue);
    }
    get stroke() {
        return this.__stroke.get();
    }
    set stroke(newValue) {
        this.__stroke.set(newValue);
    }
    get isAutoReset() {
        return this.__isAutoReset.get();
    }
    set isAutoReset(newValue) {
        this.__isAutoReset.set(newValue);
    }
    onPageShow() {
        console.info('patternLock page show called');
    }
    onBuildDone() {
        console.info('patternLock page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width('100%');
        Flex.height('100%');
        PatternLock.create(this.patternLockController);
        PatternLock.sideLength(this.length);
        PatternLock.circleRadius(this.redius);
        PatternLock.backgroundColor(this.color1);
        PatternLock.regularColor(this.color2);
        PatternLock.selectedColor(this.color3);
        PatternLock.activeColor(this.color4);
        PatternLock.pathColor(this.color5);
        PatternLock.key('patternLock');
        PatternLock.pathStrokeWidth(this.stroke);
        PatternLock.autoReset(this.isAutoReset);
        PatternLock.onPatternComplete((input) => {
            if (!input) {
                return;
            }
            console.info(input.toString());
            if (input.Length < 4) {
                this.patternLockController.reset();
                return;
            }
            this.passwords = input;
        });
        Text.create(this.passwords.toString());
        Text.fontSize(18);
        Text.fontColor(0x123A42);
        Text.margin(15);
        Text.pop();
        Flex.create({ wrap: FlexWrap.Wrap, justifyContent: FlexAlign.SpaceAround, alignItems: ItemAlign.Center, });
        Button.createWithLabel('Reset');
        Button.onClick(() => {
            this.patternLockController.reset();
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('sideLength' + this.length);
        Button.onClick(() => {
            if (this.length > 500) {
                this.length = -50;
            }
            else {
                this.length += 50;
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('circleRadius' + this.redius);
        Button.onClick(() => {
            if (this.redius > 30) {
                this.redius = -5;
            }
            else {
                this.redius += 5;
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('pathStrokeWidth' + this.stroke);
        Button.onClick(() => {
            if (this.stroke > 30) {
                this.stroke = -5;
            }
            else {
                this.stroke += 5;
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('autoReset' + this.isAutoReset);
        Button.onClick(() => {
            this.isAutoReset = !this.isAutoReset;
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('backgroundColor');
        Button.onClick(() => {
            if (this.color1 == '#DB7093') {
                this.color1 = '#4B0082';
            }
            else {
                this.color1 = '#DB7093';
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('regularColor');
        Button.onClick(() => {
            if (this.color2 == '#7B68EE') {
                this.color2 = '#4169E1';
            }
            else {
                this.color2 = '#7B68EE';
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('selectedColor');
        Button.onClick(() => {
            if (this.color3 == '#20B2AA') {
                this.color3 = '#32CD32';
            }
            else {
                this.color3 = '#20B2AA';
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('activeColor');
        Button.onClick(() => {
            if (this.color4 == '#BDB76B') {
                this.color4 = '#808000';
            }
            else {
                this.color4 = '#BDB76B';
            }
        });
        Button.margin(8);
        Button.pop();
        Button.createWithLabel('pathColor');
        Button.onClick(() => {
            if (this.color5 == '#FF8C00') {
                this.color5 = '#FF6347';
            }
            else {
                this.color5 = '#FF8C00';
            }
        });
        Button.margin(8);
        Button.pop();
        Flex.pop();
        Flex.pop();
    }
}
loadDocument(new PatternLockTest("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=PatternLock.js.map