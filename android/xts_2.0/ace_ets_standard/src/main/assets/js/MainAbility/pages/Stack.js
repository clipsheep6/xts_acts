/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/Stack.ets?entry ***!
  \*************************************************************************************************************/
var router = globalThis.requireNativeModule('system.router');
class stack_testcase extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__alignContent = new ObservedPropertySimple(Alignment.Bottom, this, "alignContent");
        this.content = "Stack Page";
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.alignContent !== undefined) {
            this.alignContent = params.alignContent;
        }
        if (params.content !== undefined) {
            this.content = params.content;
        }
    }
    aboutToBeDeleted() {
        this.__alignContent.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get alignContent() {
        return this.__alignContent.get();
    }
    set alignContent(newValue) {
        this.__alignContent.set(newValue);
    }
    onPageShow() {
        console.info('Stack page show called');
    }
    onBuildDone() {
        console.info('Stack page build done called');
    }
    render() {
        Flex.create({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center });
        Flex.key('flex');
        Flex.width('100%');
        Flex.height('100%');
        Text.create(`${this.content}`);
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Stack.create({ alignContent: this.alignContent });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack');
        Stack.onClick(() => {
            router.back();
        });
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.BottomStart });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack1');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.BottomEnd });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack2');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.Start });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack3');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.Center });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack4');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.End });
        Stack.width('100%');
        Stack.height(80);
        Stack.margin({ top: 5 });
        Stack.key('stack5');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.Top });
        Stack.width('100%');
        Stack.height(60);
        Stack.margin({ top: 5 });
        Stack.key('stack6');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.TopStart });
        Stack.width('100%');
        Stack.height(60);
        Stack.margin({ top: 5 });
        Stack.key('stack7');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Stack.create({ alignContent: Alignment.TopEnd });
        Stack.width('100%');
        Stack.height(60);
        Stack.margin({ top: 5 });
        Stack.key('stack8');
        Text.create('First child, show in bottom');
        Text.width('90%');
        Text.height('100%');
        Text.backgroundColor(0xd2cab3);
        Text.align(Alignment.Top);
        Text.pop();
        Text.create('Second child, show in top');
        Text.width('70%');
        Text.height('60%');
        Text.backgroundColor(0xc1cbac);
        Text.align(Alignment.Top);
        Text.pop();
        Stack.pop();
        Flex.pop();
    }
}
loadDocument(new stack_testcase("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=Stack.js.map