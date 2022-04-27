/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/Toggle.ets?entry ***!
  \************************************************************************************************************************/
class ToggleExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__textNew = new ObservedPropertySimple('', this, "textNew");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.textNew !== undefined) {
            this.textNew = params.textNew;
        }
    }
    aboutToBeDeleted() {
        this.__text.aboutToBeDeleted();
        this.__textNew.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get textNew() {
        return this.__textNew.get();
    }
    set textNew(newValue) {
        this.__textNew.set(newValue);
    }
    onPageShow() {
        console.info('toggle page show called');
    }
    onBuildDone() {
        console.info('toggle page build done called');
    }
    render() {
        Column.create({ space: 10 });
        Column.width('100%');
        Column.padding(24);
        Text.create('type:Switch');
        Text.fontSize(30);
        Text.fontColor(Color.Blue);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceEvenly, alignItems: ItemAlign.Center });
        Toggle.create({ type: ToggleType.Switch, isOn: false });
        Toggle.selectedColor('#FFFF0000');
        Toggle.size({ width: 50, height: 50 });
        Toggle.switchPointColor('#FF808080');
        Toggle.key('toggle1');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Toggle.pop();
        Toggle.create({ type: ToggleType.Switch, isOn: true });
        Toggle.selectedColor('#FFFF0000');
        Toggle.size({ width: 50, height: 50 });
        Toggle.switchPointColor('#FF808080');
        Toggle.key('toggle2');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Toggle.pop();
        Flex.pop();
        Text.create('type:CheckBox');
        Text.fontSize(30);
        Text.fontColor(Color.Blue);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceEvenly, alignItems: ItemAlign.Center });
        Toggle.create({ type: ToggleType.Checkbox, isOn: false });
        Toggle.size({ width: 50, height: 50 });
        Toggle.selectedColor('#FFFF0000');
        Toggle.key('toggle3');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Toggle.pop();
        Toggle.create({ type: ToggleType.Checkbox, isOn: true });
        Toggle.selectedColor('#FFFF0000');
        Toggle.size({ width: 50, height: 50 });
        Toggle.key('toggle4');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Toggle.pop();
        Flex.pop();
        Text.create('type:Button');
        Text.fontSize(30);
        Text.fontColor(Color.Blue);
        Text.width('90%');
        Text.pop();
        Flex.create({ justifyContent: FlexAlign.SpaceEvenly, alignItems: ItemAlign.Center });
        Toggle.create({ type: ToggleType.Button, isOn: false });
        Toggle.key('toggle5');
        Toggle.size({ width: 100, height: 50 });
        Toggle.switchPointColor('#FF808080');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Text.create('status button');
        Text.padding({ left: 12, right: 12 });
        Text.pop();
        Toggle.pop();
        Toggle.create({ type: ToggleType.Button, isOn: true });
        Toggle.key('toggle6');
        Toggle.size({ width: 100, height: 50 });
        Toggle.switchPointColor('#FF808080');
        Toggle.onChange((isOn) => {
            console.info("status changed " + isOn);
        });
        Text.create('status button');
        Text.padding({ left: 12, right: 12 });
        Text.pop();
        Toggle.pop();
        Flex.pop();
        Column.pop();
    }
}
loadDocument(new ToggleExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Toggle.js.map