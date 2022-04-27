/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\panel.ets?entry ***!
  \****************************************************************************************************/
class PanelExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__show = new ObservedPropertySimple(true, this, "show");
        this.__type = new ObservedPropertyObject(PanelType.Foldable, this, "type");
        this.__mode = new ObservedPropertyObject(PanelMode.Half, this, "mode");
        this.stateChangCallBack = (eventData) => {
            console.info("rating page stateChangCallBack");
            if (eventData != null) {
                console.info("rating page state change called:" + JSON.stringify(eventData.data.rating));
                if (eventData.data.type != null) {
                    this.type = eventData.data.type;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.show !== undefined) {
            this.show = params.show;
        }
        if (params.type !== undefined) {
            this.type = params.type;
        }
        if (params.mode !== undefined) {
            this.mode = params.mode;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__show.aboutToBeDeleted();
        this.__type.aboutToBeDeleted();
        this.__mode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get show() {
        return this.__show.get();
    }
    set show(newValue) {
        this.__show.set(newValue);
    }
    get type() {
        return this.__type.get();
    }
    set type(newValue) {
        this.__type.set(newValue);
    }
    get mode() {
        return this.__mode.get();
    }
    set mode(newValue) {
        this.__mode.set(newValue);
    }
    onPageShow() {
        console.info('rating page show called');
        var stateChangeEvent = {
            eventId: 147,
        };
        var stateChangeEventTwo = {
            eventId: 148,
        };
        var stateChangeEventThree = {
            eventId: 149,
        };
    }
    render() {
        Column.create();
        Column.debugLine("pages/panel.ets(49:5)");
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(0xDCDCDC);
        Column.padding({ top: 5 });
        Text.create('2021-09-30    Today Calendar: 1.afternoon......Click for details');
        Text.debugLine("pages/panel.ets(50:7)");
        Text.width('90%');
        Text.height(50);
        Text.borderRadius(10);
        Text.backgroundColor(0xFF0000);
        Text.padding({ left: 20 });
        Text.onClick(() => {
            this.show = !this.show;
        });
        Text.pop();
        Panel.create(this.show);
        Panel.debugLine("pages/panel.ets(56:7)");
        Panel.type(ObservedObject.GetRawObject(this.type));
        Panel.mode(ObservedObject.GetRawObject(this.mode));
        Panel.dragBar(true);
        Panel.halfHeight(500);
        Panel.key('Panel');
        Panel.onChange((value) => {
            console.info(`width:${value.width},height:${value.height},mode:${value.mode}`);
        });
        Column.create();
        Column.debugLine("pages/panel.ets(57:9)");
        Text.create('HAHA');
        Text.debugLine("pages/panel.ets(58:11)");
        Text.pop();
        Divider.create();
        Divider.debugLine("pages/panel.ets(59:11)");
        Text.create('1. afternoon 4:00 The project meeting');
        Text.debugLine("pages/panel.ets(60:11)");
        Text.pop();
        Column.pop();
        Panel.pop();
        Column.pop();
    }
}
loadDocument(new PanelExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=panel.js.map