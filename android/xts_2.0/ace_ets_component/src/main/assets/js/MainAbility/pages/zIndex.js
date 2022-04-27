/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\zIndex.ets?entry ***!
  \***********************************************************************************************************************/
class zIndexExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__zIndex = new ObservedPropertySimple(1, this, "zIndex");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.zIndex !== undefined) {
            this.zIndex = params.zIndex;
        }
    }
    aboutToBeDeleted() {
        this.__zIndex.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get zIndex() {
        return this.__zIndex.get();
    }
    set zIndex(newValue) {
        this.__zIndex.set(newValue);
    }
    onPageShow() {
        console.info('[zIndex] page show called ');
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.height(200);
        Stack.create();
        Text.create('first child, zIndex(2)');
        Text.size({ width: '40%', height: '60%' });
        Text.backgroundColor(0xbbb2cb);
        Text.zIndex(2);
        Text.pop();
        Text.create('second child, default zIndex(0)');
        Text.size({ width: '90%', height: '80%' });
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.TopStart);
        Text.pop();
        Text.create('third child, zIndex(1)');
        Text.size({ width: '70%', height: '50%' });
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.TopStart);
        Text.zIndex(this.zIndex);
        Text.key('zIndex');
        Text.pop();
        Stack.pop();
        Column.pop();
    }
}
loadDocument(new zIndexExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=zIndex.js.map