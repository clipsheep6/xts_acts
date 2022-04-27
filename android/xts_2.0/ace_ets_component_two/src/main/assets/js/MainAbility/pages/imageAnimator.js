/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\imageAnimator.ets?entry ***!
  \************************************************************************************************************/
class ImageAnimatorExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__state = new ObservedPropertyObject(AnimationStatus.Initial, this, "state");
        this.__preDecode = new ObservedPropertySimple(0, this, "preDecode");
        this.__fillMode = new ObservedPropertyObject(FillMode.None, this, "fillMode");
        this.__reverse = new ObservedPropertySimple(false, this, "reverse");
        this.__iterations = new ObservedPropertySimple(1, this, "iterations");
        this.__fixedSize = new ObservedPropertySimple(false, this, "fixedSize");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                console.info("imageAnimator page state change called:" + JSON.stringify(eventData));
                if (eventData.data.preDecode != null) {
                    this.preDecode = eventData.data.preDecode;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.state !== undefined) {
            this.state = params.state;
        }
        if (params.preDecode !== undefined) {
            this.preDecode = params.preDecode;
        }
        if (params.fillMode !== undefined) {
            this.fillMode = params.fillMode;
        }
        if (params.reverse !== undefined) {
            this.reverse = params.reverse;
        }
        if (params.iterations !== undefined) {
            this.iterations = params.iterations;
        }
        if (params.fixedSize !== undefined) {
            this.fixedSize = params.fixedSize;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__state.aboutToBeDeleted();
        this.__preDecode.aboutToBeDeleted();
        this.__fillMode.aboutToBeDeleted();
        this.__reverse.aboutToBeDeleted();
        this.__iterations.aboutToBeDeleted();
        this.__fixedSize.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get state() {
        return this.__state.get();
    }
    set state(newValue) {
        this.__state.set(newValue);
    }
    get preDecode() {
        return this.__preDecode.get();
    }
    set preDecode(newValue) {
        this.__preDecode.set(newValue);
    }
    get fillMode() {
        return this.__fillMode.get();
    }
    set fillMode(newValue) {
        this.__fillMode.set(newValue);
    }
    get reverse() {
        return this.__reverse.get();
    }
    set reverse(newValue) {
        this.__reverse.set(newValue);
    }
    get iterations() {
        return this.__iterations.get();
    }
    set iterations(newValue) {
        this.__iterations.set(newValue);
    }
    get fixedSize() {
        return this.__fixedSize.get();
    }
    set fixedSize(newValue) {
        this.__fixedSize.set(newValue);
    }
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(0xF1F3F5);
        ImageAnimator.create();
        ImageAnimator.images([
            {
                src: '/comment/bg1.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg2.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg3.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg4.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            }
        ]);
        ImageAnimator.state(ObservedObject.GetRawObject(this.state));
        ImageAnimator.reverse(this.reverse);
        ImageAnimator.fixedSize(this.fixedSize);
        ImageAnimator.preDecode(this.preDecode);
        ImageAnimator.fillMode(ObservedObject.GetRawObject(this.fillMode));
        ImageAnimator.iterations(this.iterations);
        ImageAnimator.width(325);
        ImageAnimator.height(210);
        ImageAnimator.margin({ top: 100 });
        ImageAnimator.onStart(() => {
            console.info('Start');
        });
        ImageAnimator.onPause(() => {
            console.info('Pause');
        });
        ImageAnimator.onRepeat(() => {
            console.info('Repeat');
            try {
                var backData = {
                    data: {
                        "string": 'Repeat'
                    }
                };
                var backEvent = {
                    eventId: 114,
                };
                console.info("start to emit action state");
            }
            catch (err) {
                console.info("emit action state err: " + JSON.stringify(err.message));
            }
        });
        ImageAnimator.onCancel(() => {
            console.info('Cancel');
        });
        ImageAnimator.onFinish(() => {
            console.info('Finish');
        });
        Row.create();
        Button.createWithLabel('start');
        Button.key('button');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Running;
            try {
                var backData = {
                    data: {
                        "state": this.state
                    }
                };
                var backEvent = {
                    eventId: 115,
                };
                console.info("button start to emit action state");
            }
            catch (err) {
                console.info("button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('pause');
        Button.key('button1');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Paused;
            try {
                var backData = {
                    data: {
                        "state": this.state,
                        "fixedSize": this.fixedSize
                    }
                };
                var backEvent = {
                    eventId: 116,
                };
                console.info("button1 start to emit action state");
            }
            catch (err) {
                console.info("button1 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('stop');
        Button.key('button2');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Stopped;
            try {
                var backData = {
                    data: {
                        "state": this.state,
                        "preDecode": this.preDecode
                    }
                };
                var backEvent = {
                    eventId: 117,
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel('reverse');
        Button.key('button3');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.reverse = !this.reverse;
            try {
                var backData = {
                    data: {
                        "fillMode": this.fillMode
                    }
                };
                var backEvent = {
                    eventId: 118,
                };
                console.info("button3 start to emit action state");
            }
            catch (err) {
                console.info("button3 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('once');
        Button.key('button4');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.iterations = 1;
            try {
                var backData = {
                    data: {
                        "iterations": this.iterations
                    }
                };
                var backEvent = {
                    eventId: 119,
                };
                console.info("button4 start to emit action state");
            }
            catch (err) {
                console.info("button4 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('iteration');
        Button.key('button5');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.iterations = -1;
            try {
                var backData = {
                    data: {
                        "preDecode": this.preDecode
                    }
                };
                var backEvent = {
                    eventId: 120,
                };
                console.info("button5 start to emit action state");
            }
            catch (err) {
                console.info("button5 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Row.pop();
        Column.pop();
    }
    onPageShow() {
        console.info('imageAnimator page show called');
        var stateChangeEvent = {
            eventId: 121,
        };
    }
}
loadDocument(new ImageAnimatorExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=imageAnimator.js.map