
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import missionManager  from '@ohos.application.missionManager';
import featureAbility from '@ohos.ability.featureAbility';
import bundleManager from '@ohos.bundle';
import appManager from "@ohos.application.appManager"
import commonEvent from '@ohos.commonEvent';
import {onDestroys} from "../MainAbility2/app.js"
import abilityManager from '@ohos.application.abilityManager'
import ConfigurationConstant from "@ohos.application.ConfigurationConstant";
import AbilityConstant from '@ohos.application.AbilityConstant'

describe('AbilityDisableTests', function () {
    let mainAbility1Lists =  new Array()
    let mainAbility2Lists = new Array()
    let mainAbility3Lists = new Array()

    function subscriberCallBackMainAbility1Destory(err,data){
        console.log("Subscribe1 CallBack data:" + JSON.stringify(data));
        mainAbility1Lists.push(data["event"])
        console.log("subscriberCallBackMainAbility1Destory mainAbility1Lists:"+mainAbility1Lists);
    }
    function subscriberCallBackMainAbility2Destory(err,data){
        console.log("Subscribe2 CallBack data:" + JSON.stringify(data));
        mainAbility2Lists.push(data["event"]);
        console.log("subscriberCallBackMainAbility2Destory lists:"+mainAbility2Lists);
    };
    function subscriberCallBackMainAbility3Destory(err,data){
        console.log("Subscribe3 CallBack data:" + JSON.stringify(data));
        mainAbility3Lists.push(data["event"]);
        console.log("subscriberCallBackMainAbility3Destory lists:"+mainAbility3Lists);
    };
    console.log("AbilityDisableTests --- start");
    var ability1LifeEvents = {
        events:["singletonEntryAbulity1_onHide",
        "singletonEntryAbulity1_onActive",
        "singletonEntryAbulity1_onInactive",
        "singletonEntryAbility1_onDestroy",
        "singletonEntryAbulity1_onShow",
        "ApplicationMainAbility1_onCreate",
        "ApplicationMainAbility1_onDestroy",
        ]
    };
    var ability2LifeEvents = {
        events:["ApplicationMainAbility2_onDestroy",
                "singletonEntryAbulity2_onHide",
                "singletonEntryAbulity2_onActive",
                "singletonEntryAbulity2_onInactive",
                "singletonEntryAbility2_onDestroy",
                "singletonEntryAbulity2_onShow",
                "ApplicationMainAbility2_onCreate",
        ]
    };
    var ability3LifeEvents = {
        events:["ApplicationMainAbility3_onDestroy",
        "singletonEntryAbulity3_onHide",
        "singletonEntryAbulity3_onActive",
        "singletonEntryAbulity3_onInactive",
        "singletonEntryAbility3_onDestroy",
        "singletonEntryAbulity3_onShow",
        "ApplicationMainAbility3_onCreate",
        ]
    };

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6200
       * @tc.name    Verify the enumeration values LaunchReason. CONTINUATION
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6200", 0, async function (done) {
        console.info("logMessage SUB_AA_OpenHarmony_AbilityStart_6300");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6200 LaunchReason.CONTINUATION: " + 
        AbilityConstant.LaunchReason.CONTINUATION);
        expect(AbilityConstant.LaunchReason.CONTINUATION==3).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6300
       * @tc.name    Verify the enumeration value launchreason.start UNKNOWN
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6300", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6300-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6300 LaunchReason.UNKNOWN: " + 
        AbilityConstant.LaunchReason.UNKNOWN);
        expect(AbilityConstant.LaunchReason.UNKNOWN==0).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6400
       * @tc.name    Verify the enumeration value launchreason.START_ABILITY
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6400", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6400-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6400 LaunchReason.START_ABILITY: " + 
        AbilityConstant.LaunchReason.START_ABILITY);
        expect(AbilityConstant.LaunchReason.START_ABILITY==1).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6500
       * @tc.name    Verify the enumeration values LaunchReason. CALL
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6500", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6500-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6500 LaunchReason.CALL: " + 
        AbilityConstant.LaunchReason.CALL);
        expect(AbilityConstant.LaunchReason.CALL==2).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6600
       * @tc.name    Verify the enumeration values LastExitReason.UNKNOWN
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6600", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6600-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6600 LastExitReason.UNKNOWN: " + 
        AbilityConstant.LastExitReason.UNKNOWN);
        expect(AbilityConstant.LastExitReason.UNKNOWN==0).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6700
       * @tc.name    Verify the enumeration values LastExitReason.ABILITY_NOT_RESPONDING
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6700", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6700-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6700 LastExitReason.ABILITY_NOT_RESPONDING: " + 
        AbilityConstant.LastExitReason.ABILITY_NOT_RESPONDING);
        expect(AbilityConstant.LastExitReason.ABILITY_NOT_RESPONDING==1).assertTrue();
        done();
    });

    /*
       * @tc.number  SUB_AA_OpenHarmony_AbilityStart_6700
       * @tc.name    Verify the enumeration values LastExitReason.NORMAL
       * @tc.desc    Function test
       * @tc.level   0
       */
    it("SUB_AA_OpenHarmony_AbilityStart_6800", 0, async function (done) {
        console.info("------------------logMessage SUB_AA_OpenHarmony_AbilityStart_6800-------------------");
        console.info("SUB_AA_OpenHarmony_AbilityStart_6800 LastExitReason.NORMAL: " + 
        AbilityConstant.LastExitReason.NORMAL);
        expect(AbilityConstant.LastExitReason.NORMAL==2).assertTrue();
        done();
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_2900
     * @tc.name    Verify the full-screen switching application
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_2900', 0, async function (done) {
        var Subscriber1 = [];
        var Subscriber3 = [];
        console.log("SUB_AA_OpenHarmony_MoveMissionToFront_2900 --- start")
        commonEvent.createSubscriber(ability1LifeEvents).then(async (data)=>{
            console.log("Create Subscriber1=======>："+JSON.stringify(data));
            Subscriber1 = data;
            console.log("data1 is:" + JSON.stringify(Subscriber1));
            await commonEvent.subscribe(Subscriber1,subscriberCallBackMainAbility1Destory)
        });
        commonEvent.createSubscriber(ability3LifeEvents).then(async (data)=>{
            console.log("Create Subscriber2=======>："+JSON.stringify(data));
            Subscriber3 = data;
            console.log("data2 is:" + JSON.stringify(Subscriber3));
            await commonEvent.subscribe(Subscriber3,subscriberCallBackMainAbility3Destory)
        });
        setTimeout(()=>{
            featureAbility.startAbility({ want: {
                bundleName: "com.example.abilitydisable",
                abilityName: "com.example.abilitydisable.MainAbility3"
            } }, (error, data) => {
                console.log('SUB_AA_OpenHarmony_MoveMissionToFront_2900 - startMainAbility3: '
                + JSON.stringify(error) + ", " + JSON.stringify(data));
            });
        },1000)
        setTimeout(()=>{
            console.log("subscriberCallBackMainAbility3Destory lists:"+mainAbility3Lists);
            expect(mainAbility3Lists.indexOf(JSON.stringify("singletonEntryAbulity3_onShow"))!=-1).assertTrue();
            expect(mainAbility3Lists.indexOf(JSON.stringify("ApplicationMainAbility3_onCreate"))!=-1).assertTrue();
            expect(mainAbility3Lists.indexOf(JSON.stringify("ApplicationMainAbility3_onActive"))!=-1).assertTrue();
        },3000)
        setTimeout(()=>{
            console.log("subscriberCallBackMainAbility1Destory lists:"+ mainAbility1Lists);
            expect(mainAbility1Lists.indexOf(JSON.stringify("singletonEntryAbulity1_onShow"))!=-1).assertTrue();
            expect(mainAbility1Lists.indexOf(JSON.stringify("singletonEntryAbulity1_onActive"))!=-1).assertTrue();
            expect(mainAbility3Lists.indexOf(JSON.stringify("singletonEntryAbulity3_onInactive"))==-1).assertTrue();
            expect(mainAbility3Lists.indexOf(JSON.stringify("singletonEntryAbulity3_onHide"))==-1).assertTrue();
        },3500);
        done()
    });

    /*
     * @tc.number  SUB_AA_OpenHarmony_MoveMissionToFront_3000
     * @tc.name    Verify the left split screen switching application
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MoveMissionToFront_3000', 0, async function (done) {
            var Subscriber2 = [];
            var Subscriber1 = [];
            console.log("SUB_AA_OpenHarmony_MoveMissionToFront_3000 --- start")
            commonEvent.createSubscriber(ability1LifeEvents).then(async (data)=>{
                console.log("Create Subscriber1=======>："+JSON.stringify(data));
                Subscriber1 = data;
                console.log("data1 is:" + JSON.stringify(Subscriber1));
                await commonEvent.subscribe(Subscriber1,subscriberCallBackMainAbility1Destory)
            });
            commonEvent.createSubscriber(ability2LifeEvents).then(async (data)=>{
                console.log("Create Subscriber2=======>："+JSON.stringify(data));
                Subscriber2 = data;
                console.log("data2 is:" + JSON.stringify(Subscriber2));
                await commonEvent.subscribe(Subscriber2,subscriberCallBackMainAbility2Destory)
            });
            setTimeout(()=>{
                featureAbility.startAbility({ want: {
                    bundleName: "com.example.abilitydisable",
                    abilityName: "com.example.abilitydisable.MainAbility2",
                    parameters:"windowCode100",
                } }, (error, data) => {
                    console.log('SUB_AA_OpenHarmony_MoveMissionToFront_3000 - startMainAbility2: '
                    + JSON.stringify(error) + ", " + JSON.stringify(data));
                });
            },1000)
            setTimeout(()=>{
                console.log("subscriberCallBackMainAbility2Destory lists:"+mainAbility2Lists);
                expect(mainAbility2Lists.indexOf(JSON.stringify("singletonEntryAbulity2_onShow"))!=-1).assertTrue();
                expect(mainAbility2Lists.indexOf(JSON.stringify("ApplicationMainAbility2_onCreate"))!=-1).assertTrue();
                expect(mainAbility2Lists.indexOf(JSON.stringify("ApplicationMainAbility2_onActive"))!=-1).assertTrue();
            },3000)
            setTimeout(()=>{
                console.log("subscriberCallBackMainAbility1Destory lists:"+ mainAbility1Lists);
                expect(mainAbility1Lists.indexOf(JSON.stringify("singletonEntryAbulity1_onShow"))!=-1).assertTrue();
                expect(mainAbility1Lists.indexOf(JSON.stringify("singletonEntryAbulity1_onActive"))!=-1).assertTrue();
                expect(mainAbility2Lists.indexOf(JSON.stringify("singletonEntryAbulity2_onHide"))==-1).assertTrue();
                expect(mainAbility2Lists.indexOf(JSON.stringify("singletonEntryAbulity2_onInactive"))==-1).assertTrue();
            },3500);
            done()
    });
})