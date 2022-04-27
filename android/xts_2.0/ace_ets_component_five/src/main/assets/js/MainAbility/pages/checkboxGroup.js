/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\checkboxGroup.ets?entry ***!
  \***********************************************************************************************************************************/
class CheckboxGroupExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__select = new ObservedPropertySimple(false, this, "select");
        this.stateChangCallBack = (eventData) => {
            console.info("checkboxGroup page stateChangCallBack");
            if (eventData != null) {
                console.info("checkboxGroup page state change called:" + JSON.stringify(eventData));
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
        console.info('checkboxGroup page show called');
    }
    render() {
        Scroll.create();
        Column.create();
        CheckboxGroup.create({ group: 'checkboxGroup' });
        CheckboxGroup.selectedColor(0xed6f21);
        CheckboxGroup.key('CheckboxGroup');
        CheckboxGroup.onChange((itemName) => {
            console.info("TextPicker::dialogResult is" + JSON.stringify(itemName));
        });
        CheckboxGroup.pop();
        Checkbox.create({ name: 'checkbox1', group: 'checkboxGroup' });
        Checkbox.select(true);
        Checkbox.selectedColor(0x39a2db);
        Checkbox.onChange((value) => {
            console.info('Checkbox1 change is' + value);
        });
        Checkbox.pop();
        Checkbox.create({ name: 'checkbox2', group: 'checkboxGroup' });
        Checkbox.select(false);
        Checkbox.selectedColor(0x39a2db);
        Checkbox.onChange((value) => {
            console.info('Checkbox2 change is' + value);
        });
        Checkbox.pop();
        Checkbox.create({ name: 'checkbox3', group: 'checkboxGroup' });
        Checkbox.select(true);
        Checkbox.selectedColor(0x39a2db);
        Checkbox.onChange((value) => {
            console.info('Checkbox3 change is' + value);
        });
        Checkbox.pop();
        Column.pop();
        Scroll.pop();
    }
}
loadDocument(new CheckboxGroupExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=checkboxGroup.js.map