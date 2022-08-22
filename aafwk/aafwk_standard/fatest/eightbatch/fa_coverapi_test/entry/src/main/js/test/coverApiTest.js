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

import commonEvent from '@ohos.commonevent'
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import missionManager  from '@ohos.application.missionManager';
import osAccount from '@ohos.account.osAccount';
import OsAccountType from '@ohos.account.osAccount';
import appManager from '@ohos.application.appManager';
import ConfigurationConstant from "./@ohos.application.ConfigurationConstant"
import abilityManager from '@ohos.application.abilityManager';

const START_ABILITY_TIMEOUT = 5000;
describe('CoverApiTest', function () {
    console.log("CoverApiTest --- start");

    /*
     * @tc.number  SUB_AA_OpenHarmony_CoverApi_0400
     * @tc.name    Verify the process of killing non-existent users
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0400', 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_CoverApi_0400 --- start");
        var a = osAccount.getAccountManager();
        console.log("SUB_AA_OpenHarmony_CoverApi_0400 --- getAccountManager" + JSON.stringify(a));
        a.createOsAccount('101', 0, (err, data) => {
            console.info('SUB_AA_OpenHarmony_CoverApi_0400 createOsAccount Data: ' + 
            JSON.stringify(data) + ' err: ' + JSON.stringify(err))
            console.info('SUB_AA_OpenHarmony_CoverApi_0400 createOsAccount localId: ' + 
            JSON.stringify(data.localId));
            appManager.killProcessWithAccount('com.ohos.launcher', data.localId)
                .then((data) => {
                    console.info('SUB_AA_OpenHarmony_CoverApi_0400 successful. data: ' + JSON.stringify(data));
                    done();
                }).catch((error) => {
                console.error('SUB_AA_OpenHarmony_CoverApi_0400 failed. error: ' + JSON.stringify(error));
                expect().assertFalse();
                done();
            })
        });
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_CoverApi_0500
     * @tc.name    whether the system is under stability test
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0500', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_CoverApi_0500-------------");
        appManager.isRunningInStabilityTest()
            .then((data) => {
                console.info('SUB_AA_OpenHarmony_CoverApi_0500 successful. data: ' + JSON.stringify(data));
                expect(data == false).assertTrue();
                done();
            }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_CoverApi_0500 failed. error: ' + JSON.stringify(error));
            expect().assertFalse();
            done();
        })
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_CoverApi_0600
     * @tc.name    Validate get running process
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0600', 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_CoverApi_0600 --- start");
        appManager.getProcessRunningInfos()
            .then((data) => {
                console.info('SUB_AA_OpenHarmony_CoverApi_0600 successful. data: ' + JSON.stringify(data));
                var i;
                var flag = false;
                for (i = 0; i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_CoverApi_0600 ---" + JSON.stringify(data[i]));
                    if (data[i].bundleNames == 'com.example.coverapi') {
                        console.log("SUB_AA_OpenHarmony_CoverApi_0600 ---" + JSON.stringify(i));
                        expect(data[i].pid > 0).assertTrue();
                        expect(data[i].uid > 0).assertTrue();
                        expect(data[i].processName).assertEquals("com.example.coverapi");
                        flag = true;
                    }
                }
                expect(flag == true).assertTrue();
                done();
                console.log("SUB_AA_OpenHarmony_CoverApi_0600 --- end");
            }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_CoverApi_0600 failed. error: ' + JSON.stringify(error));
        })

    })


    /*
     * @tc.number  SUB_AA_OpenHarmony_CoverApi_0700
     * @tc.name    Verify that the data of nonexistent apps is cleared
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0700', 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_CoverApi_0700 --- start####@@@");

        appManager.clearUpApplicationData('com.example.coverapi')
            .then((data) => {
                console.info('SUB_AA_OpenHarmony_CoverApi_0700 successful. data: ' + JSON.stringify(data));
                expect(data == 0).assertTrue();
                done();
            }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_CoverApi_0700 failed. error: ' + JSON.stringify(error));
            expect().assertFalse();
            done();
        })
    })

    var subscriberInfoMainAbility = {
        events: ["mainAbility_onConfigurationUpdated"]
    }
    
    /**
     * @tc.number: SUB_AA_OpenHarmony_CoverApi_0500
     * @tc.name: wantConstant : Check specific enum
     * @tc.desc: Check the return type of the interface (by Promise)
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0800', 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_CoverApi_0800 --- start");

        var Subscriber;
        let id;

        console.log("11")
        function SubscribeCallBack(err, data) {
            console.debug("SUB_AA_OpenHarmony_CoverApi_0800====>Subscribe CallBack data:====>" + 
            JSON.stringify(data));
            expect(data.event == 'mainAbility_onConfigurationUpdated').assertTrue();
            if (data.event == 'mainAbility_onConfigurationUpdated') {
                console.log("SUB_AA_OpenHarmony_CoverApi_0800 111111111" )
                clearTimeout(id);
                console.log("SUB_AA_OpenHarmony_CoverApi_0800 2222222" )
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                console.log("SUB_AA_OpenHarmony_CoverApi_0800 333333333" )
                done();
            }
        }

        console.log("22")

        commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
            console.debug("SUB_AA_OpenHarmony_CoverApi_0800====>Create Subscriber====>");
            Subscriber = data;
            console.log("SUB_AA_OpenHarmony_CoverApi_0800" + JSON.stringify(Subscriber));
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        })

        console.log("33")
        function UnSubscribeCallback() {
            console.debug("SUB_AA_OpenHarmony_CoverApi_0800====>UnSubscribe CallBack====>");
            done();
        }

        console.log("44")
        function timeout() {
            expect().assertFail();
            console.debug('SUB_AA_OpenHarmony_CoverApi_0800 - timeout');
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
            done();
        }

        id = setTimeout(timeout, START_ABILITY_TIMEOUT);

        var Configuration = { language: "en" };
        abilityManager.updateConfiguration(Configuration)
            .then((data) => {
                console.log("SUB_AA_OpenHarmony_CoverApi_0800 --- updateConfiguration " + JSON.stringify(data));
                done();
            }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_CoverApi_0800 failed. error: ' + JSON.stringify(error));
            done();
        })

        console.log("SUB_AA_OpenHarmony_CoverApi_0800 --- end");
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_CoverApi_0900
     * @tc.name    Verify and get the information of the running ability
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_CoverApi_0900', 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_CoverApi_0900 --- start%%%");
        abilityManager.getAbilityRunningInfos()
            .then((data) => {
                console.log("SUB_AA_OpenHarmony_CoverApi_0900 --- " + JSON.stringify(data));
                var flag = false;
                var i;
                for (i = 0; i < data.length; i++) {
                    console.log("SUB_AA_OpenHarmony_CoverApi_0900 --- " + JSON.stringify(data[i]));
                    if (data[i].ability.abilityName == 'com.example.coverapi.MainAbility') {
                        console.log("SUB_AA_OpenHarmony_CoverApi_0900 --- ability" + 
                        JSON.stringify(data[i].ability));
                        flag = true;
                        expect(data[i].pid > 0).assertTrue();
                        expect(data[i].uid > 0).assertTrue();
                        expect(data[i].processName).assertEquals("com.example.coverapi");
                        expect(data[i].startTime > 0).assertTrue();
                        expect(data[i].abilityState == 9).assertTrue();
                    }
                }
                expect(flag == true).assertTrue();
                done();
            }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_CoverApi_0900 failed. error: ' + JSON.stringify(error));
            done();
        })
    })
})
