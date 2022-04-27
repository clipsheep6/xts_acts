/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\fontWeight.ets?entry ***!
  \*********************************************************************************************************/
class ContentTable extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.foodItem = undefined;
        this.__fontWeight = new ObservedPropertyObject(FontWeight.Medium, this, "fontWeight");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.foodItem !== undefined) {
            this.foodItem = params.foodItem;
        }
        if (params.fontWeight !== undefined) {
            this.fontWeight = params.fontWeight;
        }
    }
    aboutToBeDeleted() {
        this.__fontWeight.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get fontWeight() {
        return this.__fontWeight.get();
    }
    set fontWeight(newValue) {
        this.__fontWeight.set(newValue);
    }
    IngredientItem(title, name, value) {
        Flex.create();
        Flex.key('fontWeight');
        Text.create(title);
        Text.fontSize(17.4);
        Text.fontWeight(this.fontWeight);
        Text.layoutWeight(1);
        Text.pop();
        Flex.create();
        Flex.layoutWeight(2);
        Text.create(name);
        Text.fontSize(17.4);
        Text.flexGrow(1);
        Text.pop();
        Text.create(value);
        Text.fontSize(17.4);
        Text.pop();
        Flex.pop();
        Flex.pop();
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, justifyContent: FlexAlign.SpaceBetween, alignItems: ItemAlign.Start });
        Flex.height(280);
        Flex.padding({ top: 30, right: 30, left: 30 });
        this.IngredientItem('Calories', 'Calories', this.foodItem.calories + 'kcal');
        this.IngredientItem('Nutrition', 'Protein', this.foodItem.protein + 'g');
        this.IngredientItem('', 'Fat', this.foodItem.fat + 'g');
        this.IngredientItem('', 'Carbohydrates', this.foodItem.carbohydrates + 'g');
        this.IngredientItem('', 'VitaminC', this.foodItem.vitaminC + 'mg');
        Flex.pop();
    }
}
loadDocument(new ContentTable("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=fontWeight.js.map