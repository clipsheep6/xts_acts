/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry":
/*!****************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\pages\index.ets?entry ***!
  \****************************************************************************************************/
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
var file = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets"));
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
        List_test_ets_1.default();
        core.execute();
    }
    render() {
        Flex.create({
            direction: FlexDirection.Column,
            alignItems: ItemAlign.Center,
            justifyContent: FlexAlign.Center
        });
        Flex.debugLine("pages/index.ets(41:5)");
        Flex.width('100%');
        Flex.height('100%');
        Text.create('ACE ETS TEST');
        Text.debugLine("pages/index.ets(46:7)");
        Text.fontSize(50);
        Text.fontWeight(FontWeight.Bold);
        Text.pop();
        Flex.pop();
    }
}
loadDocument(new MyComponent("1", undefined, {}));


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\AppStorageJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\AppStorageJsunit.test.ets ***!
  \*************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function AppStorageJsunit() {
    index_ets_1.describe('appStorage', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("appStorage beforeEach start");
            let options = {
                uri: 'pages/appStorage',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get button state pages: " + JSON.stringify(pages));
                if (!("appStorage" == pages.name)) {
                    console.info("get appStorage state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push button page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push appStorage page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("appStorage after each called");
        });
        /**
        * @tc.number  stateManagement_AppStorage_setOrCreate_0100
        * @tc.name    stateManagement ContentStorage  validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_AppStorage_setOrCreate_0100', 0, function (done) {
            console.info('[stateManagement_AppStorage_setOrCreate_0100] START');
            AppStorage.SetOrCreate("key1", "value1");
            AppStorage.SetOrCreate("key2", "value2");
            AppStorage.SetOrCreate("key3", "value3");
            let size = AppStorage.Size();
            console.info('[stateManagement_AppStorage_setOrCreate_0100] size =' + size);
            index_ets_1.expect(size == 3)
                .assertTrue;
            let key1 = AppStorage.Get("key1");
            console.info('[stateManagement_AppStorage_setOrCreate_0100] key1 = ' + key1);
            console.info('[stateManagement_AppStorage_setOrCreate_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_Storage_setOrCreate_0100
        * @tc.name    stateManagement Storage  validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_Storage_set_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_Storage_set_0100] START');
            let storage = new Storage();
            console.info('[stateManagement_Storage_set_0100] 0000');
            storage.set("key5", "value5");
            storage.set("key6", "value6");
            console.info('[stateManagement_Storage_set_0100] 1111');
            let key5 = storage.get("key5");
            let key6 = storage.get("key6");
            console.info('[stateManagement_Storage_set_0100] 2222' + key5);
            storage.delete("key5");
            key5 = storage.get("key5");
            console.info('[stateManagement_Storage_set_0100] 3333');
            console.info('[stateManagement_Storage_set_0100] key5 =' + key5);
            console.info('[stateManagement_Storage_set_0100] key6 =' + key6);
            storage.clear();
            key6 = storage.get("key6");
            console.info('[stateManagement_Storage_set_0100] key6 =' + key6);
            console.info('[stateManagement_Storage_set_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_Environment_EnvProp_0100
        * @tc.name    stateManagement Environment  validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_Environment_EnvProp_colorMode_0100', 0, function (done) {
            console.info('[stateManagement_Environment_EnvProp_colorMode_0100] START');
            Environment.EnvProp("colorMode", ColorMode.LIGHT);
            let enable = AppStorage.Get("colorMode");
            index_ets_1.expect(enable == ColorMode.LIGHT)
                .assertTrue;
            console.info('[stateManagement_Environment_EnvProp_colorMode_0100] enable =' + enable);
            Environment.EnvProp("colorMode", ColorMode.DARK);
            let enable1 = AppStorage.Get("colorMode");
            console.info('[stateManagement_Environment_EnvProp_colorMode_0100] enable1 =' + enable1);
            index_ets_1.expect(enable1 == ColorMode.DARK)
                .assertTrue;
            console.info('[stateManagement_Environment_EnvProp_colorMode_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_Environment_EnvProp_0100
        * @tc.name    stateManagement Environment  validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_Environment_EnvProp_layoutDirection_0100', 0, function (done) {
            console.info('[stateManagement_Environment_EnvProp_layoutDirection_0100] START');
            Environment.EnvProp("layoutDirection", LayoutDirection.LTR);
            let enable = AppStorage.Get("layoutDirection");
            index_ets_1.expect(enable == LayoutDirection.LTR)
                .assertTrue;
            console.info('[stateManagement_Environment_EnvProp_layoutDirection_0100] enable =' + enable);
            Environment.EnvProp("layoutDirection", LayoutDirection.RTL);
            let enable1 = AppStorage.Get("layoutDirection");
            index_ets_1.expect(enable1 == LayoutDirection.RTL)
                .assertTrue;
            console.info('[stateManagement_Environment_EnvProp_layoutDirection_0100] enable1' + enable1);
            Environment.EnvProp("layoutDirection", LayoutDirection.Auto);
            let enable2 = AppStorage.Get("layoutDirection");
            index_ets_1.expect(enable2 == LayoutDirection.Auto)
                .assertTrue;
            console.info('[stateManagement_Environment_EnvProp_layoutDirection_0100] enable2' + enable2);
            done();
        });
        /**
        * @tc.number  stateManagement_Environment_EnvProps_0100
        * @tc.name    stateManagement Environment  validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_Environment_EnvProps_0100', 0, function (done) {
            console.info('[stateManagement_Environment_EnvProps_0100] START');
            let props = {
                "props": [{
                        key: "colorMode", defaultValue: ColorMode.LIGHT
                    }, {
                        key: "layoutDirection", defaultValue: LayoutDirection.LTR
                    }]
            };
            try {
                Environment.EnvProps(props);
                let enable = AppStorage.Get("colorMode");
                let enable1 = AppStorage.Get("layoutDirection");
                index_ets_1.expect(enable == ColorMode.LIGHT)
                    .assertTrue;
                index_ets_1.expect(enable1 == LayoutDirection.RTL)
                    .assertTrue;
                console.info('[stateManagement_Environment_EnvProps_0100] enable = ' + enable);
                console.info('[stateManagement_Environment_EnvProps_0100] enable1 = ' + enable1);
            }
            catch (err) {
                console.info('[stateManagement_Environment_EnvProps_0100] err = ' + err);
            }
            console.info('[stateManagement_Environment_EnvProps_0100] END');
            done();
        });
    });
}
exports["default"] = AppStorageJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BasicJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\BasicJsunit.test.ets ***!
  \********************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


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
function basicJsunit() {
    index_ets_1.describe('basicTest', function () {
        let callback = (data) => {
            console.log(data);
            index_ets_1.expect(true).assertTrue();
        };
        function callbackTest(callback) {
            callback("callback");
        }
        let errorCallback = (error) => {
            console.log(error);
            index_ets_1.expect(true).assertTrue();
        };
        function errorCallbackTest(errorCallback) {
            errorCallback("errorCallback");
        }
        let asyncCallback = (error, data) => {
            console.log(data);
            index_ets_1.expect(true).assertTrue();
        };
        function asyncCallbackTest(asyncCallback) {
            asyncCallback({
                code: 1
            }, "asyncCallback");
        }
        index_ets_1.it('testBasic01', 0, async function (done) {
            console.info('[testBasic01] START');
            callbackTest(callback);
            console.info('[testBasic01] END');
            done();
        });
        index_ets_1.it('testBasic02', 0, async function (done) {
            console.info('[testBasic02] START');
            errorCallbackTest(errorCallback);
            console.info('[testBasic02] END');
            done();
        });
        index_ets_1.it('testBasic03', 0, async function (done) {
            console.info('[testBasic03] START');
            asyncCallbackTest(asyncCallback);
            console.info('[testBasic03] END');
            done();
        });
    });
}
exports["default"] = basicJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CalendarJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\CalendarJsunit.test.ets ***!
  \***********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function calendarJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("calendar beforeEach start");
            let options = {
                uri: 'pages/calendar',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get calendar state pages: " + JSON.stringify(pages));
                if (!("calendar" == pages.name)) {
                    console.info("get calendar state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push calendar page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push calendar page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("calendar after each called");
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_colSpace', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_colSpace] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "colSpace": 10,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_colSpace] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_colSpace] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_dailyFiveRowSpace', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_dailyFiveRowSpace] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "dailyFiveRowSpace": 11,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_dailyFiveRowSpace] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_dailyFiveRowSpace] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_dailySixRowSpace', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_dailySixRowSpace] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "dailySixRowSpace": 12,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_dailySixRowSpace] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_dailySixRowSpace] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_lunarHeight', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_lunarHeight] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "lunarHeight": 13,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_lunarHeight] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_lunarHeight] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_underscoreWidth', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_underscoreWidth] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "underscoreWidth": 14,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_underscoreWidth] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_underscoreWidth] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_underscoreLength', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_underscoreLength] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "underscoreLength": 15,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_underscoreLength] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_underscoreLength] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_scheduleMarkerRadius', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_scheduleMarkerRadius] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "scheduleMarkerRadius": 16,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_scheduleMarkerRadius] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_scheduleMarkerRadius] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CurrentDayStyle_boundaryRowOffset', 0, async function (done) {
            console.info('[ACE_calendar_CurrentDayStyle_boundaryRowOffset] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "boundaryRowOffset": 17,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CurrentDayStyle_boundaryRowOffset] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CurrentDayStyle_boundaryRowOffset] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_WeekStyle_weekAndDayRowSpace', 0, async function (done) {
            console.info('[ACE_calendar_WeekStyle_weekAndDayRowSpace] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "weekAndDayRowSpace": 18,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_WeekStyle_weekAndDayRowSpace] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_WeekStyle_weekAndDayRowSpace] change component data error: " + err.message);
            }
            done();
        });
        index_ets_1.it('ACE_calendar_CalendarAttribute_direction', 0, async function (done) {
            console.info('[ACE_calendar_CalendarAttribute_direction] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "direction": Axis.Vertical,
                    }
                };
                var innerEvent = {
                    eventId: 74,
                };
                console.info("[ACE_calendar_CalendarAttribute_direction] start to publish emit");
            }
            catch (err) {
                console.log("[ACE_calendar_CalendarAttribute_direction] change component data error: " + err.message);
            }
            done();
        });
    });
}
exports["default"] = calendarJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CustomDialogControllerJsunit.test.ets":
/*!*************************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\CustomDialogControllerJsunit.test.ets ***!
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function customDialogControllerJsunit() {
    index_ets_1.describe('customDialogControllerTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/customDialogController',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get customDialogController state success " + JSON.stringify(pages));
                if (!("customDialogController" == pages.name)) {
                    console.info("get customDialogController state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push customDialogController page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push customDialogController page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("customDialogControllers after each called");
        });
        index_ets_1.it('testCustomDialogControllers_100', 0, async function (done) {
            console.info('[testCustomDialogControllers_100] START');
            var callback = (eventData) => {
                console.info("[testClickEvent001] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(true);
            };
            var innerEvent = {
                eventId: 236,
            };
            console.info('[testClickEvent001] sendEventByKey ' + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[testClickEvent001] testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = customDialogControllerJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DragEventJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\DragEventJsunit.test.ets ***!
  \************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function dragEventJsunit() {
    index_ets_1.describe('dragEventTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/dragEvent',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get dragEvent state success " + JSON.stringify(pages));
                if (!("dragEvent" == pages.name)) {
                    console.info("get dragEvent state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push dragEvent page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push dragEvent page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("dragEvent after each called");
        });
        index_ets_1.it('dragEventTest_0100', 0, async function (done) {
            console.info('dragEventTest_0100 START');
            let rect = await Utils_1.default.getComponentRect('apple');
            console.info("dragEventTest_0100 rectInfo is " + JSON.stringify(rect));
            let downX = rect.left + (rect.right - rect.left) / 2;
            let downY = rect.top + (rect.bottom - rect.top) / 2;
            let rectOne = await Utils_1.default.getComponentRect('listItem');
            console.info("dragEventTest_0100 rectOneInfo is " + JSON.stringify(rectOne));
            let upX = rectOne.left + (rectOne.right - rectOne.left) / 2;
            let upY = rectOne.top + (rectOne.bottom - rectOne.top) / 2;
            await Utils_1.default.drag(downX, downY, upX, upY, 10);
            let callback = (indexEvent) => {
                console.info("dragEventTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual('onDragStart onAction');
            };
            let indexEvent = {
                eventId: 86,
            };
            console.info('dragEventTest_0100 END');
            done();
        });
        index_ets_1.it('dragEventTest_0200', 0, async function (done) {
            console.info('dragEventTest_0200 START');
            let rect = await Utils_1.default.getComponentRect('orange');
            console.info("dragEventTest_0200 rectInfo is " + JSON.stringify(rect));
            let downX = rect.left + (rect.right - rect.left) / 2;
            let downY = rect.top + (rect.bottom - rect.top) / 2;
            let rectOne = await Utils_1.default.getComponentRect('listItem');
            console.info("dragEventTest_0200 rectOneInfo is " + JSON.stringify(rectOne));
            let upX = rectOne.left + (rectOne.right - rectOne.left) / 2;
            let upY = rectOne.top + (rectOne.bottom - rectOne.top) / 2;
            await Utils_1.default.drag(downX, downY, upX, upY, 10);
            let callback = (indexEvent) => {
                console.info("dragEventTest_0200 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.pointX).assertNotEqual(Null);
                index_ets_1.expect(indexEvent.data.pointY).assertNotEqual(Null);
            };
            let indexEvent = {
                eventId: 87,
            };
            console.info('dragEventTest_0200 END');
            done();
        });
        index_ets_1.it('dragEventTest_0300', 0, async function (done) {
            console.info('dragEventTest_0300 START');
            let rect = await Utils_1.default.getComponentRect('banana');
            console.info("dragEventTest_0300 rectInfo is " + JSON.stringify(rect));
            let downX = rect.left + (rect.right - rect.left) / 2;
            let downY = rect.top + (rect.bottom - rect.top) / 2;
            let rectOne = await Utils_1.default.getComponentRect('listItem');
            console.info("dragEventTest_0300 rectOneInfo is " + JSON.stringify(rectOne));
            let upX = rectOne.left + (rectOne.right - rectOne.left) / 2;
            let upY = rectOne.top + (rectOne.bottom - rectOne.top) / 2;
            await Utils_1.default.drag(downX, downY, upX, upY, 10);
            let callback = (indexEvent) => {
                console.info("dragEventTest_0300 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual('onDragMove onAction');
            };
            let indexEvent = {
                eventId: 88,
            };
            console.info('dragEventTest_0300 END');
            done();
        });
        index_ets_1.it('dragEventTest_0400', 0, async function (done) {
            console.info('dragEventTest_0400 START');
            let rect = await Utils_1.default.getComponentRect('mango');
            console.info("dragEventTest_0400 rectInfo is " + JSON.stringify(rect));
            let downX = rect.left + (rect.right - rect.left) / 2;
            let downY = rect.top + (rect.bottom - rect.top) / 2;
            let rectOne = await Utils_1.default.getComponentRect('listItem');
            console.info("dragEventTest_0400 rectOneInfo is " + JSON.stringify(rectOne));
            let upX = rectOne.right + (rect.right - rect.left);
            let upY = rectOne.bottom + (rect.bottom - rect.top);
            await Utils_1.default.drag(downX, downY, upX, upY, 10);
            let callback = (indexEvent) => {
                console.info("dragEventTest_0400 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual('onDragLeave onAction');
            };
            let indexEvent = {
                eventId: 89,
            };
            console.info('dragEventTest_0400 END');
            done();
        });
        index_ets_1.it('dragEventTest_0500', 0, async function (done) {
            console.info('dragEventTest_0500 START');
            let rect = await Utils_1.default.getComponentRect('strawberry');
            console.info("dragEventTest_0500 rectInfo is " + JSON.stringify(rect));
            let downX = rect.left + (rect.right - rect.left) / 2;
            let downY = rect.top + (rect.bottom - rect.top) / 2;
            let rectOne = await Utils_1.default.getComponentRect('listItem');
            console.info("dragEventTest_0500 rectOneInfo is " + JSON.stringify(rectOne));
            let upX = rectOne.left + (rectOne.right - rectOne.left) / 2;
            let upY = rectOne.top + (rectOne.bottom - rectOne.top) / 2;
            await Utils_1.default.drag(downX, downY, upX, upY, 10);
            let callback = (indexEvent) => {
                console.info("dragEventTest_0500 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual('onDrop onAction');
            };
            let indexEvent = {
                eventId: 90,
            };
            console.info('dragEventTest_0500 END');
            done();
        });
    });
}
exports["default"] = dragEventJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusItemAlignJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\EnmusItemAlignJsunit.test.ets ***!
  \*****************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enumsFlexItemJsunit() {
    index_ets_1.describe('enumsItemAlign', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================enumsFlexItem test beforeEach called===================');
            let options = {
                uri: 'pages/enumsItemAlign',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info('beforeEach get enumsItemAlign state pages:' + JSON.stringify(pages));
                if (!('enumsFlexItem' == pages.name)) {
                    console.info('beforeEach get enumsItemAlign state pages.name:' + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push enumsItemAlignTest page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push enumsItemAlignTest page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================enumsFlexItemTest test after each called===================');
        });
        index_ets_1.it('enumsItemAlignTest_0100', 0, async function (done) {
            console.info('enumsItemAlignTest_0100 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('itemAlign');
            console.info("enumsItemAlignTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("enumsItemAlignTest_0100 component obj is: " + JSON.stringify(obj.$attrs.constructor));
            index_ets_1.expect(obj.$attrs.constructor.alignItems).assertEqual('FlexAlign.SpaceEvenly');
            console.info('enumsItemAlignTest_0100 END');
            done();
        });
    });
}
exports["default"] = enumsFlexItemJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusLineCapStyleJsunit.test.ets":
/*!********************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\EnmusLineCapStyleJsunit.test.ets ***!
  \********************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enumsImageJsunit() {
    index_ets_1.describe('enumsLineCapStyle', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================enumsLineCapStyle test beforeEach called===================');
            let options = {
                uri: 'pages/enumsLineCapStyle',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info('beforeEach get enumsLineCapStyleTest state pages:' + JSON.stringify(pages));
                if (!('enumsFlexItem' == pages.name)) {
                    console.info('beforeEach get enumsLineCapStyleTest state pages.name:' + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push enumsLineCapStyleTest page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push enumsLineCapStyleTest page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================enumsImageTest test after each called===================');
        });
        index_ets_1.it('enumsLineCapStyleTest_0100', 0, async function (done) {
            console.info('enumsLineCapStyleTest_0100 START');
            let strJson = getInspectorByKey('Butt');
            console.info("enumsLineCapStyleTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("enumsLineCapStyleTest_0100 component obj is: " + JSON.stringify(obj));
            console.info('obj.$attrs.strokeLineCap' + obj.$attrs.strokeLineCap);
            index_ets_1.expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
            console.info('enumsLineCapStyleTest_0100 END');
            done();
        });
    });
}
exports["default"] = enumsImageJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FocusJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\FocusJsunit.test.ets ***!
  \********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function focusJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("focus beforeEach start");
            let options = {
                uri: 'pages/focus',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get focus state pages:" + JSON.stringify(pages));
                if (!("focus" == pages.name)) {
                    console.info("get focus state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push focus page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push focus page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("focus after each called");
        });
        index_ets_1.it('focusTest_0100', 0, async function (done) {
            console.info('focusTest_0100 START');
            try {
                let eventData = {
                    data: {
                        "focusable": true
                    }
                };
                let indexEventOne = {
                    eventId: 101,
                };
                console.info("focusTest_0100 start to publish emit");
            }
            catch (err) {
                console.log("focusTest_0100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            console.info('focusTest_0100 END');
            done();
        });
    });
}
exports["default"] = focusJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GeometryTransitionJsunit.test.ets":
/*!*********************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\GeometryTransitionJsunit.test.ets ***!
  \*********************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function geometryTransitionJsunit() {
    index_ets_1.describe('geometryTransitionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/geometryTransition',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get geometryTransition state success " + JSON.stringify(pages));
                if (!("geometryTransition" == pages.name)) {
                    console.info("get geometryTransition state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push geometryTransition page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push geometryTransition page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("geometryTransition after each called");
        });
        index_ets_1.it('geometryTransitionTest_0100', 0, async function (done) {
            console.info('geometryTransitionTest_0100 START');
            let indexEvent = {
                eventId: 104,
            };
            await Utils_1.default.sleep(1000);
            let callback = (indexEvent) => {
                console.info("geometryTransitionTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.btn1).assertEqual(false);
            };
            console.info("geometryTransitionTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('geometryTransitionTest_0100 END');
            done();
        });
    });
}
exports["default"] = geometryTransitionJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GestureModeJsunit.test.ets":
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\GestureModeJsunit.test.ets ***!
  \**************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function fontWeightJsunit() {
    index_ets_1.describe('fontWeightTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/gestureMode',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get gestureMode state success " + JSON.stringify(pages));
                if (!("panel" == pages.name)) {
                    console.info("get gestureMode state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push gestureMode page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push gestureMode page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("gestureMode after each called");
        });
        index_ets_1.it('fillModeText_0100', 0, async function (done) {
            console.info('fillModeText_0100 START');
            let strJson = getInspectorByKey('gestureMode');
            console.info("fillModeText_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("fillModeText_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Flex');
            done();
        });
    });
}
exports["default"] = fontWeightJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ImageJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\ImageJsunit.test.ets ***!
  \********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function imageJsunit() {
    index_ets_1.describe('imageText', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("image beforeEach start");
            let options = {
                uri: 'pages/image',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get image state pages:" + JSON.stringify(pages));
                if (!("image" == pages.name)) {
                    console.info("get image state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push image page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push image page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("image after each called");
        });
        index_ets_1.it('imageTest_0100', 0, async function (done) {
            console.info('imageTest_0100 START');
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('text');
            console.info("imageTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("imageTest_0100 obj.$attrs.content is: " + obj.$attrs.content);
            index_ets_1.expect(obj.$attrs.content).assertEqual('string_hello');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('9.00fp');
            console.info('imageTest_0100 END');
            done();
        });
        index_ets_1.it('imageTest_0200', 0, async function (done) {
            console.info('imageTest_0200 START');
            await Utils_1.default.sleep(3000);
            let strJson = getInspectorByKey('image');
            console.info("imageTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("imageTest_0200 obj.$attrs.src is: " + obj.$attrs.src);
            console.info("imageTest_0200 obj.obj.$type is: " + obj.$type);
            var res = obj.$attrs.src.indexOf('rawfile/test.png');
            console.info("imageTest_0200 result is: " + res);
            var sres = obj.$attrs.src.slice(res, res + 16);
            console.info("imageTest_0200 slice result is: " + sres);
            index_ets_1.expect(obj.$type).assertEqual('Image');
            index_ets_1.expect(obj.$attrs.src.slice(res, res + 16)).assertEqual('rawfile/test.png');
            console.info('imageTest_0200 END');
            done();
        });
    });
}
exports["default"] = imageJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\List.test.ets":
/*!*************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\List.test.ets ***!
  \*************************************************************************************************/
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
const SystemRouterJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SystemRouterJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystemRouterJsunit.test.ets"));
const SystemAppJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SystemAppJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystemAppJsunit.test.ets"));
const PatternLockJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PatternLockJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PatternLockJsunit.test.ets"));
const CustomDialogControllerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CustomDialogControllerJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CustomDialogControllerJsunit.test.ets"));
const OhosPromptJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./OhosPromptJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\OhosPromptJsunit.test.ets"));
const VideoJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./VideoJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\VideoJsunit.test.ets"));
const RefreshJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RefreshJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RefreshJsunit.test.ets"));
const RichTextJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RichTextJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RichTextJsunit.test.ets"));
const TextPickerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextPickerJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextPickerJsunit.test.ets"));
const TextTimerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextTimerJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextTimerJsunit.test.ets"));
const SubscribedAbstractPropertyJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SubscribedAbstractPropertyJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SubscribedAbstractPropertyJsunit.test.ets"));
const AppStorageJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AppStorageJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\AppStorageJsunit.test.ets"));
const SubscribaleAbstractJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SubscribaleAbstractJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SubscribaleAbstractJsunit.test.ets"));
const PathJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PathJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PathJsunit.test.ets"));
const EnmusLineCapStyleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EnmusLineCapStyleJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusLineCapStyleJsunit.test.ets"));
const EnmusItemAlignJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./EnmusItemAlignJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\EnmusItemAlignJsunit.test.ets"));
const PlayModeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PlayModeJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PlayModeJsunit.test.ets"));
const GestureModeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GestureModeJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GestureModeJsunit.test.ets"));
const PanDirectionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PanDirectionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PanDirectionJsunit.test.ets"));
const BasicJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BasicJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BasicJsunit.test.ets"));
const FocusJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./FocusJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FocusJsunit.test.ets"));
const TextAreaJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextAreaJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextAreaJsunit.test.ets"));
const DragEventJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DragEventJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DragEventJsunit.test.ets"));
const CalendarJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CalendarJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CalendarJsunit.test.ets"));
const GeometryTransitionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GeometryTransitionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GeometryTransitionJsunit.test.ets"));
const TextClockJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextClockJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextClockJsunit.test.ets"));
const TextInputJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextInputJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextInputJsunit.test.ets"));
const PolygonJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PolygonJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PolygonJsunit.test.ets"));
const PolylineJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PolylineJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PolylineJsunit.test.ets"));
const ImageJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ImageJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ImageJsunit.test.ets"));
function testsuite() {
    VideoJsunit_test_ets_1.default();
    EnmusItemAlignJsunit_test_ets_1.default();
    PatternLockJsunit_test_ets_1.default();
    DragEventJsunit_test_ets_1.default();
    PolygonJsunit_test_ets_1.default();
    CustomDialogControllerJsunit_test_ets_1.default();
    OhosPromptJsunit_test_ets_1.default();
    RichTextJsunit_test_ets_1.default();
    RefreshJsunit_test_ets_1.default();
    ImageJsunit_test_ets_1.default();
    TextPickerJsunit_test_ets_1.default();
    TextTimerJsunit_test_ets_1.default();
    SubscribedAbstractPropertyJsunit_test_ets_1.default();
    TextClockJsunit_test_ets_1.default();
    AppStorageJsunit_test_ets_1.default();
    SubscribaleAbstractJsunit_test_ets_1.default();
    PathJsunit_test_ets_1.default();
    EnmusLineCapStyleJsunit_test_ets_1.default();
    PlayModeJsunit_test_ets_1.default();
    GestureModeJsunit_test_ets_1.default();
    BasicJsunit_test_ets_1.default();
    FocusJsunit_test_ets_1.default();
    TextAreaJsunit_test_ets_1.default();
    TextInputJsunit_test_ets_1.default();
    PolylineJsunit_test_ets_1.default();
    CalendarJsunit_test_ets_1.default();
    PanDirectionJsunit_test_ets_1.default();
    GeometryTransitionJsunit_test_ets_1.default();
    SystemRouterJsunit_test_ets_1.default();
    SystemAppJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\OhosPromptJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\OhosPromptJsunit.test.ets ***!
  \*************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function ohosPromptJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("OhosPrompt beforeEach start");
            let options = {
                uri: 'pages/ohosPrompt',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get OhosPrompt state pages:" + JSON.stringify(pages));
                if (!("ohosPrompt " == pages.name)) {
                    console.info("get OhosPrompt  state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push OhosPrompt  page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push OhosPrompt  page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("OhosPrompt each called");
        });
        index_ets_1.it('test_OhosPrompt_001', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            var callback = (eventData) => {
                console.info("[test_OhosPrompt_001] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.matrix1).assertEqual("[100, 10]");
            };
            var innerEvent = {
                eventId: 142,
            };
            console.info('[test_OhosPrompt_001] sendEventByKey ' + JSON.stringify(sendEventByKey('rotate5', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[test_OhosPrompt_001] testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = ohosPromptJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PanDirectionJsunit.test.ets":
/*!***************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PanDirectionJsunit.test.ets ***!
  \***************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function fontWeightJsunit() {
    index_ets_1.describe('panDirectionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/panDirection',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get panDirection state success " + JSON.stringify(pages));
                if (!("panDirection" == pages.name)) {
                    console.info("get panDirection state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(3000);
                    console.info("push panDirection page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push panDirection page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("panDirection after each called");
        });
        index_ets_1.it('panDirectionText_0100', 0, async function (done) {
            console.info('panDirectionText_0100 START');
            let strJson = getInspectorByKey('panDirection');
            console.info("panDirectionText_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("panDirectionText_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Flex');
            done();
        });
    });
}
exports["default"] = fontWeightJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PathJsunit.test.ets":
/*!*******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PathJsunit.test.ets ***!
  \*******************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function enableJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("path beforeEach start");
            let options = {
                uri: 'pages/path',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get path state pages: " + JSON.stringify(pages));
                if (!("path" == pages.name)) {
                    console.info("get overlay state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push path page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push path page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("path after each called");
        });
        index_ets_1.it('testPath01', 0, async function (done) {
            console.info('[testPath01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('path1');
            let obj = JSON.parse(strJson);
            console.info("[testPath01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual('300.00px');
            index_ets_1.expect(obj.$attrs.height).assertEqual('10.00px');
            console.info('[testPath01] END');
            done();
        });
        index_ets_1.it('testPath02', 0, async function (done) {
            console.info('[testPath02] START');
            try {
                var eventData = {
                    data: {
                        "height": 200,
                        "commands": "M0 110 L900 0",
                        "width": 200,
                    }
                };
                var innerEvent = {
                    eventId: 151,
                };
                console.info("[testPath02] start to publish emit");
            }
            catch (err) {
                console.log("[testPath02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('path1');
            let obj = JSON.parse(strJson);
            console.info("[testPath02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual('200.00px');
            index_ets_1.expect(obj.$attrs.height).assertEqual('200.00px');
            console.info('testPath02 END');
            done();
        });
    });
}
exports["default"] = enableJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PatternLockJsunit.test.ets":
/*!**************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PatternLockJsunit.test.ets ***!
  \**************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function patternLockJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("patternLock beforeEach start");
            let options = {
                uri: 'pages/patternLock',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get patternLock state pages: " + JSON.stringify(pages));
                if (!("button" == pages.name)) {
                    console.info("get patternLock state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push patternLock page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push patternLock page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("patternLock after each called");
        });
        index_ets_1.it('testPatternLock_01', 0, async function (done) {
            console.info('testPatternLock_01 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("testPatternLock_01 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(true);
            };
            let indexEvent = {
                eventId: 153,
            };
            console.info("testPatternLock_01 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('testPatternLock_01 END');
            done();
        });
    });
}
exports["default"] = patternLockJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PlayModeJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PlayModeJsunit.test.ets ***!
  \***********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function playModeJsunit() {
    index_ets_1.describe('playModeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("playMode beforeEach start");
            let options = {
                uri: 'pages/playMode',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get playMode state pages:" + JSON.stringify(pages));
                if (!("playMode" == pages.name)) {
                    console.info("get playMode state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push playMode page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push playMode page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("playMode after each called");
        });
        index_ets_1.it('playModeTest_0100', 0, async function (done) {
            console.info('playModeTest_0100 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 161,
            };
            let callback = (indexEvent) => {
                console.info("playModeTest_0100 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.playMode).assertEqual(PlayMode.AlternateReverse);
            };
            console.info("playModeTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('playModeTest_0100 END');
            done();
        });
    });
}
exports["default"] = playModeJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PolygonJsunit.test.ets":
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PolygonJsunit.test.ets ***!
  \**********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function polygonJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("polygon beforeEach start");
            let options = {
                uri: 'pages/polygon',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get polygon state pages:" + JSON.stringify(pages));
                if (!("polygon" == pages.name)) {
                    console.info("get polygon state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push polygon page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push polygon page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("polygon after each called");
        });
        index_ets_1.it('testPolygon001', 0, async function (done) {
            console.info('[testPolygon001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('polygon');
            let obj = JSON.parse(strJson);
            console.info("[testPolygon001] obj is: " + JSON.stringify(obj));
            console.info('[testPolygon001] END');
            done();
        });
    });
}
exports["default"] = polygonJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PolylineJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PolylineJsunit.test.ets ***!
  \***********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function polylineJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("polyline beforeEach start");
            let options = {
                uri: 'pages/polyline',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get polyline state pages:" + JSON.stringify(pages));
                if (!("polyline" == pages.name)) {
                    console.info("get polyline state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push polyline page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push polyline page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("polyline after each called");
        });
        index_ets_1.it('testPolyline001', 0, async function (done) {
            console.info('[testPolyline001] START');
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('polyline');
            let obj = JSON.parse(strJson);
            console.info("[testPolyline001] obj is: " + JSON.stringify(obj));
            console.info('[testPolyline001] END');
            done();
        });
    });
}
exports["default"] = polylineJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RefreshJsunit.test.ets":
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\RefreshJsunit.test.ets ***!
  \**********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function refreshJsunit() {
    index_ets_1.describe('refreshTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("refresh beforeEach start");
            let options = {
                uri: 'pages/refresh',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get refresh state pages:" + JSON.stringify(pages));
                if (!("refresh" == pages.name)) {
                    console.info("get refresh state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push refresh page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push refresh page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("refresh after each called");
        });
        index_ets_1.it('testRefresh01', 0, async function (done) {
            console.info('[testRefresh01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('refresh');
            console.info('[testRefresh01 strJson]' + strJson);
            console.info('[testRefresh01] END');
            done();
        });
        index_ets_1.it('testRefresh02', 0, async function (done) {
            console.info('[testRefresh02] START');
            index_ets_1.expect(RefreshStatus.OverDrag).assertEqual(2);
            console.info('[testRefresh02] END');
            done();
        });
        index_ets_1.it('testRefresh03', 0, async function (done) {
            console.info('[testRefresh03] START');
            index_ets_1.expect(RefreshStatus.Inactive).assertEqual(0);
            console.info('[testRefresh03] END');
            done();
        });
    });
}
exports["default"] = refreshJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RichTextJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\RichTextJsunit.test.ets ***!
  \***********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function richTextJsunit() {
    index_ets_1.describe('richTextTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("richText beforeEach start");
            let options = {
                uri: 'pages/richText',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get richText state pages:" + JSON.stringify(pages));
                if (!("richText" == pages.name)) {
                    console.info("get richText state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push richText page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push richText page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("richText after each called");
        });
        index_ets_1.it('testRichText01', 0, async function (done) {
            console.info('[testRichText01] START');
            let strJson = getInspectorByKey('richText');
            console.info('[testRichText01]' + strJson);
            console.info('[testRichText01] END');
            done();
        });
    });
}
exports["default"] = richTextJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SubscribaleAbstractJsunit.test.ets":
/*!**********************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SubscribaleAbstractJsunit.test.ets ***!
  \**********************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


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
function SubscribaleAbstractJsunit() {
    index_ets_1.describe('SubscribaleAbstract', function () {
        /**
        * @tc.number  stateManagement_SubscribaleAbstract_setOrCreate_0100
        * @tc.name    stateManagement SubscribaleAbstract  setOrCreate validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_SubscribaleAbstract_addOwningProperty_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] START');
            let subscriber = new IPropertySubscriber();
            let abstract = new SubscribaleAbstract();
            abstract.addOwningProperty(subscriber);
            let numbers = abstract.owningProperties_;
            abstract.removeOwningProperty(subscriber);
            abstract.removeOwningPropertyById(1);
            abstract.notifyPropertyHasChanged("key1", "value1");
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100
        * @tc.name    stateManagement ISinglePropertyChangeSubscriber  hasChanged validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100] START');
            let subscriber = new ISinglePropertyChangeSubscriber((data) => {
                console.info('[stateManagement_SubscribaleAbstract_addOwningProperty_0100] data = ' + data);
            });
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_ISinglePropertyChangeSubscriber_hasChanged_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_PersistentStorage_0100
        * @tc.name    stateManagement PersistentStorage   validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_PersistentStorage_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_PersistentStorage_0100] Start');
            let persistentStorage = new PersistentStorage(AppStorage, new Storage());
            persistentStorage.PersistProp("key10", "value10");
            let persistProp = {
                "properties": [{
                        key: "colorMode", defaultValue: ColorMode.LIGHT
                    }, {
                        key: "layoutDirection", defaultValue: LayoutDirection.LTR
                    }]
            };
            persistentStorage.PersistProps(persistProp);
            IPropertySubscriber;
            persistentStorage.DeleteProp("colorMode");
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_PersistentStorage_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_IPropertySubscriber_0100
        * @tc.name    stateManagement IPropertySubscriber   validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_IPropertySubscriber_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_IPropertySubscriber_0100] Start');
            let iPropertySubscriber = new IPropertySubscriber();
            let id = iPropertySubscriber.id();
            let aboutToBeDeleted = iPropertySubscriber.aboutToBeDeleted();
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_IPropertySubscriber_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_IPropertySubscriber_0100
        * @tc.name    stateManagement IPropertySubscriber   validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_IPropertySubscriber_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_IPropertySubscriber_0100] Start');
            let iPropertySubscriber = new IPropertySubscriber();
            let id = iPropertySubscriber.id();
            let aboutToBeDeleted = iPropertySubscriber.aboutToBeDeleted();
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_IPropertySubscriber_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_SyncedPropertyOneWay_0100
        * @tc.name    stateManagement stateManagement_SyncedPropertyOneWay_0100   validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_SyncedPropertyOneWay_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_SyncedPropertyOneWay_0100] Start');
            let oneWay = new SyncedPropertyOneWay(new SubscribedAbstractProperty());
            oneWay.set("key12");
            let key12 = oneWay.get();
            oneWay.hasChanged("key12");
            oneWay.aboutToBeDeleted(new SubscribedAbstractProperty());
            let source_ = oneWay.source_;
            let wrappedValue_ = oneWay.oneWay;
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_SyncedPropertyOneWay_0100] END');
            done();
        });
        /**
        * @tc.number  stateManagement_SyncedPropertyTwoWay_0100
        * @tc.name    stateManagement SyncedPropertyTwoWay   validation
        * @tc.desc    Function test
        */
        index_ets_1.it('stateManagement_SyncedPropertyTwoWay_0100', 0, function (done) {
            done();
            return;
            console.info('[stateManagement_SyncedPropertyTwoWay_0100] Start');
            let twoWay = new SyncedPropertyTwoWay(new SubscribedAbstractProperty());
            twoWay.set("key12");
            let key12 = twoWay.get();
            twoWay.hasChanged("key12");
            twoWay.aboutToBeDeleted(new SubscribedAbstractProperty());
            let source_ = twoWay.source_;
            let wrappedValue_ = twoWay.oneWay;
            index_ets_1.expect(true).assertTrue();
            console.info('[stateManagement_SyncedPropertyTwoWay_0100] END');
            done();
        });
    });
}
exports["default"] = SubscribaleAbstractJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SubscribedAbstractPropertyJsunit.test.ets":
/*!*****************************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SubscribedAbstractPropertyJsunit.test.ets ***!
  \*****************************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


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
function subscribedAbstractPropertyJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.it('subscribedAbstractProperty0100', 0, async function (done) {
            console.info('[subscribedAbstractProperty0100] START');
            if (true) {
                done();
                return;
            }
            const subscribedAbstractProperty = new SubscribedAbstractProperty('subscribtest');
            let number = subscribedAbstractProperty.numberOfSubscrbers();
            subscribedAbstractProperty.notifyPropertyRead();
            subscribedAbstractProperty.notifyHasChanged('subscribtest');
            subscribedAbstractProperty.unlinkSuscriber(0);
            subscribedAbstractProperty.createOneWaySync('subscribtest');
            subscribedAbstractProperty.createTwoWaySync('subscribtest');
            subscribedAbstractProperty.set('subscribtest');
            subscribedAbstractProperty.get();
            subscribedAbstractProperty.info();
            subscribedAbstractProperty.info_ = "subscribtest";
            subscribedAbstractProperty.subscribers_ = 'subscribtest';
            console.info('[subscribedAbstractProperty0100] END');
            done();
        });
    });
}
exports["default"] = subscribedAbstractPropertyJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystemAppJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SystemAppJsunit.test.ets ***!
  \************************************************************************************************************/
/***/ ((__unused_webpack_module, exports, __webpack_require__) => {


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
var app = globalThis.requireNativeModule('system.app');
function systemAppJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.it('systemAppTest_0100', 0, async function (done) {
            console.info('systemAppTest_0100 START');
            var a = app.getInfo();
            console.log('systemAppTest_0100 END' + JSON.stringify(a));
            index_ets_1.expect(a.appID == "com.open.harmony.acetestfour").assertTrue();
            console.info('systemAppTest_0100 END');
            done();
        });
        index_ets_1.it('systemAppTest_0200', 0, async function (done) {
            console.info('systemAppTest_0200 START');
            var a = app.getInfo();
            console.log('systemAppTest_0200 END' + JSON.stringify(a));
            index_ets_1.expect(a.appName == "$string:entry_MainAbility").assertTrue();
            console.info('systemAppTest_0200 END');
            done();
        });
        index_ets_1.it('systemAppTest_0300', 0, async function (done) {
            console.info('systemAppTest_0300 START');
            var a = app.getInfo();
            console.log('systemAppTest_0300 END' + JSON.stringify(a));
            index_ets_1.expect(a.versionName == "1.0.0").assertTrue();
            console.info('systemAppTest_0300 END');
            done();
        });
        index_ets_1.it('systemAppTest_0400', 0, async function (done) {
            console.info('systemAppTest_0400 START');
            try {
                var a = 2000;
                app.requestFullWindow(a);
            }
            catch (err) {
                console.log("systemAppTest_0400 error: " + err);
            }
            console.info('systemAppTest_0400 END');
            done();
        });
        index_ets_1.it('systemAppTest_0500', 0, async function (done) {
            console.info('systemAppTest_0500 START');
            try {
                var visible = true;
                app.screenOnVisible(visible);
            }
            catch (err) {
                console.log("systemAppTest_0500 error: " + err);
            }
            console.info('systemAppTest_0500 END');
            done();
        });
        index_ets_1.it('systemAppTest_0600', 0, async function (done) {
            console.info('systemAppTest_0600 START');
            var a = 100;
            app.setImageCacheCount(a);
            console.info('systemAppTest_0600 END');
            done();
        });
        index_ets_1.it('systemAppTest_0700', 0, async function (done) {
            console.info('systemAppTest_0700 START');
            var a = 104857600;
            app.setImageRawDataCacheSize(a);
            console.info('systemAppTest_0700 END');
            done();
        });
        index_ets_1.it('systemAppTest_0800', 0, async function (done) {
            console.info('systemAppTest_0800 START');
            var a = 1048;
            app.setImageFileCacheSize(a);
            console.info('systemAppTest_0800 END');
            done();
        });
        index_ets_1.it('systemAppTest_0900', 0, async function (done) {
            console.info('systemAppTest_0900 START');
            app.terminate();
            console.info('systemAppTest_0900 END');
            done();
        });
    });
}
exports["default"] = systemAppJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystemRouterJsunit.test.ets":
/*!***************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SystemRouterJsunit.test.ets ***!
  \***************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function systemRouterJsunit() {
    index_ets_1.describe('systemRouterTest', function () {
        index_ets_1.it('systemRouterTest001', 0, async function (done) {
            console.info('[systemRouterTest001] START');
            let options = {
                uri: 'pages/systemRouterA',
            };
            try {
                let result = await router.push(options);
                await Utils_1.default.sleep(1000);
                console.info("[systemRouterTest001] push page success " + JSON.stringify(result));
                let pages = router.getState();
                index_ets_1.expect(pages.name).assertEqual('systemRouterA');
                index_ets_1.expect(pages.path).assertEqual('pages/');
            }
            catch (err) {
                console.error("[systemRouterTest001] push page error: " + err);
            }
            await Utils_1.default.sleep(2000);
            done();
        });
        index_ets_1.it('systemRouterTest002', 0, async function (done) {
            console.info('[systemRouterTest002] START');
            let options = {
                uri: 'pages/systemRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[systemRouterTest002] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[systemRouterTest002] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1500);
            let callback = (paramsEvent) => {
                console.info("[systemRouterTest002] get state result is: " + JSON.stringify(paramsEvent));
                index_ets_1.expect(paramsEvent.data.params).assertEqual('B Page');
            };
            let paramsEvent = {
                eventId: 211,
            };
            console.info("[systemRouterTest002] click push button result is: "
                + JSON.stringify(sendEventByKey('pushButtonA', 10, "")));
            await Utils_1.default.sleep(1000);
            router.back();
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('systemRouterTest003', 0, async function (done) {
            console.info('[systemRouterTest003] START');
            await Utils_1.default.sleep(1000);
            router.clear();
            await Utils_1.default.sleep(2000);
            let size = router.getLength();
            console.info("[systemRouterTest003] size" + size);
            index_ets_1.expect(size).assertEqual("1");
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('systemRouterTest004', 0, async function (done) {
            console.info('[systemRouterTest004] START');
            router.clear();
            await Utils_1.default.sleep(1000);
            let options = {
                uri: 'pages/systemRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[systemRouterTest004] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[systemRouterTest004] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1000);
            let optionsB = {
                uri: 'pages/systemRouterB'
            };
            try {
                let result = await router.replace(optionsB);
                console.info("[systemRouterTest004] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[systemRouterTest004] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1500);
            let size = router.getLength();
            console.info("[systemRouterTest004] size" + size);
            index_ets_1.expect(size).assertEqual("2");
            done();
        });
        index_ets_1.it('systemRouterTest005', 0, async function (done) {
            console.info('[systemRouterTest005] START');
            let options = {
                uri: 'pages/systemRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[systemRouterTest005] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[systemRouterTest005] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1000);
            router.clear();
            await Utils_1.default.sleep(1500);
            let callback = (paramsEvent) => {
                console.info("[systemRouterTest005] get state result is: " + JSON.stringify(paramsEvent));
                index_ets_1.expect(paramsEvent.data.params).assertEqual('B Page');
            };
            let paramsEvent = {
                eventId: 211,
            };
            console.info("[systemRouterTest005] click replace button result is: "
                + JSON.stringify(sendEventByKey('ReplaceButtonA', 10, "")));
            done();
        });
    });
}
exports["default"] = systemRouterJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextAreaJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\TextAreaJsunit.test.ets ***!
  \***********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textAreaJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("textArea beforeEach start");
            let options = {
                uri: 'pages/textArea',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get textArea state pages:" + JSON.stringify(pages));
                if (!("textArea" == pages.name)) {
                    console.info("get textArea state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push textArea page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push textArea page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("textArea after each called");
        });
        index_ets_1.it('textAreaTest01', 0, async function (done) {
            console.info('[textAreaTest01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('TextArea');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('30.00fp');
            console.info('textAreaTest01 END');
            done();
        });
        index_ets_1.it('textAreaTest02', 0, async function (done) {
            console.info('[textAreaTest02] START');
            try {
                var eventData = {
                    data: {
                        "fontSize": '50',
                    }
                };
                var innerEvent = {
                    eventId: 215,
                };
                console.info("[textAreaTest02] start to publish emit");
            }
            catch (err) {
                console.log("[textAreaTest02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('50.00fp');
            console.info('textAreaTest02 END');
            done();
        });
        index_ets_1.it('textAreaTest03', 0, async function (done) {
            console.info('[textAreaTest03] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest03] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FF000000');
            console.info('textAreaTest03 END');
            done();
        });
        index_ets_1.it('textAreaTest04', 0, async function (done) {
            console.info('[textAreaTest04] START');
            try {
                var eventData = {
                    data: {
                        "fontColor": '#FFFF0000',
                    }
                };
                var innerEvent = {
                    eventId: 216,
                };
                console.info("[textAreaTest04] start to publish emit");
            }
            catch (err) {
                console.log("[textAreaTest04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest04] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFF0000');
            console.info('textAreaTest04 END');
            done();
        });
        index_ets_1.it('textAreaTest05', 0, async function (done) {
            console.info('[testArea05] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest05] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Center');
            console.info('textAreaTest05 END');
            done();
        });
        index_ets_1.it('textAreaTest06', 0, async function (done) {
            console.info('[textAreaTest06] START');
            try {
                var eventData = {
                    data: {
                        "textAlign": 'TextAlign.Start',
                    }
                };
                var innerEvent = {
                    eventId: 217,
                };
                console.info("[textAreaTest06] start to publish emit");
            }
            catch (err) {
                console.log("[textAreaTest06] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest06] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            console.info('textAreaTest06 END');
            done();
        });
        index_ets_1.it('textAreaTest07', 0, async function (done) {
            console.info('[textAreaTest07] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest07] obj is: " + JSON.stringify(obj.$attrs.constructor));
            index_ets_1.expect(obj.$attrs.constructor.text).assertEqual(undefined);
            console.info('textAreaTest07 END');
            done();
        });
        index_ets_1.it('textAreaTest08', 0, async function (done) {
            console.info('[textAreaTest08] START');
            try {
                var eventData = {
                    data: {
                        "text": 'TextArea_1',
                    }
                };
                var innerEvent = {
                    eventId: 218,
                };
                console.info("[textAreaTest08] start to publish emit");
            }
            catch (err) {
                console.log("[textAreaTest08] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest08] obj is: " + JSON.stringify(obj.$attrs.constructor));
            index_ets_1.expect(obj.$attrs.constructor.text).assertEqual(undefined);
            console.info('textAreaTest08 END');
            done();
        });
        index_ets_1.it('textAreaTest09', 0, async function (done) {
            console.info('[textAreaTest09] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest09] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            console.info('textAreaTest09 END');
            done();
        });
        index_ets_1.it('textAreaTest10', 0, async function (done) {
            console.info('[textAreaTest10] START');
            try {
                var eventData = {
                    data: {
                        "textAlign": TextAlign.Start,
                    }
                };
                var innerEvent = {
                    eventId: 218,
                };
                console.info("[textAreaTest10] start to publish emit");
            }
            catch (err) {
                console.log("[textAreaTest10] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textArea');
            let obj = JSON.parse(strJson);
            console.info("[textAreaTest10] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            console.info('textAreaTest10 END');
            done();
        });
    });
}
exports["default"] = textAreaJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextClockJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\TextClockJsunit.test.ets ***!
  \************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textClockJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("text beforeEach start");
            let options = {
                uri: 'pages/textClock',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get text state pages:" + JSON.stringify(pages));
                if (!("text" == pages.name)) {
                    console.info("get text state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push text page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push text page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("text after each called");
        });
        index_ets_1.it('textClockTest01', 0, async function (done) {
            console.info('textClockTest01 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textClock');
            let obj = JSON.parse(strJson);
            console.info("textClockTest01 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('30.00fp');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('textClockTest02', 0, async function (done) {
            console.info('[textClockTest02] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSize": 30
                    }
                };
                var innerEvent = {
                    eventId: 219,
                };
                console.info("[textClockTest02] start to publish emit");
            }
            catch (err) {
                console.log("[textClockTest02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('textClock');
            let objNew = JSON.parse(strJsonNew);
            console.info("[textClockTest02] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('30.00fp');
            done();
        });
        index_ets_1.it('textClockTest03', 0, async function (done) {
            console.info('[textClockTest03] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('textClock');
            console.info("[textClockTest03] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[textClockTest03] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFF0000');
            done();
        });
        index_ets_1.it('textClockTest04', 0, async function (done) {
            console.info('[textClockTest04] START');
            try {
                let eventData = {
                    data: {
                        "fontColor": '#FF000990'
                    }
                };
                let indexEvent = {
                    eventId: 220,
                };
                console.info("[textClockTest04] start to publish emit");
            }
            catch (err) {
                console.log("[textClockTest04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('textClock');
            console.info("[textClockTest04] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[textClockTest04] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FF000990');
            done();
        });
        index_ets_1.it('textClockTest05', 0, async function (done) {
            console.info('[textClockTest05] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textClock');
            let obj = JSON.parse(strJson);
            console.info("[textClockTest05] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.format).assertEqual('hhmmss');
            console.info('textClockTest05 END');
            done();
        });
        index_ets_1.it('textClockTest06', 0, async function (done) {
            console.info('[textClockTest06] START');
            try {
                var eventData = {
                    data: {
                        "format": '20',
                    }
                };
                var innerEvent = {
                    eventId: 221,
                };
                console.info("[textClockTest06] start to publish emit");
            }
            catch (err) {
                console.log("[textClockTest06] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textClock');
            let obj = JSON.parse(strJson);
            console.info("[textClockTest06] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.format).assertEqual('20');
            console.info('textClockTest06 END');
            done();
        });
    });
}
exports["default"] = textClockJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextInputJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\TextInputJsunit.test.ets ***!
  \************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textInputJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("textInput beforeEach start");
            let options = {
                uri: 'pages/textInput',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get textInput state pages:" + JSON.stringify(pages));
                if (!("textInput" == pages.name)) {
                    console.info("get textInput state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push textInput page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push textInput page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("textInput after each called");
        });
        index_ets_1.it('textInputTest01', 0, async function (done) {
            console.info('[textInputTest01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('TextArea');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('16.00fp');
            console.info('textInputTest01 END');
            done();
        });
        index_ets_1.it('textInputTest02', 0, async function (done) {
            console.info('[textInputTest02] START');
            try {
                var eventData = {
                    data: {
                        "fontSize": '16',
                    }
                };
                var innerEvent = {
                    eventId: 225,
                };
                console.info("[textInputTest02] start to publish emit");
            }
            catch (err) {
                console.log("[textInputTest02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('16.00fp');
            done();
        });
        index_ets_1.it('textInputTest03', 0, async function (done) {
            console.info('[textInputTest03] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('TextInput');
            console.info("[textInputTest03] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[textInputTest03] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#E6000000');
            done();
        });
        index_ets_1.it('textInputTest04', 0, async function (done) {
            console.info('[textInputTest04] START');
            try {
                var eventData = {
                    data: {
                        "fontColor": Color.Red
                    }
                };
                var innerEvent = {
                    eventId: 225,
                };
                console.info("[textInputTest04] start to publish emit");
            }
            catch (err) {
                console.log("[textInputTest04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest04] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#E6000000');
            done();
        });
        index_ets_1.it('textInputTest05', 0, async function (done) {
            console.info('[textInputTest05] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest05] obj is: " + JSON.stringify(obj));
            console.info("[textInputTest05] obj is: " + JSON.stringify(obj.$attrs.inputType));
            index_ets_1.expect(obj.$attrs.inputType).assertEqual(undefined);
            done();
        });
        index_ets_1.it('textInputTest06', 0, async function (done) {
            console.info('[textInputTest06] START');
            try {
                var eventData = {
                    data: {
                        "type": 'InputType.Email',
                    }
                };
                var innerEvent = {
                    eventId: 225,
                };
                console.info("[textInputTest06] start to publish emit");
            }
            catch (err) {
                console.log("[textInputTest06] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest06] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.inputType).assertEqual(undefined);
            done();
        });
        index_ets_1.it('textInputTest07', 0, async function (done) {
            console.info('[textInputTest07] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('TextInput');
            console.info("[textInputTest07] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[textInputTest07] textAlign:" + obj.$attrs.textAlign);
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            done();
        });
        index_ets_1.it('textInputTest08', 0, async function (done) {
            console.info('[textInputTest08] START');
            try {
                var eventData = {
                    data: {
                        "textAlign": 'TextAlign.Start'
                    }
                };
                var innerEvent = {
                    eventId: 225,
                };
                console.info("[textInputTest08] start to publish emit");
            }
            catch (err) {
                console.log("[textInputTest08] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('TextInput');
            let obj = JSON.parse(strJson);
            console.info("[textInputTest08] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            done();
        });
    });
}
exports["default"] = textInputJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextPickerJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\TextPickerJsunit.test.ets ***!
  \*************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textPickerJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("button beforeEach start");
            let options = {
                uri: 'pages/textPickerDialog',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get textPickerDialog state pages: " + JSON.stringify(pages));
                if (!("textPickerDialog" == pages.name)) {
                    console.info("get textPickerDialog state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push textPickerDialog page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push textPickerDialog page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("textPickerDialog after each called");
        });
        index_ets_1.it('testTextPickerDialog0100', 0, async function (done) {
            console.info('[testTextPickerDialog0100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textPickerDialog');
            let obj = JSON.parse(strJson);
            console.info("[testTextPickerDialog0100] component obj is: " + JSON.stringify(obj));
            console.info("[testTextPickerDialog0100] expect(obj.$type) is: " + (obj.$type));
            console.info("[testTextPickerDialog0100] obj.$attrs.type is: " + (obj.$attrs.type));
            done();
        });
        index_ets_1.it('testTextPickerDialog0200', 0, async function (done) {
            console.info('[testTextPickerDialog0200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textPickerDialog');
            let obj = JSON.parse(strJson);
            if (true) {
                done();
                return;
            }
            const textPickerDialogOption = new textPickerDialogOption();
            textPickerDialogOption.defaultPickerItemHeight = 20;
            const textPickerAttribute = new TextPickerAttribute();
            textPickerAttribute.defaultPickerItemHeight = 20;
            const textPickerOption = new TextPickerOption();
            textPickerOption.value = "textPickerOptionTest";
            done();
        });
    });
}
exports["default"] = textPickerJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\TextTimerJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\TextTimerJsunit.test.ets ***!
  \************************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function textTimerJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("textTimer beforeEach start");
            let options = {
                uri: 'pages/textTimer',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get textTimer state pages: " + JSON.stringify(pages));
                if (!("textTimer" == pages.name)) {
                    console.info("get textTimer state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push textTimer page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push textTimer page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("textPickerDialog after each called");
        });
        index_ets_1.it('textTimer0100', 0, async function (done) {
            console.info('[textTimer0100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textTimer');
            let obj = JSON.parse(strJson);
            console.info("[textTimer0100] component obj is: " + JSON.stringify(obj));
            console.info("[textTimer0100] expect(obj.$type) is: " + (obj.$type));
            console.info("[textTimer0100] obj.$attrs.type is: " + (obj.$attrs.type));
            if (true) {
                done();
                return;
            }
            index_ets_1.expect(obj.$type).assertEqual('TextTimer');
            done();
        });
        index_ets_1.it('textTimer0200', 0, async function (done) {
            console.info('[textTimer0100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textTimer');
            if (true) {
                done();
                return;
            }
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj).assertEqual('TextTimerAttribute');
            done();
        });
        index_ets_1.it('textTimer0300', 0, async function (done) {
            console.info('[textTimer0300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('textTimer');
            if (true) {
                done();
                return;
            }
            const textTimerAttribute = new TextTimerAttribute();
            textTimerAttribute.onTimer((utc, elapsedTime) => {
                console.info('textTimer notCountDown utc is：' + utc + ', elapsedTime: ' + elapsedTime);
            });
            textTimerAttribute.fontColor(Color.Black);
            textTimerAttribute.fontSize(50);
            textTimerAttribute.format('hh:mm:ss.ms');
            done();
        });
    });
}
exports["default"] = textTimerJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets":
/*!*********************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\Utils.ets ***!
  \*********************************************************************************************/
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

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\VideoJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\VideoJsunit.test.ets ***!
  \********************************************************************************************************/
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
var router = globalThis.requireNativeModule('system.router');
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function videoJsunit() {
    index_ets_1.describe('videoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("video beforeEach start");
            let options = {
                uri: 'pages/video',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get video state pages:" + JSON.stringify(pages));
                if (!("video" == pages.name)) {
                    console.info("get video state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push video page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push video page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("video after each called");
        });
        index_ets_1.it('testVideo01', 0, async function (done) {
            console.info('[testVideo01] START');
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            index_ets_1.expect(objNew.$type).assertEqual('Video');
            console.info('[testVideo01] END');
            done();
        });
        index_ets_1.it('testVideo02', 0, async function (done) {
            console.info('[testVideo02] START');
            try {
                var eventData = {
                    data: {
                        "progressRates": PlaybackSpeed.Speed_Forward_2_00_X,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo02] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo02] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo02] END');
            done();
        });
        index_ets_1.it('testVideo03', 0, async function (done) {
            console.info('[testVideo03] START ');
            try {
                var eventData = {
                    data: {
                        "progressRates": PlaybackSpeed.Speed_Forward_1_75_X,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo03] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo03] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo03] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo03] END');
            done();
        });
        index_ets_1.it('testVideo04', 0, async function (done) {
            console.info('[testVideo04] START');
            try {
                var eventData = {
                    data: {
                        "progressRates": PlaybackSpeed.Speed_Forward_1_25_X,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo04] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo04] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo04] END');
            done();
        });
        index_ets_1.it('testVideo05', 0, async function (done) {
            console.info('[testVideo05] START');
            try {
                var eventData = {
                    data: {
                        "progressRates": PlaybackSpeed.Speed_Forward_1_00_X,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo05] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo05] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo05] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo05] END');
            done();
        });
        index_ets_1.it('testVideo06', 0, async function (done) {
            console.info('[testVideo06] START');
            try {
                var eventData = {
                    data: {
                        "progressRates": PlaybackSpeed.Speed_Forward_0_75_X,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo06] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo06] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo06] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo06] END');
            done();
        });
        index_ets_1.it('testVideo07', 0, async function (done) {
            console.info('[testVideo07] START');
            try {
                var eventData = {
                    data: {
                        "isStopped": true,
                    }
                };
                var innerEvent = {
                    eventId: 235,
                };
                console.info("[testVideo07] start to publish emit");
            }
            catch (err) {
                console.log("[testVideo07] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('video');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testVideo07] component objNew is: " + JSON.stringify(objNew));
            console.info('[testVideo07] END');
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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\pages\\index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map