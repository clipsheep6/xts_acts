/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\stepper.ets?entry ***!
  \************************************************************************************************************************/
class StepperExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__currentIndex = new ObservedPropertySimple(0, this, "currentIndex");
        this.__firstState = new ObservedPropertySimple(ItemState.Normal, this, "firstState");
        this.__secondState = new ObservedPropertySimple(ItemState.Normal, this, "secondState");
        this.__disabled = new ObservedPropertySimple(ItemState.Normal, this, "disabled");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.currentIndex !== undefined) {
            this.currentIndex = params.currentIndex;
        }
        if (params.firstState !== undefined) {
            this.firstState = params.firstState;
        }
        if (params.secondState !== undefined) {
            this.secondState = params.secondState;
        }
        if (params.disabled !== undefined) {
            this.disabled = params.disabled;
        }
    }
    aboutToBeDeleted() {
        this.__currentIndex.aboutToBeDeleted();
        this.__firstState.aboutToBeDeleted();
        this.__secondState.aboutToBeDeleted();
        this.__disabled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get currentIndex() {
        return this.__currentIndex.get();
    }
    set currentIndex(newValue) {
        this.__currentIndex.set(newValue);
    }
    get firstState() {
        return this.__firstState.get();
    }
    set firstState(newValue) {
        this.__firstState.set(newValue);
    }
    get secondState() {
        return this.__secondState.get();
    }
    set secondState(newValue) {
        this.__secondState.set(newValue);
    }
    get disabled() {
        return this.__disabled.get();
    }
    set disabled(newValue) {
        this.__disabled.set(newValue);
    }
    render() {
        Stepper.create({
            index: this.currentIndex
        });
        Stepper.onFinish(() => {
            console.log('onFinish');
        });
        Stepper.onSkip(() => {
            console.log('onSkip');
        });
        Stepper.onChange((prevIndex, index) => {
            this.currentIndex = index;
        });
        Stepper.align(Alignment.Center);
        Stepper.key('stepper');
        StepperItem.create();
        StepperItem.nextLabel('');
        StepperItem.position({ x: '35%', y: 0 });
        StepperItem.key('stepperItem1');
        Text.create('Page One');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 250 });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.nextLabel('Next');
        StepperItem.prevLabel('Previous');
        StepperItem.status(this.firstState);
        StepperItem.position({ x: '35%', y: 0 });
        StepperItem.key('stepperItem2');
        Text.create('Page Two');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 250 });
        Text.key('text1');
        Text.onClick(() => {
            this.firstState = this.firstState === ItemState.Skip ? ItemState.Normal : ItemState.Skip;
        });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.position({ x: '35%', y: 0 });
        StepperItem.status(this.secondState);
        StepperItem.key('stepperItem3');
        Text.create('Page Three');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 250 });
        Text.key('text2');
        Text.onClick(() => {
            this.secondState = this.secondState === ItemState.Waiting ? ItemState.Normal : ItemState.Waiting;
        });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.position({ x: '35%', y: 0 });
        StepperItem.nextLabel('Finish');
        StepperItem.key('stepperItem4');
        Text.create('Page four');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 250 });
        Text.pop();
        StepperItem.pop();
        Stepper.pop();
    }
    onPageShow() {
        console.info('stepper page show called');
    }
}
loadDocument(new StepperExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=stepper.js.map