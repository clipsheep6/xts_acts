/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/motionPath.ets?entry ***!
  \********************************************************************************************************************************************/
class MotionPathExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__offsetX = new ObservedPropertySimple(0, this, "offsetX");
        this.__offsetY = new ObservedPropertySimple(0, this, "offsetY");
        this.__toggle = new ObservedPropertySimple(true, this, "toggle");
        this.__rotatable = new ObservedPropertySimple(false, this, "rotatable");
        this.__path = new ObservedPropertySimple('Mstart.x start.y L300 200 L300 500 Lend.x end.y', this, "path");
        this.__fromX = new ObservedPropertySimple(0, this, "fromX");
        this.__toY = new ObservedPropertySimple(1, this, "toY");
        this.stateChangeCallBack = (eventData) => {
            if (eventData != null) {
                console.info('motionPath page state change called:' + JSON.stringify(eventData));
                if (eventData.data.fromX != null) {
                    this.fromX == parseInt(eventData.data.fromX);
                }
                if (eventData.data.toY != null) {
                    this.toY == parseInt(eventData.data.toY);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.offsetX !== undefined) {
            this.offsetX = params.offsetX;
        }
        if (params.offsetY !== undefined) {
            this.offsetY = params.offsetY;
        }
        if (params.toggle !== undefined) {
            this.toggle = params.toggle;
        }
        if (params.rotatable !== undefined) {
            this.rotatable = params.rotatable;
        }
        if (params.path !== undefined) {
            this.path = params.path;
        }
        if (params.fromX !== undefined) {
            this.fromX = params.fromX;
        }
        if (params.toY !== undefined) {
            this.toY = params.toY;
        }
        if (params.stateChangeCallBack !== undefined) {
            this.stateChangeCallBack = params.stateChangeCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__offsetX.aboutToBeDeleted();
        this.__offsetY.aboutToBeDeleted();
        this.__toggle.aboutToBeDeleted();
        this.__rotatable.aboutToBeDeleted();
        this.__path.aboutToBeDeleted();
        this.__fromX.aboutToBeDeleted();
        this.__toY.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get offsetX() {
        return this.__offsetX.get();
    }
    set offsetX(newValue) {
        this.__offsetX.set(newValue);
    }
    get offsetY() {
        return this.__offsetY.get();
    }
    set offsetY(newValue) {
        this.__offsetY.set(newValue);
    }
    get toggle() {
        return this.__toggle.get();
    }
    set toggle(newValue) {
        this.__toggle.set(newValue);
    }
    get rotatable() {
        return this.__rotatable.get();
    }
    set rotatable(newValue) {
        this.__rotatable.set(newValue);
    }
    get path() {
        return this.__path.get();
    }
    set path(newValue) {
        this.__path.set(newValue);
    }
    get fromX() {
        return this.__fromX.get();
    }
    set fromX(newValue) {
        this.__fromX.set(newValue);
    }
    get toY() {
        return this.__toY.get();
    }
    set toY(newValue) {
        this.__toY.set(newValue);
    }
    render() {
        Column.create();
        Column.key('motionPath');
        Column.width('100%');
        Column.height('100%');
        Column.alignItems(this.toggle ? HorizontalAlign.Start : HorizontalAlign.Center);
        Button.createWithLabel('click me');
        Button.key('button');
        Button.motionPath({ path: this.path, from: this.fromX, to: this.toY, rotatable: this.rotatable });
        Button.onClick(() => {
            this.rotatable = true;
            console.info('button rotate current action state is:' + this.rotatable);
            try {
                var backData = {
                    data: {
                        "ACTION": this.rotatable,
                    }
                };
                var backEvent = {
                    eventId: 132
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
            Context.animateTo({ duration: 4000, curve: Curve.Linear }, () => {
                this.toggle = !this.toggle;
            });
        });
        Button.backgroundColor(0x317aff);
        Button.pop();
        Button.createWithLabel('next');
        Button.key('button1');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "fromX": this.fromX,
                        "toY": this.toY
                    }
                };
                var backEvent = {
                    eventId: 133
                };
                console.info("button1 position start to emit action state");
            }
            catch (err) {
                console.info("button1 position emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('motionPath page show called');
        var stateChangeEvent = {
            eventId: 134
        };
    }
}
loadDocument(new MotionPathExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=motionPath.js.map