/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'
import featureAbility from '@ohos.ability.featureAbility';
import missionManager from "@ohos.application.missionManager";
import commonEvent from '@ohos.commonEvent';

describe('missionManager', function () {
    var missionId1s = [];
    var missionId2s = [];
    var timestamps1 = [];
    var timestamps2 = [];
    var START_ABILITY_TIMEOUT = 5000;
    var ability1LifeEventsonHide = {
        events: [
            "singletonEntry2Ability1_onHide",
        ]
    }
    var ability1LifeEvents = {
        events: ["singletonEntry2Ability1_onShow",
        "singletonEntry2Ability1_onHide",
        "singletonEntry2Ability1_onInactive",
        "singletonEntry2Ability1_onDestroy"]
    }
    var listKey = [];
    var timestamp1;
    var missionId1;

    function getMissionInfo() {
        missionManager.getMissionInfos('', 10, (error, data) => {
            console.log("SUB_AA_OpenHarmony_MissionManager_6500, getMissionInfos1:" + JSON.stringify(data));
            for (var i = 0;i < data.length; i++) {
                console.log("SUB_AA_OpenHarmony_MissionManager_6500, getMissionInfos1 item:" + JSON.stringify(data[i]));
                if (data[i].want.abilityName == 'com.example.entry2.MainAbility' &&
                data[i].runningState == 0) {
                    timestamp1 = data[i].timestamp;
                    missionId1 = data[i].missionId;
                    break;
                }
            }
            setTimeout(() => {
                featureAbility.startAbility(
                    { want: {
                        bundleName: "com.example.missionmanager",
                        abilityName: "com.example.entry2.MainAbility2"
                    } }, (error, data) => {
                    console.log('SUB_AA_OpenHarmony_MissionManager_6500 - startAbility2: '
                    + JSON.stringify(error) + ", " + JSON.stringify(data))
                });
            }, 500);
        })
    }

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6300
     * @tc.name    Verify the want information in the missionInfo of the ability obtained by getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6300', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MissionManager_6300-------------");
        var TAG = "SUB_AA_OpenHarmony_MissionManager_6300";
        var missionInfo = ["","","","","","","","","",""];
        setTimeout(function () {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.myapplication3",
                    abilityName: "com.example.entry2.MainAbility1"
                } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_6300 - startAbility: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            });
        }, 1000)
        console.log("------------end start SUB_AA_OpenHarmony_MissionManager_6300-------------");
        setTimeout(()=>{
            missionManager.getMissionInfos('', 10, (err, data) => {
                console.log("SUB_AA_OpenHarmony_MissionManager_6300, twosgetMissionInfos:" + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    missionInfo[i] = data[i];
                    console.log('qweqweqweqweqwe' + JSON.stringify(missionInfo[i].want));
                    if(missionInfo[i].want.abilityName == "com.example.entry2.MainAbility1"){
                        expect(missionInfo[i].want.bundleName == "com.example.myapplication3").assertTrue();
                    };
                }
            })
        },1000)
        done();
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6400
     * @tc.name    Verify the continuable information in the missionInfo of the ability obtained by getMissionInfos
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6400', 0, async function (done) {
        console.log("------------start SUB_AA_OpenHarmony_MissionManager_6400-------------");
        var TAG = "SUB_AA_OpenHarmony_MissionManager_6400";
        var missionInfo = ["","","","","","","","","",""];
        setTimeout(function () {
            featureAbility.startAbility(
                { want: {
                    bundleName: "com.example.myapplication3",
                    abilityName: "com.example.entry2.MainAbility1"
                } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_6400 - startAbility: '
                + JSON.stringify(error) + ", " + JSON.stringify(data))
            });
        }, 1000)
        console.log("------------end start SUB_AA_OpenHarmony_MissionManager_6400-------------");
        setTimeout(()=>{
            missionManager.getMissionInfos('', 10, (err, data) => {
                console.log("SUB_AA_OpenHarmony_MissionManager_6400, twosgetMissionInfos:" + JSON.stringify(data));
                for (var i = 0;i < data.length; i++) {
                    missionInfo[i] = data[i];
                    console.log('qweqweqweqweqwe' + JSON.stringify(missionInfo[i].continuable));
                    if(missionInfo[i].want.abilityName == "com.example.entry2.MainAbility1"){
                        expect(missionInfo[i].continuable == false).assertTrue();
                    };
                }
            })
        },1000)
        done();
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6500
     * @tc.name    The timestamp of the verification ability will change
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6500', 0, async function (done) {
        var myEvents = {
            events:
            [
                "Ability2_onShow",
                "Ability2_onHide"
            ]
        };
        var Subscriber;
        let id;
        function SubscribeCallBack(err, data) {
            listKey[0] = '';
            console.debug("beforeAll====>Subscribe CallBack data:====>" + JSON.stringify(data));
            switch (data.event) {
                case "Ability2_onShow":
                    console.log("SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onShow");
                    listKey[0] = "Ability2_onShow";
                    break;
                case "Ability2_onHide":
                    console.log("SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onHide");
                    listKey[0] = "Ability2_onHide";
                    break;
                default:
            }
            if (listKey[0] == "Ability2_onShow") {
                console.log('SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onShow');
                getMissionInfo();
            }
            if (listKey[0] == "Ability2_onHide") {
                console.log('SUB_AA_OpenHarmony_MissionManager_6500 Ability2_onHide');
                missionManager.getMissionInfo('', missionId1, (error, data) => {
                    if (data.want.abilityName == 'com.example.entry2.MainAbility') {
                        expect(data.timestamp > timestamp1).assertTrue();
                        clearTimeout(id);
                        commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
                    }
                })
            }
        };
        commonEvent.createSubscriber(myEvents).then(async (data) => {
            console.debug("SUB_AA_OpenHarmony_MissionManager_6500====>Create Subscriber====>");
            Subscriber = data;
            console.log("SUB_AA_OpenHarmony_MissionManager_6500 Subscriber " + JSON.stringify(Subscriber));
            await commonEvent.subscribe(Subscriber, SubscribeCallBack);
        }).catch((error) => {
            console.error('Operation failed. Cause: ' + JSON.stringify(error));
            done();
        });
        function UnSubscribeCallback() {
            console.debug("====>UnSubscribe CallBack====>");
            done();
        }
        function timeout() {
            expect().assertFail();
            console.debug('SUB_AA_OpenHarmony_MissionManager_6500=====timeout======');
            commonEvent.unsubscribe(Subscriber, UnSubscribeCallback);
        }
        id = setTimeout(timeout, START_ABILITY_TIMEOUT);
        featureAbility.startAbility(
            { want: {
                bundleName: "com.example.missionmanager",
                abilityName: "com.example.entry2.MainAbility"
            } }, (error, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_6500 - startAbility1: '
            + JSON.stringify(error) + ", " + JSON.stringify(data))
        });
    })
})