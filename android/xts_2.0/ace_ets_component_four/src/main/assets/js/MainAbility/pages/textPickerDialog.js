/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!***************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\textPickerDialog.ets?entry ***!
  \***************************************************************************************************************/
class TextPickerDialogExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__select = new ObservedPropertySimple(1, this, "select");
        this.fruits = ['apple1', 'orange2', 'peach3', 'grape4'];
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.select !== undefined) {
            this.select = params.select;
        }
        if (params.fruits !== undefined) {
            this.fruits = params.fruits;
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
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center,
            justifyContent: FlexAlign.Center });
        Button.createWithLabel("TextPickerDialog");
        Button.key('textPickerDialog');
        Button.onClick(() => {
            TextPickerDialog.show({
                range: this.fruits,
                selected: this.select,
                defaultPickerItemHeight: 20,
                onAccept: (value) => {
                    console.info("TextPickerDialog:onAccept()" + JSON.stringify(value));
                    this.select = value.index;
                },
                onCancel: () => {
                    console.info("TextPickerDialog:onCancel()");
                },
                onChange: (value) => {
                    console.info("TextPickerDialog:onChange()" + JSON.stringify(value));
                }
            });
        });
        Button.pop();
        Flex.pop();
    }
}
loadDocument(new TextPickerDialogExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=textPickerDialog.js.map