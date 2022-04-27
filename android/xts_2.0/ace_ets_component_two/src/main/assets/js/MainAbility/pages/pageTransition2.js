/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\pageTransition2.ets?entry ***!
  \**************************************************************************************************************/
class AExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__scale = new ObservedPropertySimple(1, this, "scale");
        this.__opacity = new ObservedPropertySimple(1, this, "opacity");
        this.__active = new ObservedPropertySimple(false, this, "active");
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
    }
    aboutToBeDeleted() {
        this.__scale.aboutToBeDeleted();
        this.__opacity.aboutToBeDeleted();
        this.__active.aboutToBeDeleted();
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
    render() {
        Column.create();
        Column.height("100%");
        Column.width("100%");
        Column.scale({ x: this.scale });
        Column.opacity(this.opacity);
        Navigator.create({ target: 'pages/pageTransition', type: NavigationType.Push });
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
}
loadDocument(new AExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=pageTransition2.js.map