/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry":
/*!****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry ***!
  \****************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
var _system_file_1  = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets"));
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
        const reportExtend = new index_ets_1.ReportExtend(_system_file_1);
        core.addService('report', reportExtend);
        core.init();
        core.subscribeEvent('task', reportExtend);
        const configService = core.getDefaultService('config');
        const timeout = 10000;
        configService.setConfig(timeout);
        List_test_ets_1.default();
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

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AlphabetIndexerJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AlphabetIndexerJsunit.test.ets ***!
  \******************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function alphabetIndexerJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('alphabetIndexerTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/AlphabetIndexer',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get AlphabetIndexer state success " + JSON.stringify(pages));
                if (!("AlphabetIndexer" == pages.name)) {
                    console.info("get AlphabetIndexer state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push AlphabetIndexer page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push AlphabetIndexer page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("AlphabetIndexer after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0100
         * @tc.name      alphabetIndexerTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('alphabetIndexerTest001', 0, async function (done) {
            console.info('AlphabetIndexerTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('alphabetIndexer');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('AlphabetIndexer');
            console.info('AlphabetIndexerTest001 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0110
         * @tc.name      alphabetIndexerTest002
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('alphabetIndexerTest002', 0, async function (done) {
            console.info('AlphabetIndexerTest002 START');
            let strJson = getInspectorByKey('alphabetIndexer1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.info('AlphabetIndexerTest002 END');
            done();
        });
    });
}
exports["default"] = alphabetIndexerJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AppStorageJsunit.test.ets":
/*!*************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AppStorageJsunit.test.ets ***!
  \*************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function appStorageJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('appStorageTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/AppStorage',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get AppStorage state success " + JSON.stringify(pages));
                if (!("AppStorage" == pages.name)) {
                    console.info("get AppStorage state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push AppStorage page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push AppStorage page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("AppStorage after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0130
         * @tc.name      appStorageTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest001', 0, async function (done) {
            console.info('AppStorageTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('Button0_1');
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$type).assertEqual('Button');
            console.log(JSON.stringify(obj.$type));
            console.info("yr AppStorage0 type: " + JSON.stringify(obj.$type));
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('20');
            console.log("yr AppStorage0 label-'47'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorage0 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0140
         * @tc.name      appStorageTest002
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest002', 0, async function (done) {
            console.info('AppStorageTest002 START');
            let strJson = getInspectorByKey('Button0_2');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('20');
            console.log("yr AppStorage1 label-'47'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest002 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0150
         * @tc.name      appStorageTest003
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest003', 0, async function (done) {
            console.info('AppStorageTest003 START');
            let strJson = getInspectorByKey('Button0_3');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('50');
            console.log("yr AppStorage2 label-'50'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest003 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0160
         * @tc.name      appStorageTest004
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest004', 0, async function (done) {
            console.info('AppStorageTest004 START');
            let strJson = getInspectorByKey('Button0_4');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('47');
            console.log("yr AppStorage3 label-'47'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest004 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0170
         * @tc.name      appStorageTest005
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest005', 0, async function (done) {
            console.info('AppStorageTest005 START');
            let strJson = getInspectorByKey('Button0_5');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('true');
            console.log("yr AppStorage4 label-' '" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest005 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0180
         * @tc.name      appStorageTest006
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest006', 0, async function (done) {
            console.info('AppStorageTest006 START');
            let strJson = getInspectorByKey('Button0_6');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('PropB');
            console.log("yr AppStorage5 label-'PropA'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest006 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0190
         * @tc.name      appStorageTest007
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest007', 0, async function (done) {
            console.info('AppStorageTest007 START');
            let strJson = getInspectorByKey('Button0_7');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('20');
            console.log("yr AppStorage6 label-'47'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest007 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0100
         * @tc.name      appStorageTest008
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest008', 0, async function (done) {
            console.info('AppStorageTest008 START');
            let strJson = getInspectorByKey('Button0_8');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('true');
            console.log("yr AppStorage7 label-'20'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest008 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0210
         * @tc.name      appStorageTest009
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest008', 0, async function (done) {
            console.info('AppStorageTest009 START');
            let strJson = getInspectorByKey('Button0_9');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('1');
            console.log("yr AppStorage8 label-'1'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest009 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0220
         * @tc.name      appStorageTest010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest010', 0, async function (done) {
            console.info('AppStorageTest010 START');
            let strJson = getInspectorByKey('Button0_10');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.label).assertEqual('false');
            console.log("yr AppStorage9 label-' '" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest010 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0230
         * @tc.name      appStorageTest011
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('appStorageTest011', 0, async function (done) {
            console.info('AppStorageTest011 START');
            let strJson = getInspectorByKey('Button0_12');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.content).assertEqual('true');
            console.log("yr AppStorage11 label-'50'" + JSON.stringify(obj.$attrs.label));
            console.info('AppStorageTest011 END');
            done();
        });
    });
}
exports["default"] = appStorageJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridItem.test.ets":
/*!*****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridItem.test.ets ***!
  \*****************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function gridItemJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('gridItemTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/GridItem',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get GridItem state success " + JSON.stringify(pages));
                if (!("GridItem" == pages.name)) {
                    console.info("get GridItem state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push GridItem page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push GridItem page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("GridItem after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0340
         * @tc.name      gridItemTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('gridItemTest001', 0, async function (done) {
            console.info('gridItemTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('GridItem1');
            let obj = JSON.parse(strJson);
            console.info("属性值集合: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('GridItem');
            console.log('GridItem1‘s rowStart is ' + JSON.stringify(obj.$attrs.rowStart));
            console.log('GridItem1‘s rowEnd is ' + JSON.stringify(obj.$attrs.rowEnd));
            console.log('GridItem1‘s columnStart is ' + JSON.stringify(obj.$attrs.columnStart));
            console.log('GridItem1‘s columnEnd is ' + JSON.stringify(obj.$attrs.columnEnd));
            console.log('GridItem1‘s forceRebuild is ' + JSON.stringify(obj.$attrs.forceRebuild));
            await sleep(1);
            index_ets_1.expect(obj.$attrs.rowStart).assertEqual('1');
            index_ets_1.expect(obj.$attrs.rowEnd).assertEqual('4');
            index_ets_1.expect(obj.$attrs.columnStart).assertEqual('1');
            index_ets_1.expect(obj.$attrs.columnEnd).assertEqual('2');
            index_ets_1.expect(obj.$attrs.forceRebuild).assertEqual('false');
            console.info('gridItemTest001 END');
            done();
        });
    });
}
exports["default"] = gridItemJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsnuit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsnuit.test.ets ***!
  \*******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function gridJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('gridTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Grid',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Grid state success " + JSON.stringify(pages));
                if (!("Grid" == pages.name)) {
                    console.info("get Grid state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Grid page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Grid page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Grid after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0350
         * @tc.name      gridItemTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('gridTest001', 0, async function (done) {
            console.info('gridTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('Grid');
            let obj = JSON.parse(strJson);
            console.info("属性值集合: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Grid');
            console.log(JSON.stringify(obj.$attrs.columnsTemplate));
            console.log(JSON.stringify(obj.$attrs.rowsTemplate));
            console.log(JSON.stringify(obj.$attrs.rowsTemplate));
            console.log(JSON.stringify(obj.$attrs.columnsGap));
            console.log(JSON.stringify(obj.$attrs.rowsGap));
            await sleep(1);
            index_ets_1.expect(obj.$attrs.columnsTemplate).assertEqual('1fr 1fr 1fr 1fr 1fr');
            index_ets_1.expect(obj.$attrs.rowsTemplate).assertEqual('1fr 1fr 1fr 1fr 1fr');
            console.info('gridTest001 END');
            done();
        });
    });
}
exports["default"] = gridJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LinkJsunit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LinkJsunit.test.ets ***!
  \*******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function linkJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('linkTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Link',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Link state success " + JSON.stringify(pages));
                if (!("Link" == pages.name)) {
                    console.info("get Link state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Link page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Link page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Link after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0370
         * @tc.name      linkTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('linkTest001', 0, async function (done) {
            console.info('linkTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('Button');
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$type).assertEqual('Button');
            console.log(JSON.stringify(obj.$type));
            console.info("yr link0 type: " + JSON.stringify(obj.$type));
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.stateEffect).assertEqual('false');
            console.log("yr link0 stateEffect-'false'" + JSON.stringify(obj.$attrs.stateEffect));
            console.info('linkTest001 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0380
         * @tc.name      linkTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('linkTest002', 0, async function (done) {
            console.info('linkTest002 START');
            let strJson = getInspectorByKey('Button1');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.stateEffect).assertEqual('false');
            console.log("yr link1 stateEffect-'false'" + JSON.stringify(obj.$attrs.stateEffect));
            console.info('linkTest002 END');
            done();
        });
    });
}
exports["default"] = linkJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets":
/*!*************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets ***!
  \*************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
const AppStorageJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AppStorageJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AppStorageJsunit.test.ets"));
const LinkJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./LinkJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LinkJsunit.test.ets"));
const PropJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PropJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PropJsunit.test.ets"));
const AlphabetIndexerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AlphabetIndexerJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AlphabetIndexerJsunit.test.ets"));
const ListJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ListJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListJsunit.test.ets"));
const TabJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TabJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabJsunit.test.ets"));
const SwiperJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SwiperJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SwiperJsunit.test.ets"));
const PanelJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PanelJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanelJsunit.test.ets"));
const NavigatorJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./NavigatorJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/NavigatorJsunit.test.ets"));
const RowJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RowJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RowJsunit.test.ets"));
const ListItemJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ListItemJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListItemJsunit.test.ets"));
const GridItem_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridItem.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridItem.test.ets"));
const GridJsnuit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridJsnuit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsnuit.test.ets"));
const VideoJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./VideoJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/VideoJsunit.test.ets"));
function testsuite() {
    AlphabetIndexerJsunit_test_ets_1.default();
    RowJsunit_test_ets_1.default();
    GridJsnuit_test_ets_1.default();
    GridItem_test_ets_1.default();
    NavigatorJsunit_test_ets_1.default();
    PanelJsunit_test_ets_1.default();
    SwiperJsunit_test_ets_1.default();
    TabJsunit_test_ets_1.default();
    PropJsunit_test_ets_1.default();
    LinkJsunit_test_ets_1.default();
    AppStorageJsunit_test_ets_1.default();
    VideoJsunit_test_ets_1.default();
    ListItemJsunit_test_ets_1.default();
    ListJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListItemJsunit.test.ets":
/*!***********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListItemJsunit.test.ets ***!
  \***********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function listItemJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('listItemTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/ListItem',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get ListItem state success " + JSON.stringify(pages));
                if (!("ListItem" == pages.name)) {
                    console.info("get ListItem state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push ListItem page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ListItem page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("ListItem after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0390
         * @tc.name      listItemTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('listItemTest001', 0, async function (done) {
            console.info('++++++++++++++++ ListItem TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('listitem');
            console.log(JSON.stringify(strJson));
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$type).assertEqual('ListItem');
            console.log(JSON.stringify(obj.$attrs.type));
            console.log('ListItem1‘s sticky is ' + JSON.stringify(obj.$attrs.sticky));
            console.log('ListItem1‘s editable is ' + JSON.stringify(obj.$attrs.editable));
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.None');
            index_ets_1.expect(obj.$attrs.editable).assertEqual('true');
            console.info('++++++++++++++++ ListItem TestCase 1 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0400
         * @tc.name      listItemTest002
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('listItemTest002', 0, async function (done) {
            console.info('++++++++++++++++ ListItem TestCase 2 START ++++++++++++++++');
            let strJson = getInspectorByKey('listitem2');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('ListItem');
            console.log(JSON.stringify(obj.$attrs.type));
            console.log('ListItem2‘s sticky is ' + JSON.stringify(obj.$attrs.sticky));
            console.log('ListItem2‘s editable is ' + JSON.stringify(obj.$attrs.editable));
            await sleep(1);
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.Normal');
            index_ets_1.expect(obj.$attrs.editable).assertEqual('EditMode.Deletable');
            console.info('++++++++++++++++ ListItem TestCase 2 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0410
         * @tc.name      listItemTest003
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('listItemTest003', 0, async function (done) {
            console.info('++++++++++++++++ ListItem TestCase 3 START ++++++++++++++++');
            let strJson = getInspectorByKey('listitem3');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('ListItem');
            console.log(JSON.stringify(obj.$attrs.type));
            console.log('ListItem3‘s sticky is ' + JSON.stringify(obj.$attrs.sticky));
            console.log('ListItem3‘s editable is ' + JSON.stringify(obj.$attrs.editable));
            await sleep(1);
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.Opacity');
            index_ets_1.expect(obj.$attrs.editable).assertEqual('false');
            console.info('++++++++++++++++ ListItem TestCase 3 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0420
         * @tc.name      listItemTest004
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('listItemTest004', 0, async function (done) {
            console.info('++++++++++++++++ ListItem TestCase 4 START ++++++++++++++++');
            let strJson = getInspectorByKey('listitem4');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('ListItem');
            console.log(JSON.stringify(obj.$attrs.type));
            console.log('ListItem4‘s sticky is ' + JSON.stringify(obj.$attrs.sticky));
            console.log('ListItem4‘s editable is ' + JSON.stringify(obj.$attrs.editable));
            await sleep(1);
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.Opacity');
            index_ets_1.expect(obj.$attrs.editable).assertEqual('EditMode.Movable');
            console.info('++++++++++++++++ ListItem TestCase 4 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = listItemJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListJsunit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ListJsunit.test.ets ***!
  \*******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function listJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('listTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/List',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get List state success " + JSON.stringify(pages));
                if (!("List" == pages.name)) {
                    console.info("get List state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push List page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push List page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("List after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0410
         * @tc.name      listTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('listTest001', 0, async function (done) {
            console.info('++++++++++++++++ List TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('list');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('List');
            console.log('List‘s space is ' + JSON.stringify(obj.$attrs.space));
            console.log('List‘s initialIndex is ' + JSON.stringify(obj.$attrs.initialIndex));
            console.log('List‘s listDirection is ' + JSON.stringify(obj.$attrs.listDirection));
            console.log('List‘s divider is ' + JSON.stringify(obj.$attrs.divider));
            console.log('List‘s edgeEffect is ' + JSON.stringify(obj.$attrs.edgeEffect));
            index_ets_1.expect(obj.$attrs.initialIndex).assertEqual(0.000000.toFixed(6));
            index_ets_1.expect(obj.$attrs.listDirection).assertEqual('Axis.Vertical');
            index_ets_1.expect(obj.$attrs.edgeEffect).assertEqual('EdgeEffect.None');
            index_ets_1.expect(obj.$attrs.editMode).assertEqual("false");
            console.info('++++++++++++++++ List TestCase 1 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = listJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/NavigatorJsunit.test.ets":
/*!************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/NavigatorJsunit.test.ets ***!
  \************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function navigatorJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('navigatorTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Navigator',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Navigator state success " + JSON.stringify(pages));
                if (!("Navigator" == pages.name)) {
                    console.info("get Navigator state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Navigator page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Navigator page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Navigator after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0420
         * @tc.name      navigatorTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('navigatorTest001', 0, async function (done) {
            console.info('++++++++++++++++ Navigator TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('navigator');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            console.log('Navigator‘s target is ' + JSON.stringify(obj.$attrs.target));
            console.log('Navigator‘s type is ' + JSON.stringify(obj.$attrs.type));
            console.log('Navigator‘s active is ' + JSON.stringify(obj.$attrs.active));
            console.log('Navigator‘s params is ' + JSON.stringify(obj.$attrs.params));
            index_ets_1.expect(obj.$attrs.target).assertEqual('pages/index');
            index_ets_1.expect(obj.$attrs.type).assertEqual('NavigationType.Back');
            index_ets_1.expect(obj.$attrs.active).assertEqual('false');
            index_ets_1.expect(obj.$attrs.params).assertEqual(JSON.stringify({
                "data": 24
            }));
            console.info('++++++++++++++++ Navigator TestCase 1 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0430
         * @tc.name      navigatorTest002
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('navigatorTest002', 0, async function (done) {
            console.info('++++++++++++++++ Navigator TestCase 2 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('navigator2');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            console.log('Navigator‘s type is ' + JSON.stringify(obj.$attrs.type));
            index_ets_1.expect(obj.$attrs.type).assertEqual('NavigationType.Push');
            console.info('++++++++++++++++ Navigator TestCase 2 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0440
         * @tc.name      navigatorTest003
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('navigatorTest003', 0, async function (done) {
            console.info('++++++++++++++++ Navigator TestCase 3 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('navigator3');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            console.log('Navigator‘s type is ' + JSON.stringify(obj.$attrs.type));
            index_ets_1.expect(obj.$attrs.type).assertEqual('NavigationType.Replace');
            console.info('++++++++++++++++ Navigator TestCase 3 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = navigatorJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanelJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanelJsunit.test.ets ***!
  \********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function panelJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('panelTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Panel',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get Panel state success " + JSON.stringify(pages));
                if (!("Panel" == pages.name)) {
                    console.info("get Panel state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Panel page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Panel page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Panel after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0440
         * @tc.name      panelTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('panelTest001', 0, async function (done) {
            console.info('++++++++++++++++ Panel TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('panel');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Panel');
            console.log('Panel‘s type is ' + JSON.stringify(obj.$attrs.type));
            console.log('Panel‘s mode is ' + JSON.stringify(obj.$attrs.mode));
            console.log('Panel‘s dragBar is ' + JSON.stringify(obj.$attrs.dragBar));
            console.log('Panel‘s fullHeight is ' + JSON.stringify(obj.$attrs.fullHeight));
            console.log('Panel‘s halfHeight is ' + JSON.stringify(obj.$attrs.halfHeight));
            console.log('Panel‘s miniHeight is ' + JSON.stringify(obj.$attrs.miniHeight));
            index_ets_1.expect(obj.$attrs.type).assertEqual('PanelType.Foldable');
            index_ets_1.expect(obj.$attrs.mode).assertEqual('PanelMode.Half');
            index_ets_1.expect(obj.$attrs.dragBar).assertEqual('true');
            index_ets_1.expect(obj.$attrs.fullHeight).assertEqual('500.00vp');
            index_ets_1.expect(obj.$attrs.halfHeight).assertEqual('250.00vp');
            index_ets_1.expect(obj.$attrs.miniHeight).assertEqual('100.00vp');
            console.info('++++++++++++++++ Panel TestCase 1 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0450
         * @tc.name      panelTest002
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('panelTest002', 0, async function (done) {
            console.info('++++++++++++++++ Panel TestCase 2 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('panel2');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Panel');
            console.log('Panel‘s type is ' + JSON.stringify(obj.$attrs.type));
            console.log('Panel‘s mode is ' + JSON.stringify(obj.$attrs.mode));
            console.log('Panel‘s show is ' + JSON.stringify(obj.$attrs.show));
            index_ets_1.expect(obj.$attrs.type).assertEqual('PanelType.Minibar');
            index_ets_1.expect(obj.$attrs.mode).assertEqual('PanelMode.Mini');
            index_ets_1.expect(obj.$attrs.show).assertEqual('true');
            console.info('++++++++++++++++ Panel TestCase 2 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0460
         * @tc.name      panelTest003
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('panelTest003', 0, async function (done) {
            console.info('++++++++++++++++ Panel TestCase 3 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('panel3');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Panel');
            console.log('Panel‘s type is ' + JSON.stringify(obj.$attrs.type));
            console.log('Panel‘s mode is ' + JSON.stringify(obj.$attrs.mode));
            console.log('Panel‘s show is ' + JSON.stringify(obj.$attrs.show));
            index_ets_1.expect(obj.$attrs.type).assertEqual('PanelType.Temporary');
            index_ets_1.expect(obj.$attrs.mode).assertEqual('PanelMode.Full');
            index_ets_1.expect(obj.$attrs.show).assertEqual('false');
            console.info('++++++++++++++++ Panel TestCase 3 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = panelJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PropJsunit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PropJsunit.test.ets ***!
  \*******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function propJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('propTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Prop',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get Prop state success " + JSON.stringify(pages));
                if (!("Prop" == pages.name)) {
                    console.info("get Prop state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Prop page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Prop page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Prop after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0470
         * @tc.name      propTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('propTest001', 0, async function (done) {
            console.info('propTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('Text001');
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$type).assertEqual('Text');
            console.log(JSON.stringify(obj.$type));
            console.log("cd attrs.conten type1" + typeof ("10"));
            console.log("yr prop0 content-'10'" + obj.$attrs.content);
            index_ets_1.expect(obj.$attrs.content).assertEqual("10");
            console.info('propTest001 END');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0480
         * @tc.name      propTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('propTest002', 0, async function (done) {
            console.info('propTest002 START');
            let strJson = getInspectorByKey('Text002');
            let obj = JSON.parse(strJson);
            console.info("component obj is: " + JSON.stringify(obj));
            console.log("cd attrs.conten type" + typeof (obj.$attrs.content));
            console.log("cd attrs.conten type1 " + typeof ("10"));
            index_ets_1.expect(obj.$attrs.content).assertEqual("10");
            console.log("cd prop0 content-'10'" + JSON.stringify(obj.$attrs.content));
            console.info('propTest002 END');
            done();
        });
    });
}
exports["default"] = propJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RowJsunit.test.ets":
/*!******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RowJsunit.test.ets ***!
  \******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function rowJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('rowTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Row',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Row state success " + JSON.stringify(pages));
                if (!("Row" == pages.name)) {
                    console.info("get Row state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Row page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Row page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Row after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0490
         * @tc.name      rowTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('rowTest001', 0, async function (done) {
            console.info('++++++++++++++++ Row TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('row');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Row');
            console.log('Row‘s useAlign is ' + JSON.stringify(obj.$attrs.useAlign));
            console.log('Row‘s space is ' + JSON.stringify(obj.$attrs.space));
            console.log('Row‘s alignItems is ' + JSON.stringify(obj.$attrs.alignItems));
            index_ets_1.expect(obj.$attrs.alignItems).assertEqual('VerticalAlign.Top');
            console.info('++++++++++++++++ Row TestCase 1 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = rowJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SwiperJsunit.test.ets":
/*!*********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SwiperJsunit.test.ets ***!
  \*********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function swiperJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    //返回首页
    async function backToIndex() {
        let backToIndexPromise = new Promise((resolve, reject) => {
            console.info('afterEach backToIndexPromise ...');
            setTimeout(() => {
                _system_router_1.back({
                    uri: 'pages/index'
                });
                resolve();
            }, 500);
        });
        let clearPromise = new Promise((resolve, reject) => {
            console.info('afterEach clearPromise ...');
            setTimeout(() => {
                _system_router_1.clear();
                resolve();
            }, 500);
        });
        await backToIndexPromise.then(() => {
            return clearPromise;
        });
    }
    index_ets_1.describe('swiperTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Swiper',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get Swiper state success " + JSON.stringify(pages));
                if (!("Swiper" == pages.name)) {
                    console.info("get Swiper state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Swiper page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Swiper page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Swiper after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0500
         * @tc.name      swiperTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('swiperTest001', 0, async function (done) {
            console.info('++++++++++++++++ Swiper TestCase 1 START ++++++++++++++++');
            await sleep(1);
            let strJson = getInspectorByKey('swiper');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Swiper');
            console.log('Swiper‘s index is ' + JSON.stringify(obj.$attrs.index));
            console.log('Swiper‘s autoPlay is ' + JSON.stringify(obj.$attrs.autoPlay));
            console.log('Swiper‘s interval is ' + JSON.stringify(obj.$attrs.interval));
            console.log('Swiper‘s indicator is ' + JSON.stringify(obj.$attrs.indicator));
            console.log('Swiper‘s loop is ' + JSON.stringify(obj.$attrs.loop));
            console.log('Swiper‘s duration is ' + JSON.stringify(obj.$attrs.duration));
            console.log('Swiper‘s vertical is ' + JSON.stringify(obj.$attrs.vertical));
            console.log('Swiper‘s itemSpace is ' + JSON.stringify(obj.$attrs.itemSpace));
            console.log('Swiper‘s disableSwipe is ' + JSON.stringify(obj.$attrs.disableSwipe));
            index_ets_1.expect(obj.$attrs.index).assertEqual('1');
            index_ets_1.expect(obj.$attrs.autoPlay).assertEqual('true');
            index_ets_1.expect(obj.$attrs.interval).assertEqual('4000');
            index_ets_1.expect(obj.$attrs.indicator).assertEqual('true');
            index_ets_1.expect(obj.$attrs.loop).assertEqual('false');
            index_ets_1.expect(obj.$attrs.vertical).assertEqual('false');
            index_ets_1.expect(obj.$attrs.duration).assertEqual(1000.000000.toFixed(6));
            console.info('++++++++++++++++ Swiper TestCase 1 End +++++++++++++++++');
            done();
        });
    });
}
exports["default"] = swiperJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabJsunit.test.ets":
/*!******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabJsunit.test.ets ***!
  \******************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function tabJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('tabTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Tab',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Tab state success " + JSON.stringify(pages));
                if (!("Tab" == pages.name)) {
                    console.info("get Tab state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Tab page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Tab page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            await sleep(1);
            console.info("Tab after each called");
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0510
         * @tc.name      tabTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('tabTest001', 0, async function (done) {
            console.info('++++++++++++++++ Tab TestCase 1 START ++++++++++++++++');
            let strJson = getInspectorByKey('tab');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            console.log('obj.$attrs.scrollable' + typeof (obj.$attrs.scrollable));
            console.log('obj.$attrs.vertical' + typeof (obj.$attrs.vertical));
            index_ets_1.expect(obj.$type).assertEqual('Tabs');
            index_ets_1.expect(obj.$attrs.barPosition).assertEqual('BarPosition.Start');
            index_ets_1.expect(obj.$attrs.index).assertEqual('1');
            index_ets_1.expect(obj.$attrs.vertical).assertEqual('true');
            index_ets_1.expect(obj.$attrs.scrollable).assertTrue();
            index_ets_1.expect(obj.$attrs.barMode).assertEqual('BarMode.Fixed');
            index_ets_1.expect(obj.$attrs.barWidth).assertEqual(70.000000.toFixed(6));
            index_ets_1.expect(obj.$attrs.barHeight).assertEqual(150.000000.toFixed(6));
            console.info('++++++++++++++++ Tab TestCase 1 End ++++++++++++++++');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0530
         * @tc.name      tabTest003
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('tabTest003', 0, async function (done) {
            console.info('++++++++++++++++ Tab TestCase 3 START ++++++++++++++++');
            let strJson = getInspectorByKey('tab2');
            let obj = JSON.parse(strJson);
            console.info("get inspector value is: " + JSON.stringify(obj));
            console.log(JSON.stringify(obj.$type));
            index_ets_1.expect(obj.$type).assertEqual('Tabs');
            index_ets_1.expect(obj.$attrs.barPosition).assertEqual('BarPosition.End');
            index_ets_1.expect(obj.$attrs.barMode).assertEqual('BarMode.Scrollable');
            index_ets_1.expect(obj.$attrs.vertical).assertEqual('false');
            index_ets_1.expect(obj.$attrs.scrollable).assertFalse();
            console.info('++++++++++++++++ Tab TestCase 3 End ++++++++++++++++');
            done();
        });
    });
}
exports["default"] = tabJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/VideoJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/VideoJsunit.test.ets ***!
  \********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
// @ts-nocheck
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function videoJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('VideoAppInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/Video',
            };
            try {
                _system_router_1.clear();
                await sleep(1);
                let pages = _system_router_1.getState();
                console.info("get Video state success " + JSON.stringify(pages));
                if (!("Video" == pages.name)) {
                    console.info("get Video state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    console.info("push Video page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push Video page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        index_ets_1.afterEach(async function () {
            console.info("Video after each called");
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_0630
         * @tc.name      videoAppInfoTest001
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('videoAppInfoTest001', 0, async function (done) {
            console.info('videoAppInfoTest001 START');
            await sleep(1);
            let strJson = getInspectorByKey('video');
            let obj = JSON.parse(strJson);
            console.info("cd video component obj is: " + JSON.stringify(obj));
            console.log("cd video type" + JSON.stringify(obj.$type));
            console.log("cd video autoPlay" + JSON.stringify(obj.$attrs.autoPlay));
            console.log("cd video muted" + JSON.stringify(obj.$attrs.muted));
            console.log("cd video controls" + JSON.stringify(obj.$attrs.controls));
            console.log("cd video loop" + JSON.stringify(obj.$attrs.loop));
            console.log("cd video objectFit" + JSON.stringify(obj.$attrs.objectFit));
            console.info('videoAppInfoTest001 END');
            done();
        });
    });
}
exports["default"] = videoJsunit;


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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../../../../Desktop/xts/ace_ets_test/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map