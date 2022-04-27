/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\NavigatorCode.ets?entry ***!
  \************************************************************************************************************/
class NavigatorCode extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__active = new ObservedPropertySimple(false, this, "active");
        this.__Text = new ObservedPropertySimple('news', this, "Text");
        this.__typeValue = new ObservedPropertyObject(NavigationType.Back, this, "typeValue");
        this.stateChangCallBack = (eventData) => {
            if (eventData != null) {
                var navigationTypeValue = eventData.data.typeValue;
                console.info("navigationTypeValue:" + navigationTypeValue);
                if (navigationTypeValue != null) {
                    this.typeValue = navigationTypeValue;
                    console.info("this.typeValue:" + this.typeValue);
                }
                else {
                    console.info("navigationTypeValue is null or empty " + NavigatorCode);
                }
            }
            else {
                console.info("NavigatorCode page color not change called:" + JSON.stringify(eventData));
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.active !== undefined) {
            this.active = params.active;
        }
        if (params.Text !== undefined) {
            this.Text = params.Text;
        }
        if (params.typeValue !== undefined) {
            this.typeValue = params.typeValue;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__active.aboutToBeDeleted();
        this.__Text.aboutToBeDeleted();
        this.__typeValue.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get active() {
        return this.__active.get();
    }
    set active(newValue) {
        this.__active.set(newValue);
    }
    get Text() {
        return this.__Text.get();
    }
    set Text(newValue) {
        this.__Text.set(newValue);
    }
    get typeValue() {
        return this.__typeValue.get();
    }
    set typeValue(newValue) {
        this.__typeValue.set(newValue);
    }
    onPageShow() {
        console.info('navigatorCode page show called');
        var stateChangeEvent = {
            eventId: 137,
        };
        var stateChangeEvent = {
            eventId: 138,
        };
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween });
        Flex.height(150);
        Flex.width(350);
        Flex.padding(35);
        Navigator.create({ target: 'pages/NavigatorDetailCode', type: NavigationType.Push });
        Navigator.params({ text: this.Text });
        Navigator.key('button');
        Text.create('Go to ' + this.Text + ' page');
        Text.width('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Navigator.pop();
        Navigator.create();
        Navigator.active(this.active);
        Navigator.key('NavigatorType');
        Navigator.onClick(() => {
            this.active = true;
        });
        Text.create('Back to previous page');
        Text.width('100%');
        Text.textAlign(TextAlign.Center);
        Text.pop();
        Navigator.pop();
        Flex.pop();
    }
}
loadDocument(new NavigatorCode("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=NavigatorCode.js.map