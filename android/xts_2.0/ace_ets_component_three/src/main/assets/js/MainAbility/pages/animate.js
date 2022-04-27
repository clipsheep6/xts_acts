/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/animate.ets?entry ***!
  \*****************************************************************************************************************************************/
class AnimationExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__btn1 = new ObservedPropertySimple(false, this, "btn1");
        this.__duration = new ObservedPropertySimple(100, this, "duration");
        this.__curve = new ObservedPropertySimple('Ease', this, "curve");
        this.__iteration = new ObservedPropertySimple(1, this, "iteration");
        this.__tempo = new ObservedPropertySimple(1000, this, "tempo");
        this.__playmode = new ObservedPropertySimple(PlayMode.Normal, this, "playmode");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("animate page state change called:" + JSON.stringify(eventData));
                if (eventData.data.duration != null) {
                    this.duration = parseInt(eventData.data.duration);
                }
                if (eventData.data.curve != null) {
                    this.curve = eventData.data.curve;
                }
                if (eventData.data.tempo != null) {
                    this.tempo = parseInt(eventData.data.tempo);
                }
                if (eventData.data.iteration != null) {
                    this.iteration = parseInt(eventData.data.iteration);
                }
                if (eventData.data.playmode != null) {
                    this.playmode = eventData.data.playmode;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.btn1 !== undefined) {
            this.btn1 = params.btn1;
        }
        if (params.duration !== undefined) {
            this.duration = params.duration;
        }
        if (params.curve !== undefined) {
            this.curve = params.curve;
        }
        if (params.iteration !== undefined) {
            this.iteration = params.iteration;
        }
        if (params.tempo !== undefined) {
            this.tempo = params.tempo;
        }
        if (params.playmode !== undefined) {
            this.playmode = params.playmode;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__btn1.aboutToBeDeleted();
        this.__duration.aboutToBeDeleted();
        this.__curve.aboutToBeDeleted();
        this.__iteration.aboutToBeDeleted();
        this.__tempo.aboutToBeDeleted();
        this.__playmode.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get btn1() {
        return this.__btn1.get();
    }
    set btn1(newValue) {
        this.__btn1.set(newValue);
    }
    get duration() {
        return this.__duration.get();
    }
    set duration(newValue) {
        this.__duration.set(newValue);
    }
    get curve() {
        return this.__curve.get();
    }
    set curve(newValue) {
        this.__curve.set(newValue);
    }
    get iteration() {
        return this.__iteration.get();
    }
    set iteration(newValue) {
        this.__iteration.set(newValue);
    }
    get tempo() {
        return this.__tempo.get();
    }
    set tempo(newValue) {
        this.__tempo.set(newValue);
    }
    get playmode() {
        return this.__playmode.get();
    }
    set playmode(newValue) {
        this.__playmode.set(newValue);
    }
    onPageShow() {
        console.info('animate page show called');
        var stateChangeEvent = {
            eventId: 50
        };
        var stateChangeEventa = {
            eventId: 1011
        };
        var stateChangeEventb = {
            eventId: 1012
        };
        var stateChangeEventc = {
            eventId: 1013
        };
        var stateChangeEventd = {
            eventId: 1014
        };
        var stateChangeEvente = {
            eventId: 1015
        };
        var stateChangeEventf = {
            eventId: 1016
        };
        var stateChangeEventg = {
            eventId: 1017
        };
        var stateChangeEventh = {
            eventId: 1018
        };
        var stateChangeEventi = {
            eventId: 1019
        };
        var stateChangeEventj = {
            eventId: 1020
        };
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
        Button.margin({ bottom: 20 });
        Button.key('button1');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 51
                };
                console.info("button1 start to emit action state");
            }
            catch (err) {
                console.info("button1 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button1 animateTo START");
            console.info("button1 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button1 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button2');
        Button.onClick(() => {
            try {
                var backDataOne = {
                    data: {
                        "curve": this.curve,
                    }
                };
                var backEventOne = {
                    eventId: 52
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button2 animateTo START");
            console.info("button2 curve value is : " + this.curve);
            Context.animateTo({ curve: this.curve }, () => {
                console.info("button2 curve test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button3');
        Button.onClick(() => {
            try {
                var backDataTwo = {
                    data: {
                        "iterations": this.iteration,
                    }
                };
                var backEventTwo = {
                    eventId: 53
                };
                console.info("button3 start to emit action state");
            }
            catch (err) {
                console.info("button3 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button3 animateTo START");
            console.info("button3 iteration value is : " + this.iteration);
            Context.animateTo({ iterations: this.iteration }, () => {
                console.info("button3 iterations test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button4');
        Button.onClick(() => {
            try {
                var backDataThree = {
                    data: {
                        "tempo": this.tempo
                    }
                };
                var backEventThree = {
                    eventId: 54
                };
                console.info("button4 start to emit action state");
            }
            catch (err) {
                console.info("button4 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button4 animateTo START");
            console.info("button4 tempo value is : " + this.duration);
            Context.animateTo({ tempo: this.tempo }, () => {
                console.info("button4 tempo test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button5');
        Button.onClick(() => {
            try {
                var backDataFour = {
                    data: {
                        "playmode": this.playmode,
                    }
                };
                var backEventFour = {
                    eventId: 55
                };
                console.info("button5 start to emit action state");
            }
            catch (err) {
                console.info("button5 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button5 animateTo START");
            console.info("button5 playmode value is : " + this.playmode);
            Context.animateTo({ PlayMode: this.playmode }, () => {
                console.info("button5 playMode test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button6');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1001
                };
                console.info("button6 start to emit action state");
            }
            catch (err) {
                console.info("button6 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button6 animateTo START");
            console.info("button6 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button6 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button7');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1002
                };
                console.info("button7 start to emit action state");
            }
            catch (err) {
                console.info("button7 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button7 animateTo START");
            console.info("button7 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button7 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button8');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1003
                };
                console.info("button8 start to emit action state");
            }
            catch (err) {
                console.info("button8 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button8 animateTo START");
            console.info("button8 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button8 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button9');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1004
                };
                console.info("button9 start to emit action state");
            }
            catch (err) {
                console.info("button9 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button9 animateTo START");
            console.info("button9 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button9 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button10');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1005
                };
                console.info("button10 start to emit action state");
            }
            catch (err) {
                console.info("button10 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button10 animateTo START");
            console.info("button10 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button10 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button11');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1006
                };
                console.info("button11 start to emit action state");
            }
            catch (err) {
                console.info("button11 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button11 animateTo START");
            console.info("button11 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button11 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button12');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1007
                };
                console.info("button12 start to emit action state");
            }
            catch (err) {
                console.info("button12 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button12 animateTo START");
            console.info("button12 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button12 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button13');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1008
                };
                console.info("button13 start to emit action state");
            }
            catch (err) {
                console.info("button13 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button13 animateTo START");
            console.info("button13 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button13 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button14');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1009
                };
                console.info("button14 start to emit action state");
            }
            catch (err) {
                console.info("button14 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button14 animateTo START");
            console.info("button14 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button14 duration test animateTo START");
            });
        });
        Button.pop();
        Button.createWithLabel(this.show);
        Button.width(80);
        Button.height(30);
        Button.backgroundColor(0x317aff);
        Button.margin({ bottom: 20 });
        Button.key('button15');
        Button.onClick(() => {
            try {
                var backData = {
                    data: {
                        "duration": this.duration,
                    }
                };
                var backEvent = {
                    eventId: 1010
                };
                console.info("button15 start to emit action state");
            }
            catch (err) {
                console.info("button15 emit action state err: " + JSON.stringify(err.message));
            }
            console.info("button15 animateTo START");
            console.info("button15 duration value is : " + this.duration);
            Context.animateTo({ duration: this.duration }, () => {
                console.info("button15 duration test animateTo START");
            });
        });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new AnimationExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=animate.js.map