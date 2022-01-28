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

const START_ABILITY_TIMEOUT = 5000;

export default function abilityTest(abilityContext) {
    describe('ActsAbilityTest', function () {

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_0100
         * @tc.name: Verify that different AbilityContext context paths in the same hap are the same
         * @tc.desc: Verify whether the context paths of different abilities are the same under the same hap
         */
        it('SUB_AA_OpenHarmony_Context_0100', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0100 --- start");
            checkAbilityContextDir();
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0100 Subscribe CallBack data:" + JSON.stringify(data));
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
         * @tc.name: Verify that the applicationContext obtained by different Ability and the applicationContext
         *           obtained by AbilityStage in the same hap have the same context path
         * @tc.desc: Check the ability context paths of the same hap are the same.
         */
        it('SUB_AA_OpenHarmony_Context_0200', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0200 --- start");
            checkApplicationContextDir(abilityContext.getApplicationContext());
            checkApplicationContextDir(globalThis.stageContext.getApplicationContext());
            var Subscriber;
            let id;

            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_0200 Subscribe CallBack data:" + JSON.stringify(data));
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
         * @tc.number: SUB_AA_OpenHarmony_Context_0900
         * @tc.name: Verify that the AbilityContext gets the resourceManger object available
         * @tc.desc: Obtain the resourceManger object through ability, call the getString method, pass in the
         *           labelId of the corresponding hap package, and check whether it is the same as the configuration
         *           in the config.json file
         */
        it('SUB_AA_OpenHarmony_Context_0900', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_0900 --- start");
            var result = await abilityContext.resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_0900 : result = " + JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1000
         * @tc.name: Verify that the AbilityStageContext gets the resourceManger object available
         * @tc.desc: First obtain the resourceManger object through AbilityStage, then call the getString method,
         *           pass in the labelId of the corresponding hap package, and check whether it is the same as the
         *           configuration in the config.json file
         */
        it('SUB_AA_OpenHarmony_Context_1000', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1000 --- start");
            var result = await globalThis.stageContext.resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_1000 : result = " + JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1100
         * @tc.name: Verify that the resourceManger object obtained by AbilityStageContext to obtain
         *           applicationContext is available
         * @tc.desc: First call the getApplication() method through AbilityStage to obtain the ApplicationContext,
         *           then obtain the resourceManger object through the ApplicationContext, then call the getString
         *           method, pass in the labelId of the corresponding hap package, and check whether it is the same
         *           as the configuration in the config.json file
         */
        it('SUB_AA_OpenHarmony_Context_1100', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1100 --- start");
            var result = await globalThis.stageContext.getApplicationContext().resourceManager.getString(16777218);
            console.log("SUB_AA_OpenHarmony_Context_1100 : result = " + JSON.stringify(result));
            setTimeout(function() {
                expect(JSON.stringify(result)).assertEqual("entry_MainAbility");
            }, 5000);
            done();
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1300
         * @tc.name: Verify that AbilityContext calls createBundleContext to create the specified context,
         *           passing in the wrong package name
         * @tc.desc: When the createBundleContext method is called through the context of ability, an incorrect
         *           package name is passed in, and the returned information is checked.
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
         * @tc.name: Verify that AbilityContext calls createBundleContext to create the specified
         *           context and passes in your own package name
         * @tc.desc: Call the createBundleContext method through the context of ability, pass in the package name
         *           of the hap package, then obtain the resourceManager object and call the getString method, pass
         *           in the corresponding labelId, and check whether the obtained resource is the same as the label
         *           resource in config.json
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
         * @tc.number: SUB_AA_OpenHarmony_Context_1800
         * @tc.name: Verify that context paths created by different AbilityContexts in the same hap are the same
         * @tc.desc: Start ability1 and ability2 under the same hap, obtain the corresponding context, call
         *           createBundleContext through the corresponding context, pass in the package name of the test
         *           hap, and obtain the bundleContext to verify whether the context paths of the bundleContext are
         *           the same
         */
        it('SUB_AA_OpenHarmony_Context_1800', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1800 --- start");
            var bundleContext = abilityContext.createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            console.log("SUB_AA_OpenHarmony_Context_1800: bundleContext = " + JSON.stringify(bundleContext));
            checkBundleContextDir(bundleContext);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1800 Subscribe CallBack data:" + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' ||
                    data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    var bundleContext2 = globalThis.ability2Context.
                        createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
                    checkBundleContextDir(bundleContext2);
                    console.log("SUB_AA_OpenHarmony_Context_1800 event end!");
                } else {
                    clearTimeout(id);
                    commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                }
            }

            commonEvent.createSubscriber(subscriberInfo_MainAbility2).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_Context_1800 Create Subscriber");
                Subscriber = data;
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            });

            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_Context_1800 UnSubscribe CallBack");
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
                console.log('SUB_AA_OpenHarmony_Context_1800 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        /**
         * @tc.number: SUB_AA_OpenHarmony_Context_1900
         * @tc.name: Verify that the paths of the contexts created by the ApplicationContext obtained by
         *           AbilityStageContext and AbilityContext in the same hap are the same
         * @tc.desc: The context properties created by the ApplicationContext obtained by Ability1, Ability2,
         *           and AbilityStage are the same
         */
        it('SUB_AA_OpenHarmony_Context_1900', 0, async function (done) {
            console.log("SUB_AA_OpenHarmony_Context_1900 --- start");
            var bundleContext = abilityContext.getApplicationContext().
                createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            checkApplicationBundleContextDir(bundleContext);
            var bundleContext2 = globalThis.stageContext.getApplicationContext().
                createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
            checkApplicationBundleContextDir(bundleContext2);

            var Subscriber;
            let id;
            function SubscribeCallBack(err, data) {
                console.debug("SUB_AA_OpenHarmony_Context_1900 Subscribe CallBack data:" + JSON.stringify(data));
                expect(data.event == 'MainAbility2_Start_CommonEvent' ||
                    data.event == 'MainAbility2_Destroy_CommonEvent').assertTrue();
                if (data.event == 'MainAbility2_Start_CommonEvent') {
                    var bundleContext3 = globalThis.ability2Context.getApplicationContext().
                        createBundleContext("ohos.acts.aafwk.pldtest.myapplication");
                    console.log("SUB_AA_OpenHarmony_Context_1900: bundleContext3 = " + JSON.stringify(bundleContext3));
                    checkApplicationBundleContextDir(bundleContext3);
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
                console.debug("SUB_AA_OpenHarmony_Context_1900 UnSubscribe CallBack");
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
                console.log('SUB_AA_OpenHarmony_Context_1900 - startAbility: ' + JSON.stringify(error) + ", " +
                    JSON.stringify(data));
            });
        });

        function checkApplicationContextDir(applicationContext) {
            expect(applicationContext.cacheDir).assertEqual("/data/storage/ce/private/caches");
            expect(applicationContext.tempDir).assertEqual("/data/storage/ce/temp");
            expect(applicationContext.filesDir).assertEqual("/data/storage/ce/files");
            expect(applicationContext.distributedFilesDir).assertEqual("/data/storage/distributedfiles");
            expect(applicationContext.databaseDir).assertEqual("/data/storage/ce/private/database");
            expect(applicationContext.storageDir).assertEqual("/data/storage/ce/private/storage");
            expect(applicationContext.bundleCodeDir).assertEqual("/data/storage/app/base");
        }

        function checkAbilityContextDir() {
            expect(abilityContext.cacheDir).assertEqual("/data/storage/ce/entry/private/caches");
            expect(abilityContext.tempDir).assertEqual("/data/storage/ce/entry/temp");
            expect(abilityContext.filesDir).assertEqual("/data/storage/ce/entry/files");
            expect(abilityContext.distributedFilesDir).assertEqual("/data/storage/distributedfiles");
            expect(abilityContext.databaseDir).assertEqual("/data/storage/ce/entry/private/database");
            expect(abilityContext.storageDir).assertEqual("/data/storage/ce/entry/private/storage");
            expect(abilityContext.bundleCodeDir).assertEqual("/data/storage/app/base");
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


        function checkBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/base/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/caches");
            expect(bundleContext.databaseDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/database");
            expect(bundleContext.storageDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).
                assertEqual("/mnt/hmdfs/0/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }

        function checkApplicationBundleContextDir(bundleContext) {
            expect(bundleContext.bundleCodeDir).assertEqual("/data/app/base/ohos.acts.aafwk.pldtest.myapplication");
            expect(bundleContext.tempDir).assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/temp");
            expect(bundleContext.filesDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/files");
            expect(bundleContext.cacheDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/caches");
            expect(bundleContext.databaseDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/database");
            expect(bundleContext.storageDir).
                assertEqual("/data/ce/0/bundle/ohos.acts.aafwk.pldtest.myapplication/private/storage");
            expect(bundleContext.distributedFilesDir).
                assertEqual("/mnt/hmdfs/0/device_view/local/data/ohos.acts.aafwk.pldtest.myapplication");
        }
    })

}