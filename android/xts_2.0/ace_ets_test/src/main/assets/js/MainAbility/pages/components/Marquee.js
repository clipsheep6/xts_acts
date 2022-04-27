/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/components/Marquee.ets?entry ***!
  \*****************************************************************************************************************************************/
class MarqueeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__start = new ObservedPropertySimple(false, this, "start");
        this.__fromStart = new ObservedPropertySimple(true, this, "fromStart");
        this.__step = new ObservedPropertySimple(50, this, "step");
        this.__loop = new ObservedPropertySimple(3, this, "loop");
        this.__src = new ObservedPropertySimple("Running Marquee starts rolling", this, "src");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.start !== undefined) {
            this.start = params.start;
        }
        if (params.fromStart !== undefined) {
            this.fromStart = params.fromStart;
        }
        if (params.step !== undefined) {
            this.step = params.step;
        }
        if (params.loop !== undefined) {
            this.loop = params.loop;
        }
        if (params.src !== undefined) {
            this.src = params.src;
        }
    }
    aboutToBeDeleted() {
        this.__start.aboutToBeDeleted();
        this.__fromStart.aboutToBeDeleted();
        this.__step.aboutToBeDeleted();
        this.__loop.aboutToBeDeleted();
        this.__src.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get start() {
        return this.__start.get();
    }
    set start(newValue) {
        this.__start.set(newValue);
    }
    get fromStart() {
        return this.__fromStart.get();
    }
    set fromStart(newValue) {
        this.__fromStart.set(newValue);
    }
    get step() {
        return this.__step.get();
    }
    set step(newValue) {
        this.__step.set(newValue);
    }
    get loop() {
        return this.__loop.get();
    }
    set loop(newValue) {
        this.__loop.set(newValue);
    }
    get src() {
        return this.__src.get();
    }
    set src(newValue) {
        this.__src.set(newValue);
    }
    onPageShow() {
        console.info('marquee page show called');
    }
    onBuildDone() {
        console.info('marquee page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.width('100%');
        Flex.height('100%');
        Marquee.create({
            start: this.start,
            step: this.step,
            loop: this.loop,
            fromStart: this.fromStart,
            src: this.src
        });
        Marquee.fontColor(Color.White);
        Marquee.fontSize(50);
        Marquee.fontSize(50);
        Marquee.allowScale(false);
        Marquee.fontWeight(FontWeight.Bold);
        Marquee.fontFamily("sans-serif");
        Marquee.backgroundColor(Color.Black);
        Marquee.margin({ bottom: 40 });
        Marquee.key('marquee');
        Marquee.onStart(() => {
            console.log('Marquee animation complete onStart');
        });
        Marquee.onBounce(() => {
            console.log('Marquee animation complete onBounce');
        });
        Marquee.onFinish(() => {
            console.log('Marquee animation complete onFinish');
        });
        Marquee.pop();
        Button.createWithLabel('start');
        Button.onClick(() => {
            this.start = true;
        });
        Button.width(200);
        Button.height(60);
        Button.margin({ bottom: 20 });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new MarqueeExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Marquee.js.map