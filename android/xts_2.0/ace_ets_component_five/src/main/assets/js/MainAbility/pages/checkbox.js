/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\checkbox.ets?entry ***!
  \******************************************************************************************************************************/
class CheckboxExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__select = new ObservedPropertySimple(false, this, "select");
        this.stateChangCallBack = (eventData) => {
            console.info("Checkbox page stateChangCallBack");
            if (eventData != null) {
                console.info("Checkbox page state change called:" + JSON.stringify(eventData));
                if (eventData.data.select != null) {
                    this.select = eventData.data.select;
                }
            }
        };
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.select !== undefined) {
            this.select = params.select;
        }
        if (params.stateChangCallBack !== undefined) {
            this.stateChangCallBack = params.stateChangCallBack;
        }
    }
    aboutToBeDeleted() {
        this.__select.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get select() {
        return this.__select.get();
    }
    set select(newValue) {
        this.__select.set(newValue);
    }
    onPageShow() {
        console.info('Checkbox page show called');
    }
    render() {
        Row.create();
        Checkbox.create({ name: 'checkbox1', group: 'checkboxGroup' });
        Checkbox.select(true);
        Checkbox.key('Checkbox1');
        Checkbox.selectedColor(0xed6f21);
        Checkbox.onChange((value) => {
            console.info('Checkbox1 change is' + value);
        });
        Checkbox.pop();
        Checkbox.create({ name: 'checkbox2', group: 'checkboxGroup' });
        Checkbox.select(false);
        Checkbox.key('Checkbox2');
        Checkbox.selectedColor(0x39a2db);
        Checkbox.onChange((value) => {
            console.info('Checkbox2 change is' + value);
        });
        Checkbox.pop();
        Row.pop();
    }
}
loadDocument(new CheckboxExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=checkbox.js.map