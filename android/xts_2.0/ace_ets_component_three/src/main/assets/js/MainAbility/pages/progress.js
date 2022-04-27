/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/progress.ets?entry ***!
  \******************************************************************************************************************************************/
class ProgressExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple(20, this, "value");
        this.__total = new ObservedPropertySimple(100, this, "total");
        this.__style = new ObservedPropertySimple(ProgressStyle.Linear, this, "style");
        this.stateChangCallBack = (eventData) => {
            console.info("progress page stateChangCallBack");
            if (eventData != null) {
                console.info("progress page state change called:" + JSON.stringify(eventData));
                if (eventData.data.value != null) {
                    this.value = eventData.data.value;
                }
                if (eventData.data.total != null) {
                    this.total = eventData.data.total;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.total !== undefined) {
            this.total = params.total;
        }
        if (params.style !== undefined) {
            this.style = params.style;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__total.aboutToBeDeleted();
        this.__style.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get total() {
        return this.__total.get();
    }
    set total(newValue) {
        this.__total.set(newValue);
    }
    get style() {
        return this.__style.get();
    }
    set style(newValue) {
        this.__style.set(newValue);
    }
    onPageShow() {
        console.info('progress page show called');
        var stateChangeEvent = {
            eventId: 164
        };
        var stateChangeEventTwo = {
            eventId: 165
        };
        var stateChangeEventThree = {
            eventId: 166
        };
        var stateChangeEventFour = {
            eventId: 167
        };
        var stateChangeEventFive = {
            eventId: 168
        };
        var stateChangeEventSix = {
            eventId: 169
        };
        var stateChangeEventseven = {
            eventId: 1021
        };
        var stateChangeEventeight = {
            eventId: 1022
        };
    }
    render() {
        Column.create({ space: 15 });
        Column.width('100%');
        Column.margin({ top: 30 });
        Text.create('Linear Progress');
        Text.fontSize(9);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.pop();
        Progress.create({ value: 20, style: ProgressStyle.Linear });
        Progress.width(200);
        Progress.value(this.value);
        Progress.key('LPValue');
        Progress.create({ value: 20, total: 150, style: ProgressStyle.Linear });
        Progress.color(Color.Red);
        Progress.width(200);
        Text.create('Eclipse Progress');
        Text.fontSize(40);
        Text.fontColor(0x0F0F0F);
        Text.width('90%');
        Text.pop();
        Row.create({ space: 40 });
        Progress.create({ value: 25, style: ProgressStyle.Eclipse });
        Progress.width(100);
        Progress.value(this.value);
        Progress.key('EPValue');
        Progress.create({ value: 20, total: 150, style: ProgressStyle.Eclipse });
        Progress.color(Color.Grey);
        Progress.width(110);
        Row.pop();
        Text.create('Capsule Progress');
        Text.fontSize(19);
        Text.fontColor(0xEE2C2C);
        Text.width('90%');
        Text.pop();
        Row.create({ space: 40 });
        Progress.create({ value: 27, style: ProgressStyle.Capsule });
        Progress.width(100);
        Progress.value(this.value);
        Progress.key('CPValue');
        Progress.create({ value: 20, total: 150, style: ProgressStyle.Capsule });
        Progress.color(Color.Grey);
        Progress.value(50);
        Progress.width(120);
        Row.pop();
        Column.pop();
    }
}
loadDocument(new ProgressExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=progress.js.map