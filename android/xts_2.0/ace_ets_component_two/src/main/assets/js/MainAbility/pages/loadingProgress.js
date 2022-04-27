/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\loadingProgress.ets?entry ***!
  \**************************************************************************************************************/
class LoadingProgressExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__color = new ObservedPropertyObject(Color.Blue, this, "color");
        this.stateChangCallBack = (eventData) => {
            console.info("LoadingProgress page stateChangCallBack");
            if (eventData != null) {
                console.info("LoadingProgress page state change called:" + JSON.stringify(eventData));
                if (eventData.data.color != null) {
                    this.color = eventData.data.color;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__color.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    onPageShow() {
        console.info('LoadingProgress page show called');
        var stateChangeEvent = {
            eventId: 124,
        };
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.margin({ top: 6 });
        Text.create('Orbital LoadingProgress ');
        Text.fontSize(19);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.key('LP');
        Text.pop();
        LoadingProgress.create();
        LoadingProgress.color(Color.Black);
        Column.pop();
    }
}
loadDocument(new LoadingProgressExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=loadingProgress.js.map