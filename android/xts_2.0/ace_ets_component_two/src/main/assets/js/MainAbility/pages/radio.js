/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\radio.ets?entry ***!
  \****************************************************************************************************/
class RadioExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    render() {
        Flex.create({ direction: FlexDirection.Row, justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center });
        Flex.padding({ top: 30 });
        Column.create();
        Text.create('Radio1');
        Text.pop();
        Radio.create({ value: 'Radio1', group: 'radioGroup' });
        Radio.checked(true);
        Radio.height(50);
        Radio.width(50);
        Radio.key('radio1');
        Radio.onChange((value) => {
            console.log('Radio1 status is ' + value);
        });
        Column.pop();
        Column.create();
        Text.create('Radio2');
        Text.pop();
        Radio.create({ value: 'Radio2', group: 'radioGroup' });
        Radio.checked(false);
        Radio.height(50);
        Radio.width(50);
        Radio.key('radio2');
        Radio.onChange((value) => {
            console.log('Radio2 status is ' + value);
        });
        Column.pop();
        Column.create();
        Text.create('Radio3');
        Text.pop();
        Radio.create({ value: 'Radio3', group: 'radioGroup' });
        Radio.checked(false);
        Radio.height(50);
        Radio.width(49);
        Radio.key('radio3');
        Radio.onChange((value) => {
            console.log('Radio3 status is ' + value);
        });
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new RadioExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=radio.js.map