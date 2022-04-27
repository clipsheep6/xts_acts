/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\richText.ets?entry ***!
  \*******************************************************************************************************/
class RichTextCreateComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__data = new ObservedPropertySimple("test data", this, "data");
        this.stateChangCallBack = (eventData) => {
            console.info("[stateChangCallBack] stateChangCallBack");
            if (eventData != null) {
                console.info("[stateChangCallBack] state change called:" + JSON.stringify(eventData));
                if (eventData.data.data != null) {
                    this.data = eventData.data.data;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.data !== undefined) {
            this.data = params.data;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__data.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get data() {
        return this.__data.get();
    }
    set data(newValue) {
        this.__data.set(newValue);
    }
    onPageShow() {
        console.info('[list] page show called');
        var stateChangeEvent = {
            eventId: 181,
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center,
            justifyContent: FlexAlign.Center });
        Flex.padding({ top: 30 });
        Column.create();
        RichText.create(this.data);
        RichText.onStart(() => {
            console.info("RichText onStart");
        });
        RichText.onComplete(() => {
            console.info("RichText onComplete");
        });
        RichText.pop();
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new RichTextCreateComponent("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=richText.js.map