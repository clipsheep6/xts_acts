/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\touch.ets?entry ***!
  \**********************************************************************************************************************/
class TouchExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__eventType = new ObservedPropertySimple('', this, "eventType");
        this.__touchFlag = new ObservedPropertySimple(false, this, "touchFlag");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.eventType !== undefined) {
            this.eventType = params.eventType;
        }
        if (params.touchFlag !== undefined) {
            this.touchFlag = params.touchFlag;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__eventType.aboutToBeDeleted();
        this.__touchFlag.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get eventType() {
        return this.__eventType.get();
    }
    set eventType(newValue) {
        this.__eventType.set(newValue);
    }
    get touchFlag() {
        return this.__touchFlag.get();
    }
    set touchFlag(newValue) {
        this.__touchFlag.set(newValue);
    }
    onPageShow() {
        console.info('[touch] page show called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(200);
        Flex.width(350);
        Button.createWithLabel('Touch');
        Button.backgroundColor(0x2788D9);
        Button.height(40);
        Button.width(80);
        Button.key('touch');
        Button.onTouch((event) => {
            if (event.type === TouchType.Down) {
                this.eventType = 'Down';
                console.info("[touch] eventType is Down");
                this.touchFlag = true;
            }
            if (event.type === TouchType.Up) {
                this.eventType = 'Up';
                console.info("[touch] eventType is Up");
                this.touchFlag = true;
            }
            if (event.type === TouchType.Move) {
                this.eventType = 'Move';
                console.info("[touch] eventType is Move");
                this.touchFlag = true;
            }
            stopPropagation: () => {
                console.info('stopPropagation');
            };
            console.info('onTouch successful, touchFlag is : ' + this.eventType + ', ' + this.touchFlag);
            console.info(this.text = 'TouchType:' + this.eventType
                + '\nDistance between touch point and touch element:\nx: '
                + event.touches[0].x + '\n' + 'y: ' + event.touches[0].y + '\ncomponent globalPos：（'
                + event.target.area.globalPos.x + ',' + event.target.area.globalPos.y + '）\nwidth:'
                + event.target.area.width + '\nheight：' + event.target.area.height);
            console.info(this.text = 'TouchType:' + this.eventType
                + '\nDistance between touch point and touch element:\nx: '
                + event.changedTouches[0].x + '\n' + 'y: ' + event.changedTouches[0].y + '\ncomponent globalPos：（'
                + event.target.area.globalPos.x + ',' + event.target.area.globalPos.y + '）\nwidth:'
                + event.target.area.width + '\nheight：' + event.target.area.height);
            console.log('fang--->A');
        });
        Button.pop();
        Text.create(this.text);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new TouchExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=touch.js.map