/******/ (() => { // webpackBootstrap
var __webpack_exports__ = {};
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\dragEvent.ets?entry ***!
  \********************************************************************************************************/
class DragExample extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.__numbers = new ObservedPropertyObject(['one', 'two', 'three', 'four', 'five', 'six'], this, "numbers");
        this.__text = new ObservedPropertySimple('', this, "text");
        this.__bool = new ObservedPropertySimple(false, this, "bool");
        this.__bool1 = new ObservedPropertySimple(false, this, "bool1");
        this.__size = new ObservedPropertySimple('', this, "size");
        this.__appleVisible = new ObservedPropertyObject(Visibility.Visible, this, "appleVisible");
        this.__orangeVisible = new ObservedPropertyObject(Visibility.Visible, this, "orangeVisible");
        this.__bananaVisible = new ObservedPropertyObject(Visibility.Visible, this, "bananaVisible");
        this.__mangoVisible = new ObservedPropertyObject(Visibility.Visible, this, "mangoVisible");
        this.__strawberryVisible = new ObservedPropertyObject(Visibility.Visible, this, "strawberryVisible");
        this.__select = new ObservedPropertySimple(0, this, "select");
        this.__currentIndex = new ObservedPropertySimple(0, this, "currentIndex");
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
        if (params.numbers !== undefined) {
            this.numbers = params.numbers;
        }
        if (params.text !== undefined) {
            this.text = params.text;
        }
        if (params.bool !== undefined) {
            this.bool = params.bool;
        }
        if (params.bool1 !== undefined) {
            this.bool1 = params.bool1;
        }
        if (params.size !== undefined) {
            this.size = params.size;
        }
        if (params.appleVisible !== undefined) {
            this.appleVisible = params.appleVisible;
        }
        if (params.orangeVisible !== undefined) {
            this.orangeVisible = params.orangeVisible;
        }
        if (params.bananaVisible !== undefined) {
            this.bananaVisible = params.bananaVisible;
        }
        if (params.mangoVisible !== undefined) {
            this.mangoVisible = params.mangoVisible;
        }
        if (params.strawberryVisible !== undefined) {
            this.strawberryVisible = params.strawberryVisible;
        }
        if (params.select !== undefined) {
            this.select = params.select;
        }
        if (params.currentIndex !== undefined) {
            this.currentIndex = params.currentIndex;
        }
    }
    aboutToBeDeleted() {
        this.__numbers.aboutToBeDeleted();
        this.__text.aboutToBeDeleted();
        this.__bool.aboutToBeDeleted();
        this.__bool1.aboutToBeDeleted();
        this.__size.aboutToBeDeleted();
        this.__appleVisible.aboutToBeDeleted();
        this.__orangeVisible.aboutToBeDeleted();
        this.__bananaVisible.aboutToBeDeleted();
        this.__mangoVisible.aboutToBeDeleted();
        this.__strawberryVisible.aboutToBeDeleted();
        this.__select.aboutToBeDeleted();
        this.__currentIndex.aboutToBeDeleted();
        SubscriberManager.Get().delete(this.id());
    }
    get numbers() {
        return this.__numbers.get();
    }
    set numbers(newValue) {
        this.__numbers.set(newValue);
    }
    get text() {
        return this.__text.get();
    }
    set text(newValue) {
        this.__text.set(newValue);
    }
    get bool() {
        return this.__bool.get();
    }
    set bool(newValue) {
        this.__bool.set(newValue);
    }
    get bool1() {
        return this.__bool1.get();
    }
    set bool1(newValue) {
        this.__bool1.set(newValue);
    }
    get size() {
        return this.__size.get();
    }
    set size(newValue) {
        this.__size.set(newValue);
    }
    get appleVisible() {
        return this.__appleVisible.get();
    }
    set appleVisible(newValue) {
        this.__appleVisible.set(newValue);
    }
    get orangeVisible() {
        return this.__orangeVisible.get();
    }
    set orangeVisible(newValue) {
        this.__orangeVisible.set(newValue);
    }
    get bananaVisible() {
        return this.__bananaVisible.get();
    }
    set bananaVisible(newValue) {
        this.__bananaVisible.set(newValue);
    }
    get mangoVisible() {
        return this.__mangoVisible.get();
    }
    set mangoVisible(newValue) {
        this.__mangoVisible.set(newValue);
    }
    get strawberryVisible() {
        return this.__strawberryVisible.get();
    }
    set strawberryVisible(newValue) {
        this.__strawberryVisible.set(newValue);
    }
    get select() {
        return this.__select.get();
    }
    set select(newValue) {
        this.__select.set(newValue);
    }
    get currentIndex() {
        return this.__currentIndex.get();
    }
    set currentIndex(newValue) {
        this.__currentIndex.set(newValue);
    }
    pixelMapBuilder() {
        Column.create();
        Column.debugLine("pages/dragEvent.ets(34:5)");
        Text.create(this.text);
        Text.debugLine("pages/dragEvent.ets(35:7)");
        Text.width('50%');
        Text.height(60);
        Text.fontSize(16);
        Text.borderRadius(10);
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(Color.Yellow);
        Text.pop();
        Column.pop();
    }
    render() {
        Column.create();
        Column.debugLine("pages/dragEvent.ets(42:5)");
        Column.width('100%');
        Column.height('100%');
        Column.padding({ top: 20 });
        Column.margin({ top: 20 });
        Text.create('There are three Text elements here');
        Text.debugLine("pages/dragEvent.ets(43:7)");
        Text.fontSize(12);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.textAlign(TextAlign.Start);
        Text.margin(5);
        Text.pop();
        Flex.create({ direction: FlexDirection.Row, alignItems: ItemAlign.Center, justifyContent: FlexAlign.SpaceAround });
        Flex.debugLine("pages/dragEvent.ets(46:7)");
        Flex.border({ width: 1 });
        Flex.width('90%');
        Flex.padding({ top: 10, bottom: 10 });
        Flex.margin(10);
        Text.create('apple');
        Text.debugLine("pages/dragEvent.ets(47:9)");
        Text.width('25%');
        Text.height(35);
        Text.fontSize(16);
        Text.key('apple');
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xAFEEEE);
        Text.visibility(ObservedObject.GetRawObject(this.appleVisible));
        Text.onDragStart(() => {
            this.bool = true;
            this.text = 'apple';
            this.appleVisible = Visibility.Hidden;
            console.log('apple onDragStart onAction');
            try {
                var backData = {
                    data: {
                        "ACTION": 'onDragStart onAction'
                    }
                };
                var backEvent = {
                    eventId: 86,
                };
                console.info("apple start to emit action state");
            }
            catch (err) {
                console.info("apple emit action state err: " + JSON.stringify(err.message));
            }
            return { builder: this.pixelMapBuilder.bind(this) };
        });
        Text.pop();
        Text.create('orange');
        Text.debugLine("pages/dragEvent.ets(70:9)");
        Text.width('25%');
        Text.height(35);
        Text.fontSize(16);
        Text.key('orange');
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xAFEEEE);
        Text.visibility(ObservedObject.GetRawObject(this.orangeVisible));
        Text.onDragStart(() => {
            this.bool = true;
            this.text = 'orange';
            this.orangeVisible = Visibility.Hidden;
            return { builder: this.pixelMapBuilder.bind(this) };
        });
        Text.pop();
        Text.create('banana');
        Text.debugLine("pages/dragEvent.ets(79:9)");
        Text.width('25%');
        Text.height(35);
        Text.fontSize(16);
        Text.key('banana');
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xAFEEEE);
        Text.visibility(ObservedObject.GetRawObject(this.bananaVisible));
        Text.onDragStart((event, extraParams) => {
            console.log('Text onDragStarts, ' + extraParams);
            this.bool = true;
            this.text = 'banana';
            this.bananaVisible = Visibility.Hidden;
            return { builder: this.pixelMapBuilder.bind(this) };
        });
        Text.pop();
        Text.create('mango');
        Text.debugLine("pages/dragEvent.ets(89:9)");
        Text.width('25%');
        Text.height(35);
        Text.fontSize(16);
        Text.key('mango');
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xAFEEEE);
        Text.visibility(ObservedObject.GetRawObject(this.mangoVisible));
        Text.onDragStart(() => {
            this.bool = true;
            this.text = 'mango';
            this.mangoVisible = Visibility.Hidden;
            return { builder: this.pixelMapBuilder.bind(this) };
        });
        Text.pop();
        Text.create('strawberry');
        Text.debugLine("pages/dragEvent.ets(98:9)");
        Text.width('25%');
        Text.height(35);
        Text.fontSize(16);
        Text.key('strawberry');
        Text.textAlign(TextAlign.Center);
        Text.backgroundColor(0xAFEEEE);
        Text.visibility(ObservedObject.GetRawObject(this.strawberryVisible));
        Text.onDragStart(() => {
            this.bool = true;
            this.text = 'strawberry';
            this.strawberryVisible = Visibility.Hidden;
            return { builder: this.pixelMapBuilder.bind(this) };
        });
        Text.pop();
        Flex.pop();
        Text.create('This is a List element');
        Text.debugLine("pages/dragEvent.ets(109:7)");
        Text.fontSize(12);
        Text.fontColor(0xCCCCCC);
        Text.width('90%');
        Text.textAlign(TextAlign.Start);
        Text.margin(15);
        Text.pop();
        List.create({ space: 20, initialIndex: 0 });
        List.debugLine("pages/dragEvent.ets(112:7)");
        List.editMode(true);
        List.height('50%');
        List.width('90%');
        List.border({ width: 1 });
        List.divider({ strokeWidth: 2, color: 0xFFFFFF, startMargin: 20, endMargin: 20 });
        List.onDragEnter((event, extraParams) => {
            console.log('List onDragEnter, ' + extraParams + ',' + event.getX() + ',' + event.getY());
            try {
                var backData = {
                    data: {
                        "pointX": event.getX(),
                        "pointY": event.getY()
                    }
                };
                var backEvent = {
                    eventId: 87,
                };
                console.info("onDragEnter start to emit action state");
            }
            catch (err) {
                console.info("onDragEnter emit action state err: " + JSON.stringify(err.message));
            }
        });
        List.onDragMove((event, extraParams) => {
            console.log('List onDragMove, ' + extraParams);
            try {
                var backData = {
                    data: {
                        "ACTION": 'onDragMove onAction'
                    }
                };
                var backEvent = {
                    eventId: 88,
                };
                console.info("onDragMove start to emit action state");
            }
            catch (err) {
                console.info("onDragMove emit action state err: " + JSON.stringify(err.message));
            }
        });
        List.onDragLeave((event, extraParams) => {
            console.log('List onDragLeave, ' + extraParams);
            try {
                var backData = {
                    data: {
                        "ACTION": 'onDragLeave onAction'
                    }
                };
                var backEvent = {
                    eventId: 89,
                };
                console.info("onDragLeave start to emit action state");
            }
            catch (err) {
                console.info("onDragLeave emit action state err: " + JSON.stringify(err.message));
            }
        });
        List.onDrop((event, extraParams) => {
            console.log('onDrop onAction');
            try {
                var backData = {
                    data: {
                        "ACTION": 'onDrop onAction'
                    }
                };
                var backEvent = {
                    eventId: 90,
                };
                console.info("onDrop start to emit action state");
            }
            catch (err) {
                console.info("onDrop emit action state err: " + JSON.stringify(err.message));
            }
            var jsonString = JSON.parse(extraParams);
            if (this.bool) {
                this.numbers.splice(jsonString.insertIndex, 0, this.text);
                this.bool = false;
            }
            else if (this.bool1) {
                this.numbers.splice(jsonString.selectedIndex, 1);
                this.numbers.splice(jsonString.insertIndex, 0, this.text);
                this.bool = false;
                this.bool1 = false;
            }
        });
        ForEach.create("2", this, ObservedObject.GetRawObject(this.numbers), (item) => {
            ListItem.create();
            ListItem.debugLine("pages/dragEvent.ets(114:11)");
            ListItem.key('listItem');
            ListItem.onDragStart((event, extraParams) => {
                console.log('ListItem onDragStarts, ' + extraParams);
                var jsonString = JSON.parse(extraParams);
                this.bool1 = true;
                this.text = this.numbers[jsonString.selectedIndex];
                this.select = jsonString.selectedIndex;
                return { builder: this.pixelMapBuilder.bind(this) };
            });
            Text.create('' + item);
            Text.debugLine("pages/dragEvent.ets(115:13)");
            Text.width('100%');
            Text.height(80);
            Text.fontSize(16);
            Text.borderRadius(10);
            Text.textAlign(TextAlign.Center);
            Text.backgroundColor(0xAFEEEE);
            Text.pop();
            ListItem.pop();
        }, item => item);
        ForEach.pop();
        List.pop();
        Column.pop();
    }
}
loadDocument(new DragExample("1", undefined, {}));

/******/ })()
;
//# sourceMappingURL=dragEvent.js.map