/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\list.ets?entry ***!
  \*********************************************************************************************************************/
class ListExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.arr = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9];
        this.__listDirection = new ObservedPropertySimple(Axis.Vertical, this, "listDirection");
        this.__editMode = new ObservedPropertySimple(false, this, "editMode");
        this.__edgeEffect = new ObservedPropertySimple(EdgeEffect.None, this, "edgeEffect");
        this.__chainAnimation = new ObservedPropertySimple(false, this, "chainAnimation");
        this.__strokeWidth = new ObservedPropertySimple(2.000000, this, "strokeWidth");
        this.__color = new ObservedPropertySimple(0xFFFFFF, this, "color");
        this.__startMargin = new ObservedPropertySimple(20.000000, this, "startMargin");
        this.__endMargin = new ObservedPropertySimple(20.000000, this, "endMargin");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.arr !== undefined) {
            this.arr = params.arr;
        }
        if (params.listDirection !== undefined) {
            this.listDirection = params.listDirection;
        }
        if (params.editMode !== undefined) {
            this.editMode = params.editMode;
        }
        if (params.edgeEffect !== undefined) {
            this.edgeEffect = params.edgeEffect;
        }
        if (params.chainAnimation !== undefined) {
            this.chainAnimation = params.chainAnimation;
        }
        if (params.strokeWidth !== undefined) {
            this.strokeWidth = params.strokeWidth;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.startMargin !== undefined) {
            this.startMargin = params.startMargin;
        }
        if (params.endMargin !== undefined) {
            this.endMargin = params.endMargin;
        }
    }
    aboutToBeDeleted() {
        this.__listDirection.aboutToBeDeleted();
        this.__editMode.aboutToBeDeleted();
        this.__edgeEffect.aboutToBeDeleted();
        this.__chainAnimation.aboutToBeDeleted();
        this.__strokeWidth.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        this.__startMargin.aboutToBeDeleted();
        this.__endMargin.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get listDirection() {
        return this.__listDirection.get();
    }
    set listDirection(newValue) {
        this.__listDirection.set(newValue);
    }
    get editMode() {
        return this.__editMode.get();
    }
    set editMode(newValue) {
        this.__editMode.set(newValue);
    }
    get edgeEffect() {
        return this.__edgeEffect.get();
    }
    set edgeEffect(newValue) {
        this.__edgeEffect.set(newValue);
    }
    get chainAnimation() {
        return this.__chainAnimation.get();
    }
    set chainAnimation(newValue) {
        this.__chainAnimation.set(newValue);
    }
    get strokeWidth() {
        return this.__strokeWidth.get();
    }
    set strokeWidth(newValue) {
        this.__strokeWidth.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    get startMargin() {
        return this.__startMargin.get();
    }
    set startMargin(newValue) {
        this.__startMargin.set(newValue);
    }
    get endMargin() {
        return this.__endMargin.get();
    }
    set endMargin(newValue) {
        this.__endMargin.set(newValue);
    }
    onPageShow() {
        console.info('[list] page show called');
    }
    render() {
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.width('100%');
        Stack.height('100%');
        Stack.backgroundColor(0xDCDCDC);
        Stack.padding({ top: 5 });
        Column.create();
        Column.width('100%');
        List.create({ space: 20, initialIndex: 0 });
        List.key('list');
        List.listDirection(this.listDirection);
        List.divider({
            strokeWidth: this.strokeWidth,
            color: this.color,
            startMargin: this.startMargin,
            endMargin: this.endMargin
        });
        List.edgeEffect(this.edgeEffect);
        List.chainAnimation(this.chainAnimation);
        List.multiSelectable(true);
        List.onScrollIndex((firstIndex, lastIndex) => {
            console.info('first' + firstIndex);
            console.info('last' + lastIndex);
        });
        List.onScroll((scrollOffset, scrollState) => {
            console.info('scrollOffset:' + scrollOffset);
            console.info('scrollState:' + scrollState);
        });
        List.editMode(this.editMode);
        List.onItemDelete((index) => {
            console.info(this.arr[index] + 'Delete');
            this.arr.splice(index, 1);
            console.info(JSON.stringify(this.arr));
            this.editFlag = false;
            return true;
        });
        List.width('90%');
        ForEach.create("2", this, ObservedObject.GetRawObject(this.arr), (item) => {
            ListItem.create();
            ListItem.editable(true);
            Text.create('' + item);
            Text.width('100%');
            Text.height(100);
            Text.fontSize(16);
            Text.textAlign(TextAlign.Center);
            Text.borderRadius(10);
            Text.backgroundColor(0xFFFFFF);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Column.pop();
        Button.createWithLabel('edit list');
        Button.onClick(() => {
            this.editMode = !this.editMode;
        });
        Button.margin({ top: 5, left: 20 });
        Button.pop();
        Stack.pop();
    }
}
loadDocument(new ListExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=list.js.map