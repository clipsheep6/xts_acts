/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/timeStamp.ets?entry ***!
  \*******************************************************************************************************************************************/
class ClickExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('', this, "text");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    render() {
        Column.create();
        Column.height(300);
        Column.width('100%');
        Column.padding(35);
        Button.createWithLabel('Click');
        Button.backgroundColor(0x2788D9);
        Button.key('button');
        Button.onClick((event) => {
            this.text = event.timestamp;
            console.info(this.text);
            try {
                var backData = {
                    data: {
                        "Text": this.text,
                    }
                };
                var backEvent = {
                    eventId: 230
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Text.create(this.text);
        Text.padding(15);
        Text.pop();
        Column.pop();
    }
}
loadDocument(new ClickExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=timeStamp.js.map