/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/sharedTransition.ets?entry ***!
  \**************************************************************************************************************************************************/
class SharedTransitionExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__scale = new ObservedPropertySimple(1, this, "scale");
        this.__opacity = new ObservedPropertySimple(1, this, "opacity");
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.__duration = new ObservedPropertySimple(1000, this, "duration");
        this.__delay = new ObservedPropertySimple(0, this, "delay");
        this.__type = new ObservedPropertySimple(SharedTransitionEffectType.Static, this, "type");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("sharedTransition page state change called:" + JSON.stringify(eventData));
                if (eventData.data.duration != null) {
                    this.duration = eventData.data.duration;
                }
                if (eventData.data.delay != null) {
                    this.delay = eventData.data.delay;
                }
                if (eventData.data.type != null) {
                    this.type = eventData.data.type;
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
        if (params.duration !== undefined) {
            this.duration = params.duration;
        }
        if (params.delay !== undefined) {
            this.delay = params.delay;
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
        this.__duration.aboutToBeDeleted();
        this.__delay.aboutToBeDeleted();
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
    get duration() {
        return this.__duration.get();
    }
    set duration(newValue) {
        this.__duration.set(newValue);
    }
    get delay() {
        return this.__delay.get();
    }
    set delay(newValue) {
        this.__delay.set(newValue);
    }
    get type() {
        return this.__type.get();
    }
    set type(newValue) {
        this.__type.set(newValue);
    }
    render() {
        List.create();
        ListItem.create();
        Row.create();
        Navigator.create({ target: 'pages/sharedTransition2', type: NavigationType.Push });
        Navigator.key('Navigator');
        Navigator.padding({ left: 10 });
        Navigator.onClick(() => {
            this.active = true;
            console.info('SharedTransition current action state is: ' + this.active);
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                        "delay": this.delay,
                        "type": this.type
                    }
                };
                var backEvent = {
                    eventId: 193
                };
                console.info("SharedTransition start to emit action state");
            }
            catch (err) {
                console.info("SharedTransition emit action state err: " + JSON.stringify(err.message));
            }
        });
        Image.create({ "id": 0, "type": 30000, params: ['ic_health_heart.png'] });
        Image.width(50);
        Image.height(50);
        Image.sharedTransition('sharedImage1', { duration: this.duration, delay: this.delay, type: this.type });
        Navigator.pop();
        Text.create('SharedTransition');
        Text.width(80);
        Text.height(80);
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Row.pop();
        ListItem.pop();
        List.pop();
    }
    onPageShow() {
        console.info('sharedTransition page show called');
        var stateChangeEvent = {
            eventId: 194
        };
    }
}
loadDocument(new SharedTransitionExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=sharedTransition.js.map