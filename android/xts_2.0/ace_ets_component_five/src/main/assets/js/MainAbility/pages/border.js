/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\border.ets?entry ***!
  \****************************************************************************************************************************/
class BorderExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__borderStyle = new ObservedPropertySimple(BorderStyle.Auto, this, "borderStyle");
        this.__borderRadius = new ObservedPropertySimple(70, this, "borderRadius");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("Border page state change called:" + JSON.stringify(eventData));
                if (eventData.data.border != null) {
                    this.border = eventData.data.border;
                }
                if (eventData.data.borderStyle != null) {
                    this.borderStyle = eventData.data.borderStyle;
                }
                if (eventData.data.borderWidth != null) {
                    this.borderWidth = eventData.data.borderWidth;
                }
                if (eventData.data.borderColor != null) {
                    this.borderColor = eventData.data.borderColor;
                }
                if (eventData.data.borderRadius != null) {
                    this.borderRadius = eventData.data.borderRadius;
                }
                console.info("Border borderStyle state change called:" + JSON.stringify(eventData));
                switch (eventData.data.borderStyle) {
                    case 'Dotted':
                        this.borderStyle = BorderStyle.Dotted;
                        break;
                    case 'Dashed':
                        this.borderStyle = BorderStyle.Dashed;
                        break;
                    case 'Solid':
                        this.borderStyle = BorderStyle.Solid;
                        break;
                    default:
                        this.borderStyle = BorderStyle.Solid;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.borderStyle !== undefined) {
            this.borderStyle = params.borderStyle;
        }
        if (params.borderRadius !== undefined) {
            this.borderRadius = params.borderRadius;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__borderStyle.aboutToBeDeleted();
        this.__borderRadius.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get borderStyle() {
        return this.__borderStyle.get();
    }
    set borderStyle(newValue) {
        this.__borderStyle.set(newValue);
    }
    get borderRadius() {
        return this.__borderRadius.get();
    }
    set borderRadius(newValue) {
        this.__borderRadius.set(newValue);
    }
    onPageShow() {
        console.info('border page show called');
    }
    render() {
        Flex.create({ justifyContent: FlexAlign.SpaceAround, alignItems: ItemAlign.Center });
        Flex.width('100%');
        Flex.height(150);
        Text.create('dashed');
        Text.borderStyle(BorderStyle.Dashed);
        Text.borderWidth(5);
        Text.borderColor(0xAFEEEE);
        Text.borderRadius(this.borderRadius);
        Text.key("borderRadius");
        Text.width(120);
        Text.height(120);
        Text.textAlign(TextAlign.Center);
        Text.fontSize(16);
        Text.pop();
        Text.create('Solid');
        Text.borderStyle(BorderStyle.Solid);
        Text.borderWidth(5);
        Text.key("borderWidth");
        Text.borderColor(0xEE0000);
        Text.borderRadius(10);
        Text.width(120);
        Text.height(120);
        Text.textAlign(TextAlign.Center);
        Text.fontSize(16);
        Text.pop();
        Text.create('dotted');
        Text.border({ width: 5, color: 0x317AF7, radius: 8, style: BorderStyle.Dotted });
        Text.key("borderColor");
        Text.width(120);
        Text.height(120);
        Text.textAlign(TextAlign.Center);
        Text.fontSize(16);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new BorderExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=border.js.map