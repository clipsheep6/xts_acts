/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\pageTransition.ets?entry ***!
  \*************************************************************************************************************/
class PageTransitionExample1 extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__scale = new ObservedPropertySimple(1, this, "scale");
        this.__opacity = new ObservedPropertySimple(1, this, "opacity");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.__type = new ObservedPropertyObject(NavigationType.Push, this, "type");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("active page state change called:" + JSON.stringify(eventData));
                if (eventData.data.scale != null) {
                    this.scale = parseInt(eventData.data.scale);
                }
                if (eventData.data.opacity != null) {
                    this.opacity = parseInt(eventData.data.opacity);
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.scale !== undefined) {
            this.scale = params.scale;
        }
        if (params.opacity !== undefined) {
            this.opacity = params.opacity;
        }
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.type !== undefined) {
            this.type = params.type;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__scale.aboutToBeDeleted();
        this.__opacity.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
        this.__type.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get scale() {
        return this.__scale.get();
    }
    set scale(newValue) {
        this.__scale.set(newValue);
    }
    get opacity() {
        return this.__opacity.get();
    }
    set opacity(newValue) {
        this.__opacity.set(newValue);
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    get type() {
        return this.__type.get();
    }
    set type(newValue) {
        this.__type.set(newValue);
    }
    render() {
        Column.create();
        Column.scale({ x: this.scale });
        Column.opacity(this.opacity);
        Navigator.create({ target: 'pages/pageTransition2', type: this.type });
        Navigator.key('Navigator');
        Navigator.onClick(() => {
            this.active = true;
            console.info('pageTransition current action state is: ' + this.active);
            try {
                var backData = {
                    data: {
                        "scale": this.scale,
                        "opacity": this.opacity,
                        "type": this.type
                    }
                };
                var backEvent = {
                    eventId: 144,
                };
                console.info("pageTransition start to emit action state");
            }
            catch (err) {
                console.info("pageTransition emit action state err: " + JSON.stringify(err.message));
            }
        });
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.width("100%");
        Image.height("100%");
        Navigator.pop();
        Column.pop();
    }
    pageTransition() {
        PageTransition.create();
        PageTransitionEnter.create({ duration: 1200, curve: Curve.Linear });
        PageTransitionEnter.onEnter((type, progress) => {
            this.scale = 1;
            this.opacity = progress;
        });
        PageTransitionExit.create({ duration: 1500, curve: Curve.Ease });
        PageTransitionExit.onExit((type, progress) => {
            this.scale = 1 - progress;
            this.opacity = 1;
        });
        PageTransition.pop();
    }
    onPageShow() {
        console.info('active page show called');
        var stateChangeEventOne = {
            eventId: 145,
        };
    }
}
loadDocument(new PageTransitionExample1("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=pageTransition.js.map