/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Rating.ets?entry ***!
  \**************************************************************************************************************/
class rating_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__rating = new ObservedPropertySimple(2, this, "rating");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.rating !== undefined) {
            this.rating = params.rating;
        }
    }
    aboutToBeDeleted() {
        this.__rating.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get rating() {
        return this.__rating.get();
    }
    set rating(newValue) {
        this.__rating.set(newValue);
    }
    onPageShow() {
        console.info('Rating page show called');
    }
    onBuildDone() {
        console.info('Rating page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Column.create();
        Column.width(300);
        Column.height(300);
        Column.borderColor(Color.Pink);
        Column.borderWidth(2);
        Text.create(`Rating page`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Rating.create({ rating: 2, indicator: false });
        Rating.stepSize(0.5);
        Rating.stars(5);
        Rating.starStyle({
            backgroundUri: '/resources/rawfile/star-1-1.png',
            foregroundUri: '/resources/rawfile/star-1-3.png',
            secondaryUri: '/resources/rawfile/star-1-2.png'
        });
        Rating.onChange((value) => {
            this.rating = value;
        });
        Rating.key('rating1');
        Rating.pop();
        Rating.create({ rating: 2, indicator: true });
        Rating.stepSize(0.5);
        Rating.stars(5);
        Rating.starStyle({
            backgroundUri: '/resources/rawfile/star-1-1.png',
            foregroundUri: '/resources/rawfile/star-1-3.png',
            secondaryUri: '/resources/rawfile/star-1-2.png'
        });
        Rating.key('rating2');
        Rating.pop();
        Column.pop();
        Flex.pop();
    }
}
loadDocument(new rating_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Rating.js.map