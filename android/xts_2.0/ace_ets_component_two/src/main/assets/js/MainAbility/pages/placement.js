/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\placement.ets?entry ***!
  \********************************************************************************************************/
class PlacementExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__customPopup = new ObservedPropertySimple(false, this, "customPopup");
        this.__customPopupOne = new ObservedPropertySimple(false, this, "customPopupOne");
        this.__customPopupTwo = new ObservedPropertySimple(false, this, "customPopupTwo");
        this.__customPopupThree = new ObservedPropertySimple(false, this, "customPopupThree");
        this.__placement = new ObservedPropertyObject(Placement.TopLeft, this, "placement");
        this.__placementOne = new ObservedPropertyObject(Placement.TopRight, this, "placementOne");
        this.__placementTwo = new ObservedPropertyObject(Placement.BottomLeft, this, "placementTwo");
        this.__placementThree = new ObservedPropertyObject(Placement.BottomRight, this, "placementThree");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.customPopup !== undefined) {
            this.customPopup = params.customPopup;
        }
        if (params.customPopupOne !== undefined) {
            this.customPopupOne = params.customPopupOne;
        }
        if (params.customPopupTwo !== undefined) {
            this.customPopupTwo = params.customPopupTwo;
        }
        if (params.customPopupThree !== undefined) {
            this.customPopupThree = params.customPopupThree;
        }
        if (params.placement !== undefined) {
            this.placement = params.placement;
        }
        if (params.placementOne !== undefined) {
            this.placementOne = params.placementOne;
        }
        if (params.placementTwo !== undefined) {
            this.placementTwo = params.placementTwo;
        }
        if (params.placementThree !== undefined) {
            this.placementThree = params.placementThree;
        }
    }
    aboutToBeDeleted() {
        this.__customPopup.aboutToBeDeleted();
        this.__customPopupOne.aboutToBeDeleted();
        this.__customPopupTwo.aboutToBeDeleted();
        this.__customPopupThree.aboutToBeDeleted();
        this.__placement.aboutToBeDeleted();
        this.__placementOne.aboutToBeDeleted();
        this.__placementTwo.aboutToBeDeleted();
        this.__placementThree.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get customPopup() {
        return this.__customPopup.get();
    }
    set customPopup(newValue) {
        this.__customPopup.set(newValue);
    }
    get customPopupOne() {
        return this.__customPopupOne.get();
    }
    set customPopupOne(newValue) {
        this.__customPopupOne.set(newValue);
    }
    get customPopupTwo() {
        return this.__customPopupTwo.get();
    }
    set customPopupTwo(newValue) {
        this.__customPopupTwo.set(newValue);
    }
    get customPopupThree() {
        return this.__customPopupThree.get();
    }
    set customPopupThree(newValue) {
        this.__customPopupThree.set(newValue);
    }
    get placement() {
        return this.__placement.get();
    }
    set placement(newValue) {
        this.__placement.set(newValue);
    }
    get placementOne() {
        return this.__placementOne.get();
    }
    set placementOne(newValue) {
        this.__placementOne.set(newValue);
    }
    get placementTwo() {
        return this.__placementTwo.get();
    }
    set placementTwo(newValue) {
        this.__placementTwo.set(newValue);
    }
    get placementThree() {
        return this.__placementThree.get();
    }
    set placementThree(newValue) {
        this.__placementThree.set(newValue);
    }
    popupBuilder() {
        Row.create({ space: 2 });
        Row.width(100);
        Row.height(50);
        Row.backgroundColor(Color.White);
        Row.key('image');
        Text.create('Custom Popup');
        Text.fontSize(12);
        Text.pop();
        Row.pop();
    }
    popupBuilderOne() {
        Row.create({ space: 2 });
        Row.width(100);
        Row.height(50);
        Row.backgroundColor(Color.White);
        Row.key('image1');
        Text.create('Custom PopupOne');
        Text.fontSize(12);
        Text.pop();
        Row.pop();
    }
    popupBuilderTwo() {
        Row.create({ space: 2 });
        Row.width(100);
        Row.height(50);
        Row.backgroundColor(Color.White);
        Row.key('image2');
        Text.create('Custom PopupTwo');
        Text.fontSize(12);
        Text.pop();
        Row.pop();
    }
    popupBuilderThree() {
        Row.create({ space: 2 });
        Row.width(100);
        Row.height(50);
        Row.backgroundColor(Color.White);
        Row.key('image3');
        Text.create('Custom PopupThree');
        Text.fontSize(12);
        Text.pop();
        Row.pop();
    }
    render() {
        Flex.create({ direction: FlexDirection.Column });
        Flex.width('100%');
        Flex.padding({ top: 5 });
        Button.createWithLabel('custom popup');
        Button.key('button');
        Button.onClick(() => {
            this.customPopup = !this.customPopup;
            try {
                var backData = {
                    data: {
                        "placement": this.placement
                    }
                };
                var backEvent = {
                    eventId: 157,
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.customPopup, {
            builder: { builder: this.popupBuilder.bind(this) },
            placement: this.placement,
            maskColor: 0x33000000,
            popupColor: Color.White,
            enableArrow: true,
            onStateChange: (e) => {
                if (!e.isVisible) {
                    this.customPopup = false;
                }
            }
        });
        Button.position({ x: 100, y: 50 });
        Button.pop();
        Button.createWithLabel('custom popupOne');
        Button.key('button1');
        Button.onClick(() => {
            this.customPopupOne = !this.customPopupOne;
            try {
                var backDataOne = {
                    data: {
                        "placement": this.placementOne
                    }
                };
                var backEventOne = {
                    eventId: 158,
                };
                console.info("button1 start to emit action state");
            }
            catch (err) {
                console.info("button1 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.customPopupOne, {
            builder: { builder: this.popupBuilderOne.bind(this) },
            placement: this.placementOne,
            maskColor: 0x33000000,
            popupColor: Color.White,
            enableArrow: true,
            onStateChange: (e) => {
                if (!e.isVisible) {
                    this.customPopupOne = false;
                }
            }
        });
        Button.position({ x: 100, y: 150 });
        Button.pop();
        Button.createWithLabel('custom popupTwo');
        Button.key('button2');
        Button.onClick(() => {
            this.customPopupTwo = !this.customPopupTwo;
            try {
                var backDataTwo = {
                    data: {
                        "placement": this.placementTwo
                    }
                };
                var backEventTwo = {
                    eventId: 159,
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.customPopupTwo, {
            builder: { builder: this.popupBuilderTwo.bind(this) },
            placement: this.placementTwo,
            maskColor: 0x33000000,
            popupColor: Color.White,
            enableArrow: true,
            onStateChange: (e) => {
                if (!e.isVisible) {
                    this.customPopupTwo = false;
                }
            }
        });
        Button.position({ x: 100, y: 250 });
        Button.pop();
        Button.createWithLabel('custom popupThree');
        Button.key('button3');
        Button.onClick(() => {
            this.customPopupThree = !this.customPopupThree;
            try {
                var backDataThree = {
                    data: {
                        "placement": this.placementThree
                    }
                };
                var backEventThree = {
                    eventId: 160,
                };
                console.info("button3 start to emit action state");
            }
            catch (err) {
                console.info("button3 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.bindPopup(this.customPopupThree, {
            builder: { builder: this.popupBuilderThree.bind(this) },
            placement: this.placementThree,
            maskColor: 0x33000000,
            popupColor: Color.White,
            enableArrow: true,
            onStateChange: (e) => {
                if (!e.isVisible) {
                    this.customPopupThree = false;
                }
            }
        });
        Button.position({ x: 100, y: 550 });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new PlacementExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=placement.js.map