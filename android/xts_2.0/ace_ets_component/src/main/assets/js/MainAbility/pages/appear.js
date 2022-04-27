/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\appear.ets?entry ***!
  \***********************************************************************************************************************/
class AppearExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__isShow = new ObservedPropertySimple(true, this, "isShow");
        this.__appearFlag = new ObservedPropertySimple(false, this, "appearFlag");
        this.__disAppearFlag = new ObservedPropertySimple(false, this, "disAppearFlag");
        this.changeAppear = 'Hide Text';
        this.myText = 'Text for onAppear';
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.isShow !== undefined) {
            this.isShow = params.isShow;
        }
        if (params.appearFlag !== undefined) {
            this.appearFlag = params.appearFlag;
        }
        if (params.disAppearFlag !== undefined) {
            this.disAppearFlag = params.disAppearFlag;
        }
        if (params.changeAppear !== undefined) {
            this.changeAppear = params.changeAppear;
        }
        if (params.myText !== undefined) {
            this.myText = params.myText;
        }
    }
    aboutToBeDeleted() {
        this.__isShow.aboutToBeDeleted();
        this.__appearFlag.aboutToBeDeleted();
        this.__disAppearFlag.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get isShow() {
        return this.__isShow.get();
    }
    set isShow(newValue) {
        this.__isShow.set(newValue);
    }
    get appearFlag() {
        return this.__appearFlag.get();
    }
    set appearFlag(newValue) {
        this.__appearFlag.set(newValue);
    }
    get disAppearFlag() {
        return this.__disAppearFlag.get();
    }
    set disAppearFlag(newValue) {
        this.__disAppearFlag.set(newValue);
    }
    onPageShow() {
        console.info('[appear] page show called');
    }
    render() {
        Column.create();
        Column.padding(30);
        Column.width('100%');
        Button.createWithLabel(this.changeAppear);
        Button.key('appear');
        Button.onClick(() => {
            this.isShow = !this.isShow;
        });
        Button.margin(3);
        Button.backgroundColor(0x2788D9);
        Button.pop();
        If.create();
        if (this.isShow) {
            If.branchId(0);
            Text.create(this.myText);
            Text.onAppear(() => {
                this.appearFlag = true;
                this.changeAppear = 'Show Text';
                console.info('appearFlag current action state is: ' + this.appearFlag);
            });
            Text.onDisAppear(() => {
                this.disAppearFlag = true;
                this.changeAppear = 'Hide Text';
                console.info('disAppearFlag current action state is: ' + this.disAppearFlag);
            });
            Text.pop();
        }
        If.pop();
        Column.pop();
    }
}
loadDocument(new AppearExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=appear.js.map