/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\areaChange.ets?entry ***!
  \***************************************************************************************************************************/
class AreaExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__value = new ObservedPropertySimple('Text', this, "value");
        this.__size = new ObservedPropertySimple('', this, "size");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.value !== undefined) {
            this.value = params.value;
        }
        if (params.size !== undefined) {
            this.size = params.size;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
    }
    aboutToBeDeleted() {
        this.__value.aboutToBeDeleted();
        this.__size.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get value() {
        return this.__value.get();
    }
    set value(newValue) {
        this.__value.set(newValue);
    }
    get size() {
        return this.__size.get();
    }
    set size(newValue) {
        this.__size.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    render() {
        Column.create();
        Column.debugLine("pages/areaChange.ets(27:5)");
        Column.width('100%');
        Column.height('100%');
        Column.margin({ top: 30 });
        Text.create(this.value);
        Text.debugLine("pages/areaChange.ets(28:7)");
        Text.key('text1');
        Text.backgroundColor(Color.Green);
        Text.margin(30);
        Text.fontSize(20);
        Text.onClick(() => {
            this.value = this.value + 'Text';
        });
        Text.onAreaChange((oldValue, newValue) => {
            console.info(`Ace: on area change, oldValue is ${JSON.stringify(oldValue)} newvalue is ${JSON.stringify(newValue)}`);
            this.size = JSON.stringify(newValue);
            this.onActionCalled = true;
            console.info('onAreaChange current action state is: ' + this.onActionCalled);
        });
        Text.pop();
        Text.create('new area is: \n' + this.size);
        Text.debugLine("pages/areaChange.ets(44:7)");
        Text.key('text2');
        Text.margin({ right: 30, left: 30 });
        Text.pop();
        Column.pop();
    }
}
loadDocument(new AreaExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=areaChange.js.map