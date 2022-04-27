/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/aboutToDisappear.ets?entry ***!
  \**************************************************************************************************************************************************/
class ParentComp extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__isCountDown = new ObservedPropertySimple(true, this, "isCountDown");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.isCountDown !== undefined) {
            this.isCountDown = params.isCountDown;
        }
    }
    aboutToBeDeleted() {
        this.__isCountDown.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get isCountDown() {
        return this.__isCountDown.get();
    }
    set isCountDown(newValue) {
        this.__isCountDown.set(newValue);
    }
    render() {
        Column.create();
        Text.create(this.isCountDown ? 'Count Down' : 'Stopwatch');
        Text.pop();
        If.create();
        if (this.isCountDown) {
            If.branchId(0);
            Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
            Image.width(50);
            Image.height(50);
            let earlierCreatedChild_2 = this.findChildById("2");
            if (earlierCreatedChild_2 == undefined) {
                View.create(new TimerComponent("2", this, { counter: 10, changePerSec: -1, showInColor: Color.Red }));
            }
            else {
                earlierCreatedChild_2.updateWithValueParams({
                    counter: 10, changePerSec: -1, showInColor: Color.Red
                });
                View.create(earlierCreatedChild_2);
            }
        }
        else {
            If.branchId(1);
            Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
            Image.width(150);
            Image.height(150);
            let earlierCreatedChild_3 = this.findChildById("3");
            if (earlierCreatedChild_3 == undefined) {
                View.create(new TimerComponent("3", this, { counter: 0, changePerSec: +1, showInColor: Color.Black }));
            }
            else {
                earlierCreatedChild_3.updateWithValueParams({
                    counter: 0, changePerSec: +1, showInColor: Color.Black
                });
                View.create(earlierCreatedChild_3);
            }
        }
        If.pop();
        Button.createWithLabel(this.isCountDown ? 'Swtich to Stopwatch' : 'Switch to Count Down');
        Button.onClick(() => {
            this.isCountDown = !this.isCountDown;
        });
        Button.key('button1');
        Button.pop();
        Column.pop();
    }
}
class TimerComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__counter = new ObservedPropertySimple(0, this, "counter");
        this.changePerSec = -1;
        this.showInColor = Color.Black;
        this.timerId = -1;
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.counter !== undefined) {
            this.counter = params.counter;
        }
        if (params.changePerSec !== undefined) {
            this.changePerSec = params.changePerSec;
        }
        if (params.showInColor !== undefined) {
            this.showInColor = params.showInColor;
        }
        if (params.timerId !== undefined) {
            this.timerId = params.timerId;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
    }
    aboutToBeDeleted() {
        this.__counter.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get counter() {
        return this.__counter.get();
    }
    set counter(newValue) {
        this.__counter.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    render() {
        Text.create(`${this.counter}sec`);
        Text.fontColor(this.showInColor);
        Text.pop();
    }
    aboutToAppear() {
        this.timerId = setInterval(() => {
            this.counter += this.changePerSec;
        }, 1000);
    }
    aboutToDisappear() {
        if (this.timerId > 0) {
            clearTimeout(this.timerId);
            console.info('ting--1');
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 49
                };
                console.info("button1 start to emit action state");
            }
            catch (err) {
                console.info("button1 emit action state err: " + JSON.stringify(err.message));
            }
            this.timerId = -1;
        }
    }
}
loadDocument(new ParentComp("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=aboutToDisappear.js.map