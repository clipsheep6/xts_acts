/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\positionSetting.ets?entry ***!
  \*************************************************************************************************************************************/
class PositionSetting extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__align = new ObservedPropertySimple(Alignment.TopStart, this, "align");
        this.__direction = new ObservedPropertySimple(Direction.Rtl, this, "direction");
        this.__position1 = new ObservedPropertyObject({ x: 25, y: 15 }, this, "position1");
        this.__position2 = new ObservedPropertyObject({ x: '50%', y: '70%' }, this, "position2");
        this.__anchor = new ObservedPropertyObject({ x: 25, y: 25 }, this, "anchor");
        this.__offset = new ObservedPropertyObject({ x: 10, y: 15 }, this, "offset");
        this.__opacityValue = new ObservedPropertySimple(1, this, "opacityValue");
        this.stateChangCallBack = (eventData) => {
            console.info("position page stateChangCallBack" + JSON.stringify(eventData));
            if (eventData) {
                if (eventData.data.textAlign) {
                    this.align = Alignment.BottomEnd;
                }
                else if (eventData.data.direction) {
                    this.direction = eventData.data.direction;
                }
                else if (eventData.data.position1) {
                    this.position1 = JSON.parse(eventData.data.position1);
                    this.position2 = JSON.parse(eventData.data.position2);
                }
                else if (eventData.data.markAnchor) {
                    this.anchor = JSON.parse(eventData.data.markAnchor);
                }
                else if (eventData.data.offset) {
                    this.offset = JSON.parse(eventData.data.offset);
                }
                else if (eventData.data.opacityValue) {
                    this.opacityValue = eventData.data.opacityValue;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.align !== undefined) {
            this.align = params.align;
        }
        if (params.direction !== undefined) {
            this.direction = params.direction;
        }
        if (params.position1 !== undefined) {
            this.position1 = params.position1;
        }
        if (params.position2 !== undefined) {
            this.position2 = params.position2;
        }
        if (params.anchor !== undefined) {
            this.anchor = params.anchor;
        }
        if (params.offset !== undefined) {
            this.offset = params.offset;
        }
        if (params.opacityValue !== undefined) {
            this.opacityValue = params.opacityValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__align.aboutToBeDeleted();
        this.__direction.aboutToBeDeleted();
        this.__position1.aboutToBeDeleted();
        this.__position2.aboutToBeDeleted();
        this.__anchor.aboutToBeDeleted();
        this.__offset.aboutToBeDeleted();
        this.__opacityValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get align() {
        return this.__align.get();
    }
    set align(newValue) {
        this.__align.set(newValue);
    }
    get direction() {
        return this.__direction.get();
    }
    set direction(newValue) {
        this.__direction.set(newValue);
    }
    get position1() {
        return this.__position1.get();
    }
    set position1(newValue) {
        this.__position1.set(newValue);
    }
    get position2() {
        return this.__position2.get();
    }
    set position2(newValue) {
        this.__position2.set(newValue);
    }
    get anchor() {
        return this.__anchor.get();
    }
    set anchor(newValue) {
        this.__anchor.set(newValue);
    }
    get offset() {
        return this.__offset.get();
    }
    set offset(newValue) {
        this.__offset.set(newValue);
    }
    get opacityValue() {
        return this.__opacityValue.get();
    }
    set opacityValue(newValue) {
        this.__opacityValue.set(newValue);
    }
    render() {
        Column.create();
        Column.width('100%');
        Column.margin({ top: 5 });
        Column.create({ space: 10 });
        Text.create('opacity(1)');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.opacity(`${this.opacityValue}`);
        Text.key("opacity");
        Text.pop();
        Text.create('top start');
        Text.align(this.align);
        Text.height(50);
        Text.width('90%');
        Text.fontSize(20);
        Text.backgroundColor(0xFFE4C4);
        Text.key('textAlign');
        Text.pop();
        Text.create('direction');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.direction(this.direction);
        Row.key('rowDirection');
        Text.create('1');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('2');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Text.create('3');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(20);
        Text.backgroundColor(0xF5DEB3);
        Text.pop();
        Text.create('4');
        Text.height(50);
        Text.width('25%');
        Text.fontSize(20);
        Text.backgroundColor(0xD2B48C);
        Text.pop();
        Row.pop();
        Text.create('position');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create({ space: 20 });
        Row.width('90%');
        Row.height(100);
        Row.border({ width: 1, style: BorderStyle.Dashed });
        Text.create('1');
        Text.size({ width: '45%', height: '50' });
        Text.backgroundColor(0xdeb887);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.pop();
        Text.create(`2 position(${this.position1.x}, ${this.position1.y})`);
        Text.size({ width: '60%', height: '30' });
        Text.backgroundColor(0xbbb2cb);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.align(Alignment.Start);
        Text.position({ x: this.position1.x, y: this.position1.y });
        Text.key('position1');
        Text.pop();
        Text.create('3');
        Text.size({ width: '45%', height: '50' });
        Text.backgroundColor(0xdeb887);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.pop();
        Text.create(`4 position(${this.position2.x}, ${this.position2.y})`);
        Text.size({ width: '50%', height: '50' });
        Text.backgroundColor(0xbbb2cb);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.position({ x: this.position2.x, y: this.position2.y });
        Text.key('position2');
        Text.pop();
        Row.pop();
        Text.create('markAnchor');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.margin({ top: 25 });
        Stack.border({ width: 1, style: BorderStyle.Dashed });
        Row.create();
        Row.size({ width: '100', height: '100' });
        Row.backgroundColor(0xdeb887);
        Row.pop();
        Image.create('/images/ic_health_heart.png');
        Image.size({ width: 25, height: 25 });
        Image.markAnchor({ x: this.anchor.x, y: this.anchor.y });
        Image.key('markAnchor');
        Image.create('/images/ic_health_heart.png');
        Image.size({ width: 25, height: 25 });
        Image.markAnchor({ x: 25, y: 25 });
        Image.position({ x: '100%', y: '100%' });
        Stack.pop();
        Text.create('offset');
        Text.fontSize(20);
        Text.fontColor(Color.Black);
        Text.width('90%');
        Text.pop();
        Row.create();
        Row.width('90%');
        Row.height(100);
        Row.border({ width: 1, style: BorderStyle.Dashed });
        Text.create('1');
        Text.size({ width: '15%', height: '100' });
        Text.backgroundColor(0xdeb887);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.pop();
        Text.create(`2\noffset(${this.offset.x}, ${this.offset.y})`);
        Text.size({ width: 170, height: '50' });
        Text.backgroundColor(0xbbb2cb);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.align(Alignment.Start);
        Text.offset({ x: this.offset.x, y: this.offset.y });
        Text.key('offset');
        Text.pop();
        Text.create('3');
        Text.size({ width: '15%', height: '50' });
        Text.backgroundColor(0xdeb887);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.pop();
        Text.create('4\noffset(-10%, 20%)');
        Text.size({ width: 170, height: '50' });
        Text.backgroundColor(0xbbb2cb);
        Text.border({ width: 1 });
        Text.fontSize(20);
        Text.offset({ x: '-10%', y: '50%' });
        Text.pop();
        Row.pop();
        Column.pop();
        Column.pop();
    }
    onPageShow() {
    }
}
loadDocument(new PositionSetting("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=positionSetting.js.map