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

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\AnimationStatusJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\AnimationStatusJsunit.test.ets ***!
  \******************************************************************************************************************/
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
function animationStatusJsunit() {
    index_ets_1.describe('animationStatus', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/animationStatus',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get animationStatus state success " + JSON.stringify(pages));
                if (!("animationStatus" == pages.name)) {
                    console.info("get animationStatus state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push animationStatus page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push animationStatus page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("animationStatus after each called");
        });
        index_ets_1.it('animationStatus01', 0, async function (done) {
            console.info('[animationStatus01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('ImageAnimator');
            let obj = JSON.parse(strJson);
            console.info("[animationStatus01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('ImageAnimator');
            console.info('[animationStatus01] END');
            done();
        });
        index_ets_1.it('animationStatus02', 0, async function (done) {
            console.info('[animationStatus02] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('ImageAnimator');
            let obj = JSON.parse(strJson);
            console.info("[animationStatus02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.state).assertEqual('AnimationStatus.Initial');
            console.info('[animationStatus02] END');
            done();
        });
        index_ets_1.it('animationStatus03', 0, async function (done) {
            console.info('animationStatus03 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("animationStatus03 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.animationStatus).assertEqual(AnimationStatus.Paused);
            };
            let indexEvent = {
                eventId: 56,
            };
            console.info("animationStatus03 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('animationStatus03 END');
            done();
        });
        index_ets_1.it('animationStatus04', 0, async function (done) {
            console.info('animationStatus04 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("animationStatus04 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.animationStatus).assertEqual(AnimationStatus.Stopped);
            };
            let indexEvent = {
                eventId: 57,
            };
            console.info("animationStatus04 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('animationStatus04 END');
            done();
        });
    });
}
exports["default"] = animationStatusJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BindMenuJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\BindMenuJsunit.test.ets ***!
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
function aboutToDisappearJsunit() {
    index_ets_1.describe('bindMenuTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("bindMenu beforeEach start");
            let options = {
                uri: 'pages/bindMenu',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get bindMenu state pages:" + JSON.stringify(pages));
                if (!("bindMenu" == pages.name)) {
                    console.info("get bindMenu state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push bindMenu page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push bindMenu page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("bindMenu after each called");
        });
        index_ets_1.it('bindMenuTest_0100', 0, async function (done) {
            console.info('bindMenuTest_0100 START');
            console.info("bindMenuTest_0100 text click result is: " + JSON.stringify(sendEventByKey('text', 10, "")));
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("bindMenuTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(true);
            };
            let indexEvent = {
                eventId: 64,
            };
            console.info("bindMenuTest_0100 button click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('bindMenuTest_0100 END');
            done();
        });
    });
}
exports["default"] = aboutToDisappearJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BindPopupJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\BindPopupJsunit.test.ets ***!
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
function customPopupOptionJsunit() {
    index_ets_1.describe('bindPopupTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/bindPopup',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get bindPopup state success " + JSON.stringify(pages));
                if (!("bindPopup" == pages.name)) {
                    console.info("get bindPopup state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push bindPopup page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push bindPopup page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("bindPopup after each called");
        });
        index_ets_1.it('bindPopupTest_0100', 0, async function (done) {
            console.info('bindPopupTest_0100 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("bindPopupTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.enableArrow).assertEqual(true);
                index_ets_1.expect(indexEvent.data.maskColor).assertEqual(0x33000000);
            };
            let indexEvent = {
                eventId: 67,
            };
            console.info("bindPopupTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info("bindPopupTest_0100 click Two result is: " + JSON.stringify(sendEventByKey('image', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('bindPopupTest_0100 END');
            done();
        });
        index_ets_1.it('bindPopupTest_0200', 0, async function (done) {
            console.info('bindPopupTest_0200 START');
            try {
                let eventData = {
                    data: {
                        "enableArrow": false,
                        "maskColor": 0x33000009
                    }
                };
                let indexEvent = {
                    eventId: 68,
                };
                console.info("bindPopupTest_0200 start to publish emit");
            }
            catch (err) {
                console.log("bindPopupTest_0200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1500);
            let callbackOne = (indexEventOne) => {
                console.info("bindPopupTest_0200 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.enableArrow).assertEqual(false);
                index_ets_1.expect(indexEventOne.data.maskColor).assertEqual(0x33000009);
            };
            let indexEventOne = {
                eventId: 66,
            };
            console.info("bindPopupTest_0200 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('bindPopupTest_0200 END');
            done();
        });
        index_ets_1.it('bindPopupTest_0300', 0, async function (done) {
            console.info('bindPopupTest_0300 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("bindPopupTest_0300 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.placementOnTop).assertEqual(false);
            };
            let indexEvent = {
                eventId: 65,
            };
            console.info("bindPopupTest_0300 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('bindPopupTest_0300 END');
            done();
        });
    });
}
exports["default"] = customPopupOptionJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ConfigurationJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\ConfigurationJsunit.test.ets ***!
  \****************************************************************************************************************/
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
function transFormJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("prompt beforeEach start");
            let options = {
                uri: 'pages/configuration',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get prompt state pages:" + JSON.stringify(pages));
                if (!("prompt " == pages.name)) {
                    console.info("get prompt state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push prompt  page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push prompt  page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("prompt each called");
        });
        index_ets_1.it('configurationTest_0100', 0, async function (done) {
            console.info('configurationTest_0100 is start');
            try {
                let callBackConfiguration = (backData) => {
                    console.info("configurationTest_0100 get configurationEvent result is: " + JSON.stringify(backData));
                    index_ets_1.expect(backData.data.COUNTRY).assertEqual('');
                    index_ets_1.expect(backData.data.DIR).assertEqual('ltr');
                };
                var configurationEvent = {
                    eventId: 78,
                };
            }
            catch (err) {
                console.info("configurationTest_0100 on configurationEvent err : " + JSON.stringify(err));
            }
            console.info("testAppear01 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            console.info('[configurationTest01] END');
            done();
        });
    });
}
exports["default"] = transFormJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CurvesJsunit.test.ets":
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\CurvesJsunit.test.ets ***!
  \*********************************************************************************************************/
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
function curvesJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("curves beforeEach start");
            let options = {
                uri: 'pages/curves',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get curves state pages:" + JSON.stringify(pages));
                if (!("curves" == pages.name)) {
                    console.info("get curves state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push curves page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push curves page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("curves after each called");
        });
    });
}
exports["default"] = curvesJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DatePickerJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\DatePickerJsunit.test.ets ***!
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
function datePickerJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/datePicker',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get datePicker state success " + JSON.stringify(pages));
                if (!("datePicker" == pages.name)) {
                    console.info("get datePicker state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push datePicker page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push datePicker page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("datePicker after each called");
        });
        index_ets_1.it('datePickerTest_0100', 0, async function (done) {
            console.info('datePickerText_0100 START');
            let strJson = getInspectorByKey('datePicker');
            console.info("datePickerText_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("datePickerText_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('DatePicker');
            console.info('datePickerTest_0200 END');
            done();
        });
        index_ets_1.it('datePickerTest_0300', 0, async function (done) {
            console.info('datePickerTest_0300 START');
            try {
                let eventData = {
                    data: {
                        "useMilitaryTime": "false",
                    }
                };
                let indexEvent = {
                    eventId: 81,
                };
                console.info("datePickerTest_0300 start to publish emit");
            }
            catch (err) {
                console.log("datePickerTest_0300 change component data error: " + err.message);
            }
            let callback = (indexEventOne) => {
                console.info("datePickerTest_0300 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(obj.$attrs.useMilitaryTime).assertEqual('false');
            };
            let indexEventOne = {
                eventId: 80,
            };
            console.info("datePickerTest_0300 click result is: " + JSON.stringify(sendEventByKey('datePicker', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('datePickerTest_0300 END');
            done();
        });
    });
}
exports["default"] = datePickerJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Direction2Jsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\Direction2Jsunit.test.ets ***!
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
function direction2Jsunit() {
    index_ets_1.describe('direction2Test', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/direction2',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get direction state success " + JSON.stringify(pages));
                if (!("direction2" == pages.name)) {
                    console.info("get direction state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push direction page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push direction page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("direction after each called");
        });
        index_ets_1.it('direction2Test_0100', 0, async function (done) {
            console.info('direction2Test_0100 START');
            let strJson = getInspectorByKey('direction');
            console.info("direction2Test_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("direction2Test_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.direction).assertEqual("Direction.Ltr");
            done();
        });
        index_ets_1.it('direction2Test_0200', 0, async function (done) {
            console.info('direction2Test_0200 START');
            try {
                let eventData = {
                    data: {
                        "direction": Direction.Rtl,
                    }
                };
                let indexEvent = {
                    eventId: 82,
                };
                console.info("direction2Test_0200 start to publish emit");
            }
            catch (err) {
                console.log("direction2Test_0200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonNew = getInspectorByKey('direction');
            let objNew = JSON.parse(strJsonNew);
            console.info("direction2Test_0200 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.direction).assertEqual('Direction.Rtl');
            console.info('direction2Test_0200 END');
            done();
        });
        index_ets_1.it('direction2Test_0300', 0, async function (done) {
            console.info('direction2Test_0300 START');
            try {
                let eventData = {
                    data: {
                        "direction": Direction.Auto,
                    }
                };
                let indexEvent = {
                    eventId: 83,
                };
                console.info("direction2Test_0300 start to publish emit");
            }
            catch (err) {
                console.log("direction2Test_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonNew = getInspectorByKey('direction');
            let objNew = JSON.parse(strJsonNew);
            console.info("direction2Test_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.direction).assertEqual('Direction.Auto');
            console.info('direction2Test_0300 END');
            done();
        });
    });
}
exports["default"] = direction2Jsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DirectionJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\DirectionJsunit.test.ets ***!
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
function directionJsunit() {
    index_ets_1.describe('directionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/direction',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get direction state success " + JSON.stringify(pages));
                if (!("direction" == pages.name)) {
                    console.info("get direction state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push direction page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push direction page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("direction after each called");
        });
        index_ets_1.it('directionTest_0100', 0, async function (done) {
            console.info('directionTest_0100 START');
            let strJson = getInspectorByKey('direction');
            console.info("directionTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("directionTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.constructor.direction).assertEqual("FlexDirection.Column");
            done();
        });
        index_ets_1.it('directionTest_0200', 0, async function (done) {
            console.info('directionTest_0200 START');
            try {
                let eventData = {
                    data: {
                        "direction": FlexDirection.Row,
                    }
                };
                let indexEvent = {
                    eventId: 84,
                };
                console.info("directionTest_0200 start to publish emit");
            }
            catch (err) {
                console.log("directionTest_0200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonNew = getInspectorByKey('direction');
            let objNew = JSON.parse(strJsonNew);
            console.info("directionTest_0200 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.constructor.direction).assertEqual('FlexDirection.Row');
            console.info('directionTest_0200 END');
            done();
        });
        index_ets_1.it('directionTest_0300', 0, async function (done) {
            console.info('directionTest_0300 START');
            try {
                let eventData = {
                    data: {
                        "direction": 666,
                    }
                };
                let indexEvent = {
                    eventId: 84,
                };
                console.info("directionTest_0300 start to publish emit");
            }
            catch (err) {
                console.log("directionTest_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonNew = getInspectorByKey('direction');
            let objNew = JSON.parse(strJsonNew);
            console.info("directionTest_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.constructor.direction).assertEqual('FlexDirection.Row');
            console.info('directionTest_0300 END');
            done();
        });
    });
}
exports["default"] = directionJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DividerJsunit.test.ets":
/*!**********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\DividerJsunit.test.ets ***!
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
function dividerJsunit() {
    index_ets_1.describe('dividerTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/divider',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get divider state success " + JSON.stringify(pages));
                if (!("divider" == pages.name)) {
                    console.info("get divider state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push divider page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push divider page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("divider after each called");
        });
        index_ets_1.it('dividerTest_0100', 0, async function (done) {
            console.info('dividerTest_0100 START');
            let strJson = getInspectorByKey('Divider');
            console.info("dividerTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("dividerTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Divider');
            console.info('dividerTest_0200 END');
            done();
        });
        index_ets_1.it('dividerTest_0200', 0, async function (done) {
            console.info('dividerTest_0200 START');
            let strJson = getInspectorByKey('Divider');
            console.info("dividerTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("dividerTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.color).assertEqual('#FFCCCCCC');
            console.info('dividerTest_0200 END');
            done();
        });
        index_ets_1.it('dividerTest_0300', 0, async function (done) {
            console.info('dividerTest_0300 START');
            try {
                let eventData = {
                    data: {
                        "color": '#FF000990',
                    }
                };
                let indexEvent = {
                    eventId: 85,
                };
                console.info("dividerTest_0300 start to publish emit");
            }
            catch (err) {
                console.log("dividerTest_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('Divider');
            let objNew = JSON.parse(strJsonNew);
            console.info("dividerTest_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.color).assertEqual('#FF000990');
            console.info('dividerTest_0300 END');
            done();
        });
    });
}
exports["default"] = dividerJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FlexDirectionJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\FlexDirectionJsunit.test.ets ***!
  \****************************************************************************************************************/
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
function flexDirectionJsunit() {
    index_ets_1.describe('flexDirectionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("text beforeEach start");
            let options = {
                uri: 'pages/flexDirection',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get flexDirection state pages:" + JSON.stringify(pages));
                if (!("flexDirection" == pages.name)) {
                    console.info("get flexDirection state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push flexDirection page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push flexDirection page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("flexDirection after each called");
        });
        index_ets_1.it('flexDirection_0100', 0, async function (done) {
            console.info('flexDirection_0100 START');
            let strJson = getInspectorByKey('Row');
            console.info("flexDirection_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual("Text");
            index_ets_1.expect(obj.$attrs.width).assertEqual("20.00%");
            console.info('flexDirection_0100 END');
            done();
        });
        index_ets_1.it('flexDirection_0200', 0, async function (done) {
            console.info('flexDirection_0200 START');
            let strJson = getInspectorByKey('Row');
            console.info("flexDirection_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("40.00vp");
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual("#FFD2B48C");
            console.info('flexDirection_0200 END');
            done();
        });
        index_ets_1.it('flexDirection_0300', 0, async function (done) {
            console.info('flexDirection_0300 START');
            let strJson = getInspectorByKey('ColumnReverse');
            console.info("flexDirection_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual("Text");
            index_ets_1.expect(obj.$attrs.width).assertEqual("20.00%");
            console.info('flexDirection_0300 END');
            done();
        });
        index_ets_1.it('flexDirection_0400', 0, async function (done) {
            console.info('flexDirection_0400 START');
            let strJson = getInspectorByKey('ColumnReverse');
            console.info("flexDirection_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("40.00vp");
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual("#FFD2B48C");
            console.info('flexDirection_0400 END');
            done();
        });
        index_ets_1.it('flexDirection_0500', 0, async function (done) {
            console.info('flexDirection_0500 START');
            let strJson = getInspectorByKey('Column');
            console.info("flexDirection_0500 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual("Text");
            index_ets_1.expect(obj.$attrs.width).assertEqual("20.00%");
            console.info('flexDirection_0500 END');
            done();
        });
        index_ets_1.it('flexDirection_0600', 0, async function (done) {
            console.info('flexDirection_0600 START');
            let strJson = getInspectorByKey('Column');
            console.info("flexDirection_0600 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexDirection_0600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("40.00vp");
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual("#FFD2B48C");
            console.info('flexDirection_0600 END');
            done();
        });
        index_ets_1.it('flexDirection_0700', 0, async function (done) {
            console.info('flexDirection_0700 START');
            try {
                let eventData = {
                    data: {
                        "width": "40%",
                        "height": "70",
                        "backgroundColor": 0xF5DEB3,
                    }
                };
                let indexEvent = {
                    eventId: 97,
                };
                console.info("flexDirection_0700 start to publish emit");
            }
            catch (err) {
                console.log("flexDirection_0700 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('Row');
            let objNew = JSON.parse(strJsonNew);
            console.info("flexDirection_0700 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.width).assertEqual('40.00%');
            index_ets_1.expect(objNew.$attrs.height).assertEqual('70.00vp');
            index_ets_1.expect(objNew.$attrs.backgroundColor).assertEqual("#FFF5DEB3");
            console.info('flexDirection_0700 END');
            done();
        });
        index_ets_1.it('flexDirection_0800', 0, async function (done) {
            console.info('flexDirection_0800 START');
            try {
                let eventData = {
                    data: {
                        "width": "45%",
                        "height": "60",
                        "backgroundColor": 0xF5DEB3,
                    }
                };
                let indexEvent = {
                    eventId: 98,
                };
                console.info("flexDirection_0800 start to publish emit");
            }
            catch (err) {
                console.log("flexDirection_0800 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('ColumnReverse');
            let objNew = JSON.parse(strJsonNew);
            console.info("flexDirection_0800 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.width).assertEqual('45.00%');
            index_ets_1.expect(objNew.$attrs.height).assertEqual('60.00vp');
            index_ets_1.expect(objNew.$attrs.backgroundColor).assertEqual("#FFF5DEB3");
            console.info('flexDirection_0800 END');
            done();
        });
        index_ets_1.it('flexDirection_0900', 0, async function (done) {
            console.info('flexDirection_0900 START');
            try {
                let eventData = {
                    data: {
                        "width": "60%",
                        "height": "55",
                        "backgroundColor": "#FF000990",
                    }
                };
                let indexEvent = {
                    eventId: 99,
                };
                console.info("flexDirection_0900 start to publish emit");
            }
            catch (err) {
                console.log("flexDirection_0900 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('Column');
            let objNew = JSON.parse(strJsonNew);
            console.info("flexDirection_0900 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.width).assertEqual('60.00%');
            index_ets_1.expect(objNew.$attrs.height).assertEqual('55.00vp');
            index_ets_1.expect(objNew.$attrs.backgroundColor).assertEqual("#FF000990");
            console.info('flexDirection_0900 END');
            done();
        });
    });
}
exports["default"] = flexDirectionJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FlexWrapJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\FlexWrapJsunit.test.ets ***!
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
function flexWrapJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("text beforeEach start");
            let options = {
                uri: 'pages/flexWrap',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get flexWrap state pages:" + JSON.stringify(pages));
                if (!("flexWrap" == pages.name)) {
                    console.info("get flexWrap state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push flexWrap page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push flexWrap page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("flexWrap after each called");
        });
        index_ets_1.it('flexWrap_0100', 0, async function (done) {
            console.info('flexWrap_0100 START');
            let strJson = getInspectorByKey('WrapReverse');
            console.info("flexWrap_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexWrap_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual("Text");
            index_ets_1.expect(obj.$attrs.width).assertEqual("20.00%");
            console.info('flexWrap_0100 END');
            done();
        });
        index_ets_1.it('flexWrap_0200', 0, async function (done) {
            console.info('flexWrap_0200 START');
            let strJson = getInspectorByKey('WrapReverse');
            console.info("flexWrap_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("flexWrap_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("40.00vp");
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual("#FFD2B48C");
            console.info('flexWrap_0200 END');
            done();
        });
        index_ets_1.it('flexWrap_0300', 0, async function (done) {
            console.info('flexWrap_0300 START');
            try {
                let eventData = {
                    data: {
                        "width": "40%",
                        "height": "70",
                        "backgroundColor": 0xF5DEB3,
                    }
                };
                let indexEvent = {
                    eventId: 100,
                };
                console.info("flexWrap_0300 start to publish emit");
            }
            catch (err) {
                console.log("flexWrap_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('WrapReverse');
            let objNew = JSON.parse(strJsonNew);
            console.info("flexWrap_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.width).assertEqual('40.00%');
            index_ets_1.expect(objNew.$attrs.height).assertEqual('70.00vp');
            index_ets_1.expect(objNew.$attrs.backgroundColor).assertEqual("#FFF5DEB3");
            console.info('flexWrap_0300 END');
            done();
        });
    });
}
exports["default"] = flexWrapJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GradientDirectionJsunit.test.ets":
/*!********************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\GradientDirectionJsunit.test.ets ***!
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
function gridJsunit() {
    index_ets_1.describe('GradientDirectionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================GradientDirection test beforeEach called===================');
            let options = {
                uri: 'pages/gradientDirection',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info('beforeEach get GradientDirection state pages:' + JSON.stringify(pages));
                if (!('gradientDirection' == pages.name)) {
                    console.info('beforeEach get GradientDirection state pages.name:' + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push GradientDirection page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push GradientDirection page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================GradientDirection test after each called===================');
        });
        index_ets_1.it('GradientDirectionTest_0100', 0, async function (done) {
            console.info('GradientDirectionTest_0100 START');
            let strJson = getInspectorByKey('GradientDirection');
            console.info("GradientDirectionTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("GradientDirectionTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.linearGradient.direction).assertEqual('GradientDirection.LeftTop');
            console.info('GradientDirectionTest_0100 END');
            done();
        });
        index_ets_1.it('GradientDirectionTest_0200', 0, async function (done) {
            console.info('GradientDirectionTest_0200 START');
            try {
                let eventData = {
                    data: {
                        "ACTION": GradientDirection.LeftBottom
                    }
                };
                let indexEvent = {
                    eventId: 106,
                };
                console.info("GradientDirectionTest_0200 start to publish emit");
            }
            catch (err) {
                console.log("GradientDirectionTest_0200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('GradientDirection');
            console.info("GradientDirectionTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("GradientDirectionTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.linearGradient.direction).assertEqual('GradientDirection.LeftBottom');
            console.info('GradientDirectionTest_0200 END');
            done();
        });
        index_ets_1.it('GradientDirectionTest_0300', 0, async function (done) {
            console.info('GradientDirectionTest_0300 START');
            try {
                let eventData = {
                    data: {
                        "ACTION": GradientDirection.RightBottom
                    }
                };
                let indexEvent = {
                    eventId: 107,
                };
                console.info("GradientDirectionTest_0300 start to publish emit");
            }
            catch (err) {
                console.log("GradientDirectionTest_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('GradientDirection');
            console.info("GradientDirectionTest_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("GradientDirectionTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.linearGradient.direction).assertEqual('GradientDirection.RightBottom');
            console.info('GradientDirectionTest_0300 END');
            done();
        });
        index_ets_1.it('GradientDirectionTest_0400', 0, async function (done) {
            console.info('GradientDirectionTest_0400 START');
            try {
                let eventData = {
                    data: {
                        "ACTION": GradientDirection.None
                    }
                };
                let indexEvent = {
                    eventId: 108,
                };
                console.info("GradientDirectionTest_0400 start to publish emit");
            }
            catch (err) {
                console.log("GradientDirectionTest_0400 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('GradientDirection');
            console.info("GradientDirectionTest_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("GradientDirectionTest_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.linearGradient.direction).assertEqual('GradientDirection.None');
            console.info('GradientDirectionTest_0400 END');
            done();
        });
    });
}
exports["default"] = gridJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ImageAnimatorJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\ImageAnimatorJsunit.test.ets ***!
  \****************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function imageAnimatorJsunit() {
    index_ets_1.describe('imageAnimatorTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("imageAnimator beforeEach start");
            let options = {
                uri: 'pages/imageAnimator',
            };
            let result;
            try {
                router.clear();
                let pages = router.getState();
                console.info("get imageAnimator state pages: " + JSON.stringify(pages));
                if (!("imageAnimator" == pages.name)) {
                    console.info("get imageAnimator state pages.name: " + JSON.stringify(pages.name));
                    result = await router.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push imageAnimator page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push imageAnimator page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("imageAnimator after each called");
        });
        index_ets_1.it('imageAnimatorTest_0100', 0, async function (done) {
            console.info('imageAnimatorTest_0100 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.state).assertEqual(AnimationStatus.Running);
            };
            let indexEvent = {
                eventId: 115,
            };
            console.info("imageAnimatorTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0100 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0200', 0, async function (done) {
            console.info('imageAnimatorTest_0200 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0200 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.state).assertEqual(AnimationStatus.Paused);
                index_ets_1.expect(indexEvent.data.fixedSize).assertEqual(false);
            };
            let indexEvent = {
                eventId: 116,
            };
            console.info("imageAnimatorTest_0200 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0200 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0300', 0, async function (done) {
            console.info('imageAnimatorTest_0300 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0300 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.state).assertEqual(AnimationStatus.Stopped);
                index_ets_1.expect(indexEvent.data.preDecode).assertEqual(0);
            };
            let indexEvent = {
                eventId: 117,
            };
            console.info("imageAnimatorTest_0300 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0300 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0400', 0, async function (done) {
            console.info('imageAnimatorTest_0400 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0400 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.fillMode).assertEqual(Forwards);
            };
            let indexEvent = {
                eventId: 118,
            };
            console.info("imageAnimatorTest_0400 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0400 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0500', 0, async function (done) {
            console.info('imageAnimatorTest_0500 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0500 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.iterations).assertEqual(1);
            };
            let indexEvent = {
                eventId: 119,
            };
            console.info("imageAnimatorTest_0500 click result is: " + JSON.stringify(sendEventByKey('button4', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0500 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0600', 0, async function (done) {
            console.info('imageAnimatorTest_0600 START');
            await Utils_ets_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("imageAnimatorTest_0600 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.string).assertEqual('repeat');
            };
            let indexEvent = {
                eventId: 114,
            };
            console.info("imageAnimatorTest_0600 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0600 END');
            done();
        });
        index_ets_1.it('imageAnimatorTest_0700', 0, async function (done) {
            console.info('imageAnimatorTest_0700 START');
            try {
                let eventData = {
                    data: {
                        "preDecode": 2,
                    }
                };
                let indexEvent = {
                    eventId: 121,
                };
                console.info("imageAnimatorTest_0700 start to publish emit");
            }
            catch (err) {
                console.log("imageAnimatorTest_0700 change component data error: " + err.message);
            }
            await Utils_ets_1.default.sleep(1500);
            let callbackOne = (indexEventOne) => {
                console.info("imageAnimatorTest_0700 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.preDecode).assertEqual(2);
            };
            let indexEventOne = {
                eventId: 120,
            };
            console.info("imageAnimatorTest_0700 click result is: " + JSON.stringify(sendEventByKey('button5', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('imageAnimatorTest_0700 END');
            done();
        });
    });
}
exports["default"] = imageAnimatorJsunit;


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
const BindMenuJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BindMenuJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BindMenuJsunit.test.ets"));
const BindPopupJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BindPopupJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\BindPopupJsunit.test.ets"));
const DirectionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DirectionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DirectionJsunit.test.ets"));
const ListItemJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ListItemJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ListItemJsunit.test.ets"));
const NavigatorCodeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./NavigatorCodeJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\NavigatorCodeJsunit.test.ets"));
const PieceJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PieceJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PieceJsunit.test.ets"));
const DividerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DividerJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DividerJsunit.test.ets"));
const SystempromptJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SystempromptJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystempromptJsunit.test.ets"));
const ConfigurationJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ConfigurationJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ConfigurationJsunit.test.ets"));
const SourceTypeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SourceTypeJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SourceTypeJsunit.test.ets"));
const PageTransitionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PageTransitionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PageTransitionJsunit.test.ets"));
const NavigationJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./NavigationJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\NavigationJsunit.test.ets"));
const LoadingProgressJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./LoadingProgressJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\LoadingProgressJsunit.test.ets"));
const RadioJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RadioJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RadioJsunit.test.ets"));
const RowJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RowJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RowJsunit.test.ets"));
const ScrollBarJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ScrollBarJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ScrollBarJsunit.test.ets"));
const SearchJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SearchJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SearchJsunit.test.ets"));
const PlacementJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PlacementJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PlacementJsunit.test.ets"));
const ImageAnimatorJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ImageAnimatorJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ImageAnimatorJsunit.test.ets"));
const AnimationStatusJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AnimationStatusJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\AnimationStatusJsunit.test.ets"));
const CurvesJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CurvesJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\CurvesJsunit.test.ets"));
const GradientDirectionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GradientDirectionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\GradientDirectionJsunit.test.ets"));
const OhosRouterJsnuit_test_ets_1 = __importDefault(__webpack_require__(/*! ./OhosRouterJsnuit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\OhosRouterJsnuit.test.ets"));
const FlexDirectionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./FlexDirectionJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FlexDirectionJsunit.test.ets"));
const FlexWrapJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./FlexWrapJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\FlexWrapJsunit.test.ets"));
const DatePickerJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./DatePickerJsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\DatePickerJsunit.test.ets"));
const Direction2Jsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./Direction2Jsunit.test.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Direction2Jsunit.test.ets"));
function testsuite() {
    NavigationJsunit_test_ets_1.default();
    OhosRouterJsnuit_test_ets_1.default();
    PageTransitionJsunit_test_ets_1.default();
    DatePickerJsunit_test_ets_1.default();
    FlexWrapJsunit_test_ets_1.default();
    FlexDirectionJsunit_test_ets_1.default();
    GradientDirectionJsunit_test_ets_1.default();
    DividerJsunit_test_ets_1.default();
    DirectionJsunit_test_ets_1.default();
    Direction2Jsunit_test_ets_1.default();
    AnimationStatusJsunit_test_ets_1.default();
    SearchJsunit_test_ets_1.default();
    ScrollBarJsunit_test_ets_1.default();
    BindMenuJsunit_test_ets_1.default();
    BindPopupJsunit_test_ets_1.default();
    ConfigurationJsunit_test_ets_1.default();
    CurvesJsunit_test_ets_1.default();
    ImageAnimatorJsunit_test_ets_1.default();
    LoadingProgressJsunit_test_ets_1.default();
    ListItemJsunit_test_ets_1.default();
    NavigatorCodeJsunit_test_ets_1.default();
    PieceJsunit_test_ets_1.default();
    PlacementJsunit_test_ets_1.default();
    RadioJsunit_test_ets_1.default();
    RowJsunit_test_ets_1.default();
    SystempromptJsunit_test_ets_1.default();
    SourceTypeJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ListItemJsunit.test.ets":
/*!***********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\ListItemJsunit.test.ets ***!
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
function listItemJsunit() {
    index_ets_1.describe('listItemTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("listItem beforeEach start");
            let options = {
                uri: 'pages/listItem',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get listItem state pages:" + JSON.stringify(pages));
                if (!("listItem" == pages.name)) {
                    console.info("get listItem state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push listItem page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push listItem page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("listItem after each called");
        });
        index_ets_1.it('testListItem01', 0, async function (done) {
            console.info('[testListItem01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('ListItem');
            let obj = JSON.parse(strJson);
            console.info("[testListItem01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.Normal');
            console.info('testListItem01 END');
            done();
        });
        index_ets_1.it('testListItem02', 0, async function (done) {
            console.info('[testListItem02] START');
            try {
                var eventData = {
                    data: {
                        "sticky": Sticky.None
                    }
                };
                var innerEvent = {
                    eventId: 122,
                };
                console.info("[testListItem02] start to publish emit");
            }
            catch (err) {
                console.log("[testListItem02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('ListItem');
            let obj = JSON.parse(strJson);
            console.info("[testListItem02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.sticky).assertEqual('Sticky.None');
            console.info('testListItem02 END');
            done();
        });
        index_ets_1.it('testListItem03', 0, async function (done) {
            console.info('[testListItem03] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('List');
            let obj = JSON.parse(strJson);
            console.info("[testListItem03] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.editMode).assertEqual('true');
            console.info('testListItem03 END');
            done();
        });
        index_ets_1.it('testListItem04', 0, async function (done) {
            console.info('[testEllipse03] START');
            try {
                var eventData = {
                    data: {
                        "editMode": false
                    }
                };
                var innerEvent = {
                    eventId: 123,
                };
                console.info("[testListItem04] start to publish emit");
            }
            catch (err) {
                console.log("[testListItem04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('List');
            let obj = JSON.parse(strJson);
            console.info("[testListItem04] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.editMode).assertEqual('false');
            console.info('testListItem04 END');
            done();
        });
    });
}
exports["default"] = listItemJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\LoadingProgressJsunit.test.ets":
/*!******************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\LoadingProgressJsunit.test.ets ***!
  \******************************************************************************************************************/
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
function loadingProgressJsunit() {
    index_ets_1.describe('loadingProgressTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/loadingProgress',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get loadingProgress state success " + JSON.stringify(pages));
                if (!("loadingProgress" == pages.name)) {
                    console.info("get loadingProgress state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push loadingProgress page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push loadingProgress page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("loadingProgress after each called");
        });
        index_ets_1.it('testLoadingProgress_100', 0, async function (done) {
            console.info('[testLoadingProgress_100] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderColor).assertEqual("#FF000000");
            console.info('testLoadingProgress_100 END');
            done();
        });
        index_ets_1.it('testLoadingProgress_200', 0, async function (done) {
            console.info('[testLoadingProgress_200] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderRadius).assertEqual("0.0vp");
            console.info('testLoadingProgress_200 END');
            done();
        });
        index_ets_1.it('testLoadingProgress_300', 0, async function (done) {
            console.info('[testLoadingProgress_300] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("22.000000");
            console.info('testLoadingProgress_300 END');
            done();
        });
        index_ets_1.it('testLoadingProgress_400', 0, async function (done) {
            console.info('[testLoadingProgress_400] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderWidth).assertEqual("0.00px");
            console.info('testLoadingProgress_400 END');
            done();
        });
        index_ets_1.it('testLoadingProgress_500', 0, async function (done) {
            console.info('[testLoadingProgress_500] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderStyle).assertEqual("BorderStyle.Solid");
            console.info('testLoadingProgress_500 END');
            done();
        });
        index_ets_1.it('testLoadingProgress_600', 0, async function (done) {
            console.info('[testLoadingProgress_600] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LP');
            let obj = JSON.parse(strJson);
            console.info("testLoadingProgress_600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual("#00000000");
            console.info('testLoadingProgress_600 END');
            done();
        });
    });
}
exports["default"] = loadingProgressJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\NavigationJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\NavigationJsunit.test.ets ***!
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
function navigationJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("navigation beforeEach start");
            let options = {
                uri: 'pages/navigation',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get navigation state pages:" + JSON.stringify(pages));
                if (!("navigation" == pages.name)) {
                    console.info("get navigation state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push navigation page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push navigation page error:" + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("navigation after each called");
        });
        index_ets_1.it('testNavigation_100', 0, async function (done) {
            console.info('[testNavigation_100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Navigation');
            let obj = JSON.parse(strJson);
            console.info("[testNavigation_100] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual("100.00%");
            console.info('[testNavigation_100] END');
            done();
        });
        index_ets_1.it('testNavigation_200', 0, async function (done) {
            console.info('testNavigation_200 START');
            await Utils_1.default.sleep(1000);
            let callback = (indexEvent) => {
                console.info("testNavigation_200 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(false);
            };
            let indexEvent = {
                eventId: 136,
            };
            console.info("testNavigation_200 click result is: " + JSON.stringify(sendEventByKey('NavigationContent1', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('testNavigation_200 END');
            done();
        });
        index_ets_1.it('testNavigation_300', 0, async function (done) {
            console.info('[testNavigation_300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Navigation');
            let obj = JSON.parse(strJson);
            console.info("[testNavigation_300] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("300.00vp");
            console.info('[testNavigation_300] END');
            done();
        });
        index_ets_1.it('testNavigation_400', 0, async function (done) {
            console.info('[testNavigation_400] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Navigation');
            let obj = JSON.parse(strJson);
            console.info("[testNavigation_400] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.align).assertEqual("Alignment.Center");
            console.info('[testNavigation_400] END');
            done();
        });
    });
}
exports["default"] = navigationJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\NavigatorCodeJsunit.test.ets":
/*!****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\NavigatorCodeJsunit.test.ets ***!
  \****************************************************************************************************************/
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function navigatorCodeJsunit() {
    index_ets_1.describe('NavigatorClickTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("NavigatorClick beforeEach start");
            let options = {
                uri: 'pages/NavigatorCode',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get NavigatorClick state pages:" + JSON.stringify(pages));
                if (!("NavigatorClick" == pages.name)) {
                    console.info("get NavigatorClick state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push NavigatorClick page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push NavigatorClick page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("NavigatorClick after each called");
        });
        index_ets_1.it('test_NavigatorClick_001', 0, async function (done) {
            console.info('[test_NavigatorClick_001] START');
            await Utils_ets_1.default.sleep(1000);
            let strJson = getInspectorByKey('NavigatorType');
            let obj = JSON.parse(strJson);
            console.info("[test_NavigatorClick_001] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.active).assertEqual('false');
            console.info('[test_NavigatorClick_001] END');
            done();
        });
        index_ets_1.it('test_NavigatorClick_002', 0, async function (done) {
            console.info('[test_NavigatorClick_002] START');
            await Utils_ets_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "typeValue": "NavigationType.Back"
                    }
                };
                var innerEvent = {
                    eventId: 138,
                };
                console.info("[test_NavigatorClick_002] start to publish emit" + JSON.stringify(eventData));
            }
            catch (err) {
                console.log("[test_NavigatorClick_002] change component error: " + err.message);
            }
            await Utils_ets_1.default.sleep(2000);
            var strJson = getInspectorByKey('NavigatorType');
            var obj = JSON.parse(strJson);
            console.info("[test_NavigatorClick_002] component obj is: " + JSON.stringify(obj.$attrs.type));
            index_ets_1.expect(obj.$attrs.type).assertEqual('NavigationType.Back');
            done();
        });
        index_ets_1.it('test_NavigatorClick_003', 0, async function (done) {
            await Utils_ets_1.default.sleep(1000);
            var callback = (eventData) => {
                console.info("[test_NavigatorClick_003] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(10);
            };
            var innerEvent = {
                eventId: 139,
            };
            console.info('[test_NavigatorClick_003] sendEventByKey ' + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_ets_1.default.sleep(1000);
            console.info('[test_NavigatorClick_003] testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = navigatorCodeJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\OhosRouterJsnuit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\OhosRouterJsnuit.test.ets ***!
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
function OhosRouterJsunit() {
    index_ets_1.describe('ohosRouterTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/ohosRouterA',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get ohosRouter state success " + JSON.stringify(pages));
                if (!("ohosRouter" == pages.name)) {
                    console.info("get ohosRouter state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push ohosRouter page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ohosRouter page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("ohosRouter after each called");
        });
        index_ets_1.it('ohosRouterTest001', 0, async function (done) {
            console.info('[ohosRouterTest001] START');
            let options = {
                uri: 'pages/ohosRouterA',
            };
            try {
                let result = await router.push(options);
                await Utils_1.default.sleep(1000);
                console.info("[ohosRouterTest001] push page success " + JSON.stringify(result));
                let pages = router.getState();
                index_ets_1.expect(pages.index).assertEqual(3);
                index_ets_1.expect(pages.name).assertEqual('ohosRouterA');
                index_ets_1.expect(pages.path).assertEqual('pages/');
            }
            catch (err) {
                console.error("[ohosRouterTest001] push page error: " + err);
            }
            await Utils_1.default.sleep(2000);
            done();
        });
        index_ets_1.it('ohosRouterTest002', 0, async function (done) {
            console.info('[ohosRouterTest002] START');
            let options = {
                uri: 'pages/ohosRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[ohosRouterTest002] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[ohosRouterTest002] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1500);
            let callback = (paramsEvent) => {
                console.info("[ohosRouterTest002] get state result is: " + JSON.stringify(paramsEvent));
                index_ets_1.expect(paramsEvent.data.params).assertEqual('B Page');
            };
            let paramsEvent = {
                eventId: 142,
            };
            console.info("[ohosRouterTest002] click push button result is: "
                + JSON.stringify(sendEventByKey('pushButtonA', 10, "")));
            await Utils_1.default.sleep(1000);
            router.back();
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('ohosRouterTest003', 0, async function (done) {
            console.info('[ohosRouterTest003] START');
            await Utils_1.default.sleep(1000);
            router.clear();
            await Utils_1.default.sleep(2000);
            let size = router.getLength();
            console.info("[ohosRouterTest003] size" + size);
            index_ets_1.expect(size).assertEqual("1");
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('ohosRouterTest004', 0, async function (done) {
            console.info('[ohosRouterTest004] START');
            router.clear();
            await Utils_1.default.sleep(1000);
            let options = {
                uri: 'pages/ohosRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[ohosRouterTest004] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[ohosRouterTest004] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1000);
            let optionsB = {
                uri: 'pages/ohosRouterB'
            };
            try {
                let result = await router.replace(optionsB);
                console.info("[ohosRouterTest004] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[ohosRouterTest004] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1500);
            let size = router.getLength();
            console.info("[ohosRouterTest004] size" + size);
            index_ets_1.expect(size).assertEqual("2");
            done();
        });
        index_ets_1.it('ohosRouterTest005', 0, async function (done) {
            console.info('[ohosRouterTest005] START');
            let options = {
                uri: 'pages/ohosRouterA'
            };
            try {
                let result = await router.push(options);
                console.info("[ohosRouterTest005] push page success " + JSON.stringify(result));
            }
            catch (err) {
                console.error("[ohosRouterTest005] push page error " + JSON.stringify(result));
            }
            await Utils_1.default.sleep(1000);
            router.clear();
            await Utils_1.default.sleep(1500);
            let callback = (paramsEvent) => {
                console.info("[ohosRouterTest005] get state result is: " + JSON.stringify(paramsEvent));
                index_ets_1.expect(paramsEvent.data.params).assertEqual('B Page');
            };
            let paramsEvent = {
                eventId: 142,
            };
            console.info("[ohosRouterTest005] click replace button result is: "
                + JSON.stringify(sendEventByKey('ReplaceButtonA', 10, "")));
            done();
        });
    });
}
exports["default"] = OhosRouterJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PageTransitionJsunit.test.ets":
/*!*****************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PageTransitionJsunit.test.ets ***!
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
function pageTransitionJsunit() {
    index_ets_1.describe('pageTransitionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("pageTransition beforeEach start");
            let options = {
                uri: 'pages/pageTransition',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get pageTransition state pages:" + JSON.stringify(pages));
                if (!("pageTransition" == pages.name)) {
                    console.info("get pageTransition state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push pageTransition page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push pageTransition page error:" + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("pageTransition after each called");
        });
        index_ets_1.it('pageTransitionTest_0100', 0, async function (done) {
            console.info('pageTransitionTest_0100 START');
            let strJson = getInspectorByKey('Navigator');
            let obj = JSON.parse(strJson);
            console.info("pageTransitionTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            index_ets_1.expect(obj.$attrs.target).assertEqual('pages/pageTransition2');
            console.info('pageTransitionTest_0100 END');
            done();
        });
        index_ets_1.it('pageTransitionTest_0200', 0, async function (done) {
            console.info('pageTransitionTest_0200 START');
            let strJson = getInspectorByKey('Navigator');
            console.info("pageTransitionTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("pageTransitionTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.active).assertEqual('false');
            console.info('pageTransitionTest_0200 END');
            done();
        });
        index_ets_1.it('pageTransitionTest_0300', 0, async function (done) {
            console.info('pageTransitionTest_0300 START');
            let strJson = getInspectorByKey('Navigator');
            console.info("pageTransitionTest_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("pageTransitionTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('NavigationType.Push');
            console.info('pageTransitionTest_0300 END');
            done();
        });
        index_ets_1.it('pageTransitionTest_0400', 0, async function (done) {
            console.info('pageTransitionTest_0400 START');
            try {
                let eventData = {
                    data: {
                        "scale": 6,
                        "opacity": 5
                    }
                };
                let indexEvent = {
                    eventId: 145,
                };
                console.info("pageTransitionTest_0400 start to publish emit");
            }
            catch (err) {
                console.log("pageTransitionTest_0400 change component data error: " + err.message);
            }
            let callback = (indexEventOne) => {
                console.info("pageTransitionTest_0400 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.scale).assertEqual(6);
                index_ets_1.expect(indexEventOne.data.opacity).assertEqual(5);
                index_ets_1.expect(indexEventOne.data.type).assertEqual(RouteType.Pop);
            };
            let indexEventOne = {
                eventId: 144,
            };
            console.info("pageTransitionTest_0400 click result is: " + JSON.stringify(sendEventByKey('Navigator', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('pageTransitionTest_0400 END');
            done();
        });
    });
}
exports["default"] = pageTransitionJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PieceJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PieceJsunit.test.ets ***!
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
function pieceJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/PieceCode',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get PieceCode state success " + JSON.stringify(pages));
                if (!("PieceCode" == pages.name)) {
                    console.info("get PieceCode pages success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push PieceCode page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push PieceCode page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("PieceCode after each called");
        });
        index_ets_1.it('test_pieceCode_01', 0, async function (done) {
            console.info('test_pieceCode_01 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("test_pieceCode_01 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.showDelete).assertEqual(true);
            };
            let indexEvent = {
                eventId: 156,
            };
            console.info("test_pieceCode_01 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1000);
            var callback1 = (eventData) => {
                console.info("test_pieceCode_01 get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(true);
            };
            var innerEventOne = {
                eventId: 155,
            };
            console.info('test_pieceCode_01 END');
            done();
        });
    });
}
exports["default"] = pieceJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\PlacementJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\PlacementJsunit.test.ets ***!
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
function placementJsunit() {
    index_ets_1.describe('placementTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/placement',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get placement state success " + JSON.stringify(pages));
                if (!("placement" == pages.name)) {
                    console.info("get placement state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push placement page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push placement page error " + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("placement after each called");
        });
        index_ets_1.it('placementTest_0100', 0, async function (done) {
            console.info('placementTest_0100 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("placementTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.placement).assertEqual(Placement.TopLeft);
            };
            let indexEvent = {
                eventId: 157,
            };
            console.info("placementTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info("placementTest_0100 clickOne result is: " + JSON.stringify(sendEventByKey('image', 10, "")));
            console.info('placementTest_0100 END');
            done();
        });
        index_ets_1.it('placementTest_0200', 0, async function (done) {
            console.info('placementTest_0200 START');
            await Utils_1.default.sleep(1500);
            let callbackOne = (indexEventOne) => {
                console.info("placementTest_0200 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.placement).assertEqual(Placement.TopRight);
            };
            let indexEventOne = {
                eventId: 158,
            };
            console.info("placementTest_0200 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info("placementTest_0200 clickOne result is: " + JSON.stringify(sendEventByKey('image1', 10, "")));
            console.info('placementTest_0200 END');
            done();
        });
        index_ets_1.it('placementTest_0300', 0, async function (done) {
            console.info('placementTest_0300 START');
            await Utils_1.default.sleep(1500);
            let callbackTwo = (indexEventTwo) => {
                console.info("placementTest_0300 get state result is: " + JSON.stringify(indexEventTwo));
                index_ets_1.expect(indexEventTwo.data.placement).assertEqual(Placement.BottomLeft);
            };
            let indexEventTwo = {
                eventId: 159,
            };
            console.info("placementTest_0300 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info("placementTest_0300 clickOne result is: " + JSON.stringify(sendEventByKey('image2', 10, "")));
            console.info('placementTest_0300 END');
            done();
        });
        index_ets_1.it('placementTest_0400', 0, async function (done) {
            console.info('placementTest_0400 START');
            await Utils_1.default.sleep(1500);
            let callbackThree = (indexEventThree) => {
                console.info("placementTest_0400 get state result is: " + JSON.stringify(indexEventThree));
                index_ets_1.expect(indexEventThree.data.placement).assertEqual(Placement.BottomRight);
            };
            let indexEventThree = {
                eventId: 160,
            };
            console.info("placementTest_0400 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info("placementTest_0400 clickOne result is: " + JSON.stringify(sendEventByKey('image3', 10, "")));
            console.info('placementTest_0400 END');
            done();
        });
    });
}
exports["default"] = placementJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RadioJsunit.test.ets":
/*!********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\RadioJsunit.test.ets ***!
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
function radioJsunit() {
    index_ets_1.describe('radioTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/radio',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get radio state success " + JSON.stringify(pages));
                if (!("radio" == pages.name)) {
                    console.info("get radio state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(3000);
                    console.info("push radio page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push radio page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("radio after each called");
        });
        index_ets_1.it('testRadio_100', 0, async function (done) {
            console.info('[testRadio_100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('radio1');
            let obj = JSON.parse(strJson);
            console.info("testRadio_100_component obj is: " + JSON.stringify(obj));
            console.info("testRadio_100_obj.$attrs.value: " + obj.$attrs.value);
            index_ets_1.expect(obj.$type).assertEqual('Radio');
            index_ets_1.expect(obj.$attrs.checked).assertEqual('true');
            console.info('testRadio_100 END');
            done();
        });
        index_ets_1.it('testRadio_200', 0, async function (done) {
            console.info('[testRadio_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('radio2');
            let obj = JSON.parse(strJson);
            console.info("testRadio_200_component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Radio');
            index_ets_1.expect(obj.$attrs.checked).assertEqual('false');
            console.info('testRadio_200 END');
            done();
        });
        index_ets_1.it('testRadio_300', 0, async function (done) {
            console.info('[testRadio_300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('radio3');
            let obj = JSON.parse(strJson);
            console.info("testRadio_300_component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Radio');
            index_ets_1.expect(obj.$attrs.checked).assertEqual('false');
            console.info('testRadio_300 END');
            done();
        });
    });
}
exports["default"] = radioJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\RowJsunit.test.ets":
/*!******************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\RowJsunit.test.ets ***!
  \******************************************************************************************************/
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
function rowJsunit() {
    index_ets_1.describe('rowTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/row',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get row state success " + JSON.stringify(pages));
                if (!("row" == pages.name)) {
                    console.info("get row state success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push row page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push row page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("row after each called");
        });
        index_ets_1.it('testRow_100', 0, async function (done) {
            console.info('[testRow_100] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.align).assertEqual("Alignment.Center");
            console.info('testRow_100 END');
            done();
        });
        index_ets_1.it('testRow_200', 0, async function (done) {
            console.info('[testRow_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.direction).assertEqual("Direction.Ltr");
            console.info('testRow_200 END');
            done();
        });
        index_ets_1.it('testRow_300', 0, async function (done) {
            console.info('[testRow_300] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual("90.00%");
            console.info('testRow_300 END');
            done();
        });
        index_ets_1.it('testRow_400', 0, async function (done) {
            console.info('[testRow_400] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.alignSelf).assertEqual("ItemAlign.Auto");
            console.info('testRow_400 END');
            done();
        });
        index_ets_1.it('testRow_500', 0, async function (done) {
            console.info('[testRow_500] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual("107.00vp");
            console.info('testRow_500 END');
            done();
        });
        index_ets_1.it('testRow_600', 0, async function (done) {
            console.info('[testRow_600] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Row');
            let obj = JSON.parse(strJson);
            console.info("testRow_600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderStyle).assertEqual("BorderStyle.Solid");
            console.info('testRow_600 END');
            done();
        });
    });
}
exports["default"] = rowJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\ScrollBarJsunit.test.ets":
/*!************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\ScrollBarJsunit.test.ets ***!
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
function scrollBarJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/scrollBar',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get scrollBar state success " + JSON.stringify(pages));
                if (!("span" == pages.name)) {
                    console.info("get scrollBar success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push scrollBar page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push scrollBar page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("scrollBar after each called");
        });
        index_ets_1.it('testScrollBar001', 0, async function (done) {
            console.info('[testScrollBar001] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('scroll');
            console.info("[testScrollBar001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testScrollBar001] direction:" + obj.$attrs.direction);
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Vertical');
            done();
        });
        index_ets_1.it('testScrollBar002', 0, async function (done) {
            console.info('[testScrollBar002] START');
            let object = {
                "directionValue": ScrollBarDirection.Horizontal
            };
            try {
                var eventData = {
                    data: {
                        "directionObject": JSON.stringify(object)
                    }
                };
                var innerEvent = {
                    eventId: 183,
                };
                console.info("[testScrollBar002] start to publish emit:" + JSON.stringify(eventData.data));
            }
            catch (err) {
                console.log("[testScrollBar002] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('scroll');
            let obj = JSON.parse(strJson);
            console.info("[testScrollBar002] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.direction).assertEqual('ScrollBarDirection.Vertical');
            console.info('testScrollBar002 END');
            done();
        });
        index_ets_1.it('testScrollBar003', 0, async function (done) {
            console.info('[testScrollBar003] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('scroll');
            console.info("[testScrollBar003] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testScrollBar003] state:" + obj.$attrs.state);
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Off');
            done();
        });
        index_ets_1.it('testScrollBar004', 0, async function (done) {
            console.info('[testScrollBar004] START');
            try {
                let eventData = {
                    data: {
                        "stateValue": "BarState.On"
                    }
                };
                let indexEvent = {
                    eventId: 184,
                };
                console.info("[testScrollBar004] start to publish emit");
            }
            catch (err) {
                console.log("[testScrollBar004] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('scroll');
            console.info("[testScrollBar004] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testScrollBar004] state:" + obj.$attrs.state);
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Off');
            done();
        });
        index_ets_1.it('testScrollBar005', 0, async function (done) {
            console.info('[testScrollBar005] START');
            try {
                let eventData = {
                    data: {
                        "stateValue": BarState.Auto
                    }
                };
                let indexEvent = {
                    eventId: 184,
                };
                console.info("[testScrollBar005] start to publish emit");
            }
            catch (err) {
                console.log("[testScrollBar005] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('scroll');
            console.info("[testScrollBar005] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testScrollBar005] state:" + obj.$attrs.state);
            index_ets_1.expect(obj.$attrs.state).assertEqual('BarState.Off');
            done();
        });
    });
}
exports["default"] = scrollBarJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SearchJsunit.test.ets":
/*!*********************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SearchJsunit.test.ets ***!
  \*********************************************************************************************************/
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
function searchJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/search',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get search state success " + JSON.stringify(pages));
                if (!("span" == pages.name)) {
                    console.info("get search success " + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push search page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push search page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("search after each called");
        });
        index_ets_1.it('testSearch001', 0, async function (done) {
            console.info('[testSearch001] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('search');
            console.info("[testSearch001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            index_ets_1.expect(obj.$attrs.searchButton).assertEqual('10');
            done();
        });
        index_ets_1.it('testSearch002', 0, async function (done) {
            console.info('[testSearch002] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "searchButton": "5"
                    }
                };
                var innerEvent = {
                    eventId: 190,
                };
                console.info("[testSearch002] start to publish emit");
            }
            catch (err) {
                console.log("[testSearch002] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('search');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testSearch002] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.searchButton).assertEqual('5');
            done();
        });
    });
}
exports["default"] = searchJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SourceTypeJsunit.test.ets":
/*!*************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SourceTypeJsunit.test.ets ***!
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
const Utils_ets_1 = __importDefault(__webpack_require__(/*! ./Utils.ets */ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\Utils.ets"));
function sourceTypeJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("sourceType beforeEach start");
            let options = {
                uri: 'pages/sourceType',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get sourceType state pages:" + JSON.stringify(pages));
                if (!("sourceType" == pages.name)) {
                    console.info("get sourceType state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_ets_1.default.sleep(2000);
                    console.info("push sourceType page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push sourceType page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_ets_1.default.sleep(1000);
            console.info("sourceType after each called");
        });
        index_ets_1.it('sourceTypeTest_0100', 0, async function (done) {
            await Utils_ets_1.default.sleep(1000);
            let rect = await Utils_ets_1.default.getComponentRect('button');
            console.info("sourceTypeTest_0100 rectInfo is " + JSON.stringify(rect));
            let x_value = rect.left + (rect.right - rect.left) / 2;
            let y_value = rect.top + (rect.bottom - rect.top) / 2;
            console.info("sourceTypeTest_0100 onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 1, x: x_value, y: y_value, type: TouchType.Down
            };
            var callback = (eventData) => {
                console.info("sourceTypeTest_0100 get event state result is: " + JSON.stringify(eventData));
                let event = JSON.parse(eventData.data.event);
                index_ets_1.expect(event.source).assertEqual(0);
            };
            var innerEvent = {
                eventId: 198,
            };
            console.info('sourceTypeTest_0100 sendTouchEvent :' + sendTouchEvent(point));
            await Utils_ets_1.default.sleep(1000);
            console.info('sourceTypeTest_0100 testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = sourceTypeJsunit;


/***/ }),

/***/ "C:\\Users\\jwzhang\\Desktop\\ActsAceEtsTest\\entry\\src\\main\\ets\\MainAbility\\test\\SystempromptJsunit.test.ets":
/*!***************************************************************************************************************!*\
  !*** C:\Users\jwzhang\Desktop\ActsAceEtsTest\entry\src\main\ets\MainAbility\test\SystempromptJsunit.test.ets ***!
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
function transFormJsunit() {
    index_ets_1.describe('appInfoTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("prompt beforeEach start");
            let options = {
                uri: 'pages/systemPrompt',
            };
            try {
                router.clear();
                let pages = router.getState();
                console.info("get prompt state pages:" + JSON.stringify(pages));
                if (!("prompt " == pages.name)) {
                    console.info("get prompt state pages.name:" + JSON.stringify(pages.name));
                    let result = await router.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push prompt  page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push prompt  page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("prompt each called");
        });
        index_ets_1.it('promptTest_0100', 0, async function (done) {
            console.info('promptTest_0100 is start');
            await Utils_1.default.sleep(1500);
            console.info("promptTest_0100 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info('promptTest_0100 END');
            done();
        });
        index_ets_1.it('promptTest_0200', 0, async function (done) {
            console.info('promptTest_0200 is start');
            await Utils_1.default.sleep(1500);
            console.info("promptTest_0200 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info('promptTest_0200 END');
            done();
        });
    });
}
exports["default"] = transFormJsunit;


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