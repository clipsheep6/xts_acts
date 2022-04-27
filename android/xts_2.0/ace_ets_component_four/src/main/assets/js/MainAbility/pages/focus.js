/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\focus.ets?entry ***!
  \****************************************************************************************************/
class FocusableExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__textOne = new ObservedPropertySimple('', this, "textOne");
        this.__textTwo = new ObservedPropertySimple('', this, "textTwo");
        this.__textThree = new ObservedPropertySimple('The third button cannot be focused', this, "textThree");
        this.__oneButtonColor = new ObservedPropertySimple('#FF0000', this, "oneButtonColor");
        this.__twoButtonColor = new ObservedPropertySimple('#FFC0CB', this, "twoButtonColor");
        this.__threeButtonColor = new ObservedPropertySimple('#87CEFA', this, "threeButtonColor");
        this.__focusable = new ObservedPropertySimple(false, this, "focusable");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("focus page state change called:" + JSON.stringify(eventData));
                if (eventData.data.focusable != null) {
                    this.focusable = eventData.data.focusable;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.textOne !== undefined) {
            this.textOne = params.textOne;
        }
        if (params.textTwo !== undefined) {
            this.textTwo = params.textTwo;
        }
        if (params.textThree !== undefined) {
            this.textThree = params.textThree;
        }
        if (params.oneButtonColor !== undefined) {
            this.oneButtonColor = params.oneButtonColor;
        }
        if (params.twoButtonColor !== undefined) {
            this.twoButtonColor = params.twoButtonColor;
        }
        if (params.threeButtonColor !== undefined) {
            this.threeButtonColor = params.threeButtonColor;
        }
        if (params.focusable !== undefined) {
            this.focusable = params.focusable;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__textOne.aboutToBeDeleted();
        this.__textTwo.aboutToBeDeleted();
        this.__textThree.aboutToBeDeleted();
        this.__oneButtonColor.aboutToBeDeleted();
        this.__twoButtonColor.aboutToBeDeleted();
        this.__threeButtonColor.aboutToBeDeleted();
        this.__focusable.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get textOne() {
        return this.__textOne.get();
    }
    set textOne(newValue) {
        this.__textOne.set(newValue);
    }
    get textTwo() {
        return this.__textTwo.get();
    }
    set textTwo(newValue) {
        this.__textTwo.set(newValue);
    }
    get textThree() {
        return this.__textThree.get();
    }
    set textThree(newValue) {
        this.__textThree.set(newValue);
    }
    get oneButtonColor() {
        return this.__oneButtonColor.get();
    }
    set oneButtonColor(newValue) {
        this.__oneButtonColor.set(newValue);
    }
    get twoButtonColor() {
        return this.__twoButtonColor.get();
    }
    set twoButtonColor(newValue) {
        this.__twoButtonColor.set(newValue);
    }
    get threeButtonColor() {
        return this.__threeButtonColor.get();
    }
    set threeButtonColor(newValue) {
        this.__threeButtonColor.set(newValue);
    }
    get focusable() {
        return this.__focusable.get();
    }
    set focusable(newValue) {
        this.__focusable.set(newValue);
    }
    render() {
        Column.create({ space: 20 });
        Column.debugLine("pages/focus.ets(29:5)");
        Column.width('100%');
        Column.margin({ top: 20 });
        Button.createWithLabel(this.textOne);
        Button.debugLine("pages/focus.ets(30:7)");
        Button.backgroundColor(this.oneButtonColor);
        Button.width(300);
        Button.height(70);
        Button.fontColor(Color.Black);
        Button.focusable(this.focusable);
        Button.onFocus(() => {
            this.textOne = 'First Button onFocus';
            this.oneButtonColor = '#AFEEEE';
        });
        Button.onBlur(() => {
            this.textOne = 'First Button onBlur';
            this.oneButtonColor = '#FFC0CB';
        });
        Button.pop();
        Button.createWithLabel(this.textTwo);
        Button.debugLine("pages/focus.ets(42:7)");
        Button.backgroundColor(this.twoButtonColor);
        Button.width(300);
        Button.height(70);
        Button.fontColor(Color.Black);
        Button.focusable(this.focusable);
        Button.onFocus(() => {
            this.textTwo = 'Second Button onFocus';
            this.twoButtonColor = '#AFEEEE';
        });
        Button.onBlur(() => {
            this.textTwo = 'Second Button onBlur';
            this.twoButtonColor = '#FFC0CB';
        });
        Button.pop();
        Button.createWithLabel(this.textThree);
        Button.debugLine("pages/focus.ets(54:7)");
        Button.backgroundColor(this.threeButtonColor);
        Button.width(300);
        Button.height(70);
        Button.fontColor(Color.Black);
        Button.focusable(this.focusable);
        Button.onFocus(() => {
            this.textThree = 'Third Button onFocus';
            this.threeButtonColor = '#AFEEEE';
        });
        Button.onFocusMove(() => {
            console.info('on FocusMove Start!');
        });
        Button.onBlur(() => {
            this.textThree = 'Third Button onBlur';
            this.threeButtonColor = '#FFC0CB';
        });
        Button.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('focus page show called');
        var stateChangeEvent = {
            eventId: 101,
        };
    }
}
loadDocument(new FocusableExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=focus.js.map