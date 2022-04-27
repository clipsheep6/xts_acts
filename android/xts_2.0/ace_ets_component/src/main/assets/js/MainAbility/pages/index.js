/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry":
/*!**********************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\pages\index.ets?entry ***!
  \**********************************************************************************************************************/
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
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets"));
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

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\EllipseJsunit.test.ets":
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\EllipseJsunit.test.ets ***!
  \****************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function ellipseJsunit() {
    index_ets_1.describe('ellipseTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("ellipse beforeEach start");
            let options = {
                uri: 'pages/ellipse',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get ellipse state pages:" + JSON.stringify(pages));
                if (!("ellipse" == pages.name)) {
                    console.info("get ellipse state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push ellipse page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ellipse page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("ellipse after each called");
        });
        index_ets_1.it('testEllipse01', 0, async function (done) {
            console.info('[testEllipse01] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('ellipse');
            let obj = JSON.parse(strJson);
            console.info("[testEllipse02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual('200.00px');
            index_ets_1.expect(obj.$attrs.width).assertEqual('200.00px');
            console.info('testEllipse02 END');
            done();
        });
    });
}
exports["default"] = ellipseJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\EnableJsunit.test.ets":
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\EnableJsunit.test.ets ***!
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
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enableJsunit() {
    index_ets_1.describe('enableTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("enable beforeEach start");
            let options = {
                uri: 'pages/enable',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get enable state pages: " + JSON.stringify(pages));
                if (!("enable" == pages.name)) {
                    console.info("get enable state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push enable page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push enable page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("enable after each called");
        });
        index_ets_1.it('testEnable01', 0, async function (done) {
            console.info('[testEnable01] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('enabled');
            let obj = JSON.parse(strJson);
            console.info("[testEnable01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.enabled).assertEqual(true);
            console.info('[testEnable01] END');
            done();
        });
    });
}
exports["default"] = enableJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GaugeJsunit.test.ets":
/*!**************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\GaugeJsunit.test.ets ***!
  \**************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function gaugeJsunit() {
    index_ets_1.describe('gaugeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/gauge',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get gauge state success " + JSON.stringify(pages));
                if (!("gauge" == pages.name)) {
                    console.info("get gauge state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push gauge page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push gauge page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(2000);
            console.info("gauge after each called");
        });
        index_ets_1.it('testGauge001', 0, async function (done) {
            console.info('[testGauge001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('gauge');
            let obj = JSON.parse(strJson);
            console.info("[testGauge001] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Gauge');
            index_ets_1.expect(obj.$attrs.strokeWidth).assertEqual('20.00vp');
            index_ets_1.expect(obj.$attrs.width).assertEqual('200.00vp');
            index_ets_1.expect(obj.$attrs.height).assertEqual('200.00vp');
            index_ets_1.expect(obj.$attrs.value).assertEqual('50.00');
            done();
        });
    });
}
exports["default"] = gaugeJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GlobalJsunit.test.ets":
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\GlobalJsunit.test.ets ***!
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
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function globalJsunit() {
    index_ets_1.describe('globalJsunit', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("global beforeEach start");
            let options = {
                uri: 'pages/global',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get global state pages:" + JSON.stringify(pages));
                if (!("global" == pages.name)) {
                    console.info("get global state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push global page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push global page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
        });
        /**
         * @tc.number ACE_global_setTimeout
         * @tc.name setTimeout()
         * @tc.desc Test setTimeout
         */
        index_ets_1.it('ACE_global_setTimeout', 0, function (done) {
            let caseName = "ACE_global_setTimeout";
            console.info(`${caseName} START`);
            setTimeout(() => {
                index_ets_1.expect(true).assertTrue();
            }, 100);
            console.info(`${caseName} END`);
            done();
        });
        /**
         * @tc.number ACE_global_canIUse
         * @tc.name canIUse()
         * @tc.desc Test canIUse
         */
        index_ets_1.it('ACE_global_canIUse', 0, function (done) {
            let caseName = "ACE_global_canIUse";
            console.info(`${caseName} START`);
            let syscapName = "";
            var result = canIUse(syscapName);
            index_ets_1.expect(result === false).assertTrue();
            console.info(`${caseName} END`);
            done();
        });
        /**
         * @tc.number ACE_global_getApp
         * @tc.name getApp()
         * @tc.desc Test getApp
         */
        index_ets_1.it('ACE_global_getApp', 0, function (done) {
            let caseName = "ACE_global_getApp";
            console.info(`${caseName} START`);
            try {
                var info = getApp();
            }
            catch (err) {
            }
            console.info(`${caseName} END`);
            done();
        });
        /**
         * @tc.number ACE_global_createLocalParticleAbility
         * @tc.name createLocalParticleAbility()
         * @tc.desc Test createLocalParticleAbility
         */
        index_ets_1.it('ACE_global_createLocalParticleAbility', 0, function (done) {
            let caseName = "ACE_global_createLocalParticleAbility";
            console.info(`${caseName} START`);
            try {
                var info = createLocalParticleAbility(100);
            }
            catch (err) {
            }
            console.info(`${caseName} END`);
            done();
        });
        /**
         * @tc.number ACE_global_console_log_0100
         * @tc.name console::log
         * @tc.desc Test console log printing
         */
        index_ets_1.it("ACE_global_console_log_0100", 0, async function (done) {
            var casename = "ACE_global_001";
            console.log("-----------------------ACE_global_console_log Test is starting-----------------------");
            try {
                console.log("ACE_global_console_log test ok");
                index_ets_1.expect(true).assertTrue();
            }
            catch (error) {
                console.log(casename + "errorcode: " + casename);
                index_ets_1.expect().assertFail();
                done();
            }
            console.log("-----------------------ACE_global_console_log Test end-----------------------");
            done();
        });
        /**
         * @tc.number ACE_global_console_info_0100
         * @tc.name console::info
         * @tc.desc Test console info printing
         */
        index_ets_1.it("ACE_global_console_info_0100", 0, async function (done) {
            var casename = "ACE_global_002";
            console.log("-----------------------ACE_global_console_info Test is starting-----------------------");
            try {
                console.info("ACE_global_console_info test ok");
                index_ets_1.expect(true).assertTrue();
            }
            catch (error) {
                console.log(casename + "errorcode: " + casename);
                index_ets_1.expect().assertFail();
                done();
            }
            console.log("-----------------------ACE_global_console_info Test end-----------------------");
            done();
        });
        /**
         * @tc.number ACE_global_console_warn_0100
         * @tc.name console::warn
         * @tc.desc Test console warn printing
         */
        index_ets_1.it("ACE_global_console_warn_0100", 0, async function (done) {
            var casename = "ACE_global_003";
            console.log("-----------------------ACE_global_console_warn Test is starting-----------------------");
            try {
                console.warn("ACE_global_console_warn test ok");
                index_ets_1.expect(true).assertTrue();
            }
            catch (error) {
                console.log(casename + "errorcode: " + casename);
                index_ets_1.expect().assertFail();
                done();
            }
            console.log("-----------------------ACE_global_console_warn Test end-----------------------");
            done();
        });
    });
}
exports["default"] = globalJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GridContainerJsunit.test.ets":
/*!**********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\GridContainerJsunit.test.ets ***!
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function girdContainerJsunit() {
    index_ets_1.describe('girdContainerTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("girdContainer beforeEach start");
            let options = {
                uri: 'pages/gridContainer',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get girdContainer state pages:" + JSON.stringify(pages));
                if (!("gridContainer" == pages.name)) {
                    console.info("get girdContainer state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push girdContainer page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push girdContainer page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("girdContainer after each called");
        });
        index_ets_1.it('testGirdContainer01', 0, async function (done) {
            console.info('[testGirdContainer01] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('gridContainer');
            let obj = JSON.parse(strJson);
            console.info("[testGirdContainer01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('GridContainer');
            index_ets_1.expect(obj.$attrs.constructor.columns).assertEqual('12');
            index_ets_1.expect(obj.$attrs.constructor.sizeType).assertEqual('SizeType.XS');
            index_ets_1.expect(obj.$attrs.constructor.gutter).assertEqual('10.00vp');
            index_ets_1.expect(obj.$attrs.constructor.margin).assertEqual('20.00vp');
            console.info('testGirdContainer01 END');
            done();
        });
    });
}
exports["default"] = girdContainerJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GridSettingsJsunit.test.ets":
/*!*********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\GridSettingsJsunit.test.ets ***!
  \*********************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function gridSettingsJsunit() {
    index_ets_1.describe('gridSettingsTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/gridSettings',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get gridSettings state pages:" + JSON.stringify(pages));
                if (!("textStyle" == pages.name)) {
                    console.info("get gridSettings state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push gridSettings page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push gridSettings page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("gridSettings after each called");
        });
        index_ets_1.it('testGridSettings000', 0, async function (done) {
            console.info('[testGridSettings000] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('gridContainer');
            console.info("[testGridSettings000] component strJson:" + strJson);
            index_ets_1.expect(true).assertEqual(true);
            done();
        });
        index_ets_1.it('testGridSettings001', 0, async function (done) {
            console.info('[testGridSettings001] START');
            await Utils_ets_1.default.sleep(4000);
            let strJson = getInspectorByKey('gridRow');
            console.info("[testGridSettings001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testGridSettings001] gridRow useSizeType: " + JSON.stringify(obj.$attrs.useSizeType));
            index_ets_1.expect(obj.$attrs.useSizeType.sm.span).assertEqual(2);
            index_ets_1.expect(obj.$attrs.useSizeType.sm.offset).assertEqual(1);
            done();
        });
        index_ets_1.it('testGridSettings006', 0, async function (done) {
            console.info('[testGridSettings006] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('gridOffset');
            console.info("[testGridSettings006] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testGridSettings006] gridOffset: " + JSON.stringify(obj.$attrs.gridOffset));
            index_ets_1.expect(obj.$attrs.gridOffset).assertEqual(0);
            done();
        });
        index_ets_1.it('testGridSettings011', 0, async function (done) {
            console.info('[testGridSettings011] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('gridSpan');
            console.info("[testGridSettings011] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testGridSettings011] gridSpan: " + JSON.stringify(obj.$attrs.gridSpan));
            index_ets_1.expect(obj.$attrs.gridSpan).assertEqual(1);
            done();
        });
    });
}
exports["default"] = gridSettingsJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ImageEffectsJsunit.test.ets":
/*!*********************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\ImageEffectsJsunit.test.ets ***!
  \*********************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function imageEffectsJsunit() {
    index_ets_1.describe('imageEffectsTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/imageEffects',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get imageEffects state success " + JSON.stringify(pages));
                if (!("imageEffects" == pages.name)) {
                    console.info("get imageEffects state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push imageEffects page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push imageEffects page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(2000);
            console.info("imageEffects after each called");
        });
        index_ets_1.it('testImageEffects001', 0, async function (done) {
            console.info('[testSizeSetting001] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow');
            console.info("[testImageEffects001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$type).assertEqual('Text');
            index_ets_1.expect(obj.$attrs.blur).assertEqual(100);
            done();
        });
        index_ets_1.it('testImageEffects006', 0, async function (done) {
            console.info('[testImageEffects006] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow3');
            let obj = JSON.parse(strJson);
            console.info("[testImageEffects006] component strJson:" + obj.$attrs.shadow);
            index_ets_1.expect(obj.$attrs.shadow.radius).assertEqual("10.000000");
            index_ets_1.expect(obj.$attrs.shadow.color).assertEqual("#FF808080");
            index_ets_1.expect(obj.$attrs.shadow.offsetX).assertEqual("5.000000");
            index_ets_1.expect(obj.$attrs.shadow.offsetY).assertEqual("5.000000");
            done();
        });
        index_ets_1.it('testImageEffects011', 0, async function (done) {
            console.info('[testSizeSetting011] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow5');
            console.info("[testImageEffects011] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.brightness).assertEqual(20);
            done();
        });
        index_ets_1.it('testImageEffects016', 0, async function (done) {
            console.info('[testImageEffects016] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow6');
            console.info("[testImageEffects016] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testImageEffects016] component strJson:" + obj.$attrs.saturate);
            index_ets_1.expect(obj.$attrs.saturate).assertEqual(50);
            done();
        });
        index_ets_1.it('testImageEffects021', 0, async function (done) {
            console.info('[testSizeSetting021] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow7');
            console.info("[testImageEffects021] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.contrast).assertEqual(20);
            done();
        });
        index_ets_1.it('testImageEffects026', 0, async function (done) {
            console.info('[testSizeSetting0026] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow8');
            console.info("[testImageEffects026] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.invert).assertEqual(10);
            done();
        });
        index_ets_1.it('testImageEffects031', 0, async function (done) {
            console.info('[testImageEffects031] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('centerRow9');
            console.info("[testImageEffects031] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testImageEffects031] component strJson:" + obj.$attrs.shadow);
            index_ets_1.expect(obj.$attrs.hueRotate).assertEqual(10);
            done();
        });
    });
}
exports["default"] = imageEffectsJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\LayoutConstraintsJsunit.test.ets":
/*!**************************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\LayoutConstraintsJsunit.test.ets ***!
  \**************************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function layoutConstraintsJsunit() {
    index_ets_1.describe('layoutConstraintsTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("layoutConstraints beforeEach start");
            let options = {
                uri: 'pages/layoutConstraints',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get layoutConstraints state pages:" + JSON.stringify(pages));
                if (!("layoutConstraints" == pages.name)) {
                    console.info("get layoutConstraints state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push layoutConstraints page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push layoutConstraints page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("layoutConstraints after each called");
        });
        index_ets_1.it('testLayoutConstraints001', 0, async function (done) {
            console.info('[testLayoutConstraints001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('aspectRatio');
            console.info("[testLayoutConstraints001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testLayoutConstraints001] aspectRatio: " + obj.$attrs.aspectRatio);
            index_ets_1.expect(obj.$attrs.aspectRatio).assertEqual(1.5);
            done();
        });
        index_ets_1.it('testLayoutConstraints003', 0, async function (done) {
            console.info('[testLayoutConstraints003] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('displayPriority');
            console.info("[testLayoutConstraints003] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testLayoutConstraints003] displayPriority: " + obj.$attrs.displayPriority);
            index_ets_1.expect(obj.$attrs.displayPriority).assertEqual(1);
            done();
        });
    });
}
exports["default"] = layoutConstraintsJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets":
/*!*******************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\List.test.ets ***!
  \*******************************************************************************************************************/
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
const EllipseJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EllipseJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\EllipseJsunit.test.ets"));
const EnableJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EnableJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\EnableJsunit.test.ets"));
const GaugeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GaugeJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GaugeJsunit.test.ets"));
const GlobalJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GlobalJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GlobalJsunit.test.ets"));
const GridContainerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridContainerJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GridContainerJsunit.test.ets"));
const GridSettingsJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridSettingsJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\GridSettingsJsunit.test.ets"));
const ImageEffectsJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ImageEffectsJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ImageEffectsJsunit.test.ets"));
const LayoutConstraintsJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./LayoutConstraintsJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\LayoutConstraintsJsunit.test.ets"));
const ListJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ListJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ListJsunit.test.ets"));
const OverlayJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./OverlayJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\OverlayJsunit.test.ets"));
const StepperJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./StepperJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\StepperJsunit.test.ets"));
const SwiperJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SwiperJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\SwiperJsunit.test.ets"));
const TextStyleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextStyleJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\TextStyleJsunit.test.ets"));
const TouchAbleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TouchAbleJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\TouchAbleJsunit.test.ets"));
const VisibilityJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./VisibilityJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\VisibilityJsunit.test.ets"));
const ZIndexJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ZIndexJsunit.test.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ZIndexJsunit.test.ets"));
function testsuite() {
    TouchAbleJsunit_test_ets_1.default();
    EnableJsunit_test_ets_1.default();
    ZIndexJsunit_test_ets_1.default();
    EllipseJsunit_test_ets_1.default();
    GaugeJsunit_test_ets_1.default();
    GlobalJsunit_test_ets_1.default();
    VisibilityJsunit_test_ets_1.default();
    GridContainerJsunit_test_ets_1.default();
    ImageEffectsJsunit_test_ets_1.default();
    LayoutConstraintsJsunit_test_ets_1.default();
    ListJsunit_test_ets_1.default();
    OverlayJsunit_test_ets_1.default();
    StepperJsunit_test_ets_1.default();
    SwiperJsunit_test_ets_1.default();
    TextStyleJsunit_test_ets_1.default();
    GridSettingsJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ListJsunit.test.ets":
/*!*************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\ListJsunit.test.ets ***!
  \*************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function listJsunit() {
    index_ets_1.describe('listTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("list beforeEach start");
            let options = {
                uri: 'pages/list',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get list state pages:" + JSON.stringify(pages));
                if (!("list" == pages.name)) {
                    console.info("get list state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push list page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push list page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("list after each called");
        });
        index_ets_1.it('testList01', 0, async function (done) {
            console.info('[testList01] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('list');
            let obj = JSON.parse(strJson);
            console.info("[testList01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.listDirection).assertEqual('Axis.Vertical');
            index_ets_1.expect(obj.$attrs.editMode).assertEqual('false');
            index_ets_1.expect(obj.$attrs.edgeEffect).assertEqual('EdgeEffect.None');
            index_ets_1.expect(obj.$attrs.chainAnimation).assertEqual('false');
            index_ets_1.expect(obj.$attrs.divider.strokeWidth).assertEqual("2.00vp");
            index_ets_1.expect(obj.$attrs.divider.color).assertEqual("#FFFFFFFF");
            index_ets_1.expect(obj.$attrs.divider.startMargin).assertEqual("20.00vp");
            index_ets_1.expect(obj.$attrs.divider.endMargin).assertEqual("20.00vp");
            console.info('[testList01] END');
            done();
        });
    });
}
exports["default"] = listJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\OverlayJsunit.test.ets":
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\OverlayJsunit.test.ets ***!
  \****************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function overLayJsunit() {
    index_ets_1.describe('overLayTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("overlay beforeEach start");
            let options = {
                uri: 'pages/overlay',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get overlay state pages: " + JSON.stringify(pages));
                if (!("overlay" == pages.name)) {
                    console.info("get overlay state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push overlay page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push overlay page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("overlay after each called");
        });
        index_ets_1.it('testOverlay01', 0, async function (done) {
            console.info('[testOverlay01] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('overlay');
            let obj = JSON.parse(strJson);
            console.info("[testOverlay01] obj is: " + JSON.stringify(obj.$attrs.overlay));
            index_ets_1.expect(obj.$attrs.overlay.title).assertEqual("old title");
            index_ets_1.expect(obj.$attrs.overlay.options.align).assertEqual("Alignment.Bottom");
            index_ets_1.expect(obj.$attrs.overlay.options.offset.x).assertEqual('0.00vp');
            index_ets_1.expect(obj.$attrs.overlay.options.offset.y).assertEqual('-15.00vp');
            console.info('[testOverlay01] END');
            done();
        });
    });
}
exports["default"] = overLayJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\StepperJsunit.test.ets":
/*!****************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\StepperJsunit.test.ets ***!
  \****************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function stepperJsunit() {
    index_ets_1.describe('stepperTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/stepper',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get stepper state success " + JSON.stringify(pages));
                if (!("stepper" == pages.name)) {
                    console.info("get stepper state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(1000);
                    console.info("push stepper page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push stepper page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("stepper after each called");
        });
        index_ets_1.it('stepperTest_0100', 0, async function (done) {
            console.info('stepperTest_0100 START');
            let strJson = getInspectorByKey('stepper');
            console.info("stepperTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("stepperTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Stepper');
            index_ets_1.expect(obj.$attrs.index).assertEqual('0');
            console.info('stepperTest_0100 END');
            done();
        });
    });
}
exports["default"] = stepperJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\SwiperJsunit.test.ets":
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\SwiperJsunit.test.ets ***!
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
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function swiperJsunit() {
    index_ets_1.describe('swiperTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/swiper',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get swiper state success " + JSON.stringify(pages));
                if (!("swiper" == pages.name)) {
                    console.info("get swiper state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(1000);
                    console.info("push swiper page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push swiper page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("swiper after each called");
        });
        index_ets_1.it('swiperTest_0100', 0, async function (done) {
            console.info('swiperTest_0100 START');
            let strJson = getInspectorByKey('swiper');
            console.info("swiperTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("swiperTest_0100 component obj is: " + JSON.stringify(obj));
            console.info("swiperTest_0100 obj.$attrs.index: " + obj.$attrs.index);
            console.info("swiperTest_0100 obj.$attrs.indicatorStyle: " + obj.$attrs.indicatorStyle);
            index_ets_1.expect(obj.$type).assertEqual('Swiper');
            index_ets_1.expect(obj.$attrs.index).assertEqual('1');
            done();
        });
        index_ets_1.it('swiperTest_0200', 0, async function (done) {
            console.info('swiperTest_0200 START');
            let strJson = getInspectorByKey('swiper');
            console.info("swiperTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("swiperTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.indicator).assertEqual('true');
            index_ets_1.expect(obj.$attrs.loop).assertEqual('false');
            console.info('swiperTest_0200 END');
            done();
        });
        index_ets_1.it('swiperTest_0300', 0, async function (done) {
            console.info('swiperTest_0300 START');
            let strJson = getInspectorByKey('swiper');
            console.info("swiperTest_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("swiperTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.duration).assertEqual('1000.000000');
            index_ets_1.expect(obj.$attrs.vertical).assertEqual('false');
            console.info('swiperTest_0300 END');
            done();
        });
        index_ets_1.it('swiperTest_0400', 0, async function (done) {
            console.info('swiperTest_0400 START');
            let strJson = getInspectorByKey('swiper');
            console.info("swiperTest_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("swiperTest_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.autoPlay).assertEqual('true');
            index_ets_1.expect(obj.$attrs.interval).assertEqual('4000');
            console.info('swiperTest_0400 END');
            done();
        });
        index_ets_1.it('swiperTest_0500', 0, async function (done) {
            console.info('swiperTest_0500 START');
            let strJson = getInspectorByKey('swiper');
            console.info("swiperTest_0500 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("swiperTest_0500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.itemSpace).assertEqual('0.00vp');
            index_ets_1.expect(obj.$attrs.disableSwipe).assertEqual('false');
            console.info('swiperTest_0500 END');
            done();
        });
    });
}
exports["default"] = swiperJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\TextStyleJsunit.test.ets":
/*!******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\TextStyleJsunit.test.ets ***!
  \******************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textStyleJsunit() {
    index_ets_1.describe('textStyleTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/textStyle',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get textStyle state pages:" + JSON.stringify(pages));
                if (!("textStyle" == pages.name)) {
                    console.info("get textStyle state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push textStyle page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push textStyle page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("textStyle after each called");
        });
        index_ets_1.it('testTextStyle001', 0, async function (done) {
            console.info('[testTextStyle001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('fontColor');
            console.info("[testTextStyle001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testTextStyle001] fontColor: " + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFF0000');
            done();
        });
        index_ets_1.it('testTextStyle006', 0, async function (done) {
            console.info('[testTextStyle006] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('fontSize');
            console.info("[testTextStyle006] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testTextStyle006] fontSize: " + obj.$attrs.fontSize);
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('20.00fp');
            done();
        });
        index_ets_1.it('testTextStyle011', 0, async function (done) {
            console.info('[testTextStyle011] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('fontStyle');
            console.info("[testTextStyle011] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testTextStyle011] fontStyle: " + obj.$attrs.fontStyle);
            index_ets_1.expect(obj.$attrs.fontStyle).assertEqual('FontStyle.Italic');
            done();
        });
        index_ets_1.it('testTextStyle016', 0, async function (done) {
            console.info('[testTextStyle016] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('fontWeight');
            console.info("[testTextStyle016] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testTextStyle016] fontWeight: " + obj.$attrs.fontWeight);
            index_ets_1.expect(obj.$attrs.fontWeight).assertEqual('FontWeight.700');
            done();
        });
        index_ets_1.it('testTextStyle021', 0, async function (done) {
            console.info('[testTextStyle021] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('fontFamily');
            console.info("[testTextStyle021] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testTextStyle021] fontFamily: " + obj.$attrs.fontFamily);
            index_ets_1.expect(obj.$attrs.fontFamily).assertEqual('sans-serif');
            done();
        });
    });
}
exports["default"] = textStyleJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\TouchAbleJsunit.test.ets":
/*!******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\TouchAbleJsunit.test.ets ***!
  \******************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function touchAbleJsunit() {
    index_ets_1.describe('touchAbleTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("touchAble beforeEach start");
            let options = {
                uri: 'pages/touchAble',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get touchAble state pages:" + JSON.stringify(pages));
                if (!("touchAble" == pages.name)) {
                    console.info("get touchAble state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push touchAble page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push touchAble page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("touchAble after each called");
        });
        index_ets_1.it('testTouchAble001', 0, async function (done) {
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('ellipse');
            let obj = JSON.parse(strJson);
            console.info("[testTouchAble001] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.focusable).assertEqual(true);
            done();
        });
    });
}
exports["default"] = touchAbleJsunit;


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets":
/*!***************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\Utils.ets ***!
  \***************************************************************************************************************/
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

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\VisibilityJsunit.test.ets":
/*!*******************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\VisibilityJsunit.test.ets ***!
  \*******************************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function visibilityJsunit() {
    index_ets_1.describe('visibilityTest', function () {
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
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push visibility page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push visibility page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("visibility after each called");
        });
        index_ets_1.it('testVisibility01', 0, async function (done) {
            console.info('[testVisibility01] START');
            await Utils_ets_1.default.sleep(1000);
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


/***/ }),

/***/ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\ZIndexJsunit.test.ets":
/*!***************************************************************************************************************************!*\
  !*** C:\Users\zhaoxuesong\Desktop\to Android\ace_ets_component\entry\src\main\ets\MainAbility\test\ZIndexJsunit.test.ets ***!
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
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
var _system_router_1  = globalThis.requireNativeModule('system.router');
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function zIndexJsunit() {
    index_ets_1.describe('zIndexTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("zIndex beforeEach start");
            let options = {
                uri: 'pages/zIndex',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get zIndex state pages: " + JSON.stringify(pages));
                if (!("zIndex" == pages.name)) {
                    console.info("get zIndex state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push zIndex page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push zIndex page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(2000);
            console.info("zIndex after each called");
        });
        index_ets_1.it('testZIndex01', 0, async function (done) {
            console.info('[testZIndex01] START');
            await Utils_ets_1.default.sleep(2000);
            let strJson = getInspectorByKey('zIndex');
            let obj = JSON.parse(strJson);
            console.info("[testZIndex01] obj is: " + JSON.stringify(obj.$attrs));
            index_ets_1.expect(obj.$attrs.zIndex).assertEqual(1);
            console.info('[testZIndex01] END');
            done();
        });
    });
}
exports["default"] = zIndexJsunit;


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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("C:\\Users\\zhaoxuesong\\Desktop\\to Android\\ace_ets_component\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map