/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\patternLock.ets?entry ***!
  \**********************************************************************************************************/
class PatternLockExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__passwords = new ObservedPropertyObject([], this, "passwords");
        this.__message = new ObservedPropertySimple('please input password', this, "message");
        this.__sideLength = new ObservedPropertySimple(150, this, "sideLength");
        this.__circleRadius = new ObservedPropertySimple(7, this, "circleRadius");
        this.__pathStrokeWidth = new ObservedPropertySimple(17, this, "pathStrokeWidth");
        this.__backgroundColor = new ObservedPropertyObject("#FF008000", this, "backgroundColor");
        this.__autoReset = new ObservedPropertySimple(true, this, "autoReset");
        this.patternLockController = new PatternLockController();
        this.__onActionCalled = new ObservedPropertySimple(false, this, "onActionCalled");
        this.stateChangCallBack = (eventData) => {
            console.info("[PatternLock] page stateChangCallBack");
            if (eventData != null) {
                console.info("[PatternLock] page state change called:" + JSON.stringify(eventData));
                if (eventData.data.sideLength != null) {
                    this.sideLength = eventData.data.sideLength;
                }
                if (eventData.data.circleRadius != null) {
                    this.circleRadius = eventData.data.circleRadius;
                }
                if (eventData.data.pathStrokeWidth != null) {
                    this.pathStrokeWidth = eventData.data.pathStrokeWidth;
                }
                if (eventData.data.backgroundColor != null) {
                    this.backgroundColor = eventData.data.backgroundColor;
                }
                if (eventData.data.autoReset != null) {
                    this.autoReset = eventData.data.autoReset;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.passwords !== undefined) {
            this.passwords = params.passwords;
        }
        if (params.message !== undefined) {
            this.message = params.message;
        }
        if (params.sideLength !== undefined) {
            this.sideLength = params.sideLength;
        }
        if (params.circleRadius !== undefined) {
            this.circleRadius = params.circleRadius;
        }
        if (params.pathStrokeWidth !== undefined) {
            this.pathStrokeWidth = params.pathStrokeWidth;
        }
        if (params.backgroundColor !== undefined) {
            this.backgroundColor = params.backgroundColor;
        }
        if (params.autoReset !== undefined) {
            this.autoReset = params.autoReset;
        }
        if (params.patternLockController !== undefined) {
            this.patternLockController = params.patternLockController;
        }
        if (params.onActionCalled !== undefined) {
            this.onActionCalled = params.onActionCalled;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__passwords.aboutToBeDeleted();
        this.__message.aboutToBeDeleted();
        this.__sideLength.aboutToBeDeleted();
        this.__circleRadius.aboutToBeDeleted();
        this.__pathStrokeWidth.aboutToBeDeleted();
        this.__backgroundColor.aboutToBeDeleted();
        this.__autoReset.aboutToBeDeleted();
        this.__onActionCalled.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get passwords() {
        return this.__passwords.get();
    }
    set passwords(newValue) {
        this.__passwords.set(newValue);
    }
    get message() {
        return this.__message.get();
    }
    set message(newValue) {
        this.__message.set(newValue);
    }
    get sideLength() {
        return this.__sideLength.get();
    }
    set sideLength(newValue) {
        this.__sideLength.set(newValue);
    }
    get circleRadius() {
        return this.__circleRadius.get();
    }
    set circleRadius(newValue) {
        this.__circleRadius.set(newValue);
    }
    get pathStrokeWidth() {
        return this.__pathStrokeWidth.get();
    }
    set pathStrokeWidth(newValue) {
        this.__pathStrokeWidth.set(newValue);
    }
    get backgroundColor() {
        return this.__backgroundColor.get();
    }
    set backgroundColor(newValue) {
        this.__backgroundColor.set(newValue);
    }
    get autoReset() {
        return this.__autoReset.get();
    }
    set autoReset(newValue) {
        this.__autoReset.set(newValue);
    }
    get onActionCalled() {
        return this.__onActionCalled.get();
    }
    set onActionCalled(newValue) {
        this.__onActionCalled.set(newValue);
    }
    onPageShow() {
        console.info('[PatternLock] page show called');
        var stateChangeEvent = {
            eventId: 152,
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.debugLine("pages/patternLock.ets(62:5)");
        Flex.width('100%');
        Flex.height('100%');
        Text.create(this.message);
        Text.debugLine("pages/patternLock.ets(63:7)");
        Text.textAlign(TextAlign.Center);
        Text.pop();
        PatternLock.create(this.patternLockController);
        PatternLock.debugLine("pages/patternLock.ets(64:7)");
        PatternLock.sideLength(this.sideLength);
        PatternLock.circleRadius(this.circleRadius);
        PatternLock.pathStrokeWidth(this.pathStrokeWidth);
        PatternLock.backgroundColor(`${this.backgroundColor}`);
        PatternLock.autoReset(this.autoReset);
        PatternLock.key('PatternLock');
        PatternLock.onPatternComplete((input) => {
            console.log('PatternLock onPatternComplete');
            if (input == null || input == undefined || input.length < 5) {
                this.message = 'The password length needs to be greater than 5.';
                console.log('The password length needs to be greater than 5');
                return;
            }
            if (this.passwords.length > 0) {
                if (this.passwords.toString() == input.toString()) {
                    this.passwords = input;
                    this.message = 'Set password successfully';
                    console.log('Set password successfully');
                }
                else {
                    this.message = 'Inconsistent passwords, please enter again.';
                    console.log('Inconsistent passwords, please enter again');
                }
            }
            else {
                this.passwords = input;
                this.message = "Please enter again.";
                console.log('Please enter again');
            }
        });
        Button.createWithLabel('reset button');
        Button.debugLine("pages/patternLock.ets(94:7)");
        Button.margin(30);
        Button.onClick(() => {
            this.patternLockController.reset();
            this.passwords = [];
            this.message = 'Please input password';
            this.onActionCalled = true;
            try {
                var backData = {
                    data: {
                        "ACTION": this.onActionCalled,
                    }
                };
                var backEvent = {
                    eventId: 153,
                };
                console.info("reset button start to emit action state");
            }
            catch (err) {
                console.info("reset button emit action state err: " + JSON.stringify(err.message));
            }
        });
        Button.key('button1');
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new PatternLockExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=patternLock.js.map