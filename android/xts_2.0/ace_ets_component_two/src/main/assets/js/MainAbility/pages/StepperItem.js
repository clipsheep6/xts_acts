/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\StepperItem.ets?entry ***!
  \**********************************************************************************************************/
class StepperItemExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__currentIndex = new ObservedPropertySimple(0, this, "currentIndex");
        this.__firstState = new ObservedPropertyObject(ItemState.Normal, this, "firstState");
        this.__secondState = new ObservedPropertyObject(ItemState.Normal, this, "secondState");
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
    }
    aboutToBeDeleted() {
        this.__currentIndex.aboutToBeDeleted();
        this.__firstState.aboutToBeDeleted();
        this.__secondState.aboutToBeDeleted();
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
    onPageShow() {
        console.info('stepper item change page show called');
    }
    onBuildDone() {
        console.info('stepper item build done called');
    }
    render() {
        Stepper.create({
            index: this.currentIndex
        });
        Stepper.align(Alignment.Center);
        StepperItem.create();
        StepperItem.key('stepperItem1');
        StepperItem.status(ItemState.Normal);
        StepperItem.nextLabel('Next');
        StepperItem.position({ x: '35%', y: 0 });
        Text.create('StepperItem Page One');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 200 });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.key('stepperItem2');
        StepperItem.prevLabel('Previous');
        StepperItem.status(ItemState.Disabled);
        StepperItem.position({ x: '35%,y:0' });
        Text.create('StepperItem Page Two');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 200 });
        Text.onClick(() => {
            this.firstState = this.firstState === ItemState.Skip ? ItemState.Normal : ItemState.Skip;
        });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.key('stepperItem3');
        StepperItem.status(ItemState.Waiting);
        StepperItem.position({ x: '35%,y:0' });
        Text.create('StepperItem Page Three');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 200 });
        Text.onClick(() => {
            this.secondState = this.secondState === ItemState.Waiting ? ItemState.Normal : ItemState.Waiting;
        });
        Text.pop();
        StepperItem.pop();
        StepperItem.create();
        StepperItem.key('stepperItem3');
        StepperItem.status(ItemState.Skip);
        StepperItem.nextLabel('Finish');
        StepperItem.position({ x: '35%', y: 0 });
        Text.create('StepperItem Page Four');
        Text.fontSize(35);
        Text.fontColor(Color.Blue);
        Text.width(200);
        Text.lineHeight(50);
        Text.margin({ top: 200 });
        Text.pop();
        StepperItem.pop();
        Stepper.pop();
    }
}
loadDocument(new StepperItemExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=StepperItem.js.map