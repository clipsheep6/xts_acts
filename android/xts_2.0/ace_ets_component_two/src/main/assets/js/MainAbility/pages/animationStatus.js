/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\animationStatus.ets?entry ***!
  \**************************************************************************************************************/
class ImageAnimatorExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__state = new ObservedPropertyObject(AnimationStatus.Initial, this, "state");
        this.__reverse = new ObservedPropertySimple(false, this, "reverse");
        this.__iterations = new ObservedPropertySimple(1, this, "iterations");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.state !== undefined) {
            this.state = params.state;
        }
        if (params.reverse !== undefined) {
            this.reverse = params.reverse;
        }
        if (params.iterations !== undefined) {
            this.iterations = params.iterations;
        }
    }
    aboutToBeDeleted() {
        this.__state.aboutToBeDeleted();
        this.__reverse.aboutToBeDeleted();
        this.__iterations.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get state() {
        return this.__state.get();
    }
    set state(newValue) {
        this.__state.set(newValue);
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
    render() {
        Column.create({ space: 5 });
        Column.width('100%');
        Column.height('100%');
        Column.backgroundColor(0xF1F3F5);
        ImageAnimator.create();
        ImageAnimator.key('ImageAnimator');
        ImageAnimator.images([
            {
                src: '/comment/bg.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            },
            {
                src: '/comment/bg.jpg',
                duration: 500,
                width: 325,
                height: 200,
                top: 0,
                left: 0
            }
        ]);
        ImageAnimator.state(ObservedObject.GetRawObject(this.state));
        ImageAnimator.reverse(this.reverse);
        ImageAnimator.fixedSize(false);
        ImageAnimator.preDecode(2);
        ImageAnimator.fillMode(FillMode.None);
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
        });
        ImageAnimator.onCancel(() => {
            console.info('Cancel');
        });
        ImageAnimator.onFinish(() => {
            console.info('Finish');
        });
        Row.create();
        Button.createWithLabel('start');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Running;
        });
        Button.pop();
        Button.createWithLabel('pause');
        Button.key('button2');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Paused;
            try {
                var backData = {
                    data: {
                        "animationStatus": this.state,
                    }
                };
                var backEvent = {
                    eventId: 56,
                };
                console.info("button2 start to emit action state");
            }
            catch (err) {
                console.info("button2 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Button.createWithLabel('stop');
        Button.key('button3');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.state = AnimationStatus.Stopped;
            try {
                var backData = {
                    data: {
                        "animationStatus": this.state,
                    }
                };
                var backEvent = {
                    eventId: 57,
                };
                console.info("button3 start to emit action state");
            }
            catch (err) {
                console.info("button3 emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.pop();
        Row.pop();
        Row.create();
        Button.createWithLabel('reverse');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.reverse = !this.reverse;
        });
        Button.pop();
        Button.createWithLabel('once');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.iterations = 1;
        });
        Button.pop();
        Button.createWithLabel('iteration');
        Button.width(100);
        Button.padding(5);
        Button.onClick(() => {
            this.iterations = -1;
        });
        Button.pop();
        Row.pop();
        Column.pop();
    }
}
loadDocument(new ImageAnimatorExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=animationStatus.js.map