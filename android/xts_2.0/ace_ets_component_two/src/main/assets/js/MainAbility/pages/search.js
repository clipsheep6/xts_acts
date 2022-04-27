/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\search.ets?entry ***!
  \*****************************************************************************************************/
class SearchExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__changevalue = new ObservedPropertySimple('', this, "changevalue");
        this.__submitvalue = new ObservedPropertySimple('', this, "submitvalue");
        this.__controller = new ObservedPropertyObject(new SearchController(), this, "controller");
        this.__textFont = new ObservedPropertyObject(10, this, "textFont");
        this.__searchButton = new ObservedPropertySimple(10, this, "searchButton");
        this.stateChangCallBack = (eventData) => {
            console.info("search page state change called:" + JSON.stringify(eventData));
            if (eventData != null) {
                if (eventData.data.textFont != null) {
                    this.textFont = eventData.data.textFont;
                }
                if (eventData.data.searchButton != null) {
                    this.searchButton = eventData.data.searchButton;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.changevalue !== undefined) {
            this.changevalue = params.changevalue;
        }
        if (params.submitvalue !== undefined) {
            this.submitvalue = params.submitvalue;
        }
        if (params.controller !== undefined) {
            this.controller = params.controller;
        }
        if (params.textFont !== undefined) {
            this.textFont = params.textFont;
        }
        if (params.searchButton !== undefined) {
            this.searchButton = params.searchButton;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__changevalue.aboutToBeDeleted();
        this.__submitvalue.aboutToBeDeleted();
        this.__controller.aboutToBeDeleted();
        this.__textFont.aboutToBeDeleted();
        this.__searchButton.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get changevalue() {
        return this.__changevalue.get();
    }
    set changevalue(newValue) {
        this.__changevalue.set(newValue);
    }
    get submitvalue() {
        return this.__submitvalue.get();
    }
    set submitvalue(newValue) {
        this.__submitvalue.set(newValue);
    }
    get controller() {
        return this.__controller.get();
    }
    set controller(newValue) {
        this.__controller.set(newValue);
    }
    get textFont() {
        return this.__textFont.get();
    }
    set textFont(newValue) {
        this.__textFont.set(newValue);
    }
    get searchButton() {
        return this.__searchButton.get();
    }
    set searchButton(newValue) {
        this.__searchButton.set(newValue);
    }
    onPageShow() {
        console.info('search page show called');
        var stateChangeEvent = {
            eventId: 190,
        };
    }
    render() {
        Column.create();
        Text.create(this.submitvalue);
        Text.pop();
        Text.create(this.changevalue);
        Text.pop();
        Search.create({ value: '', placeholder: 'input content', controller: this.controller });
        Search.searchButton('search');
        Search.textFont(ObservedObject.GetRawObject(this.textFont));
        Search.searchButton(this.searchButton);
        Search.key('search');
        Search.placeholderColor(Color.Red);
        Search.placeholderFont({
            size: 10,
            weight: 10,
            family: 'serif',
            style: FontStyle.Normal
        });
        Search.onSubmit((value) => {
            this.submitvalue = value;
        });
        Search.onChange((value) => {
            this.changevalue = value;
        });
        Search.pop();
        Column.pop();
    }
}
loadDocument(new SearchExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=search.js.map