/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Progress.ets?entry ***!
  \****************************************************************************************************************/
class progress_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    onPageShow() {
        console.info('Progress page show called');
    }
    onBuildDone() {
        console.info('Progress page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Column.create();
        Column.width(400);
        Column.height(400);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Text.create(`Progress page`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Progress.create({ value: 20, total: 40, style: ProgressStyle.Linear });
        Progress.value(3);
        Progress.color(Color.Blue);
        Progress.width(50);
        Progress.height(70);
        Progress.key('progress');
        Progress.create({ value: 20, total: 40, style: ProgressStyle.Eclipse });
        Progress.value(3);
        Progress.color(Color.Blue);
        Progress.width(50);
        Progress.height(70);
        Progress.key('progress2');
        Progress.create({ value: 20, total: 40, style: ProgressStyle.Ring });
        Progress.value(3);
        Progress.color(Color.Blue);
        Progress.width(50);
        Progress.height(70);
        Progress.key('progress3');
        Progress.create({ value: 20, total: 40, style: ProgressStyle.ScaleRing });
        Progress.value(3);
        Progress.color(Color.Blue);
        Progress.width(50);
        Progress.height(70);
        Progress.key('progress4');
        Progress.create({ value: 20, total: 40, style: ProgressStyle.Capsule });
        Progress.value(3);
        Progress.color(Color.Blue);
        Progress.width(50);
        Progress.height(70);
        Progress.key('progress5');
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new progress_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Progress.js.map