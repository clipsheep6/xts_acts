/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\refresh.ets?entry ***!
  \******************************************************************************************************/
class RefreshCreateComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__isRefreshing = new ObservedPropertySimple(false, this, "isRefreshing");
        this.__counter = new ObservedPropertySimple(0, this, "counter");
        this.stateChangCallBack = (eventData) => {
            console.info("[stateChangCallBack] stateChangCallBack");
            if (eventData != null) {
                console.info("[stateChangCallBack] state change called:" + JSON.stringify(eventData));
                if (eventData.data.isRefreshing != null) {
                    this.isRefreshing = eventData.data.isRefreshing;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.isRefreshing !== undefined) {
            this.isRefreshing = params.isRefreshing;
        }
        if (params.counter !== undefined) {
            this.counter = params.counter;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__isRefreshing.aboutToBeDeleted();
        this.__counter.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get isRefreshing() {
        return this.__isRefreshing.get();
    }
    set isRefreshing(newValue) {
        this.__isRefreshing.set(newValue);
    }
    get counter() {
        return this.__counter.get();
    }
    set counter(newValue) {
        this.__counter.set(newValue);
    }
    onPageShow() {
        console.info('[list] page show called');
        var stateChangeEvent = {
            eventId: 180,
        };
    }
    render() {
        Column.create();
        Refresh.create({ refreshing: this.isRefreshing, offset: 120, friction: 100 });
        Refresh.onStateChange((refreshStatus) => {
            console.info('Refresh onStateChange state is ' + refreshStatus);
        });
        Refresh.onRefreshing(() => {
            setTimeout(() => {
                this.counter++;
                this.isRefreshing = false;
            }, 1000);
            console.log('onRefreshing test');
        });
        Text.create('Pull Down and refresh: ' + this.counter);
        Text.fontSize(30);
        Text.margin(10);
        Text.pop();
        Refresh.pop();
        Column.pop();
    }
}
loadDocument(new RefreshCreateComponent("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=refresh.js.map