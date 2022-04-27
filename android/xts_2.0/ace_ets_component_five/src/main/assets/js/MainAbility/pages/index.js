/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry":
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\pages\index.ets?entry ***!
  \***************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
var _system_file_1  = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets"));
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
        Text.create('ACE ETS TEST');
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new MyComponent("1", undefined, {}));


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\BackgroundAndSizeSettingJsunit.test.ets":
/*!**************************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\BackgroundAndSizeSettingJsunit.test.ets ***!
  \**************************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function backgroundAndSizeSettingJsunit() {
    index_ets_1.describe('backgroundAndSizeSettingTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("backgroundAndSizeSetting beforeEach start");
            let options = {
                uri: 'pages/backgroundAndSizeSetting',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get backgroundAndSizeSetting state success " + JSON.stringify(pages));
                if (!("backgroundAndSizeSetting" == pages.name)) {
                    console.info("get backgroundAndSizeSetting state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push backgroundAndSizeSetting page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push backgroundAndSizeSetting page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("backgroundAndSizeSetting after each called");
        });
        index_ets_1.it('testBackgroundAndSizeSetting_0100', 0, async function (done) {
            console.info('testBackgroundAndSizeSetting_0100 START');
            await Utils_ets_1.default.sleep(4000);
            let strJson = getInspectorByKey('fontColor');
            console.info("testBackgroundAndSizeSetting_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testBackgroundAndSizeSetting_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual("#FFFF0000");
            console.info('testBackgroundAndSizeSetting_0100 END');
            done();
        });
        index_ets_1.it('testBackgroundAndSizeSetting_0300', 0, async function (done) {
            console.info('testBackgroundAndSizeSetting_0300 START');
            await Utils_ets_1.default.sleep(4000);
            let strJson = getInspectorByKey('backgroundColor');
            console.info("testBackgroundAndSizeSetting_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testBackgroundAndSizeSetting_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderWidth).assertEqual("1.00vp");
            console.info('testBackgroundAndSizeSetting_0300 END');
            done();
        });
        index_ets_1.it('testBackgroundAndSizeSetting_0400', 0, async function (done) {
            console.info('[testBackgroundAndSizeSetting_0400] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('centerRow');
            console.info("[testBackgroundAndSizeSetting_0400] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.width).assertEqual('80.00vp');
            index_ets_1.expect(obj.$attrs.height).assertEqual('80.00vp');
            index_ets_1.expect(obj.$attrs.padding).assertEqual('20.00vp');
            index_ets_1.expect(obj.$attrs.margin).assertEqual('20.00vp');
            console.info('[testBackgroundAndSizeSetting_0400] END');
            done();
        });
        index_ets_1.it('testBackgroundAndSizeSetting_0500', 0, async function (done) {
            console.info('[testBackgroundAndSizeSetting_0500] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('innerRow');
            console.info("[testBackgroundAndSizeSetting_0500] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.width).assertEqual('100.00%');
            index_ets_1.expect(obj.$attrs.height).assertEqual('100.00%');
            console.info('[testBackgroundAndSizeSetting_0500] END');
            done();
        });
        index_ets_1.it('testBackgroundAndSizeSetting_0800', 0, async function (done) {
            console.info('[testBackgroundAndSizeSetting_0800] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('layoutWeight1');
            console.info("[testBackgroundAndSizeSetting_0800] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.layoutWeight).assertEqual(1);
            console.info('[testBackgroundAndSizeSetting_0800] END');
            done();
        });
    });
}
exports["default"] = backgroundAndSizeSettingJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\BorderJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\BorderJsunit.test.ets ***!
  \********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function borderJsunit() {
    index_ets_1.describe('borderTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("border beforeEach start");
            let options = {
                uri: 'pages/border',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get border state success " + JSON.stringify(pages));
                if (!("border" == pages.name)) {
                    console.info("get border state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push border page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push border page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("border after each called");
        });
        index_ets_1.it('testBorder_0100', 0, async function (done) {
            console.info('testBorder_0100 START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('borderWidth');
            console.info("testBorder_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testBorder_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderWidth).assertEqual("5.00vp");
            console.info('testBorder_0100 END');
            done();
        });
        index_ets_1.it('testBorder_0200', 0, async function (done) {
            console.info('testBorder_0200 START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('borderColor');
            console.info("testBorder_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testBorder_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderColor).assertEqual("#FF317AF7");
            console.info('testBorder_0200 END');
            done();
        });
    });
}
exports["default"] = borderJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\CheckboxGroupJsunit.test.ets":
/*!***************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\CheckboxGroupJsunit.test.ets ***!
  \***************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function checkboxGroupJsunit() {
    index_ets_1.describe('checkboxGroupTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/checkboxGroup',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get checkboxGroup state success " + JSON.stringify(pages));
                if (!("checkboxGroup" == pages.name)) {
                    console.info("get checkboxGroup state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push checkboxGroup page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push checkboxGroup page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("checkboxGroup after each called");
        });
        index_ets_1.it('testCheckboxGroup_100', 0, async function (done) {
            console.info('[testCheckboxGroup_100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.opacity).assertEqual(1);
            console.info('testCheckboxGroup_100 END');
            done();
        });
        index_ets_1.it('testCheckboxGroup_200', 0, async function (done) {
            console.info('[testCheckboxGroup_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.alignSelf).assertEqual("ItemAlign.Auto");
            console.info('testCheckboxGroup_200 END');
            done();
        });
        index_ets_1.it('testCheckboxGroup_300', 0, async function (done) {
            console.info('[testCheckboxGroup_300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollable).assertEqual(false);
            console.info('testCheckboxGroup_300 END');
            done();
        });
        index_ets_1.it('testCheckboxGroup_400', 0, async function (done) {
            console.info('[testCheckboxGroup_400] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderRadius).assertEqual("0.0vp");
            console.info('testCheckboxGroup_400 END');
            done();
        });
        index_ets_1.it('testCheckboxGroup_500', 0, async function (done) {
            console.info('[testCheckboxGroup_500] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.flexBasis).assertEqual("auto");
            console.info('testCheckboxGroup_500 END');
            done();
        });
        index_ets_1.it('testCheckboxGroup_600', 0, async function (done) {
            console.info('[testCheckboxGroup_600] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CheckboxGroup');
            let obj = JSON.parse(strJson);
            console.info("testCheckboxGroup_600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderStyle).assertEqual("BorderStyle.Solid");
            console.info('testCheckboxGroup_600 END');
            done();
        });
    });
}
exports["default"] = checkboxGroupJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\CheckboxJsunit.test.ets":
/*!**********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\CheckboxJsunit.test.ets ***!
  \**********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function checkboxJsunit() {
    index_ets_1.describe('checkboxTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/checkbox',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get checkbox state success " + JSON.stringify(pages));
                if (!("checkbox" == pages.name)) {
                    console.info("get checkbox state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push checkbox page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push checkbox page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("checkbox after each called");
        });
        index_ets_1.it('testCheckbox_100', 0, async function (done) {
            console.info('[testCheckbox_100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Checkbox1');
            let obj = JSON.parse(strJson);
            console.info("testCheckbox_100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.grayscale).assertEqual(0);
            console.info('testCheckbox_100 END');
            done();
        });
        index_ets_1.it('testCheckbox_200', 0, async function (done) {
            console.info('[testCheckbox_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Checkbox1');
            let obj = JSON.parse(strJson);
            console.info("testCheckbox_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.opacity).assertEqual(1);
            console.info('testCheckbox_200 END');
            done();
        });
        index_ets_1.it('testCheckbox_300', 0, async function (done) {
            console.info('[testCheckbox_300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Checkbox1');
            let obj = JSON.parse(strJson);
            console.info("testCheckbox_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderRadius).assertEqual("0.0vp");
            console.info('testCheckbox_300 END');
            done();
        });
        index_ets_1.it('testCheckbox_400', 0, async function (done) {
            console.info('[testCheckbox_400] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Checkbox1');
            let obj = JSON.parse(strJson);
            console.info("testCheckbox_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.visibility).assertEqual("Visibility.Visible");
            console.info('testCheckbox_400 END');
            done();
        });
    });
}
exports["default"] = checkboxJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\ColorGradientJsunit.test.ets":
/*!***************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\ColorGradientJsunit.test.ets ***!
  \***************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function colorGradientJsunit() {
    index_ets_1.describe('borderTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("colorGradient beforeEach start");
            let options = {
                uri: 'pages/colorGradient',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get colorGradient state pages:" + JSON.stringify(pages));
                if (!("colorGradient" == pages.name)) {
                    console.info("get colorGradient state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push colorGradient page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push colorGradient page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("colorGradient after each called");
        });
        index_ets_1.it('testColorGradient001', 0, async function (done) {
            console.info('[testColorGradient001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('linearGradient');
            let obj = JSON.parse(strJson);
            console.info("[testColorGradient001] component obj is: " + JSON.stringify(obj.$attrs.linearGradient));
            index_ets_1.expect(obj.$attrs.linearGradient.angle).assertEqual('90.00px');
            index_ets_1.expect(obj.$attrs.linearGradient.direction).assertEqual('GradientDirection.Left');
            index_ets_1.expect(obj.$attrs.linearGradient.repeating).assertEqual('true');
            console.info('[testColorGradient001] END');
            done();
        });
        index_ets_1.it('testColorGradient003', 0, async function (done) {
            await Utils_ets_1.default.sleep(1000);
            console.info('[testColorGradient003] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('sweepGradient');
            let obj = JSON.parse(strJson);
            console.info("[testColorGradient003] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.sweepGradient.end).assertEqual('359.00px');
            index_ets_1.expect(obj.$attrs.sweepGradient.start).assertEqual('0.00px');
            index_ets_1.expect(obj.$attrs.sweepGradient.repeating).assertEqual('true');
            console.info('[testColorGradient003] END');
            done();
        });
        index_ets_1.it('testColorGradient005', 0, async function (done) {
            await Utils_ets_1.default.sleep(1000);
            console.info('[testColorGradient005] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('radialGradient');
            let obj = JSON.parse(strJson);
            console.info("[testColorGradient005] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.radialGradient.radius).assertEqual('60.00vp');
            index_ets_1.expect(obj.$attrs.radialGradient.center[0]).assertEqual('50.00vp');
            index_ets_1.expect(obj.$attrs.radialGradient.center[1]).assertEqual('50.00vp');
            index_ets_1.expect(obj.$attrs.radialGradient.repeating).assertEqual('true');
            console.info('[testColorGradient005] END');
            done();
        });
    });
}
exports["default"] = colorGradientJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EdgeEffectJsunit.test.ets":
/*!************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\EdgeEffectJsunit.test.ets ***!
  \************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function edgeEffectJsunit() {
    index_ets_1.describe('edgeEffectTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/edgeEffect',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get edgeEffect state success " + JSON.stringify(pages));
                if (!("edgeEffect" == pages.name)) {
                    console.info("get edgeEffect state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push edgeEffect page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push edgeEffect page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("edgeEffect after each called");
        });
        index_ets_1.it('edgeEffectTest_0100', 0, async function (done) {
            console.info('edgeEffectTest_0100 START');
            let strJson = getInspectorByKey('list');
            console.info("edgeEffectTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("edgeEffectTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.edgeEffect).assertEqual("EdgeEffect.None");
            done();
        });
    });
}
exports["default"] = edgeEffectJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusHorizontalAlignJsunit.test.ets":
/*!**********************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\EnmusHorizontalAlignJsunit.test.ets ***!
  \**********************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enumsVerticalAlignJsunit() {
    index_ets_1.describe('enumsHorizontalAlign', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================enumsHorizontalAlign test beforeEach called===================');
            let options = {
                uri: 'pages/enumsHorizontalAlign',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info('beforeEach get enumsHorizontalAlign state pages:' + JSON.stringify(pages));
                if (!('enumsFlexItem' == pages.name)) {
                    console.info('beforeEach get enumsHorizontalAlign state pages.name:' + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push enumsHorizontalAlign page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push enumsHorizontalAlign page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================enumsFlexItemTest test after each called===================');
        });
        index_ets_1.it('enumsHorizontalAlignTest_0100', 0, async function (done) {
            console.info('enumsHorizontalAlignTest_0100 START');
            await Utils_1.default.sleep(1500);
            let strJson = getInspectorByKey('HorizontalAlign');
            console.info("enumsHorizontalAlignTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("enumsHorizontalAlignTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.alignItems).assertEqual('HorizontalAlign.Center');
            console.info('enumsHorizontalAlignTest_0100 END');
            done();
        });
    });
}
exports["default"] = enumsVerticalAlignJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusImageJsunit.test.ets":
/*!************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\EnmusImageJsunit.test.ets ***!
  \************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enumsImageJsunit() {
    index_ets_1.describe('enumsImage', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================enumsImage test beforeEach called===================');
            let options = {
                uri: 'pages/enumsImage',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info('beforeEach get enumsImage state pages:' + JSON.stringify(pages));
                if (!('enumsFlexItem' == pages.name)) {
                    console.info('beforeEach get enumsItemAlign state pages.name:' + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push enumsImageTest page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push enumsImageTest page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================enumsImageTest test after each called===================');
        });
        index_ets_1.it('enumsImageTest_0100', 0, async function (done) {
            console.info('enumsImageTest_0100 START');
            let strJson = getInspectorByKey('Image');
            console.info("enumsImageTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("enumsImageTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.backgroundImageSize).assertEqual('ImageSize.Auto');
            console.info('enumsImageTest_0100 END');
            done();
        });
        index_ets_1.it('enumsImageTest_0200', 0, async function (done) {
            console.info('enumsImageTest_0200 START');
            let strJson = getInspectorByKey('Image');
            console.info("enumsImageTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("enumsImageTest_0200 component obj is: " + JSON.stringify(obj));
            let obj1 = obj.$attrs.backgroundImage.split(', ');
            console.info("enumsImageTest_0200 component obj1 is: " + obj1[1]);
            index_ets_1.expect(obj1[1]).assertEqual('ImageRepeat.Y');
            console.info('enumsImageTest_0200 END');
            done();
        });
    });
}
exports["default"] = enumsImageJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets":
/*!************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\List.test.ets ***!
  \************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
/**
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
const CheckboxJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CheckboxJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\CheckboxJsunit.test.ets"));
const OhosMatrix4Jsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./OhosMatrix4Jsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\OhosMatrix4Jsunit.test.ets"));
const SelectJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SelectJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\SelectJsunit.test.ets"));
const EnmusImageJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EnmusImageJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusImageJsunit.test.ets"));
const CheckboxGroupJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CheckboxGroupJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\CheckboxGroupJsunit.test.ets"));
const SliderJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SliderJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\SliderJsunit.test.ets"));
const EdgeEffectJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EdgeEffectJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EdgeEffectJsunit.test.ets"));
const TransFormJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TransFormJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\TransFormJsunit.test.ets"));
const VisibilityJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./VisibilityJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\VisibilityJsunit.test.ets"));
const PositionSettingJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PositionSettingJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\PositionSettingJsunit.test.ets"));
const ShapeClippingJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ShapeClippingJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\ShapeClippingJsunit.test.ets"));
const BackgroundAndSizeSettingJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BackgroundAndSizeSettingJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\BackgroundAndSizeSettingJsunit.test.ets"));
const BorderJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BorderJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\BorderJsunit.test.ets"));
const ColorGradientJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ColorGradientJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\ColorGradientJsunit.test.ets"));
const EnmusHorizontalAlignJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EnmusHorizontalAlignJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusHorizontalAlignJsunit.test.ets"));
function testsuite() {
    CheckboxJsunit_test_ets_1.default();
    SelectJsunit_test_ets_1.default();
    EnmusImageJsunit_test_ets_1.default();
    OhosMatrix4Jsunit_test_ets_1.default();
    SliderJsunit_test_ets_1.default();
    EdgeEffectJsunit_test_ets_1.default();
    CheckboxGroupJsunit_test_ets_1.default();
    TransFormJsunit_test_ets_1.default();
    BorderJsunit_test_ets_1.default();
    ColorGradientJsunit_test_ets_1.default();
    VisibilityJsunit_test_ets_1.default();
    PositionSettingJsunit_test_ets_1.default();
    BackgroundAndSizeSettingJsunit_test_ets_1.default();
    ShapeClippingJsunit_test_ets_1.default();
    EnmusHorizontalAlignJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\OhosMatrix4Jsunit.test.ets":
/*!*************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\OhosMatrix4Jsunit.test.ets ***!
  \*************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function ohosMatrix4Jsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("ohosMatrix4 beforeEach start");
            let options = {
                uri: 'pages/ohosMatrix4',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get ohosMatrix4 state pages:" + JSON.stringify(pages));
                if (!("ohosMatrix4 " == pages.name)) {
                    console.info("get ohosMatrix4  state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push ohosMatrix4  page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ohosMatrix4  page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            _system_router_1.clear();
            await Utils_1.default.sleep(2000);
            console.info("OhosMatrix4 each called");
        });
        index_ets_1.it('test_OhosMatrix4_001', 0, async function (done) {
            console.info('[test_OhosMatrix4_001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('rotate7');
            let obj = JSON.parse(strJson);
            console.info("[test_OhosMatrix4_001] component strJson:" + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Image');
            index_ets_1.expect(obj.$attrs.transform.type)
                .assertEqual('matrix');
            index_ets_1.expect(obj.$attrs.transform.matrix)
                .assertNotNull;
            done();
        });
        index_ets_1.it('test_OhosMatrix4_002', 0, async function (done) {
            console.info('[test_OhosMatrix4_002] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('rotate8');
            let obj = JSON.parse(strJson);
            console.info("[test_OhosMatrix4_001] component strJson:" + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Image');
            index_ets_1.expect(obj.$attrs.transform.type)
                .assertEqual('matrix');
            index_ets_1.expect(obj.$attrs.transform.matrix)
                .assertEqual('5.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,-200.000000,0.000000,0.000000,1.000000,');
            done();
        });
        index_ets_1.it('test_OhosMatrix4_003', 0, async function (done) {
            console.info('[test_OhosMatrix4_003] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('rotate9');
            let obj = JSON.parse(strJson);
            console.info("[test_OhosMatrix4_003] component strJson:" + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Image');
            index_ets_1.expect(obj.$attrs.transform.type)
                .assertEqual('matrix');
            index_ets_1.expect(obj.$attrs.transform.matrix)
                .assertEqual('1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,0.000000,0.000000,0.000000,1.000000,0.000000,100.000000,200.000000,30.000000,1.000000,');
            done();
        });
    });
}
exports["default"] = ohosMatrix4Jsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\PositionSettingJsunit.test.ets":
/*!*****************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\PositionSettingJsunit.test.ets ***!
  \*****************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function positionSettingJsunit() {
    index_ets_1.describe('borderTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("positionSetting beforeEach start");
            let options = {
                uri: 'pages/positionSetting',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get positionSetting state pages:" + JSON.stringify(pages));
                if (!("positionSetting" == pages.name)) {
                    console.info("get positionSetting state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push positionSetting page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push positionSetting page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("positionSetting after each called");
        });
        index_ets_1.it('testPositionSetting001', 0, async function (done) {
            console.info('[testPositionSetting001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('textAlign');
            console.info("[testPositionSetting001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting001] textAlign: " + obj.$attrs.textAlign);
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            console.info('[testPositionSetting001] END');
            done();
        });
        index_ets_1.it('testPositionSetting002', 0, async function (done) {
            console.info('[testPositionSetting002] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('rowDirection');
            console.info("[testPositionSetting002] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting002] rowDirection: " + obj.$attrs.direction);
            index_ets_1.expect(obj.$attrs.direction).assertEqual('Direction.Rtl');
            console.info('[testPositionSetting002] END');
            done();
        });
        index_ets_1.it('testPositionSetting005', 0, async function (done) {
            console.info('[testPositionSetting005] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('position1');
            console.info("[testPositionSetting005] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting005] position: " + JSON.stringify(obj.$attrs.position));
            index_ets_1.expect(obj.$attrs.position.x).assertEqual('25.00vp');
            index_ets_1.expect(obj.$attrs.position.y).assertEqual('15.00vp');
            let strJson1 = getInspectorByKey('position2');
            console.info("[testPositionSetting005] component strJson1:" + strJson1);
            let obj1 = JSON.parse(strJson1);
            console.info("[testPositionSetting005] position1: " + JSON.stringify(obj1.$attrs.position));
            index_ets_1.expect(obj1.$attrs.position.x).assertEqual('50.00%');
            index_ets_1.expect(obj1.$attrs.position.y).assertEqual('70.00%');
            console.info('[testPositionSetting005] END');
            done();
        });
        index_ets_1.it('testPositionSetting007', 0, async function (done) {
            console.info('[testPositionSetting007] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('markAnchor');
            console.info("[testPositionSetting007] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting007] position: " + JSON.stringify(obj.$attrs.markAnchor));
            index_ets_1.expect(obj.$attrs.markAnchor.x).assertEqual('25.00vp');
            index_ets_1.expect(obj.$attrs.markAnchor.y).assertEqual('25.00vp');
            console.info('[testPositionSetting007] END');
            done();
        });
        index_ets_1.it('testPositionSetting009', 0, async function (done) {
            console.info('[testPositionSetting009] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('offset');
            console.info("[testPositionSetting009] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting009] offset: " + JSON.stringify(obj.$attrs.offset));
            index_ets_1.expect(obj.$attrs.offset.x).assertEqual('10.00vp');
            index_ets_1.expect(obj.$attrs.offset.y).assertEqual('15.00vp');
            console.info('[testPositionSetting009] END');
            done();
        });
        index_ets_1.it('testPositionSetting011', 0, async function (done) {
            console.info('[testPositionSetting011] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('opacity');
            let obj = JSON.parse(strJson);
            console.info("[testPositionSetting011] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.opacity).assertEqual(1);
            console.info('[testPositionSetting011] END');
            done();
        });
    });
}
exports["default"] = positionSettingJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\SelectJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\SelectJsunit.test.ets ***!
  \********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function selectJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/select',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get select state success " + JSON.stringify(pages));
                if (!("select" == pages.name)) {
                    console.info("get select success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push select page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push select page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("select after each called");
        });
        index_ets_1.it('selectTest_0100', 0, async function (done) {
            console.info('selectTest_0100 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('select');
            let obj = JSON.parse(strJson);
            console.info("selectTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual('10');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('selectTest_0300', 0, async function (done) {
            console.info('[selectTest_0300] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('select');
            console.info("[selectTest_0300] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[selectTest_0300] font:" + obj.$attrs.font);
            let fontObject = JSON.parse(obj.$attrs.font);
            index_ets_1.expect(fontObject.size).assertEqual('30.00fp');
            index_ets_1.expect(fontObject.weight).assertEqual('400');
            index_ets_1.expect(fontObject.family).assertEqual('serif');
            index_ets_1.expect(fontObject.style).assertEqual('FontStyle.Normal');
            done();
        });
        index_ets_1.it('selectTest_0500', 0, async function (done) {
            console.info('[selectTest_0500] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('select');
            console.info("[selectTest_0500] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[selectTest_0500] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFCCCCCC');
            done();
        });
    });
}
exports["default"] = selectJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\ShapeClippingJsunit.test.ets":
/*!***************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\ShapeClippingJsunit.test.ets ***!
  \***************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function shapeClippingJsunit() {
    index_ets_1.describe('borderTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("shapeClipping beforeEach start");
            let options = {
                uri: 'pages/shapeClipping',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get shapeClipping state pages:" + JSON.stringify(pages));
                if (!("shapeClipping" == pages.name)) {
                    console.info("get shapeClipping state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push shapeClipping page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push shapeClipping page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("shapeClipping after each called");
        });
        index_ets_1.it('testShapeClipping001', 0, async function (done) {
            console.info('[testShapeClipping001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('image_clip');
            let obj = JSON.parse(strJson);
            console.info("[testShapeClipping001] component obj is: " + JSON.stringify(obj));
            let clip = JSON.parse(obj.$attrs.clip);
            index_ets_1.expect(clip.shape).assertEqual('Circle');
            let strJson1 = getInspectorByKey('image_clip_true');
            let obj1 = JSON.parse(strJson1);
            console.info("[testShapeClipping001] component obj1 is: " + JSON.stringify(obj1));
            index_ets_1.expect(obj1.$attrs.clip).assertEqual('true');
            console.info('[testShapeClipping001] END');
            done();
        });
        index_ets_1.it('testShapeClipping002', 0, async function (done) {
            console.info('[testShapeClipping002] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('image_mask');
            let obj = JSON.parse(strJson);
            console.info("[testShapeClipping002] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.mask.shape).assertEqual('Rect');
            index_ets_1.expect(obj.$attrs.clip).assertEqual('false');
            console.info('[testShapeClipping002] END');
            done();
        });
    });
}
exports["default"] = shapeClippingJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\SliderJsunit.test.ets":
/*!********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\SliderJsunit.test.ets ***!
  \********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function sliderJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/slider',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get slider state success " + JSON.stringify(pages));
                if (!("slider" == pages.name)) {
                    console.info("get slider success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(3000);
                    console.info("push slider page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push slider page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("slider after each called");
        });
        index_ets_1.it('testSlider001', 0, async function (done) {
            console.info('[testSlider001] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('slider');
            console.info("[testSlider001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSlider001] decoration:" + JSON.stringify(obj.$attrs));
            index_ets_1.expect(obj.$attrs.decoration).assertEqual(undefined);
            done();
        });
        index_ets_1.it('testSlider003', 0, async function (done) {
            console.info('[testSlider003] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('slider');
            console.info("[testSlider003] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.value).assertEqual(undefined);
            done();
        });
        index_ets_1.it('testSlider005', 0, async function (done) {
            console.info('testSlider005 START');
            let strJson = getInspectorByKey('slider');
            console.info("testSlider005 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testSlider005 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.step).assertEqual(undefined);
            console.info('testSlider005 END');
            done();
        });
    });
}
exports["default"] = sliderJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\TransFormJsunit.test.ets":
/*!***********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\TransFormJsunit.test.ets ***!
  \***********************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function transFormJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("transForm beforeEach start");
            let options = {
                uri: 'pages/transForm',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get transForm state pages:" + JSON.stringify(pages));
                if (!("transForm " == pages.name)) {
                    console.info("get transForm  state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push transForm  page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push transForm  page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("transFrom each called");
        });
        index_ets_1.it('testTransForm001', 0, async function (done) {
            console.info('[testTransForm001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('rotate');
            let obj = JSON.parse(strJson);
            console.info("[testTransForm001] component strJson:" + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Row');
            index_ets_1.expect(obj.$attrs.rotate.x).assertEqual('1.000000');
            index_ets_1.expect(obj.$attrs.rotate.y).assertEqual('1.000000');
            index_ets_1.expect(obj.$attrs.rotate.z).assertEqual('1.000000');
            index_ets_1.expect(obj.$attrs.rotate.centerX).assertEqual('50.00%');
            index_ets_1.expect(obj.$attrs.rotate.centerY).assertEqual('50.00%');
            index_ets_1.expect(obj.$attrs.rotate.angle).assertEqual('300.000000');
            done();
        });
        index_ets_1.it('testTransForm003', 0, async function (done) {
            console.info('[testTransForm003] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('rotate3');
            let obj = JSON.parse(strJson);
            console.info("[testTransForm003] component strJson:" + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scale.x).assertEqual('2.000000');
            index_ets_1.expect(obj.$attrs.scale.y).assertEqual('0.500000');
            done();
        });
    });
}
exports["default"] = transFormJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets":
/*!********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\Utils.ets ***!
  \********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports) => {


Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
class Utils {
    static sleep(time) {
        return new Promise((resolve, reject) => {
            setTimeout(() => {
                resolve();
            }, time);
        }).then(() => {
            console.info(`sleep ${time} over...`);
        });
    }
    static getComponentRect(key) {
        let strJson = getInspectorByKey(key);
        let obj = JSON.parse(strJson);
        console.info("[getInspectorByKey] current component obj is: " + JSON.stringify(obj));
        let rectInfo = JSON.parse('[' + obj.$rect + ']');
        console.info("[getInspectorByKey] rectInfo is: " + rectInfo);
        this.rect_left = JSON.parse('[' + rectInfo[0] + ']')[0];
        this.rect_top = JSON.parse('[' + rectInfo[0] + ']')[1];
        this.rect_right = JSON.parse('[' + rectInfo[1] + ']')[0];
        this.rect_bottom = JSON.parse('[' + rectInfo[1] + ']')[1];
        return this.rect_value = {
            "left": this.rect_left, "top": this.rect_top, "right": this.rect_right, "bottom": this.rect_bottom
        };
    }
    static async swipe(downX, downY, upX, upY, steps) {
        console.info('start to swipe');
        this.drags(downX, downY, upX, upY, steps, false);
    }
    static async drag(downX, downY, upX, upY, steps) {
        console.info('start to drag');
        this.drags(downX, downY, upX, upY, steps, true);
    }
    static async drags(downX, downY, upX, upY, steps, drag) {
        var xStep;
        var yStep;
        var swipeSteps;
        var ret;
        xStep = 0;
        yStep = 0;
        ret = false;
        swipeSteps = steps;
        if (swipeSteps == 0) {
            swipeSteps = 1;
        }
        xStep = (upX - downX) / swipeSteps;
        yStep = (upY - downY) / swipeSteps;
        console.info('move step is: ' + 'xStep: ' + xStep + '    yStep: ' + yStep);
        var downPonit = {
            id: 1,
            x: downX,
            y: downY,
            type: TouchType.Down,
        };
        console.info('down touch started: ' + JSON.stringify(downPonit));
        sendTouchEvent(downPonit);
        console.info('start to move');
        if (drag) {
            await this.sleep(500);
        }
        for (var i = 1; i <= swipeSteps; i++) {
            var movePoint = {
                id: 1,
                x: downX + (xStep * i),
                y: downY + (yStep * i),
                type: TouchType.Move
            };
            console.info('move touch started: ' + JSON.stringify(movePoint));
            ret = sendTouchEvent(movePoint);
            if (ret == false) {
                break;
            }
            await this.sleep(5);
        }
        console.info('start to up');
        if (drag) {
            await this.sleep(100);
        }
        var upPoint = {
            id: 1,
            x: upX,
            y: upY,
            type: TouchType.Up,
        };
        console.info('up touch started: ' + JSON.stringify(upPoint));
        sendTouchEvent(upPoint);
        await this.sleep(500);
    }
}
exports["default"] = Utils;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\VisibilityJsunit.test.ets":
/*!************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component_five\entry\src\main\ets\MainAbility\test\VisibilityJsunit.test.ets ***!
  \************************************************************************************************************************************/
/***/ (function(__unused_webpack_module, exports, __webpack_require__) {


var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", ({ value: true }));
// @ts-nocheck
/**
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function visibilityJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("visibility beforeEach start");
            let options = {
                uri: 'pages/visibility',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get visibility state pages:" + JSON.stringify(pages));
                if (!("visibility" == pages.name)) {
                    console.info("get visibility state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push visibility page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push visibility page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("visibility after each called");
        });
        index_ets_1.it('testVisibility01', 0, async function (done) {
            console.info('[testVisibility01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('box');
            let obj = JSON.parse(strJson);
            console.info("[testVisibility01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.visibility).assertEqual('Visibility.Visible');
            console.info('[testVisibility01] END');
            done();
        });
    });
}
exports["default"] = visibilityJsunit;


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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component_five\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map