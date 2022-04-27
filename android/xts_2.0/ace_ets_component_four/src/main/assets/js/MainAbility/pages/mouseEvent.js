/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\mouseEvent.ets?entry ***!
  \*********************************************************************************************************/
class MouseEventExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__hoverText = new ObservedPropertySimple('no hover', this, "hoverText");
        this.__mouseText = new ObservedPropertySimple('MouseText', this, "mouseText");
        this.__color = new ObservedPropertyObject(Color.Blue, this, "color");
        this.__eventButton = new ObservedPropertySimple('', this, "eventButton");
        this.__eventAction = new ObservedPropertySimple('', this, "eventAction");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.hoverText !== undefined) {
            this.hoverText = params.hoverText;
        }
        if (params.mouseText !== undefined) {
            this.mouseText = params.mouseText;
        }
        if (params.color !== undefined) {
            this.color = params.color;
        }
        if (params.eventButton !== undefined) {
            this.eventButton = params.eventButton;
        }
        if (params.eventAction !== undefined) {
            this.eventAction = params.eventAction;
        }
    }
    aboutToBeDeleted() {
        this.__hoverText.aboutToBeDeleted();
        this.__mouseText.aboutToBeDeleted();
        this.__color.aboutToBeDeleted();
        this.__eventButton.aboutToBeDeleted();
        this.__eventAction.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get hoverText() {
        return this.__hoverText.get();
    }
    set hoverText(newValue) {
        this.__hoverText.set(newValue);
    }
    get mouseText() {
        return this.__mouseText.get();
    }
    set mouseText(newValue) {
        this.__mouseText.set(newValue);
    }
    get color() {
        return this.__color.get();
    }
    set color(newValue) {
        this.__color.set(newValue);
    }
    get eventButton() {
        return this.__eventButton.get();
    }
    set eventButton(newValue) {
        this.__eventButton.set(newValue);
    }
    get eventAction() {
        return this.__eventAction.get();
    }
    set eventAction(newValue) {
        this.__eventAction.set(newValue);
    }
    render() {
        Column.create({ space: 20 });
        Column.padding({ top: 20 });
        Column.width('100%');
        Button.createWithLabel(this.hoverText);
        Button.onHover((isHover) => {
            if (isHover) {
                this.hoverText = 'on hover';
                this.color = Color.Pink;
            }
            else {
                this.hoverText = 'no hover';
                this.color = Color.Blue;
            }
        });
        Button.backgroundColor(ObservedObject.GetRawObject(this.color));
        Button.pop();
        Button.createWithLabel('onMouse');
        Button.onMouse((event) => {
            if (event.button === MouseButton.Back) {
                this.eventButton = 'Back';
            }
            if (event.button === MouseButton.None) {
                this.eventButton = 'None';
            }
            if (event.event.action === MouseAction.Release) {
                this.eventAction = 'Release';
            }
            if (event.event.action === MouseAction.Hover) {
                this.eventAction = 'Hover';
            }
            if (event.event.action === MouseAction.None) {
                this.eventAction = 'None';
            }
            console.log(this.mouseText = 'onMouse:\nButton = ' + event.button + '\nAction = ' + event.action + '\nlocalXY=(' + event.x + ',' + event.y + ')' + '\nscreenXY=(' + event.screenX + ',' + event.screenY + ')');
            console.log(this.mouseText = 'onMouse:\nButton = ' + this.eventAction + '\nAction = ' + this.eventAction + '\nlocalXY=(' + event.x + ',' + event.y + ')' + '\nscreenXY=(' + event.screenX + ',' + event.screenY + ')');
            stopPropagation: () => {
                console.info('stopPropagation');
            };
        });
        Button.pop();
        Text.create(this.mouseText);
        Text.pop();
        Column.pop();
    }
}
loadDocument(new MouseEventExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=mouseEvent.js.map