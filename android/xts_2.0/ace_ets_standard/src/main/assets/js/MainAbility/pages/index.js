/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/index.ets?entry":
/*!*************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/index.ets?entry ***!
  \*************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
var file = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/List.test.ets"));
class MyComponent extends View {
    constructor(compilerAssignedUniqueChildId, parent, params) {
        super(compilerAssignedUniqueChildId, parent);
        this.updateWithValueParams(params);
    }
    updateWithValueParams(params) {
    }
    aboutToBeDeleted() {
        SubscriberManager.Get().delete(this.id());
    }
    aboutToAppear() {
        console.info("start run testcase!!!!");
        const core = index_ets_1.Core.getInstance();
        const expectExtend = new index_ets_1.ExpectExtend({
            'id': 'extend'
        });
        core.addService('expect', expectExtend);
        const reportExtend = new index_ets_1.ReportExtend(file);
        core.addService('report', reportExtend);
        core.init();
        core.subscribeEvent('task', reportExtend);
        const configService = core.getDefaultService('config');
        const timeout = 10000;
        configService.setConfig(timeout);
        (0, List_test_ets_1.default)();
        core.execute();
    }
    render() {
        Flex.create({
            direction: FlexDirection.Column,
            alignItems: ItemAlign.Center,
            justifyContent: FlexAlign.Center
        });
        Flex.width('100%');
        Flex.height('100%');
        Text.create('ccc World');
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new MyComponent("1", undefined, {}));


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets ***!
  \*****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function badgeJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('badgeTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Badge',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Badge state success " + JSON.stringify(pages));
                if (!("Badge" == pages.name)) {
                    console.info("get Badge state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Badge page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Badge page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Badge after each called");
        });
        (0, index_ets_1.it)('testBadge010', 0, async function (done) {
            console.info('new Badge0 START');
            let strJson = getInspectorByKey('badge');
            let obj = JSON.parse(strJson);
            let style = JSON.parse(obj.$attrs.style);
            (0, index_ets_1.expect)(obj.$type).assertEqual('Badge');
            console.log(JSON.stringify(obj.$type));
            console.info("yr badge0 type: " + JSON.stringify(obj.$type));
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.count).assertEqual('33');
            console.log("yr badge0 count-'33'" + JSON.stringify(obj.$attrs.count));
            (0, index_ets_1.expect)(obj.$attrs.position).assertEqual('BadgePosition.Right');
            console.log("yr badge0 position-BadgePosition.Right" + JSON.stringify(obj.$attrs.position));
            (0, index_ets_1.expect)(obj.$attrs.maxCount).assertEqual('99');
            console.log("yr badge0 maxCount-'99'" + JSON.stringify(obj.$attrs.maxCount));
            console.log("yr badge0 style.color" + style.color);
            console.log("yr badge0 style.fontSize" + style.fontSize);
            console.log("yr badge0 style.badgeSize" + style.badgeSize);
            (0, index_ets_1.expect)(style.color).assertEqual('#FFFFFFFF');
            (0, index_ets_1.expect)(style.fontSize).assertEqual('16.00fp');
            (0, index_ets_1.expect)(style.badgeSize).assertEqual('20.00fp');
            console.log("badge0 style : " + JSON.stringify(obj.$attrs.style));
            console.info('testGetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testBadge020', 0, async function (done) {
            console.info('new Badge1 START');
            let strJson = getInspectorByKey('badge1');
            let obj = JSON.parse(strJson);
            let style = JSON.parse(obj.$attrs.style);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.position).assertEqual('BadgePosition.RightTop');
            console.log("yr badge1 position-'BadgePosition.RightTop'" + JSON.stringify(obj.$attrs.position));
            console.log("yr badge0 style.fontSize" + style.fontSize);
            console.log("yr badge0 style.badgeSize" + style.badgeSize);
            (0, index_ets_1.expect)(style.fontSize).assertEqual('16.00fp');
            (0, index_ets_1.expect)(style.badgeSize).assertEqual('20.00fp');
            console.info('new Badge1 END');
            done();
        });
        (0, index_ets_1.it)('testBadge030', 0, async function (done) {
            console.info('new Badge2 START');
            let strJson = getInspectorByKey('badge2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.position).assertEqual('BadgePosition.Left');
            console.log("yr badge2 position-'BadgePosition.Left'" + JSON.stringify(obj.$attrs.position));
            console.info('testGetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = badgeJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets ***!
  \*****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function blankJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('BlankTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Blank',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Blank state success " + JSON.stringify(pages));
                if (!("Blank" == pages.name)) {
                    console.info("get Blank state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Blank page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Blank page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Blank after each called");
        });
        (0, index_ets_1.it)('BlankGetInspectorByKey', 0, async function (done) {
            let strJson = getInspectorByKey('blank');
            let obj = JSON.parse(strJson);
            console.info("cd blank component obj is: " + JSON.stringify(obj));
            console.log("cd blank type" + JSON.stringify(obj.$type));
            console.log("cd blank min" + JSON.stringify(obj.$attrs.min));
            console.log("cd blank color" + JSON.stringify(obj.$attrs.color));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Blank');
            (0, index_ets_1.expect)(obj.$attrs.min).assertEqual('100.00vp');
            console.info('cd BlankGetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = blankJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function buttonJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('buttonTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Button',
            };
            try {
                router.clear();
                await sleep(1);
                let pages = router.getState();
                console.info("get Button state success " + JSON.stringify(pages));
                if (!("Button" == pages.name)) {
                    console.info("get Button state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Button page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Button page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Button after each called");
        });
        (0, index_ets_1.it)('buttonGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('button');
            let obj = JSON.parse(strJson);
            console.info("buttonGetInspectorByKey010 obj is: " + JSON.stringify(obj));
            console.info("buttonGetInspectorByKey010 obj is: " + JSON.stringify(obj.$attrs));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Button');
            (0, index_ets_1.expect)(obj.$attrs.type).assertEqual('ButtonType.Circle');
            (0, index_ets_1.expect)(obj.$attrs.stateEffect).assertEqual('true');
            (0, index_ets_1.expect)(obj.$attrs.label).assertEqual('1.value');
            (0, index_ets_1.expect)(obj.$attrs.fontSize).assertEqual('12');
            console.info('cd buttonInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('ButtonGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('button1');
            let obj = JSON.parse(strJson);
            console.info("cd button1 component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.type).assertEqual('ButtonType.Capsule');
            (0, index_ets_1.expect)(obj.$attrs.stateEffect).assertEqual('false');
            console.info('cd button1InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('ButtonGetInspectorByKey030', 0, async function (done) {
            let strJson = getInspectorByKey('button2');
            let obj = JSON.parse(strJson);
            console.info("cd button2 component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.type).assertEqual('ButtonType.Normal');
            console.info('cd button2InspectorByKey END');
            done();
        });
    });
}
exports["default"] = buttonJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function columnJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('columnTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Column',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Column state success " + JSON.stringify(pages));
                if (!("Column" == pages.name)) {
                    console.info("get Column state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Column page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Column page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Column after each called");
        });
        (0, index_ets_1.it)('testColumn010', 0, async function (done) {
            console.info('new Column0 START');
            let strJson = getInspectorByKey('column');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Column');
            console.info("yr new Column0-Column: " + JSON.stringify(obj.$type));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.Center');
            console.log("yr new Column0 alignItems-'HorizontalAlign.Center':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new Column0 END');
            done();
        });
        (0, index_ets_1.it)('testColumn020', 0, async function (done) {
            console.info('new Column1 START');
            let strJson = getInspectorByKey('column1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.Start');
            console.log("yr new Column1 alignItems-'HorizontalAlign.Start':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new Column1 END');
            done();
        });
        (0, index_ets_1.it)('testColumn030', 0, async function (done) {
            console.info('new Column2 START');
            let strJson = getInspectorByKey('column2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.End');
            console.log("yr new Column2 alignItems-'HorizontalAlign.End':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new Column2 END');
            done();
        });
    });
}
exports["default"] = columnJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnSplitJsunit.test.ets":
/*!***********************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnSplitJsunit.test.ets ***!
  \***********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function columnSplitJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('columnSplitTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/ColumnSplit',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get ColumnSplit state success " + JSON.stringify(pages));
                if (!("ColumnSplit" == pages.name)) {
                    console.info("get ColumnSplit state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push ColumnSplit page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ColumnSplit page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("ColumnSplit after each called");
        });
        (0, index_ets_1.it)('testColumnSplit010', 0, async function (done) {
            console.info('new columnSplit0 START');
            let strJson = getInspectorByKey('columnSplit');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$type).assertEqual('ColumnSplit');
            console.info("yr ColumnSplit0 type: " + JSON.stringify(obj.$type));
            console.log("yr columnSplit0 obj.$resizable-'true':" + JSON.stringify(obj.$attrs.resizable));
            (0, index_ets_1.expect)(obj.$attrs.resizeable).assertEqual('true');
            console.info('new columnSplit0 END');
            done();
        });
        (0, index_ets_1.it)('testColumnSplit020', 0, async function (done) {
            console.info('new columnSplit1 START');
            let strJson = getInspectorByKey('columnSplit1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("yr columnSplit obj.$resizable-'false':" + JSON.stringify(obj.$attrs.resizable));
            (0, index_ets_1.expect)(obj.$attrs.resizeable).assertEqual('false');
            console.info('new columnSplit1 END');
            done();
        });
    });
}
exports["default"] = columnSplitJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/CounterJsunit.test.ets":
/*!*******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/CounterJsunit.test.ets ***!
  \*******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function counterJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('counterTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Counter',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Counter state success " + JSON.stringify(pages));
                if (!("Counter" == pages.name)) {
                    console.info("get Counter state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Counter page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Counter page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Counter after each called");
        });
        (0, index_ets_1.it)('testCounterGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('counter');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info('testGetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = counterJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DataPanelJsunit.test.ets":
/*!*********************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DataPanelJsunit.test.ets ***!
  \*********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function datapanelJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('dataPanelTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/DataPanel',
            };
            try {
                router.clear();
                await sleep(1);
                let pages = router.getState();
                console.info("get DataPanel state success " + JSON.stringify(pages));
                if (!("DataPanel" == pages.name)) {
                    console.info("get DataPanel state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push DataPanel page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push DataPanel page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("DataPanel after each called");
        });
        (0, index_ets_1.it)('testDataPanelGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('DataPanel');
            let obj = JSON.parse(strJson);
            console.info("cd DatePanel component obj is: " + JSON.stringify(obj));
            console.log("cd DataPanel type " + JSON.stringify(obj.$type));
            console.log("cd DataPanel values1 " + typeof ([20, 40, 20]));
            console.log("cd DataPanel values " + typeof (obj.$attrs.values));
            console.log("cd DataPanel values" + JSON.stringify(obj.$attrs.values));
            console.log("cd DataPanel dataPanelType" + JSON.stringify(obj.$attrs.DataPanelType));
            console.log("cd  DataPanel max" + JSON.stringify(obj.$attrs.max));
            console.log("panel closeEffect" + JSON.stringify(obj.$attrs.closeEffect));
            (0, index_ets_1.expect)(obj.$attrs.closeEffect).assertEqual("false");
            (0, index_ets_1.expect)(obj.$type).assertEqual("DataPanel");
            (0, index_ets_1.expect)(JSON.stringify(obj.$attrs.values)).assertEqual('[20,40,20]');
            (0, index_ets_1.expect)(obj.$attrs.max).assertEqual(100.000000.toFixed(6));
            console.info('cd dataPanelInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testDataPanelGetInspectorByKey020', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('DataPanel2');
            let obj = JSON.parse(strJson);
            console.info("cd DatePanel component obj is: " + JSON.stringify(obj));
            console.log("cd DataPanel dataPanelType" + JSON.stringify(obj.$attrs));
            console.log("cd DataPanel Type" + JSON.stringify(obj.$attrs.type));
            (0, index_ets_1.expect)(obj.$attrs.type).assertEqual("DataPanelType.Circle");
            console.log("panel closeEffect" + JSON.stringify(obj.$attrs.closeEffect));
            (0, index_ets_1.expect)(obj.$attrs.closeEffect).assertEqual("true");
            console.info('cd dataPanelInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testDataPanelGetInspectorByKey030', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('DataPanel3');
            let obj = JSON.parse(strJson);
            console.info("cd DatePanel component obj is: " + JSON.stringify(obj));
            console.log("cd DataPanel type " + JSON.stringify(obj.$type));
            console.log("cd DataPanel values1 " + typeof ([20, 40, 20]));
            console.log("cd DataPanel values " + typeof (obj.$attrs.values));
            console.log("cd DataPanel values" + JSON.stringify(obj.$attrs.values));
            console.log("cd  DataPanel max" + JSON.stringify(obj.$attrs.max));
            console.log("panel closeEffect" + JSON.stringify(obj.$attrs.closeEffect));
            (0, index_ets_1.expect)(obj.$attrs.closeEffect).assertEqual("false");
            (0, index_ets_1.expect)(obj.$type).assertEqual("DataPanel");
            (0, index_ets_1.expect)(JSON.stringify(obj.$attrs.values)).assertEqual('[20,40,20]');
            (0, index_ets_1.expect)(obj.$attrs.max).assertEqual(100.000000.toFixed(6));
            console.info('cd dataPanelInspectorByKey END');
            done();
        });
    });
}
exports["default"] = datapanelJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DividerJsunit.test.ets":
/*!*******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DividerJsunit.test.ets ***!
  \*******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function dividerJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('dividerTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Divider',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get divider state success " + JSON.stringify(pages));
                if (!("Divider" == pages.name)) {
                    console.info("get divider state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push divider page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push divider page error " + JSON.stringify(result));
            }
            await sleep(1);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Divider after each called");
        });
        (0, index_ets_1.it)('testDividerGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('divider');
            let obj = JSON.parse(strJson);
            console.info("cd divider component obj is: " + JSON.stringify(obj));
            console.log("cd divider type" + JSON.stringify(obj.$type));
            console.log("cd divider color" + JSON.stringify(obj.$attrs.color));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Divider');
            (0, index_ets_1.expect)(obj.$attrs.color).assertEqual('#FFFF0000');
            console.info(" divider component obj is: " + JSON.stringify(obj));
            console.log("cd divider strokeWidth" + JSON.stringify(obj.$attrs.strokeWidth));
            console.log("cd divider vertical" + JSON.stringify(obj.$attrs.vertical));
            console.log("cd divider lineCap" + JSON.stringify(obj.$attrs.lineCap));
            (0, index_ets_1.expect)(obj.$attrs.strokeWidth).assertEqual("7.000000");
            (0, index_ets_1.expect)(obj.$attrs.vertical).assertEqual('true');
            (0, index_ets_1.expect)(obj.$attrs.lineCap == LineCapStyle.Square);
            console.info('cd dividerInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testDividerGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('divider1');
            let obj = JSON.parse(strJson);
            console.info(" divider1 component obj is: " + JSON.stringify(obj));
            console.log("cd divider1 vertical" + JSON.stringify(obj.$attrs.vertical));
            console.log("cd divider1 lineCap" + JSON.stringify(obj.$attrs.lineCap));
            (0, index_ets_1.expect)(obj.$attrs.vertical).assertEqual('false');
            (0, index_ets_1.expect)(obj.$attrs.lineCap == LineCapStyle.Round);
            console.info('cd divider1InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testDividerGetInspectorByKey030', 0, async function (done) {
            let strJson = getInspectorByKey('divider2');
            let obj = JSON.parse(strJson);
            console.info(" divider2 component obj is: " + JSON.stringify(obj));
            console.log("cd divider2 lineCap" + JSON.stringify(obj.$attrs.lineCap));
            (0, index_ets_1.expect)(obj.$attrs.lineCap == LineCapStyle.Square);
            console.info('cd divider2InspectorByKey END');
            done();
        });
    });
}
exports["default"] = dividerJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/FlexJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/FlexJsunit.test.ets ***!
  \****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function flexJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('flexTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Flex',
            };
            try {
                router.clear();
                await sleep(1);
                let pages = router.getState();
                console.info("get Flex state success " + JSON.stringify(pages));
                if (!("Flex" == pages.name)) {
                    console.info("get Flex state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Flex page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Flex page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Flex after each called");
        });
        (0, index_ets_1.it)('testFlex010', 0, async function (done) {
            console.info('new Flex0 START');
            let strJson = getInspectorByKey('flex');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Flex');
            console.info("yr Flex0 type: " + JSON.stringify(obj.$type));
            (0, index_ets_1.expect)(obj.$attrs.constructor.direction).assertEqual('FlexDirection.Column');
            console.log("yr flex0 obj.$attrs.constructor.direction-'FlexDirection.Column':" + JSON.stringify(obj.$attrs.constructor.direction));
            (0, index_ets_1.expect)(obj.$attrs.constructor.wrap).assertEqual('FlexWrap.NoWrap');
            console.log("yr flex0 obj.$attrs.constructor.wrap-'FlexWrap.NoWrap':" + JSON.stringify(obj.$attrs.constructor.wrap));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.Center');
            console.log("yr flex0 obj.$attrs.constructor.alignItems-'FlexWrap.NoWrap':" + JSON.stringify(obj.$attrs.constructor.alignItems));
            console.log("yr flex0 obj.$attrs.constructor.justifyContent-'FlexAlign.Center':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            (0, index_ets_1.expect)(obj.$attrs.constructor.alignContent).assertEqual("FlexAlign.Start");
            console.log("yr flex0 obj.$attrs.constructor.alignContent-'FlexAlign.Start':" + JSON.stringify(obj.$attrs.constructor.alignContent));
            console.info('new Flex0 END');
            done();
        });
        (0, index_ets_1.it)('testFlex020', 0, async function (done) {
            console.info('new Flex1 START');
            let strJson = getInspectorByKey('flex1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.constructor.direction).assertEqual('FlexDirection.Row');
            console.log("yr flex1 direction-'FlexDirection.Row':" + JSON.stringify(obj.$attrs.constructor.direction));
            (0, index_ets_1.expect)(obj.$attrs.constructor.wrap).assertEqual('FlexWrap.Wrap');
            console.log("yr flex1 wrap-'FlexWrap.Wrap':" + JSON.stringify(obj.$attrs.constructor.wrap));
            console.log("yr flex1 alignItems-'ItemAlign.Start':" + JSON.stringify(obj.$attrs.constructor.alignItems));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.Start');
            console.log("yr flex1 justifyContent-'FlexAlign.Start':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            (0, index_ets_1.expect)(obj.$attrs.constructor.alignContent).assertEqual("FlexAlign.Center");
            console.log("yr flex1 obj.$attrs.constructor.alignContent-'FlexAlign.Center':" + JSON.stringify(obj.$attrs.constructor.alignContent));
            console.info('new Flex1 END');
            done();
        });
        (0, index_ets_1.it)('testFlex030', 0, async function (done) {
            console.info('new Flex2 START');
            let strJson = getInspectorByKey('flex2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.constructor.direction).assertEqual('FlexDirection.RowReverse');
            console.log("yr flex2 direction-'FlexDirection.RowReverse':" + JSON.stringify(obj.$attrs.constructor.direction));
            console.log("yr flex1 alignItems-'ItemAlign.Start':" + JSON.stringify(obj.$attrs.constructor.alignItems));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.End');
            console.log("yr flex2 justifyContent-'FlexAlign.End':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            (0, index_ets_1.expect)(obj.$attrs.constructor.alignContent).assertEqual("FlexAlign.End");
            console.log("yr flex2 alignContent-'FlexAlign.End':" + JSON.stringify(obj.$attrs.constructor.alignContent));
            console.info('new Flex2 END');
            done();
        });
        (0, index_ets_1.it)('testFlex040', 0, async function (done) {
            console.info('new Flex3 START');
            let strJson = getInspectorByKey('flex3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("yr flex3 direction-'FlexDirection.ColumnReverse':" + JSON.stringify(obj.$attrs.constructor.direction));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.SpaceBetween');
            console.log("yr flex3 justifyContent-'FlexAlign.SpaceBetween':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            console.info('new Flex3 END');
            done();
        });
        (0, index_ets_1.it)('testFlex050', 0, async function (done) {
            console.info('new Flex4 START');
            let strJson = getInspectorByKey('flex4');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.SpaceEvenly');
            console.log("yr flex4 obj.$attrs.justifyContent-'FlexAlign.SpaceEvenly':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            (0, index_ets_1.expect)(obj.$attrs.constructor.alignContent).assertEqual("FlexAlign.SpaceEvenly");
            console.log("yr flex4 obj.$attrs.constructor.alignContent-'FlexAlign.SpaceEvenly':" + JSON.stringify(obj.$attrs.constructor.alignContent));
            console.info('new Flex4 END');
            done();
        });
        (0, index_ets_1.it)('testFlex060', 0, async function (done) {
            console.info('new Flex5 START');
            let strJson = getInspectorByKey('flex5');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.constructor.justifyContent).assertEqual('FlexAlign.SpaceAround');
            console.log("yr flex5 obj.$attrs.constructor.justifyContent-'FlexAlign.SpaceAround':" + JSON.stringify(obj.$attrs.constructor.justifyContent));
            (0, index_ets_1.expect)(obj.$attrs.constructor.alignContent).assertEqual("FlexAlign.SpaceAround");
            console.log("yr flex5 obj.$attrs.constructor.alignContent-'FlexAlign.SpaceAround':" + JSON.stringify(obj.$attrs.constructor.alignContent));
            console.info('testGetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = flexJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/GridContainerJsunit.test.ets":
/*!*************************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/GridContainerJsunit.test.ets ***!
  \*************************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function gridContainerJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('gridContainerTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/GridContainer',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get GridContainer state success " + JSON.stringify(pages));
                if (!("GridContainer" == pages.name)) {
                    console.info("get GridContainer state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push GridContainer page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push GridContainer page error " + JSON.stringify(result));
            }
            await sleep(1);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("GridContainer after each called");
        });
        (0, index_ets_1.it)('testGridContainer010', 0, async function (done) {
            console.info('new GridContainer0 START');
            let strJson = getInspectorByKey('gridContainer');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$type).assertEqual('GridContainer');
            console.info("yr GridContainer0 type: " + JSON.stringify(obj.$type));
            console.log("yr gridContainer0 obj.$attrs.alignItems-'HorizontalAlign.Start':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new GridContainer0 END');
            done();
        });
        (0, index_ets_1.it)('testGridContainer020', 0, async function (done) {
            console.info('new GridContainer1 START');
            let strJson = getInspectorByKey('gridContainer1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.Center');
            console.log("yr gridContainer1 obj.$attrs.alignItems-'HorizontalAlign.Center':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new GridContainer1 END');
            done();
        });
        (0, index_ets_1.it)('testGridContainer030', 0, async function (done) {
            console.info('new GridContainer2 START');
            let strJson = getInspectorByKey('gridContainer2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.End');
            console.log("yr gridContainer obj.$attrs.alignItems-'HorizontalAlign.End':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new GridContainer2 END');
            done();
        });
        (0, index_ets_1.it)('testGridContainer040', 0, async function (done) {
            console.info('new GridContainer3 START');
            let strJson = getInspectorByKey('gridContainer3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.alignItems).assertEqual('HorizontalAlign.End');
            console.log("yr gridContainer3 obj.$attrs.alignItems-'HorizontalAlign.End':" + JSON.stringify(obj.$attrs.alignItems));
            console.info('new GridContainer3  END');
            done();
        });
        (0, index_ets_1.it)('testGridContainer050', 0, async function (done) {
            console.info('new GridContainer4 START');
            let strJson = getInspectorByKey('gridContainer4');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("gridContainer obj.$attrs.sizeType:" + JSON.stringify(obj.$attrs.sizeType)); //undefinde
            console.info('new GridContainer4  END');
            done();
        });
    });
}
exports["default"] = gridContainerJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ImageJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ImageJsunit.test.ets ***!
  \*****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function imageJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('imageTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Image',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Image state success " + JSON.stringify(pages));
                if (!("Image" == pages.name)) {
                    console.info("get Image state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Image page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push image page error " + JSON.stringify(result));
            }
            await sleep(1);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Image after each called");
        });
        (0, index_ets_1.it)('testGetImageAttr010', 0, async function (done) {
            console.info('testGetImageAttr1 START');
            let strJson = getInspectorByKey('image1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("image1 matchTextDirection" + JSON.stringify(obj.$attrs.matchTextDirection));
            console.log("image1 objectFit" + JSON.stringify(obj.$attrs.objectFit));
            console.log("image1 fitOriginalSize" + JSON.stringify(obj.$attrs.fitOriginalSize));
            console.log("image1 fillColor" + JSON.stringify(obj.$attrs.fillColor));
            console.log("image1 autoResize" + JSON.stringify(obj.$attrs.autoResize));
            console.log("image1 syncLoad" + JSON.stringify(obj.$attrs.syncLoad));
            console.log("image1 objectRepeat" + JSON.stringify(obj.$attrs.objectRepeat));
            console.log("image1 interpolation" + JSON.stringify(obj.$attrs.interpolation));
            console.log("image1 renderMode" + JSON.stringify(obj.$attrs.renderMode));
            console.log("image1 sourceSize" + JSON.stringify(obj.$attrs.sourceSize));
            console.log("image1 alt" + JSON.stringify(obj.$attrs.alt));
            (0, index_ets_1.expect)(obj.$attrs.objectFit).assertEqual('ImageFit.Cover');
            (0, index_ets_1.expect)(obj.$attrs.syncLoad).assertEqual('false');
            (0, index_ets_1.expect)(obj.$attrs.objectRepeat).assertEqual('ImageRepeat.NoRepeat');
            (0, index_ets_1.expect)(obj.$attrs.interpolation).assertEqual('ImageInterpolation.None');
            (0, index_ets_1.expect)(obj.$attrs.renderMode).assertEqual('ImageRenderMode.Original');
            (0, index_ets_1.expect)(obj.$attrs.sourceSize).assertEqual("[200.00 x 100.00]");
            (0, index_ets_1.expect)(obj.$attrs.alt).assertEqual('/resources/rawfile/person.png');
            console.info('testGetImageAttr1 END');
            done();
        });
        (0, index_ets_1.it)('testGetImageAttr020', 0, async function (done) {
            console.info('testGetImageAttr2 START');
            let strJson = getInspectorByKey('image2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("image2 objectFit" + JSON.stringify(obj.$attrs.objectFit));
            console.log("image2 objectRepeat" + JSON.stringify(obj.$attrs.objectRepeat));
            console.log("image2 interpolation" + JSON.stringify(obj.$attrs.interpolation));
            console.log("image2 renderMode" + JSON.stringify(obj.$attrs.renderMode));
            (0, index_ets_1.expect)(obj.$attrs.objectFit).assertEqual('ImageFit.Contain');
            (0, index_ets_1.expect)(obj.$attrs.interpolation).assertEqual('ImageInterpolation.High');
            (0, index_ets_1.expect)(obj.$attrs.renderMode).assertEqual('ImageRenderMode.Template');
            console.info('testGetImageAttr2 END');
            done();
        });
        (0, index_ets_1.it)('testGetImageAttr030', 0, async function (done) {
            console.info('testGetImageAttr3 START');
            let strJson = getInspectorByKey('image3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("image3 objectFit" + JSON.stringify(obj.$attrs.objectFit));
            console.log("image3 objectRepeat" + JSON.stringify(obj.$attrs.objectRepeat));
            console.log("image3 interpolation" + JSON.stringify(obj.$attrs.interpolation));
            (0, index_ets_1.expect)(obj.$attrs.objectRepeat).assertEqual('ImageRepeat.Y');
            (0, index_ets_1.expect)(obj.$attrs.interpolation).assertEqual('ImageInterpolation.Low');
            console.info('testGetImageAttr3 END');
            done();
        });
        (0, index_ets_1.it)('testGetImageAttr040', 0, async function (done) {
            console.info('testGetImageAttr4 START');
            let strJson = getInspectorByKey('image4');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("image4 objectFit" + JSON.stringify(obj.$attrs.objectFit));
            console.log("image4 objectRepeat" + JSON.stringify(obj.$attrs.objectRepeat));
            console.log("image4 interpolation" + JSON.stringify(obj.$attrs.interpolation));
            (0, index_ets_1.expect)(obj.$attrs.objectFit).assertEqual('ImageFit.None');
            (0, index_ets_1.expect)(obj.$attrs.interpolation).assertEqual('ImageInterpolation.Medium');
            console.info('testGetImageAttr4 END');
            done();
        });
        (0, index_ets_1.it)('testGetImageAttr050', 0, async function (done) {
            console.info('testGetImageAttr5 START');
            let strJson = getInspectorByKey('image5');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("image5 objectFit" + JSON.stringify(obj.$attrs.objectFit));
            (0, index_ets_1.expect)(obj.$attrs.objectFit).assertEqual('ImageFit.ScaleDown');
            console.info('testGetImageAttr5 END');
            done();
        });
    });
}
exports["default"] = imageJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/List.test.ets":
/*!**********************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/List.test.ets ***!
  \**********************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
const BadgeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BadgeJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets"));
const DividerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DividerJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DividerJsunit.test.ets"));
const ButtonJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ButtonJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets"));
const BlankJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BlankJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets"));
const DataPanelJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DataPanelJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/DataPanelJsunit.test.ets"));
const TextJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets"));
const RowSplitJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RowSplitJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RowSplitJsunit.test.ets"));
const ScrollJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ScrollJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ScrollJsunit.test.ets"));
const StackJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./StackJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/StackJsunit.test.ets"));
const ImageJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ImageJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ImageJsunit.test.ets"));
const ProgressJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ProgressJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets"));
const QrcodeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./QrcodeJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/QrcodeJsunit.test.ets"));
const RatingJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RatingJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets"));
const SpanJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SpanJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets"));
const SliderJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SliderJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SliderJsunit.test.ets"));
const GridContainerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridContainerJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/GridContainerJsunit.test.ets"));
const FlexJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./FlexJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/FlexJsunit.test.ets"));
const CounterJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CounterJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/CounterJsunit.test.ets"));
const ColumnSplitJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ColumnSplitJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnSplitJsunit.test.ets"));
const ColumnJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ColumnJsunit.test.ets */ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ColumnJsunit.test.ets"));
function testsuite() {
    (0, ButtonJsunit_test_ets_1.default)();
    (0, BlankJsunit_test_ets_1.default)();
    (0, DataPanelJsunit_test_ets_1.default)();
    (0, DividerJsunit_test_ets_1.default)();
    (0, TextJsunit_test_ets_1.default)();
    (0, RowSplitJsunit_test_ets_1.default)();
    (0, ScrollJsunit_test_ets_1.default)();
    (0, StackJsunit_test_ets_1.default)();
    (0, ImageJsunit_test_ets_1.default)();
    (0, ProgressJsunit_test_ets_1.default)();
    (0, QrcodeJsunit_test_ets_1.default)();
    (0, RatingJsunit_test_ets_1.default)();
    (0, SpanJsunit_test_ets_1.default)();
    (0, SliderJsunit_test_ets_1.default)();
    (0, BadgeJsunit_test_ets_1.default)();
    (0, ColumnJsunit_test_ets_1.default)();
    (0, ColumnSplitJsunit_test_ets_1.default)();
    (0, CounterJsunit_test_ets_1.default)();
    (0, FlexJsunit_test_ets_1.default)();
    (0, GridContainerJsunit_test_ets_1.default)();
}
exports["default"] = testsuite;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets":
/*!********************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets ***!
  \********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function progressJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('progressTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Progress',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Progress state success " + JSON.stringify(pages));
                if (!("Progress" == pages.name)) {
                    console.info("get Progress state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Progress page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Progress page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Progress after each called");
        });
        (0, index_ets_1.it)('testGetProgressAttr010', 0, async function (done) {
            console.info('testGetProgressAttr START');
            let strJson = getInspectorByKey('progress');
            let obj = JSON.parse(strJson);
            let objConstructor = JSON.parse(obj.$attrs.constructor);
            console.log("progress constructor is " + objConstructor);
            (0, index_ets_1.expect)(obj.$attrs.value).assertEqual(3.000000.toFixed(6));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Progress');
            (0, index_ets_1.expect)(obj.$attrs.color).assertEqual("#FF0000FF");
            (0, index_ets_1.expect)(obj.$attrs.width).assertEqual("50.00vp");
            (0, index_ets_1.expect)(obj.$attrs.height).assertEqual("70.00vp");
            (0, index_ets_1.expect)(objConstructor.total).assertEqual(40.000000.toFixed(6));
            (0, index_ets_1.expect)(objConstructor.type).assertEqual("ProgressStyle.Linear");
            console.info('testGetProgressAttr END');
            done();
        });
        (0, index_ets_1.it)('testGetProgressAttr020', 0, async function (done) {
            console.info('testGetProgressAttr2 START');
            let strJson = getInspectorByKey('progress2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            let objConstructor = JSON.parse(obj.$attrs.constructor);
            console.log("progress constructor is " + objConstructor);
            (0, index_ets_1.expect)(objConstructor.type).assertEqual("ProgressStyle.Eclipse");
            console.info('testGetProgressAttr2 END');
            done();
        });
        (0, index_ets_1.it)('testGetProgressAttr030', 0, async function (done) {
            console.info('testGetProgressAttr3 START');
            let strJson = getInspectorByKey('progress3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            let objConstructor = JSON.parse(obj.$attrs.constructor);
            console.log("progress constructor is " + objConstructor);
            (0, index_ets_1.expect)(objConstructor.type).assertEqual("ProgressStyle.Ring");
            console.info('testGetProgressAttr3 END');
            done();
        });
        (0, index_ets_1.it)('testGetProgressAttr040', 0, async function (done) {
            console.info('testGetProgressAttr4 START');
            let strJson = getInspectorByKey('progress4');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            let objConstructor = JSON.parse(obj.$attrs.constructor);
            console.log("progress constructor is " + objConstructor);
            (0, index_ets_1.expect)(objConstructor.type).assertEqual("ProgressStyle.ScaleRing");
            console.info('testGetProgressAttr4 END');
            done();
        });
        (0, index_ets_1.it)('testGetProgressAttr020', 0, async function (done) {
            console.info('testGetProgressAttr5 START');
            let strJson = getInspectorByKey('progress5');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            let objConstructor = JSON.parse(obj.$attrs.constructor);
            console.log("progress constructor is " + objConstructor);
            (0, index_ets_1.expect)(objConstructor.type).assertEqual("ProgressStyle.Capsule");
            console.info('testGetProgressAttr5 END');
            done();
        });
    });
}
exports["default"] = progressJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/QrcodeJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/QrcodeJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function qrcodeJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('QrcodeTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Qrcode',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Qrcode state success " + JSON.stringify(pages));
                if (!("Qrcode" == pages.name)) {
                    console.info("get Qrcode state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Qrcode page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Qrcode page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Qrcode after each called");
        });
        (0, index_ets_1.it)('testGetQrcodeAttr010', 0, async function (done) {
            console.info('testGetQrcodeAttr START');
            let strJson = getInspectorByKey('qrcode');
            let obj = JSON.parse(strJson);
            console.info("Qrcode component obj is: " + JSON.stringify(obj));
            console.info("qrcode backgroundColor" + JSON.stringify(obj.$attrs.backgroundColor));
            console.info("qrcode width" + JSON.stringify(obj.$attrs.width));
            console.info("qrcode height" + JSON.stringify(obj.$attrs.height));
            console.info("qrcode value" + JSON.stringify(obj.$attrs.value));
            (0, index_ets_1.expect)(obj.$attrs.value).assertEqual("hello world");
            console.info('testGetQrcodeAttr END');
            done();
        });
    });
}
exports["default"] = qrcodeJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function ratingJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('ratingTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Rating',
            };
            try {
                router.clear();
                await sleep(1);
                let pages = router.getState();
                console.info("get Rating state success " + JSON.stringify(pages));
                if (!("Rating" == pages.name)) {
                    console.info("get Rating state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Rating page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Rating page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Rating after each called");
        });
        (0, index_ets_1.it)('testGetRatingAttr010', 0, async function (done) {
            console.info('testGetRatingAttr1 START');
            let strJson = getInspectorByKey('rating1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info("rating1 rating" + JSON.stringify(obj.$attrs.rating));
            console.info("rating1 indicator" + JSON.stringify(obj.$attrs.indicator));
            console.info("rating1 stepSize" + JSON.stringify(obj.$attrs.stepSize));
            console.info("rating1 stars" + JSON.stringify(obj.$attrs.stars));
            console.info("rating1 starStyle" + JSON.stringify(obj.$attrs.starStyle));
            (0, index_ets_1.expect)(obj.$attrs.rating).assertEqual("2.000000");
            (0, index_ets_1.expect)(obj.$attrs.indicator).assertEqual("false");
            (0, index_ets_1.expect)(obj.$attrs.stepSize).assertEqual("0.500000");
            (0, index_ets_1.expect)(obj.$attrs.stars).assertEqual("5");
            (0, index_ets_1.expect)(obj.$attrs.starStyle)
                .assertEqual('{"backgroundUri":"/resources/rawfile/star-1-1.png","foregroundUri":"/resources/rawfile/star-1-3.png","secondaryUri":"/resources/rawfile/star-1-2.png"}');
            console.info('testGetRatingAttr1 END');
            done();
        });
        (0, index_ets_1.it)('testGetRatingAttr020', 0, async function (done) {
            console.info('testGetRatingAttr2 START');
            let strJson = getInspectorByKey('rating2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info("rating2 indicator" + JSON.stringify(obj.$attrs.indicator));
            (0, index_ets_1.expect)(obj.$attrs.indicator).assertEqual("true");
            console.info('testGetRatingAttr2 END');
            done();
        });
    });
}
exports["default"] = ratingJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RowSplitJsunit.test.ets":
/*!********************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/RowSplitJsunit.test.ets ***!
  \********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function rowSplitJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('RowSplitTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/RowSplit',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get RowSplit state success " + JSON.stringify(pages));
                if (!("RowSplit" == pages.name)) {
                    console.info("get RowSplit state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push RowSplit page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push RowSplit page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("RowSplit after each called");
        });
        (0, index_ets_1.it)('testRowSplitGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('rowSplit');
            let obj = JSON.parse(strJson);
            console.info("cd rowSplit component obj is: " + JSON.stringify(obj));
            console.log("cd rowSplit type" + JSON.stringify(obj.$type));
            console.log("cd rowSplit  resizeable" + JSON.stringify(obj.$attrs.resizeable));
            (0, index_ets_1.expect)(obj.$type).assertEqual('RowSplit');
            (0, index_ets_1.expect)(obj.$attrs.resizeable).assertEqual('false');
            console.info('cd RowSplitInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testRowSplitGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('rowSplit1');
            let obj = JSON.parse(strJson);
            console.info("cd rowSplit1 component obj is: " + JSON.stringify(obj));
            console.log("cd rowSplit1  resizeable" + JSON.stringify(obj.$attrs.resizeable));
            (0, index_ets_1.expect)(obj.$attrs.resizeable).assertEqual('true');
            console.info('cd RowSplit1InspectorByKey END');
            done();
        });
    });
}
exports["default"] = rowSplitJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ScrollJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/ScrollJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function ScrollJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('scrollTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Scroll',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Scroll state success " + JSON.stringify(pages));
                if (!("Scroll" == pages.name)) {
                    console.info("get Scroll state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Scroll page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Scroll page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Scroll after each called");
        });
        (0, index_ets_1.it)('testScrollGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('scroll');
            let obj = JSON.parse(strJson);
            console.info("cd scroll component obj is: " + JSON.stringify(obj));
            console.log("cd scroll type" + JSON.stringify(obj.$type));
            console.log("cd scroll scrollable" + JSON.stringify(obj.$attrs.scrollable));
            console.log("cd scroll scrollBar" + JSON.stringify(obj.$attrs.scrollBar));
            console.log("cd scroll scrollBarColor" + JSON.stringify(obj.$attrs.scrollBarColor));
            console.log("cd scroll scrollBarWidth" + JSON.stringify(obj.$attrs.scrollBarWidth));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Scroll');
            (0, index_ets_1.expect)(obj.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
            (0, index_ets_1.expect)(obj.$attrs.scrollBarColor).assertEqual('#FFFFC0CB');
            (0, index_ets_1.expect)(obj.$attrs.scrollBarWidth).assertEqual('20.00px');
            console.info('cd ScorllGetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testScrollGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('scroll1');
            let obj = JSON.parse(strJson);
            console.info("cd scroll1 component obj is: " + JSON.stringify(obj));
            console.log("cd scroll1 scrollable" + JSON.stringify(obj.$attrs.scrollable));
            console.log("cd scroll1 scrollBar" + JSON.stringify(obj.$attrs.scrollBar));
            (0, index_ets_1.expect)(obj.$attrs.scrollable).assertEqual('ScrollDirection.Horizontal');
            (0, index_ets_1.expect)(obj.$attrs.scrollBar).assertEqual('BarState.Off');
            console.info('cd Scorll1GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testScrollGetInspectorByKey030', 0, async function (done) {
            let strJson = getInspectorByKey('scroll2');
            let obj = JSON.parse(strJson);
            console.info("cd scroll2 component obj is: " + JSON.stringify(obj));
            console.log("cd scroll2 scrollable" + JSON.stringify(obj.$attrs.scrollable));
            console.log("cd scroll2 scrollBar" + JSON.stringify(obj.$attrs.scrollBar));
            (0, index_ets_1.expect)(obj.$attrs.scrollable).assertEqual('ScrollDirection.None');
            (0, index_ets_1.expect)(obj.$attrs.scrollBar).assertEqual('BarState.Off');
            console.info('cd Scorll2GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testScrollGetInspectorByKey040', 0, async function (done) {
            let strJson = getInspectorByKey('scroll3');
            let obj = JSON.parse(strJson);
            console.info("cd scroll3 component obj is: " + JSON.stringify(obj));
            console.log("cd scroll3 scrollable" + JSON.stringify(obj.$attrs.scrollable));
            console.log("cd scroll3 scrollBar" + JSON.stringify(obj.$attrs.scrollBar));
            (0, index_ets_1.expect)(obj.$attrs.scrollBar).assertEqual('BarState.Off');
            console.info('cd Scorll3GetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = ScrollJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SliderJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SliderJsunit.test.ets ***!
  \******************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function sliderJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('SliderTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Slider',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Slider state success " + JSON.stringify(pages));
                if (!("Slider" == pages.name)) {
                    console.info("get Slider state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Slider page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Slider page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Slider after each called");
        });
        (0, index_ets_1.it)('testGetSliderAttr010', 0, async function (done) {
            console.info('testGetSliderAttr1 START');
            let strJson = getInspectorByKey('slider1');
            let obj = JSON.parse(strJson);
            console.info("component obj is  Slider: " + JSON.stringify(obj));
            console.info("component obj is  Slider: " + JSON.stringify(obj.$attrs.constructor));
            (0, index_ets_1.expect)(obj.$attrs.showTips).assertEqual("false");
            (0, index_ets_1.expect)(obj.$attrs.showSteps).assertEqual("false");
            (0, index_ets_1.expect)(obj.$attrs.constructor.value).assertEqual(40.000000.toFixed(6));
            (0, index_ets_1.expect)(obj.$attrs.constructor.min).assertEqual(0.000000.toFixed(6));
            (0, index_ets_1.expect)(obj.$attrs.constructor.max).assertEqual(100.000000.toFixed(6));
            (0, index_ets_1.expect)(obj.$attrs.constructor.step).assertEqual(1.000000.toFixed(6));
            (0, index_ets_1.expect)(obj.$attrs.constructor.style).assertEqual("SliderStyle.OutSet");
            console.info('testGetSliderAttr1 END');
            done();
        });
        (0, index_ets_1.it)('testGetSliderAttr020', 0, async function (done) {
            console.info('testGetSliderAttr2 START');
            let strJson = getInspectorByKey('slider2');
            let obj = JSON.parse(strJson);
            console.info("component obj is  Slider: " + JSON.stringify(obj));
            (0, index_ets_1.expect)(obj.$attrs.showTips).assertEqual("true");
            (0, index_ets_1.expect)(obj.$attrs.showSteps).assertEqual("true");
            (0, index_ets_1.expect)(obj.$attrs.constructor.style).assertEqual("SliderStyle.InSet");
            console.info('testGetSliderAttr2 END');
            done();
        });
    });
}
exports["default"] = sliderJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets ***!
  \****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function spanJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('SpanTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Span',
            };
            try {
                router.clear();
                await sleep(1);
                let pages = router.getState();
                console.info("get Span state success " + JSON.stringify(pages));
                if (!("Span" == pages.name)) {
                    console.info("get Span state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Span page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Span page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Span after each called");
        });
        (0, index_ets_1.it)('testGetSpanAttr010', 0, async function (done) {
            console.info('testGetSpanAttr1 START');
            let strJson = getInspectorByKey('span1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info("span1 decoration" + JSON.stringify(obj.$attrs.decoration));
            console.info("span1 textCase" + JSON.stringify(obj.$attrs.textCase));
            console.info("span1 content" + JSON.stringify(obj.$attrs.content));
            console.info("span1 fontSize" + JSON.stringify(obj.$attrs.fontSize));
            console.info("span1 letterSpacing" + JSON.stringify(obj.$attrs.letterSpacing));
            (0, index_ets_1.expect)(obj.$attrs.decoration).assertEqual('{"type":"TextDecorationType.LineThrough","color":"#FFFF0000"}');
            (0, index_ets_1.expect)(obj.$attrs.textCase).assertEqual('TextCase.UpperCase');
            (0, index_ets_1.expect)(obj.$attrs.content).assertEqual('Test Span demo');
            console.info('testGetSpanAttr1 END');
            done();
        });
        (0, index_ets_1.it)('testGetSpanAttr020', 0, async function (done) {
            console.info('testGetSpanAttr2 START');
            let strJson = getInspectorByKey('span2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info("span2 textCase" + JSON.stringify(obj.$attrs.textCase));
            console.info("span2 content" + JSON.stringify(obj.$attrs.content));
            (0, index_ets_1.expect)(obj.$attrs.textCase).assertEqual('TextCase.LowerCase');
            (0, index_ets_1.expect)(obj.$attrs.content).assertEqual('The second test Span demo');
            console.info('testGetSpanAttr2 END');
            done();
        });
        (0, index_ets_1.it)('testGetSpanAttr030', 0, async function (done) {
            console.info('testGetSpanAttr3 START');
            let strJson = getInspectorByKey('span3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info("span3 textCase" + JSON.stringify(obj.$attrs.textCase));
            console.info("span3 content" + JSON.stringify(obj.$attrs.content));
            (0, index_ets_1.expect)(obj.$attrs.textCase).assertEqual('TextCase.Normal');
            (0, index_ets_1.expect)(obj.$attrs.content).assertEqual('The third test Span demo');
            console.info('testGetSpanAttr3 END');
            done();
        });
    });
}
exports["default"] = spanJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/StackJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/StackJsunit.test.ets ***!
  \*****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function StackJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('StackTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Stack',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Stack state success " + JSON.stringify(pages));
                if (!("Stack" == pages.name)) {
                    console.info("get Stack state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Stack page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Stack page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Stack after each called");
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            let strJson = getInspectorByKey('stack');
            let obj = JSON.parse(strJson);
            console.info("cd stack component obj is: " + JSON.stringify(obj));
            console.log("cd stack type" + JSON.stringify(obj.$type));
            console.log("cd stack alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Stack');
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.Bottom');
            console.info('cd stackGetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('stack1');
            let obj = JSON.parse(strJson);
            console.info("cd stack1 component obj is: " + JSON.stringify(obj));
            console.log("cd stack1 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Stack');
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.BottomStart');
            console.info('cd stack1GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey030', 0, async function (done) {
            let strJson = getInspectorByKey('stack2');
            let obj = JSON.parse(strJson);
            console.info("cd stack2 component obj is: " + JSON.stringify(obj));
            console.log("cd stack2 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.BottomEnd');
            console.info('cd stack2GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey040', 0, async function (done) {
            let strJson = getInspectorByKey('stack3');
            let obj = JSON.parse(strJson);
            console.info("cd stack3 component obj is: " + JSON.stringify(obj));
            console.log("cd stack3 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.Start');
            console.info('cd stack3GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey050', 0, async function (done) {
            let strJson = getInspectorByKey('stack4');
            let obj = JSON.parse(strJson);
            console.info("cd stack4 component obj is: " + JSON.stringify(obj));
            console.log("cd stack4 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.Center');
            console.info('cd stack4GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey060', 0, async function (done) {
            let strJson = getInspectorByKey('stack5');
            let obj = JSON.parse(strJson);
            console.info("cd stack5 component obj is: " + JSON.stringify(obj));
            console.log("cd stack5 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.End');
            console.info('cd stack5GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey070', 0, async function (done) {
            let strJson = getInspectorByKey('stack6');
            let obj = JSON.parse(strJson);
            console.info("cd stack6 component obj is: " + JSON.stringify(obj));
            console.log("cd stack6 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.Top');
            console.info('cd stack6GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey080', 0, async function (done) {
            let strJson = getInspectorByKey('stack7');
            let obj = JSON.parse(strJson);
            console.info("cd stack7 component obj is: " + JSON.stringify(obj));
            console.log("cd stack7 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.TopStart');
            console.info('cd stack7GetInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('testStackGetInspectorByKey090', 0, async function (done) {
            let strJson = getInspectorByKey('stack8');
            let obj = JSON.parse(strJson);
            console.info("cd stack8 component obj is: " + JSON.stringify(obj));
            console.log("cd stack8 alignContent" + JSON.stringify(obj.$attrs.alignContent));
            (0, index_ets_1.expect)(obj.$attrs.alignContent).assertEqual('Alignment.TopEnd');
            console.info('cd stack8GetInspectorByKey END');
            done();
        });
    });
}
exports["default"] = StackJsunit;


/***/ }),

/***/ "../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** ../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets ***!
  \****************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var router = globalThis.requireNativeModule('system.router');
function textJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    (0, index_ets_1.describe)('textTest', function () {
        (0, index_ets_1.beforeEach)(async function (done) {
            let options = {
                uri: 'pages/Text',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get Text state success " + JSON.stringify(pages));
                if (!("Text" == pages.name)) {
                    console.info("get Text state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    console.info("push Text page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Text page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        (0, index_ets_1.afterEach)(async function () {
            await sleep(1);
            console.info("Text after each called");
        });
        (0, index_ets_1.it)('textGetInspectorByKey010', 0, async function (done) {
            console.info('testGetInspectorByKey START');
            await sleep(3);
            let strJson = getInspectorByKey('Text');
            let obj = JSON.parse(strJson);
            console.info("cd text component obj is: " + JSON.stringify(obj));
            console.log("cd text type" + JSON.stringify(obj.$type));
            console.log("cd text height" + JSON.stringify(obj.$attrs.height));
            console.log("cd text width" + JSON.stringify(obj.$attrs.width));
            console.log("cd text padding" + JSON.stringify(obj.$attrs.padding));
            console.log("cd text constraintSize" + JSON.stringify(obj.$attrs.constraintSize));
            console.log("cd text opacity" + JSON.stringify(obj.$attrs.opacity));
            console.log("cd text align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text markAnchor type1" + typeof ({
                "x": "50.00vp", "y": "50.00vp"
            }));
            console.log("cd text markAnchor1" + JSON.stringify({
                "x": "50.00vp", "y": "50.00vp"
            }));
            console.log("cd text markAnchor type" + typeof (obj.$attrs.markAnchor));
            console.log("cd text markAnchor" + JSON.stringify(obj.$attrs.markAnchor));
            console.log("cd text offset" + JSON.stringify(obj.$attrs.offset));
            console.log("cd text position" + JSON.stringify(obj.$attrs.position));
            console.log("cd text flexGrow" + JSON.stringify(obj.$attrs.flexGrow));
            console.log("cd text flexShrink" + JSON.stringify(obj.$attrs.flexShrink));
            console.log("cd text alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text borderStyle" + JSON.stringify(obj.$attrs.borderStyle));
            console.log("cd text borderRadius" + JSON.stringify(obj.$attrs.borderRadius));
            console.log("cd text borderWidth" + JSON.stringify(obj.$attrs.borderWidth));
            console.log("cd text borderColor" + JSON.stringify(obj.$attrs.borderColor));
            console.log("cd text backgroundColor" + JSON.stringify(obj.$attrs.backgroundColor));
            console.log("cd text enabled" + JSON.stringify(obj.$attrs.enabled));
            console.log("cd text zIndex" + JSON.stringify(obj.$attrs.zIndex));
            console.log("cd text fontColor" + JSON.stringify(obj.$attrs.fontColor));
            console.log("cd text visibility" + JSON.stringify(obj.$attrs.visibility));
            console.log("cd text fontSize" + JSON.stringify(obj.$attrs.fontSize));
            console.log("cd text minFontSize" + JSON.stringify(obj.$attrs.minFontSize));
            console.log("cd text letterSpacing" + JSON.stringify(obj.$attrs.letterSpacing));
            console.log("cd text maxFontSize" + JSON.stringify(obj.$attrs.maxFontSize));
            console.log("cd text fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text fontStyle" + JSON.stringify(obj.$attrs.fontStyle));
            console.log("cd text fontFamily" + JSON.stringify(obj.$attrs.fontFamily));
            console.log("cd text textAlign" + JSON.stringify(obj.$attrs.textAlign));
            console.log("cd text textOverflow" + JSON.stringify(obj.$attrs.textOverflow));
            console.log("cd text lineHeight" + JSON.stringify(obj.$attrs.lineHeight));
            console.log("cd text baselineOffset" + JSON.stringify(obj.$attrs.baselineOffset));
            console.log("cd text maxLines" + JSON.stringify(obj.$attrs.maxLines));
            console.log("cd text textCase" + JSON.stringify(obj.$attrs.textCase));
            console.log("cd text decoration" + JSON.stringify(obj.$attrs.decoration));
            console.log("cd text decoration1" + JSON.stringify(JSON.stringify({
                type: "TextDecorationType.Underline", color: "#FFFF0000"
            })));
            console.log("cd text direction" + JSON.stringify(obj.$attrs.direction));
            console.log("cd text aspectRatio" + JSON.stringify(obj.$attrs.aspectRatio));
            console.log("cd text fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$type).assertEqual('Text');
            (0, index_ets_1.expect)(obj.$attrs.width).assertEqual('200.00vp');
            (0, index_ets_1.expect)(obj.$attrs.padding).assertEqual('5.00vp');
            (0, index_ets_1.expect)(obj.$attrs.margin).assertEqual('10.00px');
            (0, index_ets_1.expect)(obj.$attrs.opacity).assertEqual(1);
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.Center");
            (0, index_ets_1.expect)(JSON.stringify(obj.$attrs.markAnchor)).assertEqual(JSON.stringify({
                "x": "50.00vp", "y": "50.00vp"
            }));
            (0, index_ets_1.expect)(JSON.stringify(obj.$attrs.offset)).assertEqual(JSON.stringify({
                "x": "50.00vp", "y": "50.00vp"
            }));
            (0, index_ets_1.expect)(obj.$attrs.flexGrow).assertEqual(5);
            (0, index_ets_1.expect)(obj.$attrs.flexShrink).assertEqual(2);
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.Auto");
            (0, index_ets_1.expect)(obj.$attrs.borderStyle).assertEqual("BorderStyle.Dashed");
            (0, index_ets_1.expect)(obj.$attrs.borderRadius).assertEqual("10.00vp");
            (0, index_ets_1.expect)(obj.$attrs.borderWidth).assertEqual("4.00px");
            (0, index_ets_1.expect)(obj.$attrs.borderColor).assertEqual("#FF0000FF");
            (0, index_ets_1.expect)(obj.$attrs.backgroundColor).assertEqual("#FFFFC0CB");
            (0, index_ets_1.expect)(obj.$attrs.enabled).assertEqual(false);
            (0, index_ets_1.expect)(obj.$attrs.zIndex).assertEqual(1);
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FF000000");
            (0, index_ets_1.expect)(obj.$attrs.visibility).assertEqual("Visibility.Visible");
            (0, index_ets_1.expect)(obj.$attrs.fontSize).assertEqual("15.00px");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Bold");
            (0, index_ets_1.expect)(obj.$attrs.fontStyle).assertEqual("FontStyle.Italic");
            (0, index_ets_1.expect)(obj.$attrs.fontFamily).assertEqual("sans-serif");
            (0, index_ets_1.expect)(obj.$attrs.textAlign).assertEqual("TextAlign.End");
            (0, index_ets_1.expect)(obj.$attrs.textOverflow).assertEqual("TextOverflow.Ellipsis");
            (0, index_ets_1.expect)(obj.$attrs.lineHeight).assertEqual("15");
            (0, index_ets_1.expect)(obj.$attrs.baselineOffset).assertEqual("0");
            (0, index_ets_1.expect)(obj.$attrs.maxLines).assertEqual("2");
            (0, index_ets_1.expect)(obj.$attrs.textCase).assertEqual("TextCase.Normal");
            (0, index_ets_1.expect)(obj.$attrs.decoration).assertEqual(JSON.stringify({
                type: "TextDecorationType.Underline", color: "#FFFF0000"
            }));
            (0, index_ets_1.expect)(obj.$attrs.direction).assertEqual("Direction.Auto");
            (0, index_ets_1.expect)(obj.$attrs.aspectRatio).assertEqual(1);
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FF000000");
            console.info('cd textInspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey020', 0, async function (done) {
            let strJson = getInspectorByKey('Text1');
            let obj = JSON.parse(strJson);
            console.info("cd text1 component obj is: " + JSON.stringify(obj));
            console.log("cd text1 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text1 alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text1 borderStyle" + JSON.stringify(obj.$attrs.borderStyle));
            console.log("cd text1 enabled" + JSON.stringify(obj.$attrs.enabled));
            console.log("cd text1 visibility" + JSON.stringify(obj.$attrs.visibility));
            console.log("cd text1 fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text1 textAlign" + JSON.stringify(obj.$attrs.textAlign));
            console.log("cd text1 textOverflow" + JSON.stringify(obj.$attrs.textOverflow));
            console.log("cd text1 direction" + JSON.stringify(obj.$attrs.direction));
            console.log("cd text1 textCase" + JSON.stringify(obj.$attrs.textCase));
            console.log("cd text1 decoration" + JSON.stringify(obj.$attrs.decoration));
            console.log("cd text1 decoration1" + JSON.stringify(JSON.stringify({
                type: "TextDecorationType.LineThrough", color: "#FFFF0000"
            })));
            console.log("cd text1 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            console.log("cd text padding" + JSON.stringify(obj.$attrs.padding));
            console.log("cd text margin" + JSON.stringify(obj.$attrs.margin));
            (0, index_ets_1.expect)(obj.$attrs.direction).assertEqual("Direction.Ltr");
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.Start");
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.Start");
            (0, index_ets_1.expect)(obj.$attrs.borderStyle).assertEqual("BorderStyle.Dotted");
            (0, index_ets_1.expect)(obj.$attrs.enabled).assertEqual(true);
            (0, index_ets_1.expect)(obj.$attrs.visibility).assertEqual("Visibility.Hidden");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Normal");
            (0, index_ets_1.expect)(obj.$attrs.textAlign).assertEqual("TextAlign.Start");
            (0, index_ets_1.expect)(obj.$attrs.textOverflow).assertEqual("TextOverflow.Clip");
            (0, index_ets_1.expect)(obj.$attrs.decoration).assertEqual(JSON.stringify({
                type: "TextDecorationType.LineThrough", color: "#FFFF0000"
            }));
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FFFFFFFF");
            console.info('cd text1InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey030', 0, async function (done) {
            let strJson = getInspectorByKey('Text2');
            let obj = JSON.parse(strJson);
            console.info("cd text2 component obj is: " + JSON.stringify(obj));
            console.log("cd text2 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text2 alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text2 borderStyle" + JSON.stringify(obj.$attrs.borderStyle));
            console.log("cd text2 visibility" + JSON.stringify(obj.$attrs.visibility));
            console.log("cd text2 fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text2 textAlign" + JSON.stringify(obj.$attrs.textAlign));
            console.log("cd text2 textOverflow" + JSON.stringify(obj.$attrs.textOverflow));
            console.log("cd text2 direction" + JSON.stringify(obj.$attrs.direction));
            console.log("cd text2 textCase" + JSON.stringify(obj.$attrs.textCase));
            console.log("cd text2 decoration" + JSON.stringify(obj.$attrs.decoration));
            console.log("cd text2 decoration1" + JSON.stringify(JSON.stringify({
                type: "TextDecorationType.Noneh", color: "#FFFF0000"
            })));
            console.log("cd text2 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.direction).assertEqual("Direction.Rtl");
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.TopEnd");
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.Center");
            (0, index_ets_1.expect)(obj.$attrs.borderStyle).assertEqual("BorderStyle.Solid");
            (0, index_ets_1.expect)(obj.$attrs.visibility).assertEqual("Visibility.None");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Bolder");
            (0, index_ets_1.expect)(obj.$attrs.textAlign).assertEqual("TextAlign.Center");
            (0, index_ets_1.expect)(obj.$attrs.textCase).assertEqual("TextCase.UpperCase");
            (0, index_ets_1.expect)(obj.$attrs.decoration).assertEqual(JSON.stringify({
                type: "TextDecorationType.None", color: "#FFFF0000"
            }));
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FF0000FF");
            console.info('cd text2InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey040', 0, async function (done) {
            let strJson = getInspectorByKey('Text3');
            let obj = JSON.parse(strJson);
            console.info("cd text3 component obj is: " + JSON.stringify(obj));
            console.log("cd text3 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text3 alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text3 fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text3 decoration" + JSON.stringify(obj.$attrs.decoration));
            console.log("cd text3 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.Top");
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.End");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Lighter");
            (0, index_ets_1.expect)(obj.$attrs.decoration).assertEqual(JSON.stringify({
                type: "TextDecorationType.Overline", color: "#FFFF0000"
            }));
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FF808080");
            console.info('cd text3InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey050', 0, async function (done) {
            let strJson = getInspectorByKey('Text4');
            let obj = JSON.parse(strJson);
            console.info("cd text4 component obj is: " + JSON.stringify(obj));
            console.log("cd text4 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text4 alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text4 fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text4 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.TopStart");
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.Baseline");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Medium");
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FFA52A2A");
            console.info('cd text4InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey060', 0, async function (done) {
            let strJson = getInspectorByKey('Text5');
            let obj = JSON.parse(strJson);
            console.info("cd text5 component obj is: " + JSON.stringify(obj));
            console.log("cd text5 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text5 alignSelf" + JSON.stringify(obj.$attrs.alignSelf));
            console.log("cd text5 fontWeight" + JSON.stringify(obj.$attrs.fontWeight));
            console.log("cd text5 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.End");
            (0, index_ets_1.expect)(obj.$attrs.alignSelf).assertEqual("ItemAlign.Stretch");
            (0, index_ets_1.expect)(obj.$attrs.fontWeight).assertEqual("FontWeight.Regular");
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FF808080");
            console.info('cd text5InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey070', 0, async function (done) {
            let strJson = getInspectorByKey('Text6');
            let obj = JSON.parse(strJson);
            console.info("cd text6 component obj is: " + JSON.stringify(obj));
            console.log("cd text6 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text6 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.BottomEnd");
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FFFFA500");
            console.info('cd text6InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey080', 0, async function (done) {
            let strJson = getInspectorByKey('Text7');
            let obj = JSON.parse(strJson);
            console.info("cd text7 component obj is: " + JSON.stringify(obj));
            console.log("cd text7 align" + JSON.stringify(obj.$attrs.align));
            console.log("cd text7 fontColor" + JSON.stringify(obj.$attrs.fontColor));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.Bottom");
            (0, index_ets_1.expect)(obj.$attrs.fontColor).assertEqual("#FFFFFF00");
            console.info('cd text7InspectorByKey END');
            done();
        });
        (0, index_ets_1.it)('textGetInspectorByKey090', 0, async function (done) {
            let strJson = getInspectorByKey('Text8');
            let obj = JSON.parse(strJson);
            console.info("cd text8 component obj is: " + JSON.stringify(obj));
            console.log("cd text8 align" + JSON.stringify(obj.$attrs.align));
            (0, index_ets_1.expect)(obj.$attrs.align).assertEqual("Alignment.BottomStart");
            console.info('cd text8InspectorByKey END');
            done();
        });
    });
}
exports["default"] = textJsunit;


/***/ })

/******/ 	});
/************************************************************************/
/******/ 	// The module cache
/******/ 	var __webpack_module_cache__ = {};
/******/ 	
/******/ 	// The require function
/******/ 	function __webpack_require__(moduleId) {
/******/ 		var commonCachedModule = globalThis["__common_module_cache__"] ? globalThis["__common_module_cache__"][moduleId]: null;
/******/ 		if (commonCachedModule) { return commonCachedModule.exports; }
/******/ 		// Check if module is in cache
/******/ 		var cachedModule = __webpack_module_cache__[moduleId];
/******/ 		if (cachedModule !== undefined) {
/******/ 			return cachedModule.exports;
/******/ 		}
/******/ 		// Create a new module (and put it into the cache)
/******/ 		var module = __webpack_module_cache__[moduleId] = {
/******/ 			// no module.id needed
/******/ 			// no module.loaded needed
/******/ 			exports: {}
/******/ 		};
/******/ 	
/******/ 		if (globalThis["__common_module_cache__"] && moduleId.indexOf("?name=") < 0 && Object.keys(globalThis["__common_module_cache__"]).indexOf(moduleId) >= 0) {
/******/ 		  globalThis["__common_module_cache__"][moduleId] = module;
/******/ 		}
/******/ 		__webpack_modules__[moduleId].call(module.exports, module, module.exports, __webpack_require__);
/******/ 	
/******/ 		// Return the exports of the module
/******/ 		return module.exports;
/******/ 	}
/******/ 	
/******/ 	// expose the modules object (__webpack_modules__)
/******/ 	__webpack_require__.m = __webpack_modules__;
/******/ 	
/************************************************************************/
/******/ 	/* webpack/runtime/chunk loaded */
/******/ 	(() => {
/******/ 		var deferred = [];
/******/ 		__webpack_require__.O = (result, chunkIds, fn, priority) => {
/******/ 			if(chunkIds) {
/******/ 				priority = priority || 0;
/******/ 				for(var i = deferred.length; i > 0 && deferred[i - 1][2] > priority; i--) deferred[i] = deferred[i - 1];
/******/ 				deferred[i] = [chunkIds, fn, priority];
/******/ 				return;
/******/ 			}
/******/ 			var notFulfilled = Infinity;
/******/ 			for (var i = 0; i < deferred.length; i++) {
/******/ 				var [chunkIds, fn, priority] = deferred[i];
/******/ 				var fulfilled = true;
/******/ 				for (var j = 0; j < chunkIds.length; j++) {
/******/ 					if ((priority & 1 === 0 || notFulfilled >= priority) && Object.keys(__webpack_require__.O).every((key) => (__webpack_require__.O[key](chunkIds[j])))) {
/******/ 						chunkIds.splice(j--, 1);
/******/ 					} else {
/******/ 						fulfilled = false;
/******/ 						if(priority < notFulfilled) notFulfilled = priority;
/******/ 					}
/******/ 				}
/******/ 				if(fulfilled) {
/******/ 					deferred.splice(i--, 1)
/******/ 					var r = fn();
/******/ 					if (r !== undefined) result = r;
/******/ 				}
/******/ 			}
/******/ 			return result;
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/define property getters */
/******/ 	(() => {
/******/ 		// define getter functions for harmony exports
/******/ 		__webpack_require__.d = (exports, definition) => {
/******/ 			for(var key in definition) {
/******/ 				if(__webpack_require__.o(definition, key) && !__webpack_require__.o(exports, key)) {
/******/ 					Object.defineProperty(exports, key, { enumerable: true, get: definition[key] });
/******/ 				}
/******/ 			}
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/hasOwnProperty shorthand */
/******/ 	(() => {
/******/ 		__webpack_require__.o = (obj, prop) => (Object.prototype.hasOwnProperty.call(obj, prop))
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/make namespace object */
/******/ 	(() => {
/******/ 		// define __esModule on exports
/******/ 		__webpack_require__.r = (exports) => {
/******/ 			if(typeof Symbol !== 'undefined' && Symbol.toStringTag) {
/******/ 				Object.defineProperty(exports, Symbol.toStringTag, { value: 'Module' });
/******/ 			}
/******/ 			Object.defineProperty(exports, '__esModule', { value: true });
/******/ 		};
/******/ 	})();
/******/ 	
/******/ 	/* webpack/runtime/jsonp chunk loading */
/******/ 	(() => {
/******/ 		// no baseURI
/******/ 		
/******/ 		// object to store loaded and loading chunks
/******/ 		// undefined = chunk not loaded, null = chunk preloaded/prefetched
/******/ 		// [resolve, reject, Promise] = chunk loading, 0 = chunk loaded
/******/ 		var installedChunks = {
/******/ 			"./pages/index": 0
/******/ 		};
/******/ 		
/******/ 		// no chunk on demand loading
/******/ 		
/******/ 		// no prefetching
/******/ 		
/******/ 		// no preloaded
/******/ 		
/******/ 		// no HMR
/******/ 		
/******/ 		// no HMR manifest
/******/ 		
/******/ 		__webpack_require__.O.j = (chunkId) => (installedChunks[chunkId] === 0);
/******/ 		
/******/ 		// install a JSONP callback for chunk loading
/******/ 		var webpackJsonpCallback = (parentChunkLoadingFunction, data) => {
/******/ 			var [chunkIds, moreModules, runtime] = data;
/******/ 			// add "moreModules" to the modules object,
/******/ 			// then flag all "chunkIds" as loaded and fire callback
/******/ 			var moduleId, chunkId, i = 0;
/******/ 			if(chunkIds.some((id) => (installedChunks[id] !== 0))) {
/******/ 				for(moduleId in moreModules) {
/******/ 					if(__webpack_require__.o(moreModules, moduleId)) {
/******/ 						__webpack_require__.m[moduleId] = moreModules[moduleId];
/******/ 					}
/******/ 				}
/******/ 				if(runtime) var result = runtime(__webpack_require__);
/******/ 			}
/******/ 			if(parentChunkLoadingFunction) parentChunkLoadingFunction(data);
/******/ 			for(;i < chunkIds.length; i++) {
/******/ 				chunkId = chunkIds[i];
/******/ 				if(__webpack_require__.o(installedChunks, chunkId) && installedChunks[chunkId]) {
/******/ 					installedChunks[chunkId][0]();
/******/ 				}
/******/ 				installedChunks[chunkIds[i]] = 0;
/******/ 			}
/******/ 			return __webpack_require__.O(result);
/******/ 		}
/******/ 		
/******/ 		var chunkLoadingGlobal = globalThis["webpackChunkcompilier"] = globalThis["webpackChunkcompilier"] || [];
/******/ 		chunkLoadingGlobal.forEach(webpackJsonpCallback.bind(null, 0));
/******/ 		chunkLoadingGlobal.push = webpackJsonpCallback.bind(null, chunkLoadingGlobal.push.bind(chunkLoadingGlobal));
/******/ 	})();
/******/ 	
/************************************************************************/
/******/ 	
/******/ 	// startup
/******/ 	// Load entry module and return exports
/******/ 	// This entry module depends on other loaded chunks and execution need to be delayed
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../ACE/aaaa/project/ace_ets_standard/entry/src/main/ets/MainAbility/pages/index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map