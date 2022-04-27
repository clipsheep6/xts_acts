/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/rating.ets?entry ***!
  \****************************************************************************************************************************************/
class RatingExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__rating = new ObservedPropertySimple(1, this, "rating");
        this.__indicator = new ObservedPropertySimple(false, this, "indicator");
        this.stateChangCallBack = (eventData) => {
            console.info("rating page stateChangCallBack");
            if (eventData != null) {
                console.info("rating page state change called:" + JSON.stringify(eventData.data.rating));
                if (eventData.data.rating != null) {
                    this.rating = eventData.data.rating;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.rating !== undefined) {
            this.rating = params.rating;
        }
        if (params.indicator !== undefined) {
            this.indicator = params.indicator;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__rating.aboutToBeDeleted();
        this.__indicator.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get rating() {
        return this.__rating.get();
    }
    set rating(newValue) {
        this.__rating.set(newValue);
    }
    get indicator() {
        return this.__indicator.get();
    }
    set indicator(newValue) {
        this.__indicator.set(newValue);
    }
    onPageShow() {
        console.info('rating page show called');
        var stateChangeEvent = {
            eventId: 173
        };
        var stateChangeEventTwo = {
            eventId: 174
        };
        var stateChangeEventThree = {
            eventId: 175
        };
        var stateChangeEventFour = {
            eventId: 176
        };
        var stateChangeEventSix = {
            eventId: 177
        };
        var stateChangeEventSeven = {
            eventId: 178
        };
        var stateChangeEventSeven = {
            eventId: 1027
        };
        var stateChangeEventSeven = {
            eventId: 1028
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceBetween });
        Flex.width(350);
        Flex.height(200);
        Flex.padding(35);
        Text.create('current score is ' + this.rating);
        Text.fontSize(20);
        Text.pop();
        Rating.create({ rating: this.rating, indicator: this.indicator });
        Rating.stars(5);
        Rating.key('Rating');
        Rating.stepSize(0.5);
        Rating.onChange((value) => {
            this.rating = value;
        });
        Rating.pop();
        Flex.pop();
    }
}
loadDocument(new RatingExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=rating.js.map