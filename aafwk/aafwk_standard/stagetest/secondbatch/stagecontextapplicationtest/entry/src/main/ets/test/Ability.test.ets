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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import commonEvent from '@ohos.commonevent'

var subscriberInfo_MainAbility2 = {
    events: ["MainAbility2_Start_CommonEvent", 'MainAbility2_Destroy_CommonEvent'],
};

var subscriberInfo_MainAbility3 = {
    events: ["Assist_MainAbility_Start_CommonEvent", 'Assist_MainAbility_Destroy_CommonEvent'],
};

var subscriberInfo_MainAbility4 = {
    events: ["assist_app_MainAbility_Start_CommonEvent", 'assist_app_MainAbility_Destroy_CommonEvent'],
};

var subscriberInfo_MainAbility5 = {
    events: ["assist_app_MainAbility2_Start_CommonEvent", 'assist_app_MainAbility2_Destroy_CommonEvent'],
};

const START_ABILITY_TIMEOUT = 5000;

export default function abilityTest(abilityContext) {
    describe('ActsAbilityTest', function () {

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0100
         * @tc.name: Check that context paths of different Ability in the same hap are the same.
         * @tc.desc: Check the ability context paths of the same hap are the same.
         */
        it('SUB_AA_OpenHarmony_Context_0100', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0100 --- start");
            checkAbilityContextDir();
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0100 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' ||
                    data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    checkAbilityContextDirEqual(abilityContext, globalThis.ability2Context);
                    console.log("SUB_AA_OpenHarmony_Context_0100 event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_0100 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            })

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_0100 UnSubscribe CallBack");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_0100 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "ohos.acts.aafwk.pldtest.myapplication",
                abilityName: "ohos.acts.aafwk.pldtest.myapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_0100 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0200
         * @tc.name: Check that context paths of different Ability in the same hap are the same.
         * @tc.desc: Check the ability context paths of the same hap are the same.
         */
        it('SUB_AA_OpenHarmony_Context_0200', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0200 --- start");
            checkApplicationContextDir(abilityContext.getApplicationContext());
            checkApplicationContextDir(globalThis.stageContext.getApplicationContext());
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0200 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' ||
                    data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    checkApplicationContextDir(globalThis.ability2Context.getApplicationContext());
                    console.log("SUB_AA_OpenHarmony_Context_0200 event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_0200 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            })

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_0200 UnSubscribe CallBack");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_0200 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "ohos.acts.aafwk.pldtest.myapplication",
                abilityName: "ohos.acts.aafwk.pldtest.myapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_0200 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data))
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0600
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_0600', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0600 --- start");
            checkAbilityContextDir();
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0600 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' ||
                    data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var assistContext = data.parameters.assistAbilityContext;
                    console.log("SUB_AA_OpenHarmony_Context_0600: assistContext = " + JSON.stringify(assistContext));
                    checkAssistAppContextDir(assistContext);
                    console.log("SUB_AA_OpenHarmony_Context_0600 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_0600 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_0600 UnSubscribe CallBack");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_0600 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility",
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_0600 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0700
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_0700', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0700 --- start");
            checkAbilityStageContextDir();
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0700 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' ||
                    data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var assistStageContext = data.parameters.assistAbilityStageContext;
                    console.log("SUB_AA_OpenHarmony_Context_0700: assistStageContext = " +
                        JSON.stringify(assistStageContext));
                    checkAssistAbilityStageContextDir(assistStageContext);
                    console.log("SUB_AA_OpenHarmony_Context_0700 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_0700 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_0700 UnSubscribe CallBack");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_0700 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_0700 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0800
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_0800', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0800 --- start");
            checkApplicationContextDir(abilityContext.getApplicationContext());
            checkApplicationContextDir(globalThis.stageContext.getApplicationContext());
            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0800 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' ||
                    data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var assistAbilityApplicationContext = data.parameters.assistAbilityApplicationContext;
                    var assistStageApplicationContext = data.parameters.assistStageApplicationContext;
                    console.log("SUB_AA_OpenHarmony_Context_0800:" + JSON.stringify(assistAbilityApplicationContext));
                    console.log("SUB_AA_OpenHarmony_Context_0800:" + JSON.stringify(assistStageApplicationContext));
                    checkAssistAppApplicationDir(assistAbilityApplicationContext);
                    checkAssistAppApplicationDir(assistStageApplicationContext);
                    console.log("SUB_AA_OpenHarmony_Context_0800 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_0800====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });
            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_0800====>UnSubscribe CallBack====>");
                done();
            }
            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_0800 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }
            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_0800 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0900
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_0900', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0900 --- start");
            var result = await abilityContext.resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_0900 : result = "+ JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1000
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1000', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1000 --- start");
            var result = await globalThis.stageContext.resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_1000 : result = "+ JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1100
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1100', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1100 --- start");
            var result = await globalThis.stageContext.getApplicationContext().resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_1100 : result = "+ JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1300
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1300', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1300 --- start");
            var result = abilityContext.createBundleContext("com.app.os");
            console.log("SUB_AA_OpenHarmony_Context_1300 : type = " + typeof(result));
            setTimeout(function() {
                expect(typeof(result) == "undefined").assertTrue();
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1400
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1400', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1400 --- start");
            var bundleContext = abilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            var result = await bundleContext.resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_1400 : result = " + JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1500
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1500', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1500 --- start");
            var bundleContext = abilityContext.createBundleContext("com.example.assistmyapplication");
            var result = await bundleContext.resourceManager.getString(16777219);
            console.log("SUB_AA_OpenHarmony_Context_1500 result = " + result);
            expect(result).assertEqual("entry3_MainAbility2");

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1500 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility2_Start_CommonEvent' ||
                    data.event == 'assist_app_MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility2_Start_CommonEvent') {
                    var result2 = data.parameters.assistBundleContextGetStringResult;
                    console.log("SUB_AA_OpenHarmony_Context_1500: result2 = " + JSON.stringify(result2));
                    expect(result2).assertEqual("entry3_MainAbility2");
                    console.log("SUB_AA_OpenHarmony_Context_1500 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility5).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_1500 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });
            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_1500 UnSubscribe CallBack");
                done();
            }
            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_1500 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }
            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_1500 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1600
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1600', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1600 --- start");
            var bundleContext = globalThis.stageContext.createBundleContext("com.example.assistmyapplication");
            var result = await bundleContext.resourceManager.getString(16777219);
            console.log("SUB_AA_OpenHarmony_Context_1600 result = " + result);
            expect(result).assertEqual("entry3_MainAbility2");

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1600 Subscribe CallBack data: " + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility2_Start_CommonEvent' ||
                    data.event == 'assist_app_MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility2_Start_CommonEvent') {
                    var result2 = data.parameters.assistStageBundleContextGetStringResult;
                    console.log("SUB_AA_OpenHarmony_Context_1600: result2 = " + JSON.stringify(result2));
                    expect(result2).assertEqual("entry3_MainAbility2");
                    console.log("SUB_AA_OpenHarmony_Context_1600 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility5).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_1600 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_1600 UnSubscribe CallBack");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_1600 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_1600 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1700
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1700', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1700 --- start");
            var bundleContext = globalThis.stageContext.getApplicationContext().createBundleContext("com.example.assistmyapplication");
            var result = await bundleContext.resourceManager.getString(16777219);
            console.log("SUB_AA_OpenHarmony_Context_1700 result = " + result);
            expect(result).assertEqual("entry3_MainAbility2");
            console.log("SUB_AA_OpenHarmony_Context_1700 end");
        });


        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1800
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1800', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1800 --- start");
            var bundleContext = abilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_1800: bundleContext = " + JSON.stringify(bundleContext));
            checkBundleContextDir(bundleContext);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1800====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' || data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    var bundleContext2 = globalThis.ability2Context.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
                    console.log("SUB_AA_OpenHarmony_Context_1800: bundleContext2 = " + JSON.stringify(bundleContext2));
                    checkBundleContextDir(bundleContext2);
                    console.log("SUB_AA_OpenHarmony_Context_1800 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_1800====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_1800====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_1800 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "ohos.acts.aafwk.pldtest.myapplication",
                abilityName: "ohos.acts.aafwk.pldtest.myapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_1800 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1900
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_1900', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1900 --- start");
            var bundleContext = abilityContext.getApplicationContext().createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            checkApplicationBundleContextDir(bundleContext);
            var bundleContext2 = globalThis.stageContext.getApplicationContext().createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            checkApplicationBundleContextDir(bundleContext2);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1900====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' || data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    var bundleContext3 = globalThis.ability2Context.getApplicationContext().createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
                    console.log("SUB_AA_OpenHarmony_Context_1900: bundleContext3 = " + JSON.stringify(bundleContext3));
                    checkApplicationBundleContextDir(bundleContext3);
                    console.log("SUB_AA_OpenHarmony_Context_1900 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_1900====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_1900====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_1900 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "ohos.acts.aafwk.pldtest.myapplication",
                abilityName: "ohos.acts.aafwk.pldtest.myapplication.MainAbility2"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_1900 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_2300
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_2300', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_2300 --- start");
            var bundleContext = abilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_2300: bundleContext = " + JSON.stringify(bundleContext));
            checkTestAppBundleContextDir(bundleContext);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_2300====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' || data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var bundleContext2 = data.parameters.assistBundleContext;
                    console.log("SUB_AA_OpenHarmony_Context_2300: bundleContext2 = " + JSON.stringify(bundleContext2));
                    checkAssistAppBundleContextDir(bundleContext2);
                    console.log("SUB_AA_OpenHarmony_Context_2300 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_2300====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_2300====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_2300 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_2300 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_2400
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_2400', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_2400 --- start");
            var bundleContext = globalThis.stageContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_2400: bundleContext = " + JSON.stringify(bundleContext));
            checkTestAppBundleContextDir(bundleContext);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_2400====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' || data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var bundleContext2 = data.parameters.assistStageBundleContext;
                    console.log("SUB_AA_OpenHarmony_Context_2400: bundleContext2 = " + JSON.stringify(bundleContext2))
                    checkAssistAppBundleContextDir(bundleContext2);
                    console.log("SUB_AA_OpenHarmony_Context_2400 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_2400====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_2400====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_2400 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_2400 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_2500
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_2500', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_2500 --- start");
            var bundleContext = abilityContext.getApplicationContext().createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_2500 bundleContext = " + JSON.stringify(bundleContext));
            checkTestAppBundleContextDir(bundleContext);
            var bundleContext2 = globalThis.stageContext.getApplicationContext().createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_2500 bundleContext2 = " + JSON.stringify(bundleContext2));
            checkTestAppBundleContextDir(bundleContext2);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_2500====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' || data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var bundleContext3 = data.parameters.assistApplicationBundleContext;
                    console.log("SUB_AA_OpenHarmony_Context_2500: bundleContext3 = " + JSON.stringify(bundleContext3))
                    checkAssistAppBundleContextDir(bundleContext3);
                    var bundleContext4 = data.parameters.assistStageApplicationBundleContext;
                    console.log("SUB_AA_OpenHarmony_Context_2500: bundleContext4 = " + JSON.stringify(bundleContext4))
                    checkAssistAppBundleContextDir(bundleContext4);
                    console.log("SUB_AA_OpenHarmony_Context_2500 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_2500====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_2500====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_2500 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_2500 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_2600
         * @tc.name:
         * @tc.desc:
         */
        it('SUB_AA_OpenHarmony_Context_2600', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_2600 --- start");
            var bundleContext = abilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_2600 bundleContext = " + JSON.stringify(bundleContext));
            checkTestAppBundleContextDir(bundleContext);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_2600====>Subscribe CallBack data:====>" + JSON.stringify(data));
                expect(data.event == 'assist_app_MainAbility_Start_CommonEvent' || data.event == 'assist_app_MainAbility_Destroy_CommonEvent').assertTrue();
                if (data.event == 'assist_app_MainAbility_Start_CommonEvent') {
                    var bundleContext2 = data.parameters.assistMainHapBundleContext;
                    console.log("SUB_AA_OpenHarmony_Context_2600: bundleContext2 = " + JSON.stringify(bundleContext2))
                    checkTestAppBundleContextDir(bundleContext2);
                    console.log("SUB_AA_OpenHarmony_Context_2600 start event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility4).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_2600====>Create Subscriber====>");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_2600====>UnSubscribe CallBack====>");
                done();
            }

            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_Context_2600 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                done();
            }

            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityContext.startAbility({
                bundleName: "com.example.assistmyapplication",
                abilityName: "com.example.assistmyapplication.MainAbility"
            }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_Context_2600 - startAbility: ' + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        });

        function checkApplicationContextDir(applicationContext) {
            expect(applicationContext.cacheDir).assertEqual("/data/storage/el2/base/temp");
            expect(applicationContext.tempDir).assertEqual("/data/storage/el2/base/temp");
            expect(applicationContext.filesDir).assertEqual("/data/storage/el2/base/files");
            expect(applicationContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/");
            expect(applicationContext.databaseDir).assertEqual("/data/storage/el2/database/");
            expect(applicationContext.storageDir).assertEqual("/data/storage/el2/base/private/storage");
            expect(applicationContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }

        function checkAbilityContextDir() {
            expect(abilityContext.cacheDir).assertEqual("/data/storage/el2/base/haps/entry/temp");
            expect(abilityContext.tempDir).assertEqual("/data/storage/el2/base/haps/entry/temp");
            expect(abilityContext.filesDir).assertEqual("/data/storage/el2/base/haps/entry/files");
            expect(abilityContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/entry");
            expect(abilityContext.databaseDir).assertEqual("/data/storage/el2/database/entry");
            expect(abilityContext.storageDir).assertEqual("/data/storage/el2/base/haps/entry/private/storage");
            expect(abilityContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }

        function checkAbilityContextDirEqual(abilityContext, abilityContext2) {
            expect(abilityContext.cacheDir).assertEqual(abilityContext2.cacheDir);
            expect(abilityContext.tempDir).assertEqual(abilityContext2.tempDir);
            expect(abilityContext.filesDir).assertEqual(abilityContext2.filesDir);
            expect(abilityContext.distributedFilesDir).assertEqual(abilityContext2.distributedFilesDir);
            expect(abilityContext.databaseDir).assertEqual(abilityContext2.databaseDir);
            expect(abilityContext.storageDir).assertEqual(abilityContext2.storageDir);
            expect(abilityContext.bundleCodeDir).assertEqual(abilityContext2.bundleCodeDir);
        }

        function checkAssistAbilityContextDir() {
            expect(globalThis.assistHapAbilityContext.cacheDir).assertEqual("/data/storage/ce/entry2/private/caches");
            expect(globalThis.assistHapAbilityContext.tempDir).assertEqual("/data/storage/ce/entry2/temp");
            expect(globalThis.assistHapAbilityContext.filesDir).assertEqual("/data/storage/ce/entry2/files");
            expect(globalThis.assistHapAbilityContext.distributedFilesDir).assertEqual("/data/storage/distributedfiles");
            expect(globalThis.assistHapAbilityContext.databaseDir).assertEqual("/data/storage/ce/entry2/private/database");
            expect(globalThis.assistHapAbilityContext.storageDir).assertEqual("/data/storage/ce/entry2/private/storage");
            expect(globalThis.assistHapAbilityContext.bundleCodeDir).assertEqual("/data/storage/app/base");
        }

        function checkAbilityStageContextDir() {
            expect(globalThis.stageContext.cacheDir).assertEqual("/data/storage/el2/base/haps/entry/temp");
            expect(globalThis.stageContext.tempDir).assertEqual("/data/storage/el2/base/haps/entry/temp");
            expect(globalThis.stageContext.filesDir).assertEqual("/data/storage/el2/base/haps/entry/files");
            expect(globalThis.stageContext.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/entry");
            expect(globalThis.stageContext.databaseDir).assertEqual("/data/storage/el2/database/entry");
            expect(globalThis.stageContext.storageDir).assertEqual("/data/storage/el2/base/haps/entry/private/storage");
            expect(globalThis.stageContext.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }

        function checkBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/el1/bundle/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.databaseDir).assertEqual("/data/app/el2/100/databaseohos.acts.aafwk.pldtest.myapplication/");
            expect(bundleContext.storageDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/100/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }

        function checkApplicationBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/el1/bundle/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.databaseDir).assertEqual("/data/app/el2/100/databaseohos.acts.aafwk.pldtest.myapplication/");
            expect(bundleContext.storageDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/100/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }

        function checkAssistHapBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/base/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/caches");
            expect(bundleContext.databaseDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/database");
            expect(bundleContext.storageDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/0/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }

        function checkTestAppBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/el1/bundle/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.databaseDir).assertEqual("/data/app/el2/100/databaseohos.acts.aafwk.pldtest.myapplication/");
            expect(bundleContext.storageDir).assertEqual("/data/app/el2/100/base/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/100/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }

        function checkAssistAppBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/el1/bundle/com.example.assistmyapplication");
            expect(bundleContext.tempDir).assertEqual("/data/app/el2/100/base/com.example.assistmyapplication/temp");
            expect(bundleContext.filesDir).assertEqual("/data/app/el2/100/base/com.example.assistmyapplication/files");
            expect(bundleContext.cacheDir).assertEqual("/data/app/el2/100/base/com.example.assistmyapplication/temp");
            expect(bundleContext.databaseDir).assertEqual("/data/app/el2/100/databasecom.example.assistmyapplication/");
            expect(bundleContext.storageDir).assertEqual("/data/app/el2/100/base/com.example.assistmyapplication/private/storage");
            expect(bundleContext.distributedFilesDir).assertEqual("/mnt/hmdfs/100/device_view/local/data/com.example.assistmyapplication");
        }

        function checkAssistAppContextDir(contextMap) {
            expect(contextMap.cacheDir).assertEqual("/data/storage/el2/base/haps/entry3/temp");
            expect(contextMap.tempDir).assertEqual("/data/storage/el2/base/haps/entry3/temp");
            expect(contextMap.filesDir).assertEqual("/data/storage/el2/base/haps/entry3/files");
            expect(contextMap.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/entry3");
            expect(contextMap.databaseDir).assertEqual("/data/storage/el2/database/entry3");
            expect(contextMap.storageDir).assertEqual("/data/storage/el2/base/haps/entry3/private/storage");
            expect(contextMap.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }

        function checkAssistAbilityStageContextDir(context) {
            expect(context.cacheDir).assertEqual("/data/storage/el2/base/haps/entry3/temp");
            expect(context.tempDir).assertEqual("/data/storage/el2/base/haps/entry3/temp");
            expect(context.filesDir).assertEqual("/data/storage/el2/base/haps/entry3/files");
            expect(context.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/entry3");
            expect(context.databaseDir).assertEqual("/data/storage/el2/database/entry3");
            expect(context.storageDir).assertEqual("/data/storage/el2/base/haps/entry3/private/storage");
            expect(context.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }

        function checkAssistAppApplicationDir(context) {
            expect(context.cacheDir).assertEqual("/data/storage/el2/base/temp");
            expect(context.tempDir).assertEqual("/data/storage/el2/base/temp");
            expect(context.filesDir).assertEqual("/data/storage/el2/base/files");
            expect(context.distributedFilesDir).assertEqual("/data/storage/el2/distributedfiles/");
            expect(context.databaseDir).assertEqual("/data/storage/el2/database/");
            expect(context.storageDir).assertEqual("/data/storage/el2/base/private/storage");
            expect(context.bundleCodeDir).assertEqual("/data/storage/el1/bundle/");
        }
    })

}