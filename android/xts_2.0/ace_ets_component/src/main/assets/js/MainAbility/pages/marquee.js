/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\marquee.ets?entry ***!
  \************************************************************************************************************************/
class MarqueeExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__start = new ObservedPropertySimple(false, this, "start");
        this.__fromStart = new ObservedPropertySimple(true, this, "fromStart");
        this.__step = new ObservedPropertySimple(50, this, "step");
        this.__loop = new ObservedPropertySimple(3, this, "loop");
        this.__src = new ObservedPropertySimple("Running Marquee starts rolling", this, "src");
        this.__fontColor = new ObservedPropertySimple(Color.Blue, this, "fontColor");
        this.__fontSize = new ObservedPropertySimple(50, this, "fontSize");
        this.__onActionCalledThree = new ObservedPropertySimple(false, this, "onActionCalledThree");
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
        if (params.fontColor !== undefined) {
            this.fontColor = params.fontColor;
        }
        if (params.fontSize !== undefined) {
            this.fontSize = params.fontSize;
        }
        if (params.onActionCalledThree !== undefined) {
            this.onActionCalledThree = params.onActionCalledThree;
        }
    }
    aboutToBeDeleted() {
        this.__start.aboutToBeDeleted();
        this.__fromStart.aboutToBeDeleted();
        this.__step.aboutToBeDeleted();
        this.__loop.aboutToBeDeleted();
        this.__src.aboutToBeDeleted();
        this.__fontColor.aboutToBeDeleted();
        this.__fontSize.aboutToBeDeleted();
        this.__onActionCalledThree.aboutToBeDeleted();
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
    get fontColor() {
        return this.__fontColor.get();
    }
    set fontColor(newValue) {
        this.__fontColor.set(newValue);
    }
    get fontSize() {
        return this.__fontSize.get();
    }
    set fontSize(newValue) {
        this.__fontSize.set(newValue);
    }
    get onActionCalledThree() {
        return this.__onActionCalledThree.get();
    }
    set onActionCalledThree(newValue) {
        this.__onActionCalledThree.set(newValue);
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
        Marquee.key('marquee');
        Marquee.fontColor(this.fontColor);
        Marquee.colorBlend(Color.Green);
        Marquee.fontSize(this.fontSize);
        Marquee.allowScale(false);
        Marquee.fontWeight(FontWeight.Bold);
        Marquee.backgroundColor(Color.Black);
        Marquee.margin({ bottom: 40 });
        Marquee.onStart(() => {
            console.log('Marquee animation complete onStart');
            console.info('Onstart current action state is: ' + this.fontColor);
        });
        Marquee.onBounce(() => {
            console.log('Marquee animation complete onBounce');
            console.info('Onbounce current action state is: ' + this.fontSize);
        });
        Marquee.onFinish(() => {
            console.log('Marquee animation complete onFinish');
            this.onActionCalledThree = true;
            console.info('Onfinish current action state is: ' + this.onActionCalledThree);
        });
        Marquee.pop();
        Button.createWithLabel('start');
        Button.key('button');
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
//# sourceMappingURL=marquee.js.map