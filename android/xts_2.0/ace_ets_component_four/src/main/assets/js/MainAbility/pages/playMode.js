/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\playMode.ets?entry ***!
  \*******************************************************************************************************/
class PlayModeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__playMode = new ObservedPropertyObject(PlayMode.Normal, this, "playMode");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.playMode !== undefined) {
            this.playMode = params.playMode;
        }
    }
    aboutToBeDeleted() {
        this.__playMode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get playMode() {
        return this.__playMode.get();
    }
    set playMode(newValue) {
        this.__playMode.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, });
        Flex.height(400);
        Flex.width("100%");
        Flex.padding({ top: 100 });
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button');
        Button.onClick(() => {
            this.playMode = PlayMode.AlternateReverse;
            try {
                var backData = {
                    data: {
                        "playMode": this.playMode,
                    }
                };
                var backEvent = {
                    eventId: 161,
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new PlayModeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=playMode.js.map