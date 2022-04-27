/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/transition.ets?entry ***!
  \********************************************************************************************************************************************/
class TransitionExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__btn1 = new ObservedPropertySimple(false, this, "btn1");
        this.__show = new ObservedPropertySimple("show", this, "show");
        this.__opacity = new ObservedPropertySimple(1, this, "opacity");
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.__transitionTypeOne = new ObservedPropertySimple(TransitionType.Insert, this, "transitionTypeOne");
        this.__transitionTypeTwo = new ObservedPropertySimple(TransitionType.Delete, this, "transitionTypeTwo");
        this.__transitionTypeThree = new ObservedPropertySimple(TransitionType.All, this, "transitionTypeThree");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("transition state change called:" + JSON.stringify(eventData));
                if (eventData.data.opacity != null) {
                    this.opacity = parseInt(eventData.data.opacity);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.btn1 !== undefined) {
            this.btn1 = params.btn1;
        }
        if (params.show !== undefined) {
            this.show = params.show;
        }
        if (params.opacity !== undefined) {
            this.opacity = params.opacity;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.transitionTypeOne !== undefined) {
            this.transitionTypeOne = params.transitionTypeOne;
        }
        if (params.transitionTypeTwo !== undefined) {
            this.transitionTypeTwo = params.transitionTypeTwo;
        }
        if (params.transitionTypeThree !== undefined) {
            this.transitionTypeThree = params.transitionTypeThree;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__btn1.aboutToBeDeleted();
        this.__show.aboutToBeDeleted();
        this.__opacity.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        this.__transitionTypeOne.aboutToBeDeleted();
        this.__transitionTypeTwo.aboutToBeDeleted();
        this.__transitionTypeThree.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get btn1() {
        return this.__btn1.get();
    }
    set btn1(newValue) {
        this.__btn1.set(newValue);
    }
    get show() {
        return this.__show.get();
    }
    set show(newValue) {
        this.__show.set(newValue);
    }
    get opacity() {
        return this.__opacity.get();
    }
    set opacity(newValue) {
        this.__opacity.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    get transitionTypeOne() {
        return this.__transitionTypeOne.get();
    }
    set transitionTypeOne(newValue) {
        this.__transitionTypeOne.set(newValue);
    }
    get transitionTypeTwo() {
        return this.__transitionTypeTwo.get();
    }
    set transitionTypeTwo(newValue) {
        this.__transitionTypeTwo.set(newValue);
    }
    get transitionTypeThree() {
        return this.__transitionTypeThree.get();
    }
    set transitionTypeThree(newValue) {
        this.__transitionTypeThree.set(newValue);
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, });
        Flex.height(400);
        Flex.width("100%");
        Flex.padding({ top: 100 });
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 50 });
        Button.key('button');
        Button.opacity(this.opacity);
        Button.onClick(() => {
            this.onActionCalled = true;
            try {
                var backData = {
                    data: {
                        "btn1": this.btn1,
                    }
                };
                var backEvent = {
                    eventId: 233
                };
                console.info("transitionTest_0200 start to emit action state");
            }
            catch (err) {
                console.info("transitionTest_0200 emit action state err: " + JSON.stringify(err.message));
            }
            Context.animateTo({ duration: 3000 }, () => {
                this.btn1 = !this.btn1;
                if (this.btn1) {
                    this.show = "hide";
                }
                else {
                    this.show = "show";
                }
            });
        });
        Button.pop();
        If.create();
        if (this.btn1) {
            If.branchId(0);
            Button.createWithChild();
            Button.transition({ type: this.transitionTypeOne, scale: { x: 0, y: 1.0, z: 1.0 }, opacity: this.opacity });
            Button.key('button1');
            Button.transition({ type: this.transitionTypeTwo, scale: { x: 1.0, y: 0.0 }, opacity: this.opacity });
            Image.create({ "id": 0, "type": 30000, params: ['test.png'] });
            Image.width("80%");
            Image.height(300);
            Image.key('image');
            Button.pop();
        }
        If.pop();
        Flex.pop();
    }
    onPageShow() {
        console.info('transition page show called');
        var stateChangeEvent = {
            eventId: 234
        };
    }
}
loadDocument(new TransitionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=transition.js.map