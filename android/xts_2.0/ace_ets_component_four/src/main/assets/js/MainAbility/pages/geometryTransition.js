/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\geometryTransition.ets?entry ***!
  \*****************************************************************************************************************/
class geometryTransitionExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__btn1 = new ObservedPropertySimple(false, this, "btn1");
        this.__show = new ObservedPropertySimple("show", this, "show");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.btn1 !== undefined) {
            this.btn1 = params.btn1;
        }
        if (params.show !== undefined) {
            this.show = params.show;
        }
    }
    aboutToBeDeleted() {
        this.__btn1.aboutToBeDeleted();
        this.__show.aboutToBeDeleted();
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
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, });
        Flex.debugLine("pages/geometryTransition.ets(24:5)");
        Flex.height(400);
        Flex.width("100%");
        Flex.padding({ top: 100 });
        Button.createWithLabel(this.show);
        Button.debugLine("pages/geometryTransition.ets(25:7)");
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 50 });
        Button.key('button');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "btn1": this.btn1,
                    }
                };
                var backEvent = {
                    eventId: 104,
                };
                console.info("geometryTransitionTest_0100 start to emit action state");
            }
            catch (err) {
                console.info("geometryTransitionTest_0100 emit action state err: " + JSON.stringify(err.message));
            }
            Context.animateTo({ duration: 1000 }, () => {
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
            Button.debugLine("pages/geometryTransition.ets(50:9)");
            Button.geometryTransition('geometryTransition');
            Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
            Image.debugLine("pages/geometryTransition.ets(51:11)");
            Image.width("80%");
            Image.height(300);
            Button.pop();
        }
        If.pop();
        Flex.pop();
    }
}
loadDocument(new geometryTransitionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=geometryTransition.js.map