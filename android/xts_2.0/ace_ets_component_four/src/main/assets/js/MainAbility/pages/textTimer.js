/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\textTimer.ets?entry ***!
  \********************************************************************************************************/
class TextTimerExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.myTimerController = new TextTimerController();
        this.__format = new ObservedPropertySimple('hh:mm:ss.ms', this, "format");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.myTimerController !== undefined) {
            this.myTimerController = params.myTimerController;
        }
        if (params.format !== undefined) {
            this.format = params.format;
        }
    }
    aboutToBeDeleted() {
        this.__format.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get format() {
        return this.__format.get();
    }
    set format(newValue) {
        this.__format.set(newValue);
    }
    render() {
        Column.create();
        TextTimer.create({ controller: this.myTimerController });
        TextTimer.key('textTimer');
        TextTimer.format(this.format);
        TextTimer.fontColor(Color.Black);
        TextTimer.fontSize(50);
        TextTimer.onTimer((utc, elapsedTime) => {
            console.info('textTimer notCountDown utc is：' + utc + ', elapsedTime: ' + elapsedTime);
        });
        TextTimer.pop();
        Row.create();
        Button.createWithLabel("start");
        Button.onClick(() => {
            this.myTimerController.start();
        });
        Button.pop();
        Button.createWithLabel("pause");
        Button.onClick(() => {
            this.myTimerController.pause();
        });
        Button.pop();
        Button.createWithLabel("reset");
        Button.onClick(() => {
            this.myTimerController.reset();
        });
        Button.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new TextTimerExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textTimer.js.map