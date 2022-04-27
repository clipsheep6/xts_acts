/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\sourceType.ets?entry ***!
  \*********************************************************************************************************/
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
        Column.height(350);
        Column.width('100%');
        Column.padding(10);
        Button.createWithLabel('Touch');
        Button.backgroundColor(0x2788D9);
        Button.width(100);
        Button.height(500);
        Button.fontSize(20);
        Button.onTouch((event) => {
            if (event.type === TouchType.Down) {
                this.eventType = 'Down';
            }
            if (event.type === TouchType.Up) {
                this.eventType = 'Up';
            }
            if (event.type === TouchType.Move) {
                this.eventType = 'Move';
            }
            if (event.source === Unknown) {
                this.SourceType = 'Unknown';
            }
            if (event.source === Mouse) {
                this.SourceType = 'Mouse';
            }
            if (event.type === TouchScreen) {
                this.SourceType = 'TouchScreen';
            }
            console.info(this.text = 'source：' + event.source);
            try {
                var backData = {
                    data: {
                        "event": JSON.stringify(event),
                    }
                };
                var backEvent = {
                    eventId: 198,
                };
                console.info("sourceTypeTest_0100 start to emit action state");
            }
            catch (err) {
                console.info("sourceTypeTest_0100 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.key('button');
        Button.pop();
        Text.create(this.text);
        Text.padding(15);
        Text.fontSize(20);
        Text.key('text');
        Text.pop();
        Column.pop();
    }
}
loadDocument(new ClickExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=sourceType.js.map