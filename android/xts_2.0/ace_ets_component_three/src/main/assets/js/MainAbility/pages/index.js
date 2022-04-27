/******/ (() => { // webpackBootstrap
/******/ 	"use strict";
/******/ 	var __webpack_modules__ = ({

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry":
/*!***************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry ***!
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
var _system_file_1  = isSystemplugin('file', 'system') ? globalThis.systemplugin.file : globalThis.requireNapi('file');
const index_ets_1 = __webpack_require__(/*! deccjsunit/index.ets */ "./node_modules/deccjsunit/index.ets");
const List_test_ets_1 = __importDefault(__webpack_require__(/*! ../test/List.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets"));
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

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AboutToDisappearJsunit.test.ets":
/*!******************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AboutToDisappearJsunit.test.ets ***!
  \******************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function aboutToDisappearJsunit() {
    index_ets_1.describe('aboutToDisappearTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("aboutToDisappear beforeEach start");
            let options = {
                uri: 'pages/aboutToDisappear',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get aboutToDisappear state pages:" + JSON.stringify(pages));
                if (!("aboutToDisappear" == pages.name)) {
                    console.info("get aboutToDisappear state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push aboutToDisappear page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push aboutToDisappear page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("aboutToDisappear after each called");
        });
        index_ets_1.it('aboutToDisappearTest_0100', 0, async function (done) {
            console.info('aboutToDisappearTest_0100 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("aboutToDisappearTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(false);
            };
            let indexEvent = {
                eventId: 49
            };
            console.info("aboutToDisappearTest_0100 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('aboutToDisappearTest_0100 END');
            done();
        });
    });
}
exports["default"] = aboutToDisappearJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AnimateJsunit.test.ets":
/*!*********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AnimateJsunit.test.ets ***!
  \*********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function animateJsunit() {
    index_ets_1.describe('animateTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("animate beforeEach start");
            let options = {
                uri: 'pages/animate',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get animate state pages:" + JSON.stringify(pages));
                if (!("animate" == pages.name)) {
                    console.info("get animate state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push animate page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push animate page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("animate after each called");
        });
        index_ets_1.it('animateTest_0100', 0, async function (done) {
            console.info('animateTest_0100 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 51
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0100 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.duration).assertEqual('100');
            };
            console.info("animateTest_0100 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0100 END');
            done();
        });
        index_ets_1.it('animateTest_0200', 0, async function (done) {
            console.info('animateTest_0200 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 52
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0500 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.curve).assertEqual('Ease');
            };
            console.info("animateTest_0200 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0200 END');
            done();
        });
        index_ets_1.it('animateTest_0300', 0, async function (done) {
            console.info('animateTest_0300 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 53
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0500 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.iteration).assertEqual('1');
            };
            console.info("animateTest_0300 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0300 END');
            done();
        });
        index_ets_1.it('animateTest_0400', 0, async function (done) {
            console.info('animateTest_0400 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 54
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0400 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.tempo).assertEqual(1000);
            };
            console.info("animateTest_0400 click result is: " + JSON.stringify(sendEventByKey('button4', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0400 END');
            done();
        });
        index_ets_1.it('animateTest_0500', 0, async function (done) {
            console.info('animateTest_0500 START');
            await Utils_1.default.sleep(1500);
            let indexEvent = {
                eventId: 55
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0500 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.playmode).assertEqual('normal');
            };
            console.info("animateTest_0500 click result is: " + JSON.stringify(sendEventByKey('button5', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0500 END');
            done();
        });
        index_ets_1.it('animateTest_0600', 0, async function (done) {
            console.info('animateTest_0500 START');
            try {
                let eventData = {
                    data: {
                        "duration": '2000'
                    }
                };
                let indexEventOne = {
                    eventId: 50
                };
                console.info("animateTest_0600 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_0600 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 51
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0600 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.duration).assertEqual('2000');
            };
            console.info("animateTest_0600 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0600 END');
            done();
        });
        index_ets_1.it('animateTest_0700', 0, async function (done) {
            console.info('animateTest_0700 START');
            try {
                let eventData = {
                    data: {
                        "curve": "Linear"
                    }
                };
                let indexEventOne = {
                    eventId: 50
                };
                console.info("animateTest_0700 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_0700 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 52
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0700 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.curve).assertEqual('Linear');
            };
            console.info("animateTest_0700 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0700 END');
            done();
        });
        index_ets_1.it('animateTest_0800', 0, async function (done) {
            console.info('animateTest_0800 START');
            try {
                let eventData = {
                    data: {
                        "iteration": "2"
                    }
                };
                let indexEventOne = {
                    eventId: 50
                };
                console.info("animateTest_0800 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_0800 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 53
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0800 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.iteration).assertEqual('2');
            };
            console.info("animateTest_0800 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0800 END');
            done();
        });
        index_ets_1.it('animateTest_0900', 0, async function (done) {
            console.info('animateTest_0900 START');
            try {
                let eventData = {
                    data: {
                        "tempo": "20000"
                    }
                };
                let indexEventOne = {
                    eventId: 50
                };
                console.info("animateTest_0900 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_0900 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 54
            };
            let callback = (indexEvent) => {
                console.info("animateTest_0900 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.tempo).assertEqual('20000');
            };
            console.info("animateTest_0900 click result is: " + JSON.stringify(sendEventByKey('button4', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_0900 END');
            done();
        });
        index_ets_1.it('animateTest_1000', 0, async function (done) {
            console.info('animateTest_1000 START');
            try {
                let eventData = {
                    data: {
                        "playmode": "PlayMode.Alternate"
                    }
                };
                let indexEventOne = {
                    eventId: 50
                };
                console.info("animateTest_1000 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1000 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 55
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1000 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.playmode).assertEqual('alternate');
            };
            console.info("animateTest_1000 click result is: " + JSON.stringify(sendEventByKey('button5', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1000 END');
            done();
        });
        index_ets_1.it('animateTest_1100', 0, async function (done) {
            console.info('animateTest_1100 START');
            try {
                let eventData = {
                    data: {
                        "duration": -1000
                    }
                };
                let indexEventOne = {
                    eventId: 1011
                };
                console.info("animateTest_1100 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1100 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1001
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1100 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.duration).assertEqual('-1000');
            };
            console.info("animateTest_1100 click result is: " + JSON.stringify(sendEventByKey('button6', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1100 END');
            done();
        });
        index_ets_1.it('animateTest_1200', 0, async function (done) {
            console.info('animateTest_1200 START');
            try {
                let eventData = {
                    data: {
                        "duration": 100000000
                    }
                };
                let indexEventOne = {
                    eventId: 1012
                };
                console.info("animateTest_1200 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1200 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1002
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1200 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.duration).assertEqual('100000000');
            };
            console.info("animateTest_1200 click result is: " + JSON.stringify(sendEventByKey('button7', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1200 END');
            done();
        });
        index_ets_1.it('animateTest_1300', 0, async function (done) {
            console.info('animateTest_1300 START');
            try {
                let eventData = {
                    data: {
                        "curve": 123
                    }
                };
                let indexEventOne = {
                    eventId: 1013
                };
                console.info("animateTest_1300 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1300 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1003
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1300 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.curve).assertEqual('123');
            };
            console.info("animateTest_1300 click result is: " + JSON.stringify(sendEventByKey('button8', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1300 END');
            done();
        });
        index_ets_1.it('animateTest_1400', 0, async function (done) {
            console.info('animateTest_1400 START');
            try {
                let eventData = {
                    data: {
                        "curve": 'abc'
                    }
                };
                let indexEventOne = {
                    eventId: 1014
                };
                console.info("animateTest_1400 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1400 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1004
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1400 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.curve).assertEqual('abc');
            };
            console.info("animateTest_1400 click result is: " + JSON.stringify(sendEventByKey('button9', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1400 END');
            done();
        });
        index_ets_1.it('animateTest_1500', 0, async function (done) {
            console.info('animateTest_1500 START');
            try {
                let eventData = {
                    data: {
                        "iteration": "121212121212"
                    }
                };
                let indexEventOne = {
                    eventId: 1015
                };
                console.info("animateTest_1500 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1500 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1005
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1500 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.iteration).assertEqual('121212121212');
            };
            console.info("animateTest_1500 click result is: " + JSON.stringify(sendEventByKey('button10', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1500 END');
            done();
        });
        index_ets_1.it('animateTest_1600', 0, async function (done) {
            console.info('animateTest_1600 START');
            try {
                let eventData = {
                    data: {
                        "iteration": "-5"
                    }
                };
                let indexEventOne = {
                    eventId: 1016
                };
                console.info("animateTest_1600 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1600 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1006
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1600 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.iteration).assertEqual('-5');
            };
            console.info("animateTest_1600 click result is: " + JSON.stringify(sendEventByKey('button11', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1600 END');
            done();
        });
        index_ets_1.it('animateTest_1700', 0, async function (done) {
            console.info('animateTest_1700 START');
            try {
                let eventData = {
                    data: {
                        "tempo": "12121212121212"
                    }
                };
                let indexEventOne = {
                    eventId: 1017
                };
                console.info("animateTest_1700 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1700 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1007
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1700 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.tempo).assertEqual('12121212121212');
            };
            console.info("animateTest_1700 click result is: " + JSON.stringify(sendEventByKey('button12', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1700 END');
            done();
        });
        index_ets_1.it('animateTest_1800', 0, async function (done) {
            console.info('animateTest_1800 START');
            try {
                let eventData = {
                    data: {
                        "tempo": "-5"
                    }
                };
                let indexEventOne = {
                    eventId: 1018
                };
                console.info("animateTest_1800 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1800 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1008
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1800 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.tempo).assertEqual('-5');
            };
            console.info("animateTest_1800 click result is: " + JSON.stringify(sendEventByKey('button13', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1800 END');
            done();
        });
        index_ets_1.it('animateTest_1900', 0, async function (done) {
            console.info('animateTest_1900 START');
            try {
                let eventData = {
                    data: {
                        "playmode": "aaa"
                    }
                };
                let indexEventOne = {
                    eventId: 1019
                };
                console.info("animateTest_1900 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_1900 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1009
            };
            let callback = (indexEvent) => {
                console.info("animateTest_1900 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.playmode).assertEqual('aaa');
            };
            console.info("animateTest_1900 click result is: " + JSON.stringify(sendEventByKey('button14', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_1900 END');
            done();
        });
        index_ets_1.it('animateTest_2000', 0, async function (done) {
            console.info('animateTest_2000 START');
            try {
                let eventData = {
                    data: {
                        "playmode": "123456"
                    }
                };
                let indexEventOne = {
                    eventId: 1020
                };
                console.info("animateTest_2000 start to publish emit");
            }
            catch (err) {
                console.log("animateTest_2000 change component data error: " + err.message);
            }
            let indexEvent = {
                eventId: 1010
            };
            let callback = (indexEvent) => {
                console.info("animateTest_2000 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.playmode).assertEqual('123456');
            };
            console.info("animateTest_2000 click result is: " + JSON.stringify(sendEventByKey('button15', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('animateTest_2000 END');
            done();
        });
    });
}
exports["default"] = animateJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets":
/*!*******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets ***!
  \*******************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function badgeJsunit() {
    index_ets_1.describe('badgeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("badge beforeEach start");
            let options = {
                uri: 'pages/badge',
            };
            let result;
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get badge state pages: " + JSON.stringify(pages));
                if (!("badge" == pages.name)) {
                    console.info("get badge state pages.name: " + JSON.stringify(pages.name));
                    result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push badge page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push badge page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("badge after each called");
        });
        index_ets_1.it('testBadge01', 0, async function (done) {
            console.info('[testBadge01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('badge');
            let obj = JSON.parse(strJson);
            console.info("[testBadge01] component obj is: " + JSON.stringify(obj));
            let style = JSON.parse(obj.$attrs.style);
            index_ets_1.expect(obj.$type).assertEqual('Badge');
            index_ets_1.expect(style.fontSize).assertEqual('20.00fp');
            done();
        });
        index_ets_1.it('testBadge02', 0, async function (done) {
            console.info('[testBadge02] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "30",
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge02] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge02] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.fontSize).assertEqual('30.00fp');
            done();
        });
        index_ets_1.it('testBadge03', 0, async function (done) {
            console.info('[testBadge03] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "-1",
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge03] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge03] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge03] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.fontSize).assertEqual('-1.00fp');
            done();
        });
        index_ets_1.it('testBadge04', 0, async function (done) {
            console.info('[testBadge04] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "121212121",
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge04] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge04] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge04] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.fontSize).assertEqual('121212121.00fp');
            done();
        });
        index_ets_1.it('testBadge05', 0, async function (done) {
            console.info('[testBadge05] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "121212121vaas",
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge05] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge05] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge05] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            console.info("[testBadge05] component style is: " + JSON.stringify(style));
            index_ets_1.expect(style.fontSize).assertEqual('121212121.00fp');
            done();
        });
        index_ets_1.it('testBadge06', 0, async function (done) {
            console.info('[testBadge06] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('badge2');
            let obj = JSON.parse(strJson);
            console.info("[testBadge06] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Badge');
            index_ets_1.expect(obj.$attrs.value).assertEqual('new');
            done();
        });
        index_ets_1.it('testBadge07', 0, async function (done) {
            console.info('[testBadge07] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('badge2');
            let obj = JSON.parse(strJson);
            console.info("[testBadge07] component obj is: " + JSON.stringify(obj));
            let style = JSON.parse(obj.$attrs.style);
            index_ets_1.expect(obj.$type).assertEqual('Badge');
            index_ets_1.expect(style.color).assertEqual('#FFFF0000');
            done();
        });
        index_ets_1.it('testBadge08', 0, async function (done) {
            console.info('[testBadge08] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "colorValue": Color.Blue,
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge08] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge08] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge08] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.color).assertEqual('#FF0000FF');
            done();
        });
        index_ets_1.it('testBadge09', 0, async function (done) {
            console.info('[testBadge09] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "message": "test",
                    }
                };
                var innerEvent = {
                    eventId: 63
                };
                console.info("[testBadge09] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge09] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge09] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.value).assertEqual('test');
            done();
        });
        index_ets_1.it('testBadge10', 0, async function (done) {
            console.info('[testBadge10] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "colorValue": ab88,
                    }
                };
                var innerEvent = {
                    eventId: 64
                };
                console.info("[testBadge10] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge10] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge10] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.color).assertEqual('#FF0000FF');
            done();
        });
        index_ets_1.it('testBadge11', 0, async function (done) {
            console.info('[testBadge11] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "colorValue": -300,
                    }
                };
                var innerEvent = {
                    eventId: 65
                };
                console.info("[testBadge11] start to publish emit");
            }
            catch (err) {
                console.log("[testBadge11] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('badge2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBadge11] component objNew is: " + JSON.stringify(objNew));
            let style = JSON.parse(objNew.$attrs.style);
            index_ets_1.expect(style.color).assertEqual('#FFFFFED4');
            done();
        });
    });
}
exports["default"] = badgeJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets":
/*!*******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets ***!
  \*******************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function blankJsunit() {
    index_ets_1.describe('blankTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("blank beforeEach start");
            let options = {
                uri: 'pages/blank',
            };
            let result;
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get blank state pages: " + JSON.stringify(pages));
                if (!("blank" == pages.name)) {
                    console.info("get blank state pages.name: " + JSON.stringify(pages.name));
                    result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push blank page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push blank page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("blank after each called");
        });
        index_ets_1.it('testBlank01', 0, async function (done) {
            console.info('[testBlank01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('blank');
            let obj = JSON.parse(strJson);
            console.info("[testBlank01] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Blank');
            index_ets_1.expect(obj.$attrs.color).assertEqual('#FF0000FF');
            index_ets_1.expect(obj.$attrs.min).assertEqual('0.00px');
            done();
        });
        index_ets_1.it('testBlank02', 0, async function (done) {
            console.info('[testBlank02] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "colorValue": Color.Red,
                    }
                };
                var innerEvent = {
                    eventId: 69
                };
                console.info("[testBlank02] start to publish emit");
            }
            catch (err) {
                console.log("[testBlank02] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('blank');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testBlank02] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.color).assertEqual('#FFFF0000');
            index_ets_1.expect(objNew.$type).assertEqual('Blank');
            done();
        });
    });
}
exports["default"] = blankJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function buttonJsunit() {
    index_ets_1.describe('buttonTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("button beforeEach start");
            let options = {
                uri: 'pages/button',
            };
            let result;
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get button state pages: " + JSON.stringify(pages));
                if (!("button" == pages.name)) {
                    console.info("get button state pages.name: " + JSON.stringify(pages.name));
                    result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push button page result: " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push button page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("button after each called");
        });
        index_ets_1.it('testButton01', 0, async function (done) {
            console.info('[testButton01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('button');
            let obj = JSON.parse(strJson);
            console.info("[testButton01] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Button');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ButtonType.Normal');
            done();
        });
        index_ets_1.it('testButton02', 0, async function (done) {
            console.info('[testButton02] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('button1');
            let obj = JSON.parse(strJson);
            console.info("[testButton02] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Button');
            index_ets_1.expect(obj.$attrs.type).assertEqual('ButtonType.Normal');
            done();
        });
        index_ets_1.it('testButton03', 0, async function (done) {
            console.info('[testButton03] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('button2');
            let obj = JSON.parse(strJson);
            console.info("[testButton03] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('20');
            done();
        });
        index_ets_1.it('testButton04', 0, async function (done) {
            console.info('[testButton04] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('button3');
            let obj = JSON.parse(strJson);
            console.info("[testButton04] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.borderColor).assertEqual('#FF000000');
            done();
        });
        index_ets_1.it('testButton05', 0, async function (done) {
            console.info('[testButton05] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "buttonTypeValue": "ButtonType.Capsule",
                    }
                };
                var innerEvent = {
                    eventId: 70
                };
                console.info("[testButton05] start to publish emit");
            }
            catch (err) {
                console.log("[testButton05] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton05] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.type).assertEqual('ButtonType.Capsule');
            done();
        });
        index_ets_1.it('testButton06', 0, async function (done) {
            console.info('[testButton06] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": 30,
                    }
                };
                var innerEvent = {
                    eventId: 70
                };
                console.info("[testButton06] start to publish emit");
            }
            catch (err) {
                console.log("[testButton06] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton05] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('30');
            done();
        });
        index_ets_1.it('testButton07', 0, async function (done) {
            console.info('[testButton07] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": -1,
                    }
                };
                var innerEvent = {
                    eventId: 70
                };
                console.info("[testButton07] start to publish emit");
            }
            catch (err) {
                console.log("[testButton07] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton07] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('0');
            done();
        });
        index_ets_1.it('testButton08', 0, async function (done) {
            console.info('[testButton08] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "121212121",
                    }
                };
                var innerEvent = {
                    eventId: 70
                };
                console.info("[testButton08] start to publish emit");
            }
            catch (err) {
                console.log("[testButton08] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton08] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('121212121');
            done();
        });
        index_ets_1.it('testButton09', 0, async function (done) {
            console.info('[testButton09] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fontSizeValue": "121212121vaas",
                    }
                };
                var innerEvent = {
                    eventId: 70
                };
                console.info("[testButton09] start to publish emit");
            }
            catch (err) {
                console.log("[testButton09] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button2');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton09] component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('121212121');
            done();
        });
        index_ets_1.it('testButton10', 0, async function (done) {
            console.info('[testButton10] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": Color.Pink
                    }
                };
                let indexEventOne = {
                    eventId: 70
                };
                console.info("testButton10 start to publish emit");
            }
            catch (err) {
                console.log("testButton10 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let indexEvent = {
                eventId: 72
            };
            let callback = (indexEvent) => {
                console.info("testButton10 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.fontColorValue).assertEqual(Color.Pink);
            };
            console.info("testButton10 click result is: " + JSON.stringify(sendEventByKey('button3', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[testButton10] END');
            done();
        });
        index_ets_1.it('testButton11', 0, async function (done) {
            console.info('[testButton11] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": 332
                    }
                };
                let indexEventOne = {
                    eventId: 70
                };
                console.info("testButton11 start to publish emit");
            }
            catch (err) {
                console.log("testButton11 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let indexEvent = {
                eventId: 71
            };
            let callback = (indexEvent) => {
                console.info("testButton11 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.fontColorValue).assertEqual(332);
            };
            console.info("testButton11 click result is: " + JSON.stringify(sendEventByKey('button2', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[testButton11] END');
            done();
        });
        index_ets_1.it('testButton12', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            var callback = (eventData) => {
                console.info("[testButton12] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(true);
                let event = JSON.parse(eventData.data.event);
                index_ets_1.expect(event.screenX).assertEqual(135);
                index_ets_1.expect(event.screenY).assertEqual(368.80340576171875);
                index_ets_1.expect(event.x).assertEqual(100);
                index_ets_1.expect(event.y).assertEqual(31.196568154881163);
            };
            var innerEvent = {
                eventId: 4
            };
            console.info('[testButton12] sendEventByKey ' + JSON.stringify(sendEventByKey('buttonClick', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[testButton12] testSendTouchEvent END');
            done();
        });
        index_ets_1.it('testButton13', 0, async function (done) {
            console.info('[testButton13] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "buttonTypeValue": qaq,
                    }
                };
                var innerEvent = {
                    eventId: 74
                };
                console.info("[testButton13] start to publish emit");
            }
            catch (err) {
                console.log("[testButton13] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton13] component objNew is: " + JSON.stringify(objNew.$attrs.type));
            index_ets_1.expect(objNew.$attrs.type).assertEqual('ButtonType.Capsule');
            done();
        });
        index_ets_1.it('testButton14', 0, async function (done) {
            console.info('[testButton14] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "buttonTypeValue": 41961,
                    }
                };
                var innerEvent = {
                    eventId: 75
                };
                console.info("[testButton14] start to publish emit");
            }
            catch (err) {
                console.log("[testButton14] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('button');
            let objNew = JSON.parse(strJsonNew);
            console.info("[testButton14] component objNew is: " + JSON.stringify(objNew.$attrs.type));
            index_ets_1.expect(objNew.$attrs.type).assertEqual('');
            done();
        });
        index_ets_1.it('testButton15', 0, async function (done) {
            console.info('[testButton15] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": ab996
                    }
                };
                let indexEventOne = {
                    eventId: 76
                };
                console.info("testButton15 start to publish emit");
            }
            catch (err) {
                console.log("testButton15 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let indexEvent = {
                eventId: 77
            };
            let callback = (indexEvent) => {
                console.info("testButton15 get state result is: " + JSON.stringify(indexEvent));
                except(indexEvent.data.fontColorValue).assertEqual('ab996');
            };
            console.info("testButton15 click result is: " + JSON.stringify(sendEventByKey('button4', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[testButton15] END');
            done();
        });
    });
}
exports["default"] = buttonJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Canvas2Jsunit.test.ets":
/*!*********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Canvas2Jsunit.test.ets ***!
  \*********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function canvas2Jsunit() {
    index_ets_1.describe('canvas2Test', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("canvas beforeEach start");
            let options = {
                uri: 'pages/canvas2',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get canvas2 state pages:" + JSON.stringify(pages));
                if (!("canvas2" == pages.name)) {
                    console.info("get canvas2 state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push canvas2 page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push canvas page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("canvas2 after each called");
        });
        index_ets_1.it('testCanvas01', 0, async function (done) {
            console.info('[testCanvas01] START');
            await Utils_1.default.sleep(1000);
            console.info('[testCanvas01]----------- START');
            console.info('testCanvas01 END');
            done();
        });
    });
}
exports["default"] = canvas2Jsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CanvasJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CanvasJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function canvasJsunit() {
    index_ets_1.describe('canvasTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("canvas beforeEach start");
            let options = {
                uri: 'pages/canvas',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get canvas state pages:" + JSON.stringify(pages));
                if (!("canvas" == pages.name)) {
                    console.info("get canvas state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push canvas page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push canvas page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("canvas after each called");
        });
        index_ets_1.it('testCanvas01', 0, async function (done) {
            console.info('[testCanvas01] START');
            await Utils_1.default.sleep(1000);
            console.info('[testCanvas01]----------- START');
            console.info('testCanvas01 END');
            done();
        });
    });
}
exports["default"] = canvasJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CircleJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CircleJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function circleJsunit() {
    index_ets_1.describe('circleTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("circle beforeEach start");
            let options = {
                uri: 'pages/circle',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get circle state pages:" + JSON.stringify(pages));
                if (!("circle" == pages.name)) {
                    console.info("get circle state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push circle page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push circle page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("circle after each called");
        });
        index_ets_1.it('circleTest_0100', 0, async function (done) {
            console.info('circleTest_0100 START');
            let strJson = getInspectorByKey('circle');
            console.info("circleTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("circleTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual('450.00px');
            index_ets_1.expect(obj.$attrs.width).assertEqual('450.00px');
            done();
        });
        index_ets_1.it('circleTest_0200', 0, async function (done) {
            console.info('[circleTest_0200] START');
            try {
                var eventData = {
                    data: {
                        "width": '500px',
                        "height": '500px',
                    }
                };
                console.info('[circleTest_0200] START');
                var innerEvent = {
                    eventId: 77
                };
                console.info("[circleTest_0200] start to publish emit");
            }
            catch (err) {
                console.log("[circleTest_0200] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('circle');
            let obj = JSON.parse(strJson);
            console.info("[circleTest_0200] component objNew is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.height).assertEqual('500.00px');
            index_ets_1.expect(obj.$attrs.width).assertEqual('500.00px');
            console.info('circleTest_0200 END');
            done();
        });
        index_ets_1.it('circleTest_0300', 0, async function (done) {
            console.info('[circleTest_0300] START');
            try {
                var eventData = {
                    data: {
                        "width": '-a',
                        "height": '-b',
                    }
                };
                console.info('[circleTest_0300] START');
                var innerEvent = {
                    eventId: 77
                };
                console.info("[circleTest_030] start to publish emit");
            }
            catch (err) {
                console.log("[circleTest_030] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('circle');
            let obj = JSON.parse(strJson);
            console.info("[circleTest_0300] component objNew is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual('0.00px');
            index_ets_1.expect(obj.$attrs.height).assertEqual('0.00px');
            console.info('circleTest_0300 END');
            done();
        });
    });
}
exports["default"] = circleJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CommonJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CommonJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
function commonJsunit() {
    index_ets_1.describe('commonTest', function () {
        index_ets_1.it('commonTest_0100', 0, async function (done) {
            console.info('commonTest_0100 START');
            var a = 90;
            var b = vp2px(a);
            console.info('commonTest_0100 vp2px result:' + b);
            index_ets_1.expect(b == 90).assertTrue();
            console.info('commonTest_0100 END');
            done();
        });
        index_ets_1.it('commonTest_0200', 0, async function (done) {
            console.info('commonTest_0200 START');
            var a = -90;
            var b = vp2px(a);
            console.info('commonTest_0200 vp2px result:' + b);
            index_ets_1.expect(b == -90).assertTrue();
            console.info('commonTest_0200 END');
            done();
        });
        index_ets_1.it('commonTest_0300', 0, async function (done) {
            console.info('commonTest_0300 START');
            var a = '30';
            var b = vp2px(a);
            console.info('commonTest_0300 vp2px result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_0300 END');
            done();
        });
        index_ets_1.it('commonTest_0400', 0, async function (done) {
            console.info('commonTest_0400 START');
            var a = 80;
            var b = px2vp(a);
            console.info('commonTest_0400 px2vp result:' + b);
            index_ets_1.expect(b == 80).assertTrue();
            console.info('commonTest_0400 END');
            done();
        });
        index_ets_1.it('commonTest_0500', 0, async function (done) {
            console.info('commonTest_0500 START');
            var a = -800000000;
            var b = px2vp(a);
            console.info('commonTest_0500 px2vp result:' + b);
            index_ets_1.expect(b == -800000000).assertTrue();
            console.info('commonTest_0500 END');
            done();
        });
        index_ets_1.it('commonTest_0600', 0, async function (done) {
            console.info('commonTest_0600 START');
            var a = '80';
            var b = px2vp(a);
            console.info('commonTest_0600 px2vp result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_0600 END');
            done();
        });
        index_ets_1.it('commonTest_0700', 0, async function (done) {
            console.info('commonTest_0700 START');
            var a = 70;
            var b = fp2px(a);
            console.info('commonTest_0700 fp2px result:' + b);
            index_ets_1.expect(b == 70).assertTrue();
            console.info('commonTest_0700 END');
            done();
        });
        index_ets_1.it('commonTest_0800', 0, async function (done) {
            console.info('commonTest_0800 START');
            var a = -7000000000000;
            var b = fp2px(a);
            console.info('commonTest_0800 fp2px result:' + b);
            index_ets_1.expect(b == -2147483648).assertTrue();
            console.info('commonTest_0800 END');
            done();
        });
        index_ets_1.it('commonTest_0900', 0, async function (done) {
            console.info('commonTest_0900 START');
            var a = '70';
            var b = fp2px(a);
            console.info('commonTest_0900 fp2px result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_0900 END');
            done();
        });
        index_ets_1.it('commonTest_1000', 0, async function (done) {
            console.info('commonTest_1000 START');
            var a = 60;
            var b = px2fp(a);
            console.info('commonTest_1000 px2fp result:' + b);
            index_ets_1.expect(b == 60).assertTrue();
            console.info('commonTest_1000 END');
            done();
        });
        index_ets_1.it('commonTest_1100', 0, async function (done) {
            console.info('commonTest_1100 START');
            var a = -6000000000;
            var b = px2fp(a);
            console.info('commonTest_1100 px2fp result:' + b);
            index_ets_1.expect(b == -6000000000).assertTrue();
            console.info('commonTest_1100 END');
            done();
        });
        index_ets_1.it('commonTest_1200', 0, async function (done) {
            console.info('commonTest_1200 START');
            var a = '60';
            var b = px2fp(a);
            console.info('commonTest_1200 px2fp result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_1200 END');
            done();
        });
        index_ets_1.it('commonTest_1300', 0, async function (done) {
            console.info('commonTest_1300 START');
            var a = 50;
            var b = lpx2px(a);
            console.info('commonTest_1300 lpx2px result:' + b);
            index_ets_1.expect(b == 50).assertTrue();
            console.info('commonTest_1300 END');
            done();
        });
        index_ets_1.it('commonTest_1400', 0, async function (done) {
            console.info('commonTest_1400 START');
            var a = -500000000;
            var b = lpx2px(a);
            console.info('commonTest_1400 lpx2px result:' + b);
            index_ets_1.expect(b == -500000000).assertTrue();
            console.info('commonTest_1400 END');
            done();
        });
        index_ets_1.it('commonTest_1500', 0, async function (done) {
            console.info('commonTest_1500 START');
            var a = '50';
            var b = lpx2px(a);
            console.info('commonTest_1500 lpx2px result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_1500 END');
            done();
        });
        index_ets_1.it('commonTest_1600', 0, async function (done) {
            console.info('commonTest_1600 START');
            var a = 40;
            var b = px2lpx(a);
            console.info('commonTest_1600 px2lpx result:' + b);
            index_ets_1.expect(b == 40).assertTrue();
            console.info('commonTest_1600 END');
            done();
        });
        index_ets_1.it('commonTest_1700', 0, async function (done) {
            console.info('commonTest_1700 START');
            var a = -400000;
            var b = px2lpx(a);
            console.info('commonTest_1700 px2lpx result:' + b);
            index_ets_1.expect(b == -400000).assertTrue();
            console.info('commonTest_1700 END');
            done();
        });
        index_ets_1.it('commonTest_1800', 0, async function (done) {
            console.info('commonTest_1800 START');
            var a = '40';
            var b = px2lpx(a);
            console.info('commonTest_1800 px2lpx result:' + b);
            index_ets_1.expect(b == undefined).assertTrue();
            console.info('commonTest_1800 END');
            done();
        });
    });
}
exports["default"] = commonJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsunit.test.ets ***!
  \******************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function gridJsunit() {
    index_ets_1.describe('gridTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info('beforeEach ===================grid test beforeEach called===================');
            let options = {
                uri: 'pages/gridPage',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info('beforeEach get prompt state pages:' + JSON.stringify(pages));
                if (!('gridPage' == pages.name)) {
                    console.info('beforeEach get prompt state pages.name:' + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info('beforeEach push prompt page result:' + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error('beforeEach push prompt page error:' + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info('[ afterEach ] ===================grid test after each called===================');
        });
        index_ets_1.it('gridTest01', 0, async function (done) {
            console.info('gridTest01==================== start');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('grid');
            let obj = JSON.parse(strJson);
            console.info('gridTest01 all attribute before change is: ' + JSON.stringify(obj.$attrs.columnsGap));
            index_ets_1.expect(obj.$attrs.columnsGap).assertEqual('2.00px');
            try {
                var eventData = {
                    data: {
                        "columnsGap": '3px'
                    }
                };
                var innerEvent = {
                    eventId: 110
                };
                console.info('gridTest01 start to publish emit');
            }
            catch (err) {
                console.log('gridTest01 change component data error: ' + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonAfterChange = getInspectorByKey('grid');
            let objAfterChange = JSON.parse(strJsonAfterChange);
            console.info('gridTest01 columnsGap attribute after change is: ' + JSON.stringify(objAfterChange.$attrs.columnsGap));
            index_ets_1.expect(objAfterChange.$attrs.columnsGap).assertEqual('3.00px');
            console.info('[gridTest01] ==================== end');
            done();
        });
        index_ets_1.it('gridTest02', 0, async function (done) {
            console.info('[ gridTest02 ] ==================== start');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('grid');
            let obj = JSON.parse(strJson);
            console.info('[ gridTest02 ] attribute rowsGap before change is: ' + JSON.stringify(obj.$attrs.rowsGap));
            index_ets_1.expect(obj.$attrs.rowsGap).assertEqual('2.00px');
            try {
                var eventData = {
                    data: {
                        "rowsGap": '3px'
                    }
                };
                var innerEvent = {
                    eventId: 111
                };
                console.info('[ gridTest02 ] start to publish emit');
            }
            catch (err) {
                console.log('[ gridTest02 ] change component data error: ' + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonAfterChange = getInspectorByKey('grid');
            let objAfterChange = JSON.parse(strJsonAfterChange);
            console.info('[ gridTest02 ] attribute rowsGap after change is: ' + JSON.stringify(objAfterChange.$attrs.rowsGap));
            index_ets_1.expect(objAfterChange.$attrs.rowsGap).assertEqual('3.00px');
            console.info('[ gridTest02 ] ==================== end');
            done();
        });
        index_ets_1.it('gridTest03', 0, async function (done) {
            console.info('[ gridTest03 ] ==================== start');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('grid');
            let obj = JSON.parse(strJson);
            console.info('[ gridTest03 ] attribute columnsTemplate before change is: ' + JSON.stringify(obj.$attrs.columnsTemplate));
            index_ets_1.expect(obj.$attrs.columnsTemplate).assertEqual('1fr 1fr 1fr 1fr 1fr');
            try {
                var eventData = {
                    data: {
                        "columnsTemplate": '1fr 1fr 1fr 1fr'
                    }
                };
                var innerEvent = {
                    eventId: 112
                };
                console.info('[ gridTest03 ] start to publish emit');
            }
            catch (err) {
                console.log('[ gridTest03 ] change component data error: ' + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonAfterChange = getInspectorByKey('grid');
            let objAfterChange = JSON.parse(strJsonAfterChange);
            console.info('[ gridTest03 ] attribute columnsTemplate after change is: ' + JSON.stringify(objAfterChange.$attrs.columnsTemplate));
            index_ets_1.expect(objAfterChange.$attrs.columnsTemplate).assertEqual('1fr 1fr 1fr 1fr');
            console.info('[ gridTest03 ] ==================== end');
            done();
        });
        index_ets_1.it('gridTest04', 0, async function (done) {
            console.info('[ gridTest04 ] ==================== start');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('grid');
            let obj = JSON.parse(strJson);
            console.info('[ gridTest04 ] attribute rowsTemplate before change is: ' + JSON.stringify(obj.$attrs.rowsTemplate));
            index_ets_1.expect(obj.$attrs.rowsTemplate).assertEqual('1fr 1fr 1fr 1fr 1fr');
            try {
                var eventData = {
                    data: {
                        "rowsTemplate": '1fr 1fr 1fr 1fr'
                    }
                };
                var innerEvent = {
                    eventId: 113
                };
                console.info('[ gridTest04 ] start to publish emit');
            }
            catch (err) {
                console.log('[ gridTest04 ] change component data error: ' + err.message);
            }
            await Utils_1.default.sleep(1000);
            let strJsonAfterChange = getInspectorByKey('grid');
            let objAfterChange = JSON.parse(strJsonAfterChange);
            console.info('[ gridTest04 ] attribute rowsTemplate after change is: ' + JSON.stringify(objAfterChange.$attrs.rowsTemplate));
            index_ets_1.expect(objAfterChange.$attrs.rowsTemplate).assertEqual('1fr 1fr 1fr 1fr');
            console.info('[ gridTest04 ] ==================== end');
            done();
        });
    });
}
exports["default"] = gridJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LineJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LineJsunit.test.ets ***!
  \******************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function LineJsunit() {
    index_ets_1.describe('LineTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/line',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get line state success " + JSON.stringify(pages));
                if (!("line" == pages.name)) {
                    console.info("get line state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push line page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push line page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("line after each called");
        });
        index_ets_1.it('lineTest_0100', 0, async function (done) {
            console.info('lineTest_0100 START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('line');
            console.info("lineTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("lineTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.startPoint[0]).assertEqual(0);
            done();
        });
        index_ets_1.it('lineTest_0200', 0, async function (done) {
            console.info('lineTest_0200 START');
            let strJson = getInspectorByKey('line');
            console.info("lineTest_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("lineTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.startPoint[1]).assertEqual(0);
            done();
        });
        index_ets_1.it('lineTest_0300', 0, async function (done) {
            console.info('lineTest_0300 START');
            let strJson = getInspectorByKey('line');
            console.info("lineTest_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("lineTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.endPoint[0]).assertEqual(50);
            done();
        });
        index_ets_1.it('lineTest_0400', 0, async function (done) {
            console.info('lineTest_0400 START');
            let strJson = getInspectorByKey('line');
            console.info("lineTest_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("lineTest_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.endPoint[1]).assertEqual(100);
            done();
        });
        index_ets_1.it('lineTest_0500', 0, async function (done) {
            console.info('lineTest_0500 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "startPoint": 50,
                        "startPointOne": 50,
                    }
                };
                var innerEvent = {
                    eventId: 131
                };
                console.info("lineTest_0500 start to publish emit");
            }
            catch (err) {
                console.log("lineTest_0500 change component error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('line');
            var obj = JSON.parse(strJson);
            console.info("lineTest_0500 component obj is: " + JSON.stringify(obj.$attrs.startPoint[0]));
            console.info("lineTest_0500 component objOne is: " + JSON.stringify(obj.$attrs.startPoint[1]));
            index_ets_1.expect(obj.$attrs.startPoint[0]).assertEqual(50);
            index_ets_1.expect(obj.$attrs.startPoint[1]).assertEqual(50);
            done();
        });
        index_ets_1.it('lineTest_0600', 0, async function (done) {
            console.info('lineTest_0600 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "endPoint": 100,
                        "endPointOne": 150,
                    }
                };
                var innerEvent = {
                    eventId: 131
                };
                console.info("lineTest_0600 start to publish emit");
            }
            catch (err) {
                console.log("lineTest_0600 change component error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('line');
            var obj = JSON.parse(strJson);
            console.info("lineTest_0600 component obj is: " + JSON.stringify(obj.$attrs.endPoint[0]));
            console.info("lineTest_0600 component objOne is: " + JSON.stringify(obj.$attrs.endPoint[1]));
            index_ets_1.expect(obj.$attrs.endPoint[0]).assertEqual(100);
            index_ets_1.expect(obj.$attrs.endPoint[1]).assertEqual(150);
            done();
        });
        index_ets_1.it('lineTest_0700', 0, async function (done) {
            console.info('lineTest_0700 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "startPoint": 'A',
                        "startPointOne": 'B',
                    }
                };
                var innerEvent = {
                    eventId: 131
                };
                console.info("lineTest_0700 start to publish emit");
            }
            catch (err) {
                console.log("lineTest_0700 change component error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('line');
            var obj = JSON.parse(strJson);
            console.info("lineTest_0700 component obj is: " + JSON.stringify(obj.$attrs.startPoint[0]));
            console.info("lineTest_0700 component objOne is: " + JSON.stringify(obj.$attrs.startPoint[1]));
            index_ets_1.expect(obj.$attrs.startPoint[0]).assertEqual(0);
            index_ets_1.expect(obj.$attrs.startPoint[1]).assertEqual(0);
            done();
        });
        index_ets_1.it('lineTest_0800', 0, async function (done) {
            console.info('lineTest_0900 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "endPoint": 'A',
                        "endPointOne": 'B',
                    }
                };
                var innerEvent = {
                    eventId: 131
                };
                console.info("lineTest_0800 start to publish emit");
            }
            catch (err) {
                console.log("lineTest_0800 change component error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('line');
            var obj = JSON.parse(strJson);
            console.info("lineTest_0800 component objOne is: " + JSON.stringify(obj.$attrs.endPoint[1]));
            console.info("lineTest_0800 component obj is: " + JSON.stringify(obj.$attrs.endPoint[0]));
            index_ets_1.expect(obj.$attrs.endPoint[1]).assertEqual(0);
            index_ets_1.expect(obj.$attrs.endPoint[0]).assertEqual(0);
            done();
        });
    });
}
exports["default"] = LineJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets":
/*!************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/List.test.ets ***!
  \************************************************************************************************************************************/
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
const GridJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./GridJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/GridJsunit.test.ets"));
const CanvasJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CanvasJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CanvasJsunit.test.ets"));
const TextJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TextJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets"));
const BadgeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BadgeJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BadgeJsunit.test.ets"));
const LongPressGesture_test_ets_1 = __importDefault(__webpack_require__(/*! ./LongPressGesture.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LongPressGesture.test.ets"));
const ButtonJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ButtonJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ButtonJsunit.test.ets"));
const ResponseRegionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ResponseRegionJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ResponseRegionJsunit.test.ets"));
const PanGestureJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PanGestureJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanGestureJsunit.test.ets"));
const TabsJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TabsJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabsJsunit.test.ets"));
const QrCodeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./QrCodeJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/QrCodeJsunit.test.ets"));
const TapGesture_test_ets_1 = __importDefault(__webpack_require__(/*! ./TapGesture.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TapGesture.test.ets"));
const ProgressJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ProgressJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets"));
const AnimateJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AnimateJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AnimateJsunit.test.ets"));
const CommonJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CommonJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CommonJsunit.test.ets"));
const SpanJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SpanJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets"));
const RatingJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./RatingJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets"));
const Canvas2Jsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./Canvas2Jsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Canvas2Jsunit.test.ets"));
const ToggleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ToggleJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets"));
const ShapeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ShapeJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ShapeJsunit.test.ets"));
const MotionPathJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./MotionPathJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/MotionPathJsunit.test.ets"));
const ScrollCodeJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ScrollCodeJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ScrollCodeJsunit.test.ets"));
const TransitionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TransitionJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TransitionJsunit.test.ets"));
const PriorityGestureJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./PriorityGestureJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PriorityGestureJsunit.test.ets"));
const ParallelGestureJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./ParallelGestureJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ParallelGestureJsunit.test.ets"));
const BlankJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./BlankJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/BlankJsunit.test.ets"));
const SharedTransitionJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./SharedTransitionJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SharedTransitionJsunit.test.ets"));
const LineJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./LineJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LineJsunit.test.ets"));
const CircleJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./CircleJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/CircleJsunit.test.ets"));
const AboutToDisappearJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./AboutToDisappearJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/AboutToDisappearJsunit.test.ets"));
const TimeStampJsunit_test_ets_1 = __importDefault(__webpack_require__(/*! ./TimeStampJsunit.test.ets */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TimeStampJsunit.test.ets"));
function testsuite() {
    BadgeJsunit_test_ets_1.default();
    LineJsunit_test_ets_1.default();
    ProgressJsunit_test_ets_1.default();
    TextJsunit_test_ets_1.default();
    ButtonJsunit_test_ets_1.default();
    TabsJsunit_test_ets_1.default();
    QrCodeJsunit_test_ets_1.default();
    CircleJsunit_test_ets_1.default();
    GridJsunit_test_ets_1.default();
    TapGesture_test_ets_1.default();
    PanGestureJsunit_test_ets_1.default();
    CanvasJsunit_test_ets_1.default();
    Canvas2Jsunit_test_ets_1.default();
    LongPressGesture_test_ets_1.default();
    ResponseRegionJsunit_test_ets_1.default();
    AnimateJsunit_test_ets_1.default();
    CommonJsunit_test_ets_1.default();
    SpanJsunit_test_ets_1.default();
    RatingJsunit_test_ets_1.default();
    ToggleJsunit_test_ets_1.default();
    ShapeJsunit_test_ets_1.default();
    MotionPathJsunit_test_ets_1.default();
    ScrollCodeJsunit_test_ets_1.default();
    TransitionJsunit_test_ets_1.default();
    PriorityGestureJsunit_test_ets_1.default();
    ParallelGestureJsunit_test_ets_1.default();
    BlankJsunit_test_ets_1.default();
    SharedTransitionJsunit_test_ets_1.default();
    AboutToDisappearJsunit_test_ets_1.default();
    TimeStampJsunit_test_ets_1.default();
}
exports["default"] = testsuite;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LongPressGesture.test.ets":
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/LongPressGesture.test.ets ***!
  \************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function longPressGestureJsunit() {
    index_ets_1.describe('longPressGestureTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("longPressGesture beforeEach start");
            let options = {
                uri: 'pages/longPressGesture',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get longPressGesture state pages:" + JSON.stringify(pages));
                if (!("longPressGesture" == pages.name)) {
                    console.info("get longPressGesture state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push longPressGesture page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push longPressGesture page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("longPressGesture after each called");
        });
        index_ets_1.it('testLongPressGesture01', 0, async function (done) {
            console.info('[testLongPressGesture01] START');
            await Utils_1.default.sleep(1000);
            let callback = (eventData) => {
                console.info("testLongPressGesture01 get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual('onAction');
            };
            let innerEvent = {
                eventId: 125
            };
            console.info("testLongPressGesture01 sendEventByKey result: " + JSON.stringify(sendEventByKey('flex', 11, "")));
            await Utils_1.default.sleep(1000);
            console.info('testLongPressGesture01 END');
            done();
        });
        index_ets_1.it('testLongPressGesture02', 0, async function (done) {
            console.info('[testLongPressGesture02] START');
            await Utils_1.default.sleep(1000);
            let callback = (eventData) => {
                console.info("testLongPressGesture02 get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual('onActionEnd');
            };
            let innerEvent = {
                eventId: 126
            };
            console.info("testLongPressGesture02 sendEventByKey result: " + JSON.stringify(sendEventByKey('flex', 11, "")));
            await Utils_1.default.sleep(1000);
            console.info('testLongPressGesture02 END');
            done();
        });
    });
}
exports["default"] = longPressGestureJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/MotionPathJsunit.test.ets":
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/MotionPathJsunit.test.ets ***!
  \************************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function motionPathJsunit() {
    index_ets_1.describe('motionPathTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/motionPath',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get motionPath state success " + JSON.stringify(pages));
                if (!("motionPath" == pages.name)) {
                    console.info("get motionPath state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push motionPath page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push motionPath page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("motionPath after each called");
        });
        index_ets_1.it('motionPathTest_0100', 0, async function (done) {
            console.info('motionPathTest_0100 START');
            let strJson = getInspectorByKey('motionPath');
            console.info("motionPathTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("motionPathTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Column');
            done();
        });
        index_ets_1.it('motionPathTest_0200', 0, async function (done) {
            console.info('motionPathTest_0200 START');
            let callback = (indexEventOne) => {
                console.info("motionPathTest_0200 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.fromX).assertEqual(0);
                index_ets_1.expect(indexEventOne.data.toY).assertEqual(1);
            };
            let indexEventOne = {
                eventId: 133
            };
            console.info("motionPathTest_0200 click result is: " + JSON.stringify(sendEventByKey('button1', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('motionPathTest_0200 END');
            done();
        });
        index_ets_1.it('motionPathTest_0300', 0, async function (done) {
            console.info('motionPathTest_0300 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("motionPathTest_0300 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(true);
            };
            let indexEvent = {
                eventId: 132
            };
            console.info("motionPathTest_0300 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('motionPathTest_0300 END');
            done();
        });
    });
}
exports["default"] = motionPathJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanGestureJsunit.test.ets":
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PanGestureJsunit.test.ets ***!
  \************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function PanGestureJsunit() {
    index_ets_1.describe('PanGestureTest', function () {
        var x_value;
        var y_value;
        index_ets_1.beforeEach(async function (done) {
            console.info("PanGesture beforeEach start");
            let options = {
                uri: 'pages/PanGesture',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get PanGesture state pages:" + JSON.stringify(pages));
                if (!("PanGesture" == pages.name)) {
                    console.info("get PanGesture state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push PanGesture page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push PanGesture page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("PanGesture after each called");
        });
        index_ets_1.it('testPanGesture01', 0, async function (done) {
            console.info('[testPanGesture01] START');
            try {
                var eventData = {
                    data: {
                        "touchable": true,
                    }
                };
                var innerEvent = {
                    eventId: 23
                };
                console.info("[testPanGesture01] start to publish emit:" + JSON.stringify(eventData.data));
            }
            catch (err) {
                console.log("[testPanGesture01] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            console.info('[testPanGesture01] END');
            done();
        });
        index_ets_1.it('testPanGesture02', 0, async function (done) {
            let rect = await Utils_1.default.getComponentRect('PanGesture');
            console.info("[testPanGesture02] rectInfo is " + JSON.stringify(rect));
            x_value = rect.left + (rect.right - rect.left) / 10;
            y_value = rect.top + (rect.bottom - rect.top) / 10;
            console.info("[testPanGesture02] onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 1,
                x: x_value,
                y: y_value,
                type: TouchType.Move,
            };
            var callbackTwo = (eventDataOne) => {
                console.info("[testPanGesture02] get event state result is: " + JSON.stringify(eventDataOne));
                index_ets_1.expect(eventDataOne.data.ACTION).assertEqual(true);
                index_ets_1.expect(eventDataOne.data.EVENT_TYPE).assertEqual('Move');
            };
            var innerEventTwo = {
                eventId: 24
            };
            await Utils_1.default.sleep(1000);
            console.info('[testPanGesture02] END');
            done();
        });
    });
}
exports["default"] = PanGestureJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ParallelGestureJsunit.test.ets":
/*!*****************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ParallelGestureJsunit.test.ets ***!
  \*****************************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function parallelGestureJsunit() {
    index_ets_1.describe('parallelGestureTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/parallelGesture',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get parallelGesture state success " + JSON.stringify(pages));
                if (!("parallelGesture" == pages.name)) {
                    console.info("get parallelGesture state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push parallelGesture page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push parallelGesture page error " + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("parallelGesture after each called");
        });
        index_ets_1.it('parallelGestureTest_0100', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            let rect = await Utils_1.default.getComponentRect('tapGesture');
            console.info("parallelGestureTest_0100 rectInfo is " + JSON.stringify(rect));
            let x_value = rect.left + (rect.right - rect.left) / 2;
            let y_value = rect.top + (rect.bottom - rect.top) / 2;
            console.info("parallelGestureTest_0100 onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 11, x: x_value, y: y_value, type: TouchType.DOWN
            };
            var callback = (eventData) => {
                console.info("parallelGestureTest_0100 get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.value).assertEqual('gesture onAction');
            };
            var innerEvent = {
                eventId: 150
            };
            await Utils_1.default.sleep(1000);
            console.info('parallelGestureTest_0100 testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = parallelGestureJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PriorityGestureJsunit.test.ets":
/*!*****************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/PriorityGestureJsunit.test.ets ***!
  \*****************************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function priorityGestureJsunit() {
    index_ets_1.describe('priorityGestureTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/priorityGesture',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get priorityGesture state success " + JSON.stringify(pages));
                if (!("priorityGesture" == pages.name)) {
                    console.info("get priorityGesture state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push priorityGesture page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push priorityGesture page error " + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("priorityGesture after each called");
        });
        index_ets_1.it('priorityGestureTest_0100', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            let rect = await Utils_1.default.getComponentRect('tapGesture');
            console.info("priorityGestureTest_0100 rectInfo is " + JSON.stringify(rect));
            let x_value = rect.left + (rect.right - rect.left) / 2;
            let y_value = rect.top + (rect.bottom - rect.top) / 2;
            console.info("priorityGestureTest_0100 onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 11, x: x_value, y: y_value, type: TouchType.Move
            };
            var callback = (eventData) => {
                console.info("priorityGestureTest_0100 get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.value).assertEqual('gesture onAction');
            };
            var innerEvent = {
                eventId: 162
            };
            await Utils_1.default.sleep(1000);
            console.info('priorityGestureTest_0100 testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = priorityGestureJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets":
/*!**********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ProgressJsunit.test.ets ***!
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function progressJsunit() {
    index_ets_1.describe('progressTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/progress',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get progress state success " + JSON.stringify(pages));
                if (!("progress" == pages.name)) {
                    console.info("get progress state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push progress page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push progress page error " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("progress after each called");
        });
        index_ets_1.it('testProgress_100', 0, async function (done) {
            console.info('testProgress_100 START');
            await Utils_1.default.sleep(1000);
            let strJson1 = getInspectorByKey('LPValue');
            let objLP = JSON.parse(strJson1);
            console.info("testProgress_100 component objLP is: " + objLP.$attrs.value);
            try {
                let eventData = {
                    data: {
                        "value": 100
                    }
                };
                var innerEvent = {
                    eventId: 164
                };
                console.info("testProgress_100 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_100 component obj is: " + JSON.stringify(obj.$attrs.value));
            index_ets_1.expect(obj.$attrs.value).assertEqual("100.000000");
            console.info('testProgress_100 END');
            done();
        });
        index_ets_1.it('testProgress_200', 0, async function (done) {
            console.info('[testProgress_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual("200.00vp");
            console.info('testProgress_200 END');
            done();
        });
        index_ets_1.it('testProgress_300', 0, async function (done) {
            console.info('testProgress_300 START');
            let strJson1 = getInspectorByKey('EPValue');
            let objEP = JSON.parse(strJson1);
            console.info("testProgress_300 component objEP is: " + objEP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 100
                    }
                };
                var innerEvent = {
                    eventId: 165
                };
                console.info("testProgress_300 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('EPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("100.000000");
            console.info('testProgress_300 END');
            done();
        });
        index_ets_1.it('testProgress_400', 0, async function (done) {
            console.info('[testProgress_400] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual("200.00vp");
            console.info('testProgress_400 END');
            done();
        });
        index_ets_1.it('testProgress_500', 0, async function (done) {
            console.info('testProgress_500 START');
            let strJson1 = getInspectorByKey('CPValue');
            let objCP = JSON.parse(strJson1);
            console.info("testProgress_500 component objCP is: " + objCP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 100
                    }
                };
                var innerEvent = {
                    eventId: 166
                };
                console.info("testProgress_500 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_500 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('EPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("100.000000");
            console.info('testProgress_500 END');
            done();
        });
        index_ets_1.it('testProgress_600', 0, async function (done) {
            console.info('[testProgress_600] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('CPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.width).assertEqual("100.00vp");
            console.info('testProgress_600 END');
            done();
        });
        index_ets_1.it('testProgress_700', 0, async function (done) {
            console.info('testProgress_700 START');
            let strJson1 = getInspectorByKey('LPValue');
            let objLP = JSON.parse(strJson1);
            console.info("testProgress_700 component objLP is: " + objLP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 0
                    }
                };
                var innerEvent = {
                    eventId: 167
                };
                console.info("testProgress_700 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_700 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_700 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("0.000000");
            console.info('testProgress_700 END');
            done();
        });
        index_ets_1.it('testProgress_800', 0, async function (done) {
            console.info('testProgress_800 START');
            let strJson1 = getInspectorByKey('EPValue');
            let objEP = JSON.parse(strJson1);
            console.info("testProgress_800 component objEP is: " + objEP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 0
                    }
                };
                var innerEvent = {
                    eventId: 168
                };
                console.info("testProgress_800 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_800 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('EPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_800 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("0.000000");
            console.info('testProgress_800 END');
            done();
        });
        index_ets_1.it('testProgress_900', 0, async function (done) {
            console.info('testProgress_900 START');
            let strJson1 = getInspectorByKey('CPValue');
            let objCP = JSON.parse(strJson1);
            console.info("testProgress_900 component objCP is: " + objCP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 0
                    }
                };
                var innerEvent = {
                    eventId: 169
                };
                console.info("testProgress_900 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_900 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('EPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_900 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("0.000000");
            console.info('testProgress_900 END');
            done();
        });
        index_ets_1.it('testProgress_1000', 0, async function (done) {
            console.info('testProgress_1000 START');
            let strJson1 = getInspectorByKey('LPValue');
            let objLP = JSON.parse(strJson1);
            console.info("testProgress_1000 component objLP is: " + objLP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": -5
                    }
                };
                var innerEvent = {
                    eventId: 1021
                };
                console.info("testProgress_1000 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_1000 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_1000 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("-5.000000");
            console.info('testProgress_1000 END');
            done();
        });
        index_ets_1.it('testProgress_1100', 0, async function (done) {
            console.info('testProgress_1100 START');
            let strJson1 = getInspectorByKey('LPValue');
            let objLP = JSON.parse(strJson1);
            console.info("testProgress_1100 component objLP is: " + objLP.$attrs.value);
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "value": 121212121
                    }
                };
                var innerEvent = {
                    eventId: 1022
                };
                console.info("testProgress_1100 start to publish emit");
            }
            catch (err) {
                console.log("testProgress_1100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('LPValue');
            let obj = JSON.parse(strJson);
            console.info("testProgress_1100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.value).assertEqual("121212121.000000");
            console.info('testProgress_1100 END');
            done();
        });
    });
}
exports["default"] = progressJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/QrCodeJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/QrCodeJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function qrCodeJsunit() {
    index_ets_1.describe('qrCodeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/QrCode',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get QrCode state success " + JSON.stringify(pages));
                if (!("QrCode" == pages.name)) {
                    console.info("get QrCode pages success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push QrCode page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push QrCode page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("QrCode after each called");
        });
        index_ets_1.it('test_qrCode_001', 0, async function (done) {
            console.info('[test_qrCode_001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('QrCodeColor');
            let obj = JSON.parse(strJson);
            console.info("[test_qrCode_001] component obj is: " + JSON.stringify(obj));
            await Utils_1.default.sleep(1000);
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual('#FF008000');
            index_ets_1.expect(obj.$attrs.color).assertEqual('#FF0000FF');
            done();
        });
        index_ets_1.it('test_qrCode_002', 0, async function (done) {
            console.info('[test_qrCode_002] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "color": "#FFB6C1"
                    }
                };
                var innerEvent = {
                    eventId: 170
                };
                console.info("[test_qrCode_002] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_002] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_002] component obj is: " + JSON.stringify(obj.$attrs.color));
            index_ets_1.expect(obj.$attrs.color).assertEqual('#FFFFB6C1');
            done();
        });
        index_ets_1.it('test_qrCode_003', 0, async function (done) {
            console.info('[test_qrCode_003] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "backgroundColor": "#FFB6C1"
                    }
                };
                var innerEvent = {
                    eventId: 171
                };
                console.info("[test_qrCode_003] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_003] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeBackgroundColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_003] component obj is: " + JSON.stringify(obj.$attrs.backgroundColor));
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual('#FFFFB6C1');
            done();
        });
        index_ets_1.it('test_qrCode_004', 0, async function (done) {
            console.info('[test_qrCode_004] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "color": 'a'
                    }
                };
                var innerEvent = {
                    eventId: 1023
                };
                console.info("[test_qrCode_004] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_004] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_004] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.color).assertEqual('#FF000000');
            done();
        });
        index_ets_1.it('test_qrCode_005', 0, async function (done) {
            console.info('[test_qrCode_005] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "color": 332
                    }
                };
                var innerEvent = {
                    eventId: 1024
                };
                console.info("[test_qrCode_005] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_005] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_005] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.color).assertEqual('#0000014C');
            done();
        });
        index_ets_1.it('test_qrCode_006', 0, async function (done) {
            console.info('[test_qrCode_006] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "backgroundColor": 'b'
                    }
                };
                var innerEvent = {
                    eventId: 1025
                };
                console.info("[test_qrCode_006] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_006] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_006] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual('#FF000000');
            done();
        });
        index_ets_1.it('test_qrCode_007', 0, async function (done) {
            console.info('[test_qrCode_007] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "backgroundColor": 333
                    }
                };
                var innerEvent = {
                    eventId: 1026
                };
                console.info("[test_qrCode_007] start to publish emit");
            }
            catch (err) {
                console.log("[test_qrCode_007] change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('QrCodeColor');
            var obj = JSON.parse(strJson);
            console.info("[test_qrCode_007] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.backgroundColor).assertEqual('#0000014D');
            done();
        });
    });
}
exports["default"] = qrCodeJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/RatingJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function ratingJsunit() {
    index_ets_1.describe('ratingTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/rating',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get rating state success " + JSON.stringify(pages));
                if (!("rating" == pages.name)) {
                    console.info("get rating state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(4000);
                    console.info("push rating page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push rating page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("rating after each called");
        });
        index_ets_1.it('testRating_100', 0, async function (done) {
            console.info('testRating_100 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 2
                    }
                };
                var innerEvent = {
                    eventId: 173
                };
                console.info("testRating_100 start to publish emit");
            }
            catch (err) {
                console.log("testRating_100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("2.000000");
            console.info('testRating_100 END');
            done();
        });
        index_ets_1.it('testRating_200', 0, async function (done) {
            console.info('[testRating_200] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.stepSize).assertEqual("0.500000");
            console.info('testRating_200 END');
            done();
        });
        index_ets_1.it('testRating_300', 0, async function (done) {
            console.info('testRating_300 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "rating": 3
                    }
                };
                var innerEvent = {
                    eventId: 174
                };
                console.info("testRating_300 start to publish emit");
                console.info("eventData.data.rating value" + eventData.data.rating);
            }
            catch (err) {
                console.log("testRating_300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("3.000000");
            console.info('testRating_300 END');
            done();
        });
        index_ets_1.it('testRating_400', 0, async function (done) {
            console.info('testRating_400 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 4
                    }
                };
                var innerEvent = {
                    eventId: 175
                };
                console.info("testRating_400 start to publish emit");
            }
            catch (err) {
                console.log("testRating_400 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("4.000000");
            console.info('testRating_400 END');
            done();
        });
        index_ets_1.it('testRating_500', 0, async function (done) {
            console.info('testRating_500 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 5
                    }
                };
                var innerEvent = {
                    eventId: 176
                };
                console.info("testRating_500 start to publish emit");
            }
            catch (err) {
                console.log("testRating_500 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("5.000000");
            console.info('testRating_500 END');
            done();
        });
        index_ets_1.it('testRating_600', 0, async function (done) {
            console.info('testRating_600 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 0
                    }
                };
                var innerEvent = {
                    eventId: 177
                };
                console.info("testRating_600 start to publish emit");
            }
            catch (err) {
                console.log("testRating_600 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("0.000000");
            console.info('testRating_600 END');
            done();
        });
        index_ets_1.it('testRating_700', 0, async function (done) {
            console.info('testRating_700 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 1
                    }
                };
                var innerEvent = {
                    eventId: 178
                };
                console.info("testRating_700 start to publish emit");
            }
            catch (err) {
                console.log("testRating_700 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_700 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("1.000000");
            console.info('testRating_700 END');
            done();
        });
        index_ets_1.it('testRating_800', 0, async function (done) {
            console.info('testRating_800 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": -1
                    }
                };
                var innerEvent = {
                    eventId: 1027
                };
                console.info("testRating_800 start to publish emit");
            }
            catch (err) {
                console.log("testRating_800 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_800 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("0.000000");
            console.info('testRating_800 END');
            done();
        });
        index_ets_1.it('testRating_900', 0, async function (done) {
            console.info('testRating_900 START');
            await Utils_1.default.sleep(1000);
            try {
                let eventData = {
                    data: {
                        "rating": 'a'
                    }
                };
                var innerEvent = {
                    eventId: 1028
                };
                console.info("testRating_900 start to publish emit");
            }
            catch (err) {
                console.log("testRating_900 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('Rating');
            let obj = JSON.parse(strJson);
            console.info("testRating_900 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.rating).assertEqual("0.000000");
            console.info('testRating_900 END');
            done();
        });
    });
}
exports["default"] = ratingJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ResponseRegionJsunit.test.ets":
/*!****************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ResponseRegionJsunit.test.ets ***!
  \****************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function ResponseRegionJsunit() {
    index_ets_1.describe('responseRegionTest', function () {
        var x_value;
        var y_value;
        index_ets_1.beforeEach(async function (done) {
            console.info("ResponseRegion beforeEach start");
            let options = {
                uri: 'pages/ResponseRegion',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get ResponseRegion state pages:" + JSON.stringify(pages));
                if (!("ResponseRegion" == pages.name)) {
                    console.info("get ResponseRegion state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push ResponseRegion page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ResponseRegion page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("ResponseRegion after each called");
        });
        index_ets_1.it('testResponseRegion01', 0, async function (done) {
            console.info('[testResponseRegion01] START');
            try {
                var eventData = {
                    data: {
                        "touchable": true,
                    }
                };
                var innerEvent = {
                    eventId: 30
                };
                console.info("[testResponseRegion01] start to publish emit:" + JSON.stringify(eventData.data));
            }
            catch (err) {
                console.log("[testResponseRegion01] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(1000);
            console.info('[testResponseRegion01] END');
            done();
        });
        index_ets_1.it('testResponseRegion02', 0, async function (done) {
            let rect = await Utils_1.default.getComponentRect('region');
            console.info("[testResponseRegion02] rectInfo is " + JSON.stringify(rect));
            x_value = rect.left + (rect.right - rect.left) / 10;
            y_value = rect.top + (rect.bottom - rect.top) / 10;
            console.info("[testResponseRegion02] onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 1,
                x: x_value,
                y: y_value,
                type: TouchType.Down,
            };
            var callbackTwo = (eventData) => {
                console.info("[testResponseRegion02] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(true);
                index_ets_1.expect(eventData.data.EVENT_TYPE).assertEqual('Down');
            };
            var innerEventTwo = {
                eventId: 31
            };
            await Utils_1.default.sleep(1000);
            console.info('[testResponseRegion02] END');
            done();
        });
    });
}
exports["default"] = ResponseRegionJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ScrollCodeJsunit.test.ets":
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ScrollCodeJsunit.test.ets ***!
  \************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function scrollCodeJsunit() {
    index_ets_1.describe('scrollCodeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/scrollCode',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get ScrollCode state success " + JSON.stringify(pages));
                if (!("ScrollCode" == pages.name)) {
                    console.info("get ScrollCode pages success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push ScrollCode page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push ScrollCode page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("ScrollCode after each called");
        });
        index_ets_1.it('test_scrollCode_001', 0, async function (done) {
            console.info('[test_scrollCode_001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('ScrollCode');
            let obj = JSON.parse(strJson);
            console.info("[test_scrollCode_001] component obj is: " + JSON.stringify(obj));
            await Utils_1.default.sleep(1000);
            index_ets_1.expect(obj.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
            index_ets_1.expect(obj.$attrs.scrollBar).assertEqual('BarState.On');
            index_ets_1.expect(obj.$attrs.scrollBarColor).assertEqual('#FF0000FF');
            index_ets_1.expect(obj.$attrs.scrollBarWidth).assertEqual('30.00px');
            done();
        });
        index_ets_1.it('test_scrollCode_002', 0, async function (done) {
            console.info('[test_scrollCode_002] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "scrollable": "ScrollDirection.Vertical"
                    }
                };
                var innerEvent = {
                    eventId: 185
                };
                console.info("[test_scrollCode_002] start to publish emit");
            }
            catch (err) {
                console.log("[test_scrollCode_002] change scrollable error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('ScrollCode');
            let obj = JSON.parse(strJson);
            console.info("[test_scrollCode_002] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollable).assertEqual('ScrollDirection.Vertical');
            done();
        });
        index_ets_1.it('test_scrollCode_003', 0, async function (done) {
            console.info('[test_scrollCode_003] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "scrollBar": "BarState.Off"
                    }
                };
                var innerEvent = {
                    eventId: 186
                };
                console.info("[test_scrollCode_003] start to publish emit");
            }
            catch (err) {
                console.log("[test_scrollCode_003] change scrollBar error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('ScrollCode');
            let obj = JSON.parse(strJson);
            console.info("[test_scrollCode_003] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollBar).assertEqual('BarState.Off');
            done();
        });
        index_ets_1.it('test_scrollCode_004', 0, async function (done) {
            console.info('[test_scrollCode_004] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "scrollBarColor": "#FFB6C1"
                    }
                };
                var innerEvent = {
                    eventId: 187
                };
                console.info("[test_scrollCode_004] start to publish emit");
            }
            catch (err) {
                console.log("[test_scrollCode_004] change scrollBar error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('ScrollCode');
            let obj = JSON.parse(strJson);
            console.info("[test_scrollCode_004] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollBarColor).assertEqual('#FFFFB6C1');
            done();
        });
        index_ets_1.it('test_scrollCode_005', 0, async function (done) {
            console.info('[test_scrollCode_005] START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "scrollBarWidth": 40
                    }
                };
                var innerEvent = {
                    eventId: 188
                };
                console.info("[test_scrollCode_005] start to publish emit");
            }
            catch (err) {
                console.log("[test_scrollCode_005] change scrollBar error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('ScrollCode');
            let obj = JSON.parse(strJson);
            console.info("[test_scrollCode_005] component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollBarWidth).assertEqual('40.00px');
            done();
        });
        index_ets_1.it('test_scrollCode_006', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            var callback = (eventData) => {
                console.info("[test_scrollCode_06] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.scrollToIndex).assertEqual(10);
            };
            var innerEvent = {
                eventId: 189
            };
            console.info('[test_scrollCode_006] sendEventByKey ' + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('[test_scrollCode_006] testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = scrollCodeJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ShapeJsunit.test.ets":
/*!*******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ShapeJsunit.test.ets ***!
  \*******************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function shapeJsunit() {
    index_ets_1.describe('shapeTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/shape',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get shape state success " + JSON.stringify(pages));
                if (!("shape" == pages.name)) {
                    console.info("get shape state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(1000);
                    console.info("push shape page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push shape page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("shape after each called");
        });
        index_ets_1.it('shapeTest_0100', 0, async function (done) {
            console.info('shapeTest_0100 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeDashOffset).assertEqual('0.00vp');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0200', 0, async function (done) {
            console.info('shapeTest_0200 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0300', 0, async function (done) {
            console.info('shapeTest_0300 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeLineJoin).assertEqual('LineJoinStyle.Miter');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0400', 0, async function (done) {
            console.info('shapeTest_0400 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeMiterLimit).assertEqual('4.000000');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0500', 0, async function (done) {
            console.info('shapeTest_0500 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeOpacity).assertEqual('1.000000');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0600', 0, async function (done) {
            console.info('shapeTest_0600 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.fillOpacity).assertEqual('0.000000');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0700', 0, async function (done) {
            console.info('shapeTest_0700 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0700 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.antiAlias).assertEqual('true');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0800', 0, async function (done) {
            console.info('shapeTest_0800 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0800 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeDashArray[0]).assertEqual('20.00vp');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_0900', 0, async function (done) {
            console.info('shapeTest_0900 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_0900 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.strokeDashArray[1]).assertEqual('20.00vp');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_1000', 0, async function (done) {
            console.info('shapeTest_1000 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "antiAlias": "false",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1000 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1000 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1000 component obj is: " + JSON.stringify(obj.$attrs.antiAlias));
            index_ets_1.expect(obj.$attrs.antiAlias).assertEqual('false');
            done();
        });
        index_ets_1.it('shapeTest_1100', 0, async function (done) {
            console.info('shapeTest_1100 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "antiAlias": aaaaa,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1100 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1100 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1100 component obj is: " + JSON.stringify(obj.$attrs.antiAlias));
            index_ets_1.expect(obj.$attrs.antiAlias).assertEqual('false');
            done();
        });
        index_ets_1.it('shapeTest_1200', 0, async function (done) {
            console.info('shapeTest_1200 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "antiAlias": -0.1,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1200 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1200 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1200 component obj is: " + JSON.stringify(obj.$attrs.antiAlias));
            index_ets_1.expect(obj.$attrs.antiAlias).assertEqual('false');
            done();
        });
        index_ets_1.it('shapeTest_1300', 0, async function (done) {
            console.info('shapeTest_1300 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineCap": LineCapStyle.Round,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1300 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1300 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1300 component obj is: " + JSON.stringify(obj.$attrs.strokeLineCap));
            index_ets_1.expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Round');
            done();
        });
        index_ets_1.it('shapeTest_1400', 0, async function (done) {
            console.info('shapeTest_1400 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineCap": 'string'
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1400 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1400 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1400 component obj is: " + JSON.stringify(obj.$attrs.strokeLineCap));
            index_ets_1.expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
            done();
        });
        index_ets_1.it('shapeTest_1500', 0, async function (done) {
            console.info('shapeTest_1500 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineCap": '-0.2'
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1500 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1500 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1500 component obj is: " + JSON.stringify(obj.$attrs.strokeLineCap));
            index_ets_1.expect(obj.$attrs.strokeLineCap).assertEqual('LineCapStyle.Butt');
            done();
        });
        index_ets_1.it('shapeTest_1600', 0, async function (done) {
            console.info('shapeTest_1600 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineJoin": LineJoinStyle.Round,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1600 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1600 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1600 component obj is: " + JSON.stringify(obj.$attrs.strokeLineJoin));
            index_ets_1.expect(obj.$attrs.strokeLineJoin).assertEqual('LineJoinStyle.Round');
            done();
        });
        index_ets_1.it('shapeTest_1700', 0, async function (done) {
            console.info('shapeTest_1700 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineJoin": 'nothing',
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1700 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1700 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1700 component obj is: " + JSON.stringify(obj.$attrs.strokeLineJoin));
            index_ets_1.expect(obj.$attrs.strokeLineJoin).assertEqual('LineJoinStyle.Miter');
            done();
        });
        index_ets_1.it('shapeTest_1800', 0, async function (done) {
            console.info('shapeTest_1800 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineJoin": 0.11111,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1800 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1800 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1800 component obj is: " + JSON.stringify(obj.$attrs.strokeLineJoin));
            index_ets_1.expect(obj.$attrs.strokeLineJoin).assertEqual('LineJoinStyle.Miter');
            done();
        });
        index_ets_1.it('shapeTest_1900', 0, async function (done) {
            console.info('shapeTest_1900 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeMiterLimit": "5",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_1900 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_1900 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_1900 component obj is: " + JSON.stringify(obj.$attrs.strokeMiterLimit));
            index_ets_1.expect(obj.$attrs.strokeMiterLimit).assertEqual('5.000000');
            done();
        });
        index_ets_1.it('shapeTest_2000', 0, async function (done) {
            console.info('shapeTest_2000 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeMiterLimit": "string",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2000 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2000 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2000 component obj is: " + JSON.stringify(obj.$attrs.strokeMiterLimit));
            index_ets_1.expect(obj.$attrs.strokeMiterLimit).assertEqual('4.000000');
            done();
        });
        index_ets_1.it('shapeTest_2100', 0, async function (done) {
            console.info('shapeTest_2100 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeMiterLimit": '-0.11111',
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2100 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2100 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2100 component obj is: " + JSON.stringify(obj.$attrs.strokeMiterLimit));
            index_ets_1.expect(obj.$attrs.strokeMiterLimit).assertEqual('4.000000');
            done();
        });
        index_ets_1.it('shapeTest_2200', 0, async function (done) {
            console.info('shapeTest_1300 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeMiterLimit": 'aaa11111',
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2200 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2200 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2200 component obj is: " + JSON.stringify(obj.$attrs.strokeMiterLimit));
            index_ets_1.expect(obj.$attrs.strokeMiterLimit).assertEqual('4.000000');
            done();
        });
        index_ets_1.it('shapeTest_2300', 0, async function (done) {
            console.info('shapeTest_2300 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fillOpacity": "1",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2300 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2300 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2300 component obj is: " + JSON.stringify(obj.$attrs.fillOpacity));
            index_ets_1.expect(obj.$attrs.fillOpacity).assertEqual('1.000000');
            done();
        });
        index_ets_1.it('shapeTest_2400', 0, async function (done) {
            console.info('shapeTest_2400 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fillOpacity": "-1",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2400 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2400 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2400 component obj is: " + JSON.stringify(obj.$attrs.fillOpacity));
            index_ets_1.expect(obj.$attrs.fillOpacity).assertEqual('0.000000');
            done();
        });
        index_ets_1.it('shapeTest_2500', 0, async function (done) {
            console.info('shapeTest_2500 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fillOpacity": "aaaaaaa",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2500 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2500 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2500 component obj is: " + JSON.stringify(obj.$attrs.fillOpacity));
            index_ets_1.expect(obj.$attrs.fillOpacity).assertEqual('nan');
            done();
        });
        index_ets_1.it('shapeTest_2600', 0, async function (done) {
            console.info('shapeTest_2600 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "fillOpacity": "aa12345",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2600 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2600 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2600 component obj is: " + JSON.stringify(obj.$attrs.fillOpacity));
            index_ets_1.expect(obj.$attrs.fillOpacity).assertEqual('nan');
            done();
        });
        index_ets_1.it('shapeTest_2700', 0, async function (done) {
            console.info('shapeTest_2700 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeDashArrayOne": "4",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2700 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2700 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2700 component obj is: " + JSON.stringify(obj.$attrs.strokeDashArray[0]));
            index_ets_1.expect(obj.$attrs.strokeDashArray[0]).assertEqual('4.00vp');
            done();
        });
        index_ets_1.it('shapeTest_2800', 0, async function (done) {
            console.info('shapeTest_2800 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeDashArrayTwo": "4",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2800 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2800 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2800 component obj is: " + JSON.stringify(obj.$attrs.strokeDashArray[1]));
            index_ets_1.expect(obj.$attrs.strokeDashArray[1]).assertEqual('4.00vp');
            done();
        });
        index_ets_1.it('shapeTest_2900', 0, async function (done) {
            console.info('shapeTest_2900 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeDashArrayThree": "4",
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_2900 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_2900 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_2900 component obj is: " + JSON.stringify(obj.$attrs.strokeDashArray[1]));
            index_ets_1.expect(obj.$attrs.strokeDashArray[2]).assertEqual('4.00vp');
            done();
        });
        index_ets_1.it('shapeTest_3000', 0, async function (done) {
            console.info('shapeTest_3000 START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('shape');
            let obj = JSON.parse(strJson);
            console.info("shapeTest_3000 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.stroke).assertEqual('#FF000000');
            await Utils_1.default.sleep(1000);
            done();
        });
        index_ets_1.it('shapeTest_3100', 0, async function (done) {
            console.info('shapeTest_3100 START');
            await Utils_1.default.sleep(1000);
            try {
                var eventData = {
                    data: {
                        "strokeLineJoin": LineJoinStyle.Bevel,
                    }
                };
                var innerEvent = {
                    eventId: 192
                };
                console.info("shapeTest_3100 start to publish emit");
            }
            catch (err) {
                console.log("shapeTest_3100 change component color error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            var strJson = getInspectorByKey('shape');
            var obj = JSON.parse(strJson);
            console.info("shapeTest_3100 component obj is: " + JSON.stringify(obj.$attrs.strokeLineJoin));
            index_ets_1.expect(obj.$attrs.strokeLineJoin).assertEqual('LineJoinStyle.Bevel');
            done();
        });
    });
}
exports["default"] = shapeJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SharedTransitionJsunit.test.ets":
/*!******************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SharedTransitionJsunit.test.ets ***!
  \******************************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function sharedTransitionJsunit() {
    index_ets_1.describe('sharedTransitionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("sharedTransition beforeEach start");
            let options = {
                uri: 'pages/sharedTransition',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get sharedTransition state pages:" + JSON.stringify(pages));
                if (!("sharedTransition" == pages.name)) {
                    console.info("get sharedTransition state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push sharedTransition page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push sharedTransition page error:" + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("sharedTransition after each called");
        });
        index_ets_1.it('sharedTransitionTest_0100', 0, async function (done) {
            console.info('sharedTransitionTest_0100 START');
            let strJson = getInspectorByKey('Navigator');
            let obj = JSON.parse(strJson);
            console.info("sharedTransitionTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            console.info('sharedTransitionTest_0100 END');
            done();
        });
        index_ets_1.it('sharedTransitionTest_0200', 0, async function (done) {
            console.info('sharedTransitionTest_0200 START');
            let strJson = getInspectorByKey('Navigator');
            let obj = JSON.parse(strJson);
            console.info("sharedTransitionTest_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            index_ets_1.expect(obj.$attrs.target).assertEqual('pages/sharedTransition2');
            console.info('sharedTransitionTest_0200 END');
            done();
        });
        index_ets_1.it('sharedTransitionTest_0300', 0, async function (done) {
            console.info('sharedTransitionTest_0300 START');
            let strJson = getInspectorByKey('Navigator');
            let obj = JSON.parse(strJson);
            console.info("sharedTransitionTest_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Navigator');
            index_ets_1.expect(obj.$attrs.active).assertEqual('false');
            console.info('sharedTransitionTest_0300 END');
            done();
        });
        index_ets_1.it('sharedTransitionTest_0400', 0, async function (done) {
            console.info('sharedTransitionTest_0400 START');
            try {
                let eventData = {
                    data: {
                        "duration": 2000,
                        "delay": 5,
                        "type": SharedTransitionEffectType.Exchange
                    }
                };
                let indexEvent = {
                    eventId: 194
                };
                console.info("sharedTransitionTest_0400 start to publish emit");
            }
            catch (err) {
                console.log("sharedTransitionTest_0400 change component data error: " + err.message);
            }
            let callback = (indexEventOne) => {
                console.info("sharedTransitionTest_0400 get state result is: " + JSON.stringify(indexEventOne));
                index_ets_1.expect(indexEventOne.data.duration).assertEqual(2000);
                index_ets_1.expect(indexEventOne.data.delay).assertEqual(5);
                index_ets_1.expect(indexEventOne.data.type).assertEqual(SharedTransitionEffectType.Exchange);
            };
            let indexEventOne = {
                eventId: 193
            };
            console.info("sharedTransitionTest_0400 click result is: " + JSON.stringify(sendEventByKey('Navigator', 10, "")));
            await Utils_1.default.sleep(2000);
            console.info('sharedTransitionTest_0400 END');
            done();
        });
    });
}
exports["default"] = sharedTransitionJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/SpanJsunit.test.ets ***!
  \******************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function spanJsunit() {
    index_ets_1.describe('spanTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/span',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get span state success " + JSON.stringify(pages));
                if (!("span" == pages.name)) {
                    console.info("get span success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push span page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push span page error " + JSON.stringify(err));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("span after each called");
        });
        index_ets_1.it('testSpan001', 0, async function (done) {
            console.info('[testSpan001] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('decoration');
            console.info("[testSpan001] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            let decoration = JSON.parse(obj.$attrs.decoration);
            index_ets_1.expect(decoration.type).assertEqual('TextDecorationType.None');
            index_ets_1.expect(decoration.color).assertEqual('#FFFF0000');
            done();
        });
        index_ets_1.it('testSpan002', 0, async function (done) {
            console.info('[testSpan002] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('decoration');
            console.info("[testSpan002] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan002] textCase:" + obj.$attrs.textCase);
            index_ets_1.expect(obj.$attrs.textCase).assertEqual('TextCase.Normal');
            done();
        });
        index_ets_1.it('testSpan003', 0, async function (done) {
            console.info('[testSpan003] START');
            try {
                let eventData = {
                    data: {
                        "textCaseValue": TextCase.UpperCase
                    }
                };
                let indexEvent = {
                    eventId: 200
                };
                console.info("[testSpan003] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan003] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('decoration');
            console.info("[testSpan003] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan003] textCase:" + obj.$attrs.textCase);
            index_ets_1.expect(obj.$attrs.textCase).assertEqual('TextCase.UpperCase');
            done();
        });
        index_ets_1.it('testSpan004', 0, async function (done) {
            console.info('[testSpan004] START');
            await Utils_1.default.sleep(2000);
            let strJson = getInspectorByKey('fontColor');
            console.info("[testSpan004] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan004] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFCCCCCC');
            done();
        });
        index_ets_1.it('testSpan005', 0, async function (done) {
            console.info('[testSpan005] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": '#FF000990'
                    }
                };
                let indexEvent = {
                    eventId: 201
                };
                console.info("[testSpan005] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan005] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('fontColor');
            console.info("[testSpan005] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan005] fontColor:" + obj.$attrs.fontColor);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FF000990');
            done();
        });
        index_ets_1.it('testSpan006', 0, async function (done) {
            console.info('[testSpan006] START');
            try {
                let eventData = {
                    data: {
                        "textCaseValue": a
                    }
                };
                let indexEvent = {
                    eventId: 1029
                };
                console.info("[testSpan006] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan006] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('decoration');
            console.info("[testSpan006] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan006] textCase:" + obj);
            index_ets_1.expect(obj.$attrs.textCase).assertEqual('TextCase.UpperCase');
            done();
        });
        index_ets_1.it('testSpan007', 0, async function (done) {
            console.info('[testSpan007] START');
            try {
                let eventData = {
                    data: {
                        "textCaseValue": -1
                    }
                };
                let indexEvent = {
                    eventId: 1030
                };
                console.info("[testSpan007] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan007] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('decoration');
            console.info("[testSpan007] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan007] textCase:" + obj);
            index_ets_1.expect(obj.$attrs.textCase).assertEqual('TextCase.Normal');
            done();
        });
        index_ets_1.it('testSpan008', 0, async function (done) {
            console.info('[testSpan008] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": 'abc'
                    }
                };
                let indexEvent = {
                    eventId: 1031
                };
                console.info("[testSpan008] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan008] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('fontColor');
            console.info("[testSpan008] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan008] fontColor:" + obj);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FF000000');
            done();
        });
        index_ets_1.it('testSpan009', 0, async function (done) {
            console.info('[testSpan009] START');
            try {
                let eventData = {
                    data: {
                        "fontColorValue": '-1'
                    }
                };
                let indexEvent = {
                    eventId: 1032
                };
                console.info("[testSpan009] start to publish emit");
            }
            catch (err) {
                console.log("[testSpan009] change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJson = getInspectorByKey('fontColor');
            console.info("[testSpan009] component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("[testSpan009] fontColor:" + obj);
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FFFFFFFF');
            done();
        });
    });
}
exports["default"] = spanJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabsJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TabsJsunit.test.ets ***!
  \******************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function tabsJsunit() {
    index_ets_1.describe('tabsTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("tabs beforeEach start");
            let options = {
                uri: 'pages/tabs',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get tabs state pages:" + JSON.stringify(pages));
                if (!("tabs" == pages.name)) {
                    console.info("get tabs state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push tabs page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push tabs page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("tabs after each called");
        });
        index_ets_1.it('testTabs_0100', 0, async function (done) {
            console.info('testTabs_0100 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Tabs');
            index_ets_1.expect(obj.$attrs.barPosition).assertEqual('BarPosition.Start');
            console.info('testTabs_0100 END');
            done();
        });
        index_ets_1.it('testTabs_0200', 0, async function (done) {
            console.info('testTabs_0200 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0200 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.index).assertEqual('0');
            console.info('testTabs_0200 END');
            done();
        });
        index_ets_1.it('testTabs_0300', 0, async function (done) {
            console.info('testTabs_0300 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0300 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0300 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.vertical).assertEqual('true');
            console.info('testTabs_0300 END');
            done();
        });
        index_ets_1.it('testTabs_0400', 0, async function (done) {
            console.info('testTabs_0400 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.scrollable).assertEqual(true);
            console.info('testTabs_0400 END');
            done();
        });
        index_ets_1.it('testTabs_0500', 0, async function (done) {
            console.info('testTabs_0500 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0500 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0500 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.barMode).assertEqual('BarMode.Fixed');
            console.info('testTabs_0500 END');
            done();
        });
        index_ets_1.it('testTabs_0600', 0, async function (done) {
            console.info('testTabs_0600 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0600 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.barWidth).assertEqual('70.000000');
            console.info('testTabs_0600 END');
            done();
        });
        index_ets_1.it('testTabs_0700', 0, async function (done) {
            console.info('testTabs_0700 START');
            let strJson = getInspectorByKey('tabs');
            console.info("testTabs_0700 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testTabs_0700 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.barHeight).assertEqual('150.000000');
            console.info('testTabs_0700 END');
            done();
        });
        index_ets_1.it('testTabs_0800', 0, async function (done) {
            console.info('testTabs_0800 START');
            try {
                let eventData = {
                    data: {
                        "vertical": "false",
                    }
                };
                let indexEvent = {
                    eventId: 213
                };
                console.info("testTabs_0800 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_0800 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_0800 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.vertical).assertEqual('false');
            console.info('testTabs_0800 END');
            done();
        });
        index_ets_1.it('testTabs_0900', 0, async function (done) {
            console.info('testTabs_0900 START');
            try {
                let eventData = {
                    data: {
                        "scrollable": "false",
                    }
                };
                let indexEvent = {
                    eventId: 213
                };
                console.info("testTabs_0900 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_0900 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_0900 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.scrollable).assertEqual(false);
            console.info('testTabs_0900 END');
            done();
        });
        index_ets_1.it('testTabs_1000', 0, async function (done) {
            console.info('testTabs_1000 START');
            try {
                let eventData = {
                    data: {
                        "scrollable": "false53",
                    }
                };
                let indexEvent = {
                    eventId: 213
                };
                console.info("testTabs_1000 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_1000 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_1000 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.scrollable).assertEqual(false);
            console.info('testTabs_1000 END');
            done();
        });
        index_ets_1.it('testTabs_1100', 0, async function (done) {
            console.info('testTabs_1100 START');
            try {
                let eventData = {
                    data: {
                        "vertical": "39284",
                    }
                };
                let indexEvent = {
                    eventId: 213
                };
                console.info("testTabs_1100 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_1100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_1100 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.scrollable).assertEqual(false);
            console.info('testTabs_1100 END');
            done();
        });
        index_ets_1.it('testTabs_1200', 0, async function (done) {
            console.info('testTabs_1200 START');
            try {
                let eventData = {
                    data: {
                        "vertical": "abc123",
                    }
                };
                let indexEvent = {
                    eventId: 214
                };
                console.info("testTabs_1200 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_1200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_1200 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.vertical).assertEqual('false');
            console.info('testTabs_1200 END');
            done();
        });
        index_ets_1.it('testTabs_1300', 0, async function (done) {
            console.info('testTabs_1300 START');
            try {
                let eventData = {
                    data: {
                        "scrollable": "avc12321",
                    }
                };
                let indexEvent = {
                    eventId: 215
                };
                console.info("testTabs_1300 start to publish emit");
            }
            catch (err) {
                console.log("testTabs_1300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(2000);
            let strJsonNew = getInspectorByKey('tabs');
            let objNew = JSON.parse(strJsonNew);
            console.info("testTabs_1300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.scrollable).assertEqual(false);
            console.info('testTabs_1300 END');
            done();
        });
        index_ets_1.it('testTabs_1400', 0, async function (done) {
            console.info('testTabs_1400 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("testTabs_1400 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.ACTION).assertEqual(true);
            };
            let indexEvent = {
                eventId: 212
            };
            console.info("testTabs_1400 click result is: " + JSON.stringify(sendEventByKey('tabContent1', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('testTabs_1400 END');
            done();
        });
    });
}
exports["default"] = tabsJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TapGesture.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TapGesture.test.ets ***!
  \******************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function longPressGestureJsunit() {
    index_ets_1.describe('tapGestureTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("tapGesture beforeEach start");
            let options = {
                uri: 'pages/tapGesture',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get tapGesture state pages:" + JSON.stringify(pages));
                if (!("longPressGesture" == pages.name)) {
                    console.info("get tapGesture state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push tapGesture page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push tapGesture page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("tapGesture after each called");
        });
        index_ets_1.it('testTapGesture01', 0, async function (done) {
            await Utils_1.default.sleep(1000);
            let rect = await Utils_1.default.getComponentRect('tapGesture');
            console.info("[testTapGesture01] rectInfo is " + JSON.stringify(rect));
            let x_value = rect.left + (rect.right - rect.left) / 2;
            let y_value = rect.top + (rect.bottom - rect.top) / 2;
            let x_value_two = rect.left + (rect.right - rect.left) / 20;
            let y_value_two = rect.top + (rect.bottom - rect.top) / 20;
            console.info("[testTapGesture01] onTouch location is: " + "[x]=== " + x_value + "   [y]===" + y_value);
            let point = {
                id: 1, x: x_value, y: y_value, type: TouchType.Move
            };
            let point2 = {
                id: 2, x: x_value_two, y: y_value_two, type: TouchType.Move
            };
            var callback = (eventData) => {
                console.info("[testTapGesture01] get event state result is: " + JSON.stringify(eventData));
                index_ets_1.expect(eventData.data.ACTION).assertEqual(true);
            };
            var innerEvent = {
                eventId: 214
            };
            await Utils_1.default.sleep(1000);
            console.info('[testClickEvent001] testSendTouchEvent END');
            done();
        });
    });
}
exports["default"] = longPressGestureJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets":
/*!******************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TextJsunit.test.ets ***!
  \******************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function textJsunit() {
    index_ets_1.describe('testText', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("text beforeEach start");
            let options = {
                uri: 'pages/text',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get text state pages:" + JSON.stringify(pages));
                if (!("text" == pages.name)) {
                    console.info("get text state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push text page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push text page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("text after each called");
        });
        index_ets_1.it('testText_0100', 0, async function (done) {
            console.info('testText_0100 START');
            let strJson = getInspectorByKey('text');
            console.info("testText_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Text');
            index_ets_1.expect(obj.$attrs.fontSize).assertEqual('9.00fp');
            console.info('testText_0100 END');
            done();
        });
        index_ets_1.it('testText_0200', 0, async function (done) {
            console.info('testText_0200 START');
            let strJson = getInspectorByKey('image');
            console.info("testText_0200 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_0200 component obj is: " + JSON.stringify(obj));
            var res = obj.$attrs.src.indexOf('rawfile/test.png');
            console.info("testText_0200 result is: " + res);
            var sres = obj.$attrs.src.slice(res, res + 16);
            console.info("testText_0200 slice result is: " + sres);
            index_ets_1.expect(obj.$type).assertEqual('Image');
            index_ets_1.expect(obj.$attrs.src.slice(res, res + 16)).assertEqual('rawfile/test.png');
            console.info('testText_0200 END');
            done();
        });
        index_ets_1.it('testText_0300', 0, async function (done) {
            console.info('testText_0300 START');
            try {
                let eventData = {
                    data: {
                        "fontSize": "10",
                    }
                };
                let indexEvent = {
                    eventId: 226
                };
                console.info("testText_0300 start to publish emit");
            }
            catch (err) {
                console.log("testText_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('10.00fp');
            console.info('testText_0300 END');
            done();
        });
        index_ets_1.it('testText_0400', 0, async function (done) {
            console.info('testText_0400 START');
            let strJson = getInspectorByKey('text');
            console.info("testText_0400 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_0400 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Text');
            index_ets_1.expect(obj.$attrs.fontColor).assertEqual('#FF000000');
            console.info('testText_0400 END');
            done();
        });
        index_ets_1.it('testText_0500', 0, async function (done) {
            console.info('testText_0500 START');
            try {
                let eventData = {
                    data: {
                        "fontColor": "#330A59F7",
                    }
                };
                let indexEvent = {
                    eventId: 227
                };
                console.info("testText_0500 start to publish emit");
            }
            catch (err) {
                console.log("testText_0500 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_0500 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.fontColor).assertEqual('#330A59F7');
            console.info('testText_0500 END');
            done();
        });
        index_ets_1.it('testText_0600', 0, async function (done) {
            console.info('testText_0600 START');
            let strJson = getInspectorByKey('text');
            console.info("testText_0600 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_0600 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textAlign).assertEqual('TextAlign.Start');
            console.info('testText_0600 END');
            done();
        });
        index_ets_1.it('testText_0700', 0, async function (done) {
            console.info('testText_0700 START');
            try {
                let eventData = {
                    data: {
                        "textAlign": TextAlign.Center,
                    }
                };
                let indexEvent = {
                    eventId: 228
                };
                console.info("testText_0700 start to publish emit");
            }
            catch (err) {
                console.log("testText_0700 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_0700 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.textAlign).assertEqual('TextAlign.Center');
            console.info('testText_0700 END');
            done();
        });
        index_ets_1.it('testText_0800', 0, async function (done) {
            console.info('testText_0800 START');
            let strJson = getInspectorByKey('text');
            console.info("testText_0800 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_0800 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.textOverflow).assertEqual('TextOverflow.Clip');
            console.info('testText_0800 END');
            done();
        });
        index_ets_1.it('testText_0900', 0, async function (done) {
            console.info('testText_0900 START');
            try {
                let eventData = {
                    data: {
                        "textOverflow": TextOverflow.None,
                    }
                };
                let indexEvent = {
                    eventId: 229
                };
                console.info("testText_0900 start to publish emit");
            }
            catch (err) {
                console.log("testText_0900 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_0900 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.textOverflow).assertEqual('TextOverflow.None');
            console.info('testText_0900 END');
            done();
        });
        index_ets_1.it('testText_1000', 0, async function (done) {
            console.info('testText_1000 START');
            let strJson = getInspectorByKey('text');
            console.info("testText_1000 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("testText_1000 component obj is: " + JSON.stringify(obj.$attrs.decoration));
            index_ets_1.expect(obj.$attrs.decoration).assertEqual("{\"type\":\"TextDecorationType.None\",\"color\":\"#FFFF0000\"}");
            console.info('testText_1000 END');
            done();
        });
        index_ets_1.it('testText_1100', 0, async function (done) {
            console.info('testText_1100 START');
            try {
                let eventData = {
                    data: {
                        "fontColor": "-a",
                    }
                };
                let indexEvent = {
                    eventId: 230
                };
                console.info("testText_1100 start to publish emit");
            }
            catch (err) {
                console.log("testText_1100 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_1100 component objNew is: " + JSON.stringify(objNew.$attrs.fontColor));
            index_ets_1.expect(objNew.$attrs.fontColor).assertEqual('#FF000000');
            console.info('testText_1100 END');
            done();
        });
        index_ets_1.it('testText_1200', 0, async function (done) {
            console.info('testText_1200 START');
            try {
                let eventData = {
                    data: {
                        "fontColor": "12321321",
                    }
                };
                let indexEvent = {
                    eventId: 231
                };
                console.info("testText_1200 start to publish emit");
            }
            catch (err) {
                console.log("testText_1200 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_1200 component objNew is: " + JSON.stringify(objNew.$attrs.fontColor));
            index_ets_1.expect(objNew.$attrs.fontColor).assertEqual('#00BC0229');
            console.info('testText_1200 END');
            done();
        });
        index_ets_1.it('testText_1300', 0, async function (done) {
            console.info('testText_1300 START');
            try {
                let eventData = {
                    data: {
                        "fontSize": "-a",
                    }
                };
                let indexEvent = {
                    eventId: 232
                };
                console.info("testText_1300 start to publish emit");
            }
            catch (err) {
                console.log("testText_1300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(3000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_1300 component objNew is: " + JSON.stringify(objNew.$attrs.fontSize));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('nanfp');
            console.info('testText_1300 END');
            done();
        });
        index_ets_1.it('testText_1400', 0, async function (done) {
            console.info('testText_1400 START');
            try {
                let eventData = {
                    data: {
                        "fontSize": "-20",
                    }
                };
                let indexEvent = {
                    eventId: 233
                };
                console.info("testText_1400 start to publish emit");
            }
            catch (err) {
                console.log("testText_1400 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('text');
            let objNew = JSON.parse(strJsonNew);
            console.info("testText_1400 component objNew is: " + JSON.stringify(objNew.$attrs.fontSize));
            index_ets_1.expect(objNew.$attrs.fontSize).assertEqual('-20.00fp');
            console.info('testText_1400 END');
            done();
        });
    });
}
exports["default"] = textJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TimeStampJsunit.test.ets":
/*!***********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TimeStampJsunit.test.ets ***!
  \***********************************************************************************************************************************************/
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
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
;
function timeStampJsunit() {
    index_ets_1.describe('timeStampTest', function () {
        index_ets_1.beforeEach(async function (done) {
            let options = {
                uri: 'pages/timeStamp',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get timeStamp state success " + JSON.stringify(pages));
                if (!("timeStamp" == pages.name)) {
                    console.info("get timeStamp state success " + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push timeStamp page success " + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push timeStamp page error: " + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(2000);
            console.info("timeStamp after each called");
        });
        index_ets_1.it('timeStampTest_0100', 0, async function (done) {
            console.info('timeStampTest_0100 START');
            await Utils_1.default.sleep(1500);
            let callback = (indexEvent) => {
                console.info("timeStampTest_0100 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.Text).assertNotEqual(null);
            };
            let indexEvent = {
                eventId: 230
            };
            console.info("timeStampTest_0100 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1500);
            console.info('timeStampTest_0100 END');
            done();
        });
    });
}
exports["default"] = timeStampJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets":
/*!********************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/ToggleJsunit.test.ets ***!
  \********************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function ToggleJsunit() {
    index_ets_1.describe('toggleTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("toggle beforeEach start");
            let options = {
                uri: 'pages/toggle',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get toggle state pages:" + JSON.stringify(pages));
                if (!("toggle" == pages.name)) {
                    console.info("get toggle state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push toggle page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push toggle page error:" + err);
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("toggle after each called");
        });
        index_ets_1.it('testToggle01', 0, async function (done) {
            console.info('[testToggle01] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('toggle');
            let obj = JSON.parse(strJson);
            console.info("[testToggle01] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Toggle');
            index_ets_1.expect(obj.$attrs.selectedColor).assertEqual('#330A59F7');
            console.info('[testToggle01] END');
            done();
        });
        index_ets_1.it('testToggle02', 0, async function (done) {
            console.info('[testToggle02] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('toggle');
            let obj = JSON.parse(strJson);
            console.info("[testToggle02] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.type).assertEqual('ToggleType.Button');
            console.info('[testToggle02] END');
            done();
        });
        index_ets_1.it('testToggle03', 0, async function (done) {
            console.info('[testToggle03] START');
            await Utils_1.default.sleep(1000);
            let strJson = getInspectorByKey('toggle');
            let obj = JSON.parse(strJson);
            console.info("[testToggle03] obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$attrs.isOn).assertEqual('false');
            console.info('[testToggle03] END');
            done();
        });
        index_ets_1.it('testToggle04', 0, async function (done) {
            console.info('testToggle04 START');
            try {
                let eventData = {
                    data: {
                        "isOn": true,
                    }
                };
                let indexEvent = {
                    eventId: 231
                };
                console.info("testToggle04 start to publish emit");
            }
            catch (err) {
                console.log("testToggle04 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle04 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.isOn).assertEqual('true');
            console.info('testToggle04 END');
            done();
        });
        index_ets_1.it('testToggle05', 0, async function (done) {
            console.info('testToggle05 START');
            try {
                let eventData = {
                    data: {
                        "selectedColor": '#330A59F8',
                    }
                };
                let indexEvent = {
                    eventId: 232
                };
                console.info("testToggle05 start to publish emit");
            }
            catch (err) {
                console.log("testToggle05 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle05 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.selectedColor).assertEqual('#330A59F8');
            console.info('testToggle05 END');
            done();
        });
        index_ets_1.it('testToggle06', 0, async function (done) {
            console.info('testToggle06 START');
            try {
                let eventData = {
                    data: {
                        "selectedColor": '-a',
                    }
                };
                let indexEvent = {
                    eventId: 1033
                };
                console.info("testToggle06 start to publish emit");
            }
            catch (err) {
                console.log("testToggle06 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle06 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.selectedColor).assertEqual('#FF000000');
            console.info('testToggle06 END');
            done();
        });
        index_ets_1.it('testToggle07', 0, async function (done) {
            console.info('testToggle07 START');
            try {
                let eventData = {
                    data: {
                        "selectedColor": '-0.1',
                    }
                };
                let indexEvent = {
                    eventId: 1034
                };
                console.info("testToggle07 start to publish emit");
            }
            catch (err) {
                console.log("testToggle07 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle07 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.selectedColor).assertEqual('#FF000000');
            console.info('testToggle07 END');
            done();
        });
        index_ets_1.it('testToggle08', 0, async function (done) {
            console.info('testToggle04 START');
            try {
                let eventData = {
                    data: {
                        "isOn": 'aaa',
                    }
                };
                let indexEvent = {
                    eventId: 1035
                };
                console.info("testToggle04 start to publish emit");
            }
            catch (err) {
                console.log("testToggle04 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle04 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.isOn).assertEqual('false');
            console.info('testToggle04 END');
            done();
        });
        index_ets_1.it('testToggle09', 0, async function (done) {
            console.info('testToggle04 START');
            try {
                let eventData = {
                    data: {
                        "isOn": -1,
                    }
                };
                let indexEvent = {
                    eventId: 1036
                };
                console.info("testToggle04 start to publish emit");
            }
            catch (err) {
                console.log("testToggle04 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('toggle');
            let objNew = JSON.parse(strJsonNew);
            console.info("testToggle04 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.isOn).assertEqual('false');
            console.info('testToggle04 END');
            done();
        });
    });
}
exports["default"] = ToggleJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TransitionJsunit.test.ets":
/*!************************************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/TransitionJsunit.test.ets ***!
  \************************************************************************************************************************************************/
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
;
const Utils_1 = __importDefault(__webpack_require__(/*! ./Utils */ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets"));
function transitionJsunit() {
    index_ets_1.describe('transitionTest', function () {
        index_ets_1.beforeEach(async function (done) {
            console.info("text beforeEach start");
            let options = {
                uri: 'pages/transition',
            };
            try {
                _system_router_1.clear();
                let pages = _system_router_1.getState();
                console.info("get transition state pages:" + JSON.stringify(pages));
                if (!("transition" == pages.name)) {
                    console.info("get transition state pages.name:" + JSON.stringify(pages.name));
                    let result = await _system_router_1.push(options);
                    await Utils_1.default.sleep(2000);
                    console.info("push transition page result:" + JSON.stringify(result));
                }
            }
            catch (err) {
                console.error("push transition page error:" + JSON.stringify(result));
            }
            done();
        });
        index_ets_1.afterEach(async function () {
            await Utils_1.default.sleep(1000);
            console.info("transition after each called");
        });
        index_ets_1.it('transitionTest_0100', 0, async function (done) {
            console.info('transitionTest_0100 START');
            let strJson = getInspectorByKey('button');
            console.info("transitionTest_0100 component strJson:" + strJson);
            let obj = JSON.parse(strJson);
            console.info("transitionTest_0100 component obj is: " + JSON.stringify(obj));
            index_ets_1.expect(obj.$type).assertEqual('Button');
            index_ets_1.expect(obj.$attrs.opacity).assertEqual(1);
            console.info('transitionTest_0100 END');
            done();
        });
        index_ets_1.it('transitionTest_0200', 0, async function (done) {
            console.info('transitionTest_0200 START');
            let indexEvent = {
                eventId: 233
            };
            await Utils_1.default.sleep(1000);
            let callback = (indexEvent) => {
                console.info("transitionTest_0200 get state result is: " + JSON.stringify(indexEvent));
                index_ets_1.expect(indexEvent.data.btn1).assertEqual(false);
            };
            console.info("transitionTest_0200 click result is: " + JSON.stringify(sendEventByKey('button', 10, "")));
            await Utils_1.default.sleep(1000);
            console.info('transitionTest_0200 END');
            done();
        });
        index_ets_1.it('transitionTest_0300', 0, async function (done) {
            console.info('transitionTest_0300 START');
            try {
                let eventData = {
                    data: {
                        "opacity": 2,
                    }
                };
                let indexEvent = {
                    eventId: 234
                };
                console.info("transitionTest_0300 start to publish emit");
            }
            catch (err) {
                console.log("transitionTest_0300 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('button');
            let objNew = JSON.parse(strJsonNew);
            console.info("transitionTest_0300 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.opacity).assertEqual(2);
            console.info('transitionTest_0300 END');
            done();
        });
        index_ets_1.it('transitionTest_0400', 0, async function (done) {
            console.info('transitionTest_0400 START');
            try {
                let eventData = {
                    data: {
                        "opacity": 'a',
                    }
                };
                let indexEvent = {
                    eventId: 234
                };
                console.info("transitionTest_0400 start to publish emit");
            }
            catch (err) {
                console.log("transitionTest_0400 change component data error: " + err.message);
            }
            await Utils_1.default.sleep(4000);
            let strJsonNew = getInspectorByKey('button');
            let objNew = JSON.parse(strJsonNew);
            console.info("transitionTest_040 component objNew is: " + JSON.stringify(objNew));
            index_ets_1.expect(objNew.$attrs.opacity).assertEqual(null);
            console.info('transitionTest_0400 END');
            done();
        });
    });
}
exports["default"] = transitionJsunit;


/***/ }),

/***/ "../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets":
/*!********************************************************************************************************************************!*\
  !*** ../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/test/Utils.ets ***!
  \********************************************************************************************************************************/
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
/******/ 	var __webpack_exports__ = __webpack_require__.O(undefined, ["vendors"], () => (__webpack_require__("../../../../../../../../Desktop/xts/ace_ets_component_three/ActsAceEtsTest/entry/src/main/ets/MainAbility/pages/index.ets?entry")))
/******/ 	__webpack_exports__ = __webpack_require__.O(__webpack_exports__);
/******/ 	
/******/ })()
;
//# sourceMappingURL=index.js.map