/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/index.ets?entry":
/*!***********************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/index.ets?entry ***!
  \***********************************************************************************************************************/
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
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/List.test.ets"));
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

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/List.test.ets":
/*!********************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/List.test.ets ***!
  \********************************************************************************************************************/
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
const NavigationJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./NavigationJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/NavigationJsunit.test.ets"));
const ScrollerBarJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ScrollerBarJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ScrollerBarJsunit.test.ets"));
const StepperJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./StepperJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/StepperJsunit.test.ets"));
const TextAreaJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextAreaJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextAreaJsunit.test.ets"));
const TextInputJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextInputJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextInputJsunit.test.ets"));
const ToggleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ToggleJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets"));
function testsuite() {
    NavigationJsunit_test_ets_1.default();
    ScrollerBarJsunit_test_ets_1.default();
    StepperJsunit_test_ets_1.default();
    TextAreaJsunit_test_ets_1.default();
    TextInputJsunit_test_ets_1.default();
    ToggleJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/NavigationJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/NavigationJsunit.test.ets ***!
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
function navigationJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('navigationTest', function () {
        /**
        * run before testcase
        */
        index_ets_1.beforeEach(async function (done) {
            console.info('[navigationTest] before each called');
            let options = {
                uri: 'pages/Navigation',
            };
            try {
                let result = _system_router_1.push(options);
                console.info("push navigation page success " + JSON.stringify(result));
            }
            catch (err) {
                console.info("push navigation page error " + JSON.stringify(result));
            }
            await sleep(1);
            done();
        });
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[navigationTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1310
         * @tc.name      testNavigation010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testNavigation010', 0, async function (done) {
            console.info('testNavigation010 START');
            let strJson = getInspectorByKey('navigation1');
            let obj = JSON.parse(strJson);
            console.info("[navigation1] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigation');
            index_ets_1.expect(obj.$attrs.title).assertEqual('title');
            index_ets_1.expect(obj.$attrs.hideBackButton).assertFalse();
            index_ets_1.expect(obj.$attrs.hideTitleBar).assertFalse();
            console.info('testNavigation010 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1320
         * @tc.name      testNavigation020
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testNavigation020', 0, async function (done) {
            console.info('testNavigation020 START');
            let strJson = getInspectorByKey('navigation2');
            let obj = JSON.parse(strJson);
            console.info("[navigation2] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigation');
            index_ets_1.expect(obj.$attrs.hideTitleBar).assertTrue();
            index_ets_1.expect(obj.$attrs.hideBackButton).assertTrue();
            console.info('testNavigation020 End');
            done();
        });
    });
}
exports["default"] = navigationJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ScrollerBarJsunit.test.ets":
/*!*********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ScrollerBarJsunit.test.ets ***!
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
function scrollbarJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('scrollbarTest', function () {
        /**
        * run before testcase
        */
        index_ets_1.beforeEach(async function (done) {
            console.info('[scrollbarTest] before each called');
            let options = {
                uri: 'pages/ScrollBar',
            };
            try {
                let pages = _system_router_1.getState();
                console.info("[scrollbarTest] current page is: " + JSON.stringify(pages.name));
                if (!('ScrollBar' == pages.name)) {
                    let result = await _system_router_1.push(options);
                    console.info("push scrollBar page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.info("push scrollBar page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[scrollbarTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1340
         * @tc.name      testScrollbar010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar010', 0, async function (done) {
            console.info('testScrollbar010 START');
            let strJson = getInspectorByKey('scrollbar1');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar1] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Vertical');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Auto');
            console.info('testScrollbar010 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1350
         * @tc.name      testScrollbar020
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar020', 0, async function (done) {
            console.info('testScrollbar020 START');
            let strJson = getInspectorByKey('scrollbar2');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar2] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Vertical');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.On');
            console.info('testScrollbar020 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1360
         * @tc.name      testScrollbar030
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar030', 0, async function (done) {
            console.info('testScrollbar030 START');
            let strJson = getInspectorByKey('scrollbar3');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar3] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Vertical');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Off');
            console.info('testScrollbar030 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1370
         * @tc.name      testScrollbar040
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar040', 0, async function (done) {
            console.info('testScrollbar040 START');
            let strJson = getInspectorByKey('scrollbar4');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar4] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Horizontal');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Auto');
            console.info('testScrollbar040 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1380
         * @tc.name      testScrollbar050
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar050', 0, async function (done) {
            console.info('testScrollbar050 START');
            let strJson = getInspectorByKey('scrollbar5');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar5] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Horizontal');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.On');
            console.info('testScrollbar050 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1390
         * @tc.name      testScrollbar060
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testScrollbar060', 0, async function (done) {
            console.info('testScrollbar060 START');
            let strJson = getInspectorByKey('scrollbar6');
            let obj = JSON.parse(strJson);
            console.info("[scrollbar6] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ScrollBar');
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Horizontal');
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Off');
            console.info('testScrollbar060 End');
            done();
        });
    });
}
exports["default"] = scrollbarJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/StepperJsunit.test.ets":
/*!*****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/StepperJsunit.test.ets ***!
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
function stepperJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('stepperTest', function () {
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[stepperTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1400
         * @tc.name      testStepper010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testStepper010', 0, async function (done) {
            console.info('testStepper010 START');
            let options = {
                uri: 'pages/Stepper',
            };
            try {
                let result = await _system_router_1.push(options);
                console.info("push stepper page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("push stepper page error " + JSON.stringify(result));
            }
            await sleep(1);
            let strJson = getInspectorByKey('stepper');
            let obj = JSON.parse(strJson);
            console.info("[stepper] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Stepper');
            index_ets_1.expect(obj.$attrs.index).assertEqual('0');
            console.info('testStepper010 End');
            done();
        });
    });
}
exports["default"] = stepperJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextAreaJsunit.test.ets":
/*!******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextAreaJsunit.test.ets ***!
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
function textAreaJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('textAreaTest', function () {
        /**
        * run before testcase
        */
        index_ets_1.beforeEach(async function (done) {
            console.info('[textAreaTest] before each called');
            let options = {
                uri: 'pages/TextArea',
            };
            try {
                let result = await _system_router_1.push(options);
                console.info("push TextArea page success " + JSON.stringify(result));
            }
            catch (err) {
                console.info("push TextArea page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[textAreaTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1410
         * @tc.name      testTextArea010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextArea010', 0, async function (done) {
            console.info('testTextArea010 START');
            let strJson = getInspectorByKey('textArea1');
            let obj = JSON.parse(strJson);
            console.info("[textArea1] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('TextArea');
            index_ets_1.expect(obj.$attrs.placeholderColor).assertEqual('#FFC0C0C0');
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            index_ets_1.expect(obj.$attrs.caretColor).assertEqual('#FF000000');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('40.00fp');
            index_ets_1.expect(obj.$attrs.fontWeight).assertEqual('FontWeight.Bold');
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFF0000');
            index_ets_1.expect(obj.$attrs.fontFamily).assertEqual('cursive');
            index_ets_1.expect(obj.$attrs.fontStyle).assertEqual('FontStyle.Italic');
            console.info('testTextArea010 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1420
         * @tc.name      testTextArea020
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextArea020', 0, async function (done) {
            console.info('testTextArea020 START');
            let strJson = getInspectorByKey('textArea2');
            let obj = JSON.parse(strJson);
            console.info("[textArea2] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('TextArea');
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Center');
            console.info('testTextArea020 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1430
         * @tc.name      testTextArea030
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextArea030', 0, async function (done) {
            console.info('testTextArea030 START');
            let strJson = getInspectorByKey('textArea3');
            let obj = JSON.parse(strJson);
            console.info("[textArea3] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('TextArea');
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.End');
            console.info('testTextArea030 End');
            done();
        });
    });
}
exports["default"] = textAreaJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextInputJsunit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/TextInputJsunit.test.ets ***!
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
function textInputJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('textInputTest', function () {
        /**
        * run before testcase
        */
        index_ets_1.beforeEach(async function (done) {
            console.info('[textInputTest] before each called');
            let options = {
                uri: 'pages/TextInput',
            };
            try {
                let pages = _system_router_1.getState();
                console.info("[textInputTest] current page is: " + JSON.stringify(pages.name));
                if (!('TextInput' == pages.name)) {
                    let result = await _system_router_1.push(options);
                    console.info("push TextInput page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.info("push TextInput page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[textInputTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1440
         * @tc.name      testTextInput010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput010', 0, async function (done) {
            console.info('testTextInput010 START');
            let strJson = getInspectorByKey('textInput1');
            let obj = JSON.parse(strJson);
            console.info("[textInput1] get inspector value is: " + JSON.stringify(obj));
            console.info("[textInput1] get inspector value is: " + JSON.stringify(obj.$attrs.type));
            console.info("[textInput1] get inspector value is: " + JSON.stringify(obj.$attrs.enterKeyType));
            console.info("[textInput1] get inspector value is: " + obj.$attrs.placeholderFont);
            console.info("[textInput1] get inspector value is: " + obj.$attrs.placeholderFont.size);
            console.info("[textInput1] get inspector value is: " + JSON.stringify(obj.$attrs.fontSize));
            console.info("[textInput1] get inspector value is: " + JSON.stringify(obj.$attrs.height));
            index_ets_1.expect(obj.$type).assertEqual('TextInput');
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Normal');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Go');
            index_ets_1.expect(obj.$attrs.caretColor).assertEqual('#FF000000');
            index_ets_1.expect(obj.$attrs.placeholderColor).assertEqual('#FFC0C0C0');
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFF0000');
            index_ets_1.expect(obj.$attrs.fontWeight).assertEqual('FontWeight.Bold');
            index_ets_1.expect(obj.$attrs.fontFamily).assertEqual('cursive');
            index_ets_1.expect(obj.$attrs.fontStyle).assertEqual('FontStyle.Italic');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('40.00fp');
            index_ets_1.expect(obj.$attrs.height).assertEqual('60.00vp');
            index_ets_1.expect(obj.$attrs.placeholderFont).assertContain('FontStyle.Normal');
            console.info('testTextInput010 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1450
         * @tc.name      testTextInput020
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput020', 0, async function (done) {
            console.info('testTextInput020 START');
            let strJson = getInspectorByKey('textInput2');
            let obj = JSON.parse(strJson);
            console.info("[textInput2] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Normal');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Search');
            console.info('testTextInput020 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1460
         * @tc.name      testTextInput030
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput030', 0, async function (done) {
            console.info('testTextInput030 START');
            let strJson = getInspectorByKey('textInput3');
            let obj = JSON.parse(strJson);
            console.info("[textInput3] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Normal');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Send');
            console.info('testTextInput030 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1470
         * @tc.name      testTextInput040
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput040', 0, async function (done) {
            console.info('testTextInput040 START');
            let strJson = getInspectorByKey('textInput4');
            let obj = JSON.parse(strJson);
            console.info("[textInput4] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Normal');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Next');
            console.info('testTextInput040 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1480
         * @tc.name      testTextInput050
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput050', 0, async function (done) {
            console.info('testTextInput050 START');
            let strJson = getInspectorByKey('textInput5');
            let obj = JSON.parse(strJson);
            console.info("[textInput5] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Normal');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Done');
            console.info('testTextInput050 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1490
         * @tc.name      testTextInput060
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput060', 0, async function (done) {
            console.info('testTextInput060 START');
            let strJson = getInspectorByKey('textInput6');
            let obj = JSON.parse(strJson);
            console.info("[textInput6] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Password');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Go');
            console.info('testTextInput060 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1500
         * @tc.name      testTextInput070
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput070', 0, async function (done) {
            console.info('testTextInput070 START');
            let strJson = getInspectorByKey('textInput7');
            let obj = JSON.parse(strJson);
            console.info("[textInput7] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Password');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Search');
            console.info('testTextInput070 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1510
         * @tc.name      testTextInput080
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput080', 0, async function (done) {
            console.info('testTextInput080 START');
            let strJson = getInspectorByKey('textInput8');
            let obj = JSON.parse(strJson);
            console.info("[textInput8] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Password');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Send');
            console.info('testTextInput080 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1520
         * @tc.name      testTextInput090
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput090', 0, async function (done) {
            console.info('testTextInput090 START');
            let strJson = getInspectorByKey('textInput9');
            let obj = JSON.parse(strJson);
            console.info("[textInput9] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Password');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Next');
            console.info('testTextInput090 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1530
         * @tc.name      testTextInput100
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput100', 0, async function (done) {
            console.info('testTextInput100 START');
            let strJson = getInspectorByKey('textInput10');
            let obj = JSON.parse(strJson);
            console.info("[textInput10] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Password');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Done');
            console.info('testTextInput100 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1540
         * @tc.name      testTextInput110
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput110', 0, async function (done) {
            console.info('testTextInput110 START');
            let strJson = getInspectorByKey('textInput11');
            let obj = JSON.parse(strJson);
            console.info("[textInput11] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Email');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Go');
            console.info('testTextInput110 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1550
         * @tc.name      testTextInput120
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput120', 0, async function (done) {
            console.info('testTextInput120 START');
            let strJson = getInspectorByKey('textInput12');
            let obj = JSON.parse(strJson);
            console.info("[textInput12] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Email');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Search');
            console.info('testTextInput120 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1560
         * @tc.name      testTextInput130
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput130', 0, async function (done) {
            console.info('testTextInput130 START');
            let strJson = getInspectorByKey('textInput13');
            let obj = JSON.parse(strJson);
            console.info("[textInput13] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Email');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Send');
            console.info('testTextInput130 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1570
         * @tc.name      testTextInput140
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput140', 0, async function (done) {
            console.info('testTextInput140 START');
            let strJson = getInspectorByKey('textInput14');
            let obj = JSON.parse(strJson);
            console.info("[textInput14] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Email');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Next');
            console.info('testTextInput140 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1580
         * @tc.name      testTextInput150
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput150', 0, async function (done) {
            console.info('testTextInput150 START');
            let strJson = getInspectorByKey('textInput15');
            let obj = JSON.parse(strJson);
            console.info("[textInput15] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Email');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Done');
            console.info('testTextInput150 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1590
         * @tc.name      testTextInput160
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput160', 0, async function (done) {
            console.info('testTextInput160 START');
            let strJson = getInspectorByKey('textInput16');
            let obj = JSON.parse(strJson);
            console.info("[textInput16] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Number');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Go');
            console.info('testTextInput160 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1600
         * @tc.name      testTextInput170
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput170', 0, async function (done) {
            console.info('testTextInput170 START');
            let strJson = getInspectorByKey('textInput17');
            let obj = JSON.parse(strJson);
            console.info("[textInput17] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Number');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Search');
            console.info('testTextInput170 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1610
         * @tc.name      testTextInput180
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput180', 0, async function (done) {
            console.info('testTextInput180 START');
            let strJson = getInspectorByKey('textInput18');
            let obj = JSON.parse(strJson);
            console.info("[textInput18] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Number');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Send');
            console.info('testTextInput180 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1620
         * @tc.name      testTextInput190
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput190', 0, async function (done) {
            console.info('testTextInput190 START');
            let strJson = getInspectorByKey('textInput19');
            let obj = JSON.parse(strJson);
            console.info("[textInput19] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Number');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Next');
            console.info('testTextInput190 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1630
         * @tc.name      testTextInput190
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testTextInput200', 0, async function (done) {
            console.info('testTextInput200 START');
            let strJson = getInspectorByKey('textInput20');
            let obj = JSON.parse(strJson);
            console.info("[textInput20] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('InputType.Number');
            index_ets_1.expect(obj.$attrs.enterKeyType).assertEqual('EnterKeyType.Done');
            console.info('testTextInput200 End');
            done();
        });
    });
}
exports["default"] = textInputJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets":
/*!****************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets ***!
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
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
function toggleJsunit() {
    function sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time * 1000);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    index_ets_1.describe('toggleTest', function () {
        /**
        * run before testcase
        */
        index_ets_1.beforeEach(async function (done) {
            console.info('[toggleTest] before each called');
            let options = {
                uri: 'pages/Toggle',
            };
            try {
                let pages = _system_router_1.getState();
                console.info("[toggleTest] current page is: " + JSON.stringify(pages.name));
                if (!('Toggle' == pages.name)) {
                    let result = await _system_router_1.push(options);
                    console.info("push toggle page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.info("push toggle page page error " + JSON.stringify(result));
            }
            await sleep(2);
            done();
        });
        /**
        * run after testcase
        */
        index_ets_1.afterEach(async function () {
            console.info('[toggleTest] after each called');
            _system_router_1.clear();
            await sleep(1);
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1640
         * @tc.name      testToggle010
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testToggle010', 0, async function (done) {
            console.info('testToggle010 START');
            let strJson = getInspectorByKey('toggle1');
            let obj = JSON.parse(strJson);
            console.info("[toggle1] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Toggle');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ToggleType.Switch');
            index_ets_1.expect(obj.$attrs.isOn).assertEqual('false');
            index_ets_1.expect(obj.$attrs.selectedColor).assertEqual('#FFFF0000');
            index_ets_1.expect(obj.$attrs.switchPointColor).assertEqual('#FF808080');
            console.info('testToggle010 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1650
         * @tc.name      testToggle020
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testToggle020', 0, async function (done) {
            console.info('testToggle020 START');
            let strJson = getInspectorByKey('toggle2');
            let obj = JSON.parse(strJson);
            console.info("[toggle2] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Toggle');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ToggleType.Switch');
            index_ets_1.expect(obj.$attrs.isOn).assertEqual('true');
            console.info('testToggle020 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1680
         * @tc.name      testToggle050
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testToggle050', 0, async function (done) {
            console.info('testToggle050 START');
            let strJson = getInspectorByKey('toggle5');
            let obj = JSON.parse(strJson);
            console.info("[toggle5] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Toggle');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ToggleType.Button');
            index_ets_1.expect(obj.$attrs.isOn).assertEqual('false');
            console.info('testToggle050 End');
            done();
        });
        /**
         * @tc.number    SUB_ACE_BASIC_ETS_API_1690
         * @tc.name      testToggle060
         * @tc.desc      aceEtsTest
         */
        index_ets_1.it('testToggle060', 0, async function (done) {
            console.info('testToggle060 START');
            let strJson = getInspectorByKey('toggle6');
            console.info('sendEventByKey result is ' + sendEventByKey('toggle6', 10, ''));
            let obj = JSON.parse(strJson);
            console.info("[toggle6] get inspector value is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Toggle');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ToggleType.Button');
            index_ets_1.expect(obj.$attrs.isOn).assertEqual('true');
            console.info('testToggle060 End');
            done();
        });
    });
}
exports["default"] = toggleJsunit;


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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../../../../Desktop/xts/ace_ets_third_test_ets/entry/src/main/ets/MainAbility/pages/index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map