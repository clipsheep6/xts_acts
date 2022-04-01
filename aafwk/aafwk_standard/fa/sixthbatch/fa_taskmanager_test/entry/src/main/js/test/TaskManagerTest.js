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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import abilityFeatureAbility from '@ohos.ability.featureAbility';
import commonEvent from '@ohos.commonEvent';
import missionManager  from '@ohos.application.missionManager';

const START_ABILITY_TIMEOUT = 30000;
describe('TaskManagerTest', function () {
    console.log("TaskManagerTest --- start");
    var subscriberInfoMainAbility = {
        events: [
            "Ability1_onCreate",
            "Ability1_onShow",
            "Ability1_onActive",
            "Ability1_onDestroy",
            "Ability1_onInactive",
            "Ability1_onHide",
            "Ability3_onCreate",
            "Ability3_onShow",
            "Ability3_onActive",
            "Ability3_onDestroy",
            "Ability3_onInactive",
            "Ability3_onHide",
            "Ability2_onCreate",
            "Ability2_onShow",
            "Ability2_onActive",
            "Ability2_onDestroy",
            "Ability2_onInactive",
            "Ability2_onHide",
            "Ability4_onCreate",
            "Ability4_onShow",
            "Ability4_onActive",
            "Ability4_onDestroy",
            "Ability4_onInactive",
            "Ability4_onHide",
            "Ability5_onCreate",
            "Ability5_onShow",
            "Ability5_onActive",
            "Ability5_onDestroy",
            "Ability5_onInactive",
            "Ability5_onHide",
            "Ability72_onCreate",
            "Ability72_onShow",
            "Ability72_onActive",
            "Ability72_onDestroy",
            "Ability72_onInactive",
            "Ability72_onHide",
        ]
    }
    var getCallingBundleUri = {
        events:["uri"]
    }
    var getCallingBundleMissionId = {
        events:["missionId"]
    }
    var getCallingBundleResult = {
        event:["register"]
    }
    var getCallingBundleListener = {
        event:["listener"]
    }

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0100
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0100', 0, async function (done) {
        var Subscriber;
        let id;
        var event = new Array();
        var flag1 = false,flag2 = false,flag3 = false;
        console.log("SUB_AA_OpenHarmony_MissionManager_0100" + event.length);
        console.log("SUB_AA_OpenHarmony_MissionManager_0100 start");
        function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
            switch (data.event) {
                case "Ability1_onCreate":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onCreate");
                    event.push("Ability1_onCreate");
                    break;
                case "Ability1_onShow":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onShow");
                    event.push("Ability1_onShow");
                    break;
                case "Ability1_onActive":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onActive");
                    event.push("Ability1_onActive");
                    break;
                case "Ability1_onInactive":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onInactive");
                    event.push("Ability1_onInactive");
                    break;
                case "Ability1_onHide":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onHide");
                    event.push("Ability1_onHide");
                    break;
                case "Ability1_onDestroy":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onDestroy");
                    event.push("Ability1_onDestroy");
                    break;
                case "Ability3_onCreate":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onCreate");
                    event.push("Ability3_onCreate");
                    break;
                case "Ability3_onShow":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onShow");
                    event.push("Ability3_onShow");
                    break;
                case "Ability3_onActive":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onActive");
                    event.push("Ability3_onActive");
                    break;
                case "Ability3_onInactive":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onInactive");
                    event.push("Ability3_onInactive");
                    break;
                case "Ability3_onHide":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onHide");
                    event.push("Ability3_onHide");
                    break;
                case "Ability3_onDestroy":
                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                    event.push("Ability3_onDestroy");
                    break;  
                default:
            }

            function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability2_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onCreate");
                        event.push("Ability2_onCreate");
                        break;
                    case "Ability2_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive");
                        event.push("Ability2_onActive");
                        break;
                    case "Ability2_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onShow");
                        event.push("Ability2_onShow");
                        break;
                    case "Ability2_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onDestroy");
                        event.push("Ability2_onDestroy");
                        break;
                    case "Ability2_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive");
                        event.push("Ability2_onInactive");
                        break;
                    case "Ability2_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide");
                        event.push("Ability2_onHide");
                        break;
                    default:
                }
            }
            console.log("event.length = " + JSON.stringify(event))
        };
            commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
                console.debug("SUB_AA_OpenHarmony_MissionManager_0100====>Create Subscriber====>");
                Subscriber = data;
                console.log("SUB_AA_OpenHarmony_MissionManager_0100" + JSON.stringify(Subscriber));
                await commonEvent.subscribe(Subscriber, SubscribeCallBack);
            })
            function UnSubscribeCallback() {
                console.debug("SUB_AA_OpenHarmony_MissionManager_0100====>UnSubscribe CallBack====>");
                done();
            };
            function timeout() {
                expect().assertFail();
                console.debug('SUB_AA_OpenHarmony_MissionManager_0100 - timeout');
                commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
                done();
            }
            id = setTimeout(timeout, START_ABILITY_TIMEOUT);
            abilityFeatureAbility.startAbility({ "want": {
                bundleName: "com.example.auxapplication",
                abilityName: "com.example.auxapplication.MainAbility"
            } }, (error, data) => {
                expect(data == 0).assertEqual();
                setTimeout(()=>{
                    abilityFeatureAbility.startAbility({ "want": {
                        bundleName: "com.example.auxapplication2",
                        abilityName: "com.example.auxapplication2.MainAbility"
                    } }, (error, data) => {
                        expect(data == 0).assertEqual();
                        setTimeout(()=>{
                            abilityFeatureAbility.startAbility({ "want": {
                                bundleName: "com.example.auxapplication",
                                abilityName: "com.example.entry2.MainAbility"
                            } }, (error, data) => {
                                expect(data == 0).assertEqual();
                                for (var i = 0;i < 3; i++) {
                                    console.log("SUB_AA_OpenHarmony_MissionManager_0100 terminateSelf ability");
                                    sleep(500).then(() => {
                                        abilityFeatureAbility.terminateSelf();
                                    });
                                }
                            });
                        },500)
                    });
                },500)
            });
        done()
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0200
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0200',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability1_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onInactive");
                     event.push("Ability1_onInactive");
                     break;
                 case "Ability1_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onHide");
                     event.push("Ability1_onHide");
                     break;
                 case "Ability1_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onDestroy");
                     event.push("Ability1_onDestroy");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability2_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onCreate");
                        event.push("Ability2_onCreate");
                        break;
                    case "Ability2_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive");
                        event.push("Ability2_onActive");
                        break;
                    case "Ability2_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onShow");
                        event.push("Ability2_onShow");
                        break;
                    case "Ability2_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onDestroy");
                        event.push("Ability2_onDestroy");
                        break;
                    case "Ability2_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive");
                        event.push("Ability2_onInactive");
                        break;
                    case "Ability2_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide");
                        event.push("Ability2_onHide");
                        break;
                    default:
                }
            }
             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0100====>Create Subscriber456====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_0100" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0100====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_0100 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.auxapplication2",
                     abilityName: "com.example.auxapplication2.MainAbility"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.entry2.MainAbility"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_0200 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
        done()
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0300
     * @tc.name: Enable third-party applications to query mission information through the interface.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0300',0,async function (done){
         console.log('SUB_AA_OpenHarmony_MissionManager_0300--start')
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.abilitydisable",
             abilityName: "com.example.abilitydisable.MainAbility"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
         });;
         setTimeout(()=>{
             missionManager.getMissionInfos('','abcd', (error, data) => {
                 console.log(' SUB_AA_OpenHarmony_MissionManager_0300 AsyncCallback errCode: '
                 + JSON.stringify(error.code) + " data: " + JSON.stringify(data));
                 expect(error.code == -1).assertTrue();
                 done();
             })
         },500)
         done();
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0400
     * @tc.name: Enable third-party applications to query mission information through the interface.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0400',0,async function (done){
        abilityFeatureAbility.startAbility({ "want": {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility"
        } }, (error, data) => {
            expect(data == 0).assertEqual();
        });;
        setTimeout(()=>{
            missionManager.getMissionInfos('','', (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0400 AsyncCallback errCode : '
                + JSON.stringify(error.code) + " data: " + JSON.stringify(data) + JSON.stringify(error.code == -1));
                expect(error.code == -1).assertTrue();
                done();
            })
        },500)
        done();
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0500
     * @tc.name: Enable third-party applications to query mission information through the interface.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0500',0,async function (done){
         abilityFeatureAbility.startAbility({ "want": {
            bundleName: "com.example.abilitydisable",
            abilityName: "com.example.abilitydisable.MainAbility"
        } }, (error, data) => {
            expect(data == 0).assertEqual();
        });;
        setTimeout(()=>{
            missionManager.getMissionInfos('','', (error, data) => {
                console.log('SUB_AA_OpenHarmony_MissionManager_0400 AsyncCallback errCode : '
                + JSON.stringify(error.code) + " data: " + JSON.stringify(data) + JSON.stringify(error.code == -1));
                expect(error.code == -1).assertTrue();
                done();
            })
        },500)
         done();
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0600
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0600',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability1_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onInactive");
                     event.push("Ability1_onInactive");
                     break;
                 case "Ability1_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onHide");
                     event.push("Ability1_onHide");
                     break;
                 case "Ability1_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onDestroy");
                     event.push("Ability1_onDestroy");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0600 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability2_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onCreate");
                        event.push("Ability2_onCreate");
                        break;
                    case "Ability2_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive");
                        event.push("Ability2_onActive");
                        break;
                    case "Ability2_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onShow");
                        event.push("Ability2_onShow");
                        break;
                    case "Ability2_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onDestroy");
                        event.push("Ability2_onDestroy");
                        break;
                    case "Ability2_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive");
                        event.push("Ability2_onInactive");
                        break;
                    case "Ability2_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide");
                        event.push("Ability2_onHide");
                        break;
                    default:
                }
            }
             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0600====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_0600" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0600====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_0600 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.auxapplication2",
                     abilityName: "com.example.auxapplication2.MainAbility"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.entry2.MainAbility"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_0600 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done()
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0700
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0700',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
            subscribeCallBack2(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability1_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onInactive");
                     event.push("Ability1_onInactive");
                     break;
                 case "Ability1_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onHide");
                     event.push("Ability1_onHide");
                     break;
                 case "Ability1_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onDestroy");
                     event.push("Ability1_onDestroy");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability4_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onCreate");
                        event.push("Ability4_onCreate");
                        break;
                    case "Ability4_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive");
                        event.push("Ability4_onActive");
                        break;
                    case "Ability4_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow");
                        event.push("Ability4_onShow");
                        break;
                    case "Ability4_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onDestroy");
                        event.push("Ability4_onDestroy");
                        break;
                    case "Ability4_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive");
                        event.push("Ability4_onInactive");
                        break;
                    case "Ability4_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide");
                        event.push("Ability4_onHide");
                        break;
                    default:
                }
            }

            function subscribeCallBack2(err, data) {
                switch (data.event) {
                    case "Ability2_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onCreate");
                     event.push("Ability2_onCreate");
                     break;
                 case "Ability2_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onActive");
                     event.push("Ability2_onActive");
                     break;
                 case "Ability2_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onShow");
                     event.push("Ability2_onShow");
                     break;
                 case "Ability2_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onDestroy");
                     event.push("Ability2_onDestroy");
                     break;
                 case "Ability2_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onInactive");
                     event.push("Ability2_onInactive");
                     break;
                 case "Ability2_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability2_onHide");
                     event.push("Ability2_onHide");
                     break;
                default:
                }
            }

             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0700====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_0700" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0700====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_0700 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         console.log('SUB_AA_OpenHarmony_MissionManager_0700--start')
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.auxapplication2",
                     abilityName: "com.example.auxapplication2.MainAbility"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.entry2.MainAbility"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_0700 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done()
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0800
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0800',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack2(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability1_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onInactive");
                     event.push("Ability1_onInactive");
                     break;
                 case "Ability1_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onHide");
                     event.push("Ability1_onHide");
                     break;
                 case "Ability1_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability1_onDestroy");
                     event.push("Ability1_onDestroy");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 case "Ability72_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onCreate");
                     event.push("Ability72_onCreate");
                     break;
                 case "Ability72_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onActive");
                     event.push("Ability72_onActive");
                     break;
                 case "Ability72_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onShow");
                     event.push("Ability72_onShow");
                     break;
                 case "Ability72_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onDestroy");
                     event.push("Ability72_onDestroy");
                     break;
                 case "Ability72_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onInactive");
                     event.push("Ability72_onInactive");
                     break;
                 case "Ability72_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onHide");
                     event.push("Ability72_onHide");
                     break;
                 default:
             }

             function subscribeCallBack2(err, data) {
                 switch(data.event) {
                    case "Ability4_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onCreate");
                        event.push("Ability4_onCreate");
                        break;
                    case "Ability4_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive");
                        event.push("Ability4_onActive");
                        break;
                    case "Ability4_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow");
                        event.push("Ability4_onShow");
                        break;
                    case "Ability4_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onDestroy");
                        event.push("Ability4_onDestroy");
                        break;
                    case "Ability4_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive");
                        event.push("Ability4_onInactive");
                        break;
                    case "Ability4_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide");
                        event.push("Ability4_onHide");
                        break;
                    default:
                 }
             }
             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0800====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_0800" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0800====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_0800 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility2"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.abilitydisable",
                     abilityName: "com.example.abilitydisable.MainAbility3"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.auxapplication.MainAbility4"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_0800 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done()
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_0900
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_0900',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 case "Ability72_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability72_onCreate");
                     event.push("Ability72_onCreate");
                     break;
                 case "Ability72_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability72_onActive");
                     event.push("Ability72_onActive");
                     break;
                 case "Ability72_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0900 Ability72_onShow");
                     event.push("Ability72_onShow");
                     break;
                 case "Ability72_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onDestroy");
                     event.push("Ability72_onDestroy");
                     break;
                 case "Ability72_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onInactive");
                     event.push("Ability72_onInactive");
                     break;
                 case "Ability72_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onHide");
                     event.push("Ability72_onHide");
                     break;
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability4_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onCreate");
                     event.push("Ability4_onCreate");
                     break;
                 case "Ability4_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive");
                     event.push("Ability4_onActive");
                     break;
                 case "Ability4_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow");
                     event.push("Ability4_onShow");
                     break;
                 case "Ability4_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive");
                     event.push("Ability4_onInactive");
                     break;
                 case "Ability4_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide");
                     event.push("Ability4_onHide");
                     break;
                 case "Ability4_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onDestroy");
                     event.push("Ability4_onDestroy");
                     break;
                default:
                }
            }

             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0900====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_0900" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_0900====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_0900 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         console.log('SUB_AA_OpenHarmony_MissionManager_0900--start')
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility2"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.abilitydisable",
                     abilityName: "com.example.abilitydisable.MainAbility3"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.auxapplication.MainAbility4"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_0900 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done();
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_1000
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_1000',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability3_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability3_onDestroy");
                     event.push("Ability3_onDestroy");
                     break;
                 case "Ability72_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability72_onCreate");
                     event.push("Ability72_onCreate");
                     break;
                 case "Ability72_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability72_onActive");
                     event.push("Ability72_onActive");
                     break;
                 case "Ability72_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1000 Ability72_onShow");
                     event.push("Ability72_onShow");
                     break;
                 case "Ability72_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onInactive");
                     event.push("Ability72_onInactive");
                     break;
                 case "Ability72_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onHide");
                     event.push("Ability72_onHide");
                     break;
                 case "Ability72_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onDestroy");
                     event.push("Ability72_onDestroy");
                     break;
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability4_onCreate":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onCreate");
                        event.push("Ability4_onCreate");
                        break;
                    case "Ability4_onActive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive");
                        event.push("Ability4_onActive");
                        break;
                    case "Ability4_onShow":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow");
                        event.push("Ability4_onShow");
                        break;
                    case "Ability4_onInactive":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive");
                        event.push("Ability4_onInactive");
                        break;
                    case "Ability4_onHide":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide");
                        event.push("Ability4_onHide");
                        break;
                    case "Ability4_onDestroy":
                        console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onDestroy");
                        event.push("Ability4_onDestroy");
                        break;
                    default:
                }
            }

             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_1000====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_1000" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_1000====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_1000 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         console.log('SUB_AA_OpenHarmony_MissionManager_1000--start')
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility2"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.abilitydisable",
                     abilityName: "com.example.abilitydisable.MainAbility3"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.auxapplication.MainAbility4"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_1000 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done();
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_1100
     * @tc.name: Check that context paths of different Ability in the same hap are the same.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_1100',0,async function (done){
         var Subscriber;
         let id;
         var event = [];
         var flag1 = false,flag2 = false,flag3 = false;
         function SubscribeCallBack(err, data) {
            subscribeCallBack1(err, data);
	    subscribeCallBack2(err, data);
             switch (data.event) {
                 case "Ability1_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability1_onCreate");
                     event.push("Ability1_onCreate");
                     break;
                 case "Ability1_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability1_onShow");
                     event.push("Ability1_onShow");
                     break;
                 case "Ability1_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability1_onActive");
                     event.push("Ability1_onActive");
                     break;
                 case "Ability3_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability3_onCreate");
                     event.push("Ability3_onCreate");
                     break;
                 case "Ability3_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability3_onShow");
                     event.push("Ability3_onShow");
                     break;
                 case "Ability3_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability3_onActive");
                     event.push("Ability3_onActive");
                     break;
                 case "Ability3_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability3_onInactive");
                     event.push("Ability3_onInactive");
                     break;
                 case "Ability3_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability3_onHide");
                     event.push("Ability3_onHide");
                     break;
                 case "Ability72_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability72_onCreate");
                     event.push("Ability72_onCreate");
                     break;
                 case "Ability72_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability72_onActive");
                     event.push("Ability72_onActive");
                     break;
                 case "Ability72_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_1100 Ability72_onShow");
                     event.push("Ability72_onShow");
                     break;
                 case "Ability72_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onInactive");
                     event.push("Ability72_onInactive");
                     break;
                 case "Ability72_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onHide");
                     event.push("Ability72_onHide");
                     break;
                 case "Ability72_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability72_onDestroy");
                     event.push("Ability72_onDestroy");
                     break;
                 default:
             }

             function subscribeCallBack1(err, data) {
                switch (data.event) {
                    case "Ability5_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onCreate");
                     event.push("Ability5_onCreate");
                     break;
                 case "Ability5_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onActive");
                     event.push("Ability5_onActive");
                     break;
                 case "Ability5_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onShow");
                     event.push("Ability5_onShow");
                     break;
                 case "Ability5_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onInactive");
                     event.push("Ability5_onInactive");
                     break;
                 case "Ability5_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onHide");
                     event.push("Ability5_onHide");
                     break;
                 case "Ability5_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability5_onDestroy");
                     event.push("Ability5_onDestroy");
                     break;
                default:
                }
            }

	    function subscribeCallBack2(err, data) {
                switch (data.event) {
                    case "Ability4_onCreate":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onCreate");
                     event.push("Ability4_onCreate");
                     break;
                 case "Ability4_onActive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onActive");
                     event.push("Ability4_onActive");
                     break;
                 case "Ability4_onShow":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onShow");
                     event.push("Ability4_onShow");
                     break;
                 case "Ability4_onInactive":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onInactive");
                     event.push("Ability4_onInactive");
                     break;
                 case "Ability4_onHide":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onHide");
                     event.push("Ability4_onHide");
                     break;
                 case "Ability4_onDestroy":
                     console.log("SUB_AA_OpenHarmony_MissionManager_0100 Ability4_onDestroy");
                     event.push("Ability4_onDestroy");
                     break;
                default:
                }
            }

             console.log("event.length = " + JSON.stringify(event))
         };
         commonEvent.createSubscriber(subscriberInfoMainAbility).then(async (data) => {
             console.debug("SUB_AA_OpenHarmony_MissionManager_1100====>Create Subscriber====>");
             Subscriber = data;
             console.log("SUB_AA_OpenHarmony_MissionManager_1100" + JSON.stringify(Subscriber));
             await commonEvent.subscribe(Subscriber, SubscribeCallBack);
         })
         function UnSubscribeCallback() {
             console.debug("SUB_AA_OpenHarmony_MissionManager_1100====>UnSubscribe CallBack====>");
             done();
         };
         function timeout() {
             expect().assertFail();
             console.debug('SUB_AA_OpenHarmony_MissionManager_1100 - timeout');
             commonEvent.unsubscribe(Subscriber, UnSubscribeCallback)
             done();
         }
         id = setTimeout(timeout, START_ABILITY_TIMEOUT);
         console.log('SUB_AA_OpenHarmony_MissionManager_1100--start')
         abilityFeatureAbility.startAbility({ "want": {
             bundleName: "com.example.auxapplication",
             abilityName: "com.example.auxapplication.MainAbility2"
         } }, (error, data) => {
             expect(data == 0).assertEqual();
             setTimeout(()=>{
                 abilityFeatureAbility.startAbility({ "want": {
                     bundleName: "com.example.abilitydisable",
                     abilityName: "com.example.abilitydisable.MainAbility3"
                 } }, (error, data) => {
                     expect(data == 0).assertEqual();
                     setTimeout(()=>{
                         abilityFeatureAbility.startAbility({ "want": {
                             bundleName: "com.example.auxapplication",
                             abilityName: "com.example.auxapplication.MainAbility4"
                         } }, (error, data) => {
                             expect(data == 0).assertEqual();
                             for (var i = 0;i < 3; i++) {
                                 console.log("SUB_AA_OpenHarmony_MissionManager_1100 terminateSelf ability");
                                 sleep(500).then(() => {
                                     abilityFeatureAbility.terminateSelf();
                                 });
                             }
                         });
                     },500)
                 });
             },500)
         });
         done();
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_3600
     * @tc.name: Start the calling interface of the third-party application to obtain the mission information.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_3600',0,async function (done){
        var Subscriber
        abilityFeatureAbility.startAbility({"want":{
            bundleName: "com.example.auxapplication2",
            abilityName: "com.example.auxapplication2.MainAbility"
        }},(error,data)=>{
            expect(data == 0).assertEqual();
        })
        function SubscribeCallBackUri(error, data) {
            expect(data.parameters.data != 0).assertEqual();
            done();
        }
        commonEvent.createSubscriber(getCallingBundleUri).then(async (data) => {
            console.debug("====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBackUri);
        });
    });

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_3700
     * @tc.name: Start the calling interface of the third-party application to obtain the mission information.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_3700',0,async function (done){
        var Subscriber
        abilityFeatureAbility.startAbility({"want":{
            bundleName: "com.example.auxapplication2",
            abilityName: "com.example.auxapplication2.MainAbility"
        }},(error,data)=>{
            expect(data == 0).assertEqual();
        })
        function SubscribeCallBackMissionId(error, data) {
            expect(data.parameters.data != 0).assertEqual();
            done();
        }
        commonEvent.createSubscriber(getCallingBundleMissionId).then(async (data) => {
            console.debug("====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBackMissionId);
        });
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_3800
     * @tc.name: Start the third-party application calling interface registration task listening.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_3800',0,async function (done){
        var Subscriber
        abilityFeatureAbility.startAbility({"want":{
            bundleName: "com.example.auxapplication2",
            abilityName: "com.example.auxapplication2.MainAbility"
        }},(error,data)=>{
            expect(data == 0).assertEqual();
        })
        function SubscribeCallBackResult(error, data) {
            expect(data.parameters.data == 0).assertEqual();
        }
        commonEvent.createSubscriber(getCallingBundleResult).then(async (data) => {
            console.debug("====>Create Subscriber====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBackResult);
        });
    })

    /*
     * @tc.number: SUB_AA_OpenHarmony_MissionManager_3800
     * @tc.name: Start the third-party application calling interface and cancel task listening.
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_3900',0,async function (done){
        var Subscriber
        abilityFeatureAbility.startAbility({"want":{
            bundleName: "com.example.auxapplication2",
            abilityName: "com.example.auxapplication2.MainAbility"
        }},(error,data)=>{
            expect(data == 0).assertEqual();
        })
        function SubscribeCallBackListener(error, data) {
            expect(data.parameters.data != 0).assertEqual();
            done()
        }
        commonEvent.createSubscriber(getCallingBundleListener).then(async (data) => {
            console.debug("====>Create Subscriber111====>");
            Subscriber = data;
            await commonEvent.subscribe(Subscriber, SubscribeCallBackListener);
        });
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4000
     * @tc.name    Call the interface to obtain the mission information. The interface parameters are local ID and 1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4000',0, async function (done){
        missionManager.getMissionInfos("", 1, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4000 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4100
     * @tc.name    Call the interface to get the mission information. The interface parameters are nonexistent and 1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4100', 0, async function (done) {
         missionManager.getMissionInfos("aaaaaa", 1, (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_4100 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4200
     * @tc.name    Call the interface to get the mission information. The interface parameters are null and 1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4200', 0, async function (done) {
        missionManager.getMissionInfos('', 1, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4200 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4300
     * @tc.name    Call the interface to obtain the mission information. The interface parameters are null and 10
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4300', 0, async function (done) {
        missionManager.getMissionInfos('', 10, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4300 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4400
     * @tc.name    Call the interface to obtain the mission information. The interface parameters are null and 1000
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4400', 0, async function (done){
        missionManager.getMissionInfos('', 1000, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4400 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4500
     * @tc.name    Call the interface to obtain the mission information. The interface parameters are null and null
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4500', 0, async function (done){
         missionManager.getMissionInfos("", "", (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_4500 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4600
     * @tc.name    Call the interface to get the mission information. The interface parameters are empty and string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4600', 0, async function (done){
         missionManager.getMissionInfos("", "1", (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_4600 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4700
     * @tc.name    Call the interface to obtain the mission information.The interface parameters are null and floating
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4700', 0, async function (done){
        missionManager.getMissionInfos('', 2.0, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4700 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4800
     * @tc.name    The interface parameters are local ID and existing ID
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4800', 0, async function (done){
        missionManager.getMissionInfos("", "", (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_4800 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_4900
     * @tc.name    Call the interface to get the mission information. The interface parameters are nonexistent and ID
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_4900', 0, async function (done){
         missionManager.getMissionInfos("bbbb", "", (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_4900 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5000
     * @tc.name    The interface parameter is null and the value of launcherability is 1
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5000', 0, async function (done){
        missionManager.getMissionInfos("", 1, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5000 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5100
     * @tc.name    The interface parameter is empty and the ID exists
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5100', 0, async function (done){
         missionManager.getMissionInfos("", "", (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_5100 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5200
     * @tc.name    The interface parameter is empty and does not exist
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5200', 0, async function (done){
        var id = 65024;
        missionManager.getMissionInfos("", id, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5200 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5300
     * @tc.name    Call the interface to get the mission information. The interface parameters are null and empty
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5300', 0, async function (done) {
        missionManager.getMissionInfo('', '', (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5300 AsyncCallback errCode ##: '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5400
     * @tc.name    Call the interface to get the mission information. The interface parameters are empty and string
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5400', 0, async function (done) {
        missionManager.getMissionInfo('', "aa", (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5400 AsyncCallback errCode ##: '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code != 0).assertTrue();
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5500
     * @tc.name    The interface parameters are null and floating point
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5500', 0, async function (done){
        missionManager.getMissionInfos("", 2.0, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5500 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            done();
        })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5600
     * @tc.name    Call the interface to register the task. The listening input parameter is undefined
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5600', 0, async function (done) {
        let object = undefined
        var result = missionManager.registerMissionListener(object);
        console.log('SUB_AA_OpenHarmony_MissionManager_5600 result ###' + JSON.stringify(result));
        expect(result != undefined).assertTrue();
        done();
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5700
     * @tc.name    Calling the interface registration task to listen to the object whose input parameter is empty
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5700', 0, async function (done) {
        let object = {}
        var result = missionManager.registerMissionListener(object);
        console.log('SUB_AA_OpenHarmony_MissionManager_5700 result ### ' + JSON.stringify(object));
        console.log('SUB_AA_OpenHarmony_MissionManager_5700 result ### ' + JSON.stringify(result));
        expect(result != undefined).assertTrue();
        done();
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5800
     * @tc.name    Call the interface to register the task to listen and register for multiple times
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5800', 0, async function (done){
        for(let i = 0; i< 5; i++){
            result = missionManager.registerMissionListener({
                onMissionCreated:function onMissionCreated(number){
                    console.log("SUB_onForegroundApplicationChanged")
                },
                onMissionDestroyed:function onMissionDestroyed(number){
                    console.log("SUB_onAbilityStateChanged")
                },
                onMissionSnapshotChanged:function onMissionSnapshotChanged(number){
                    console.log("SUB_onProcessCreated")
                },
                onMissionMovedToFront:function onMissionMovedToFront(number){
                    console.log("SUB_onProcessDied")
                },
            });
            console.log('SUB_AA_OpenHarmony_MissionManager_5800 result ### ' + JSON.stringify(result));
            expect(result != undefined).assertTrue();
            done();
        }
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_5900
     * @tc.name    The input parameter is listener id, which does not exist
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_5900', 0, async function (done) {
        console.log("---------start SUB_AA_OpenHarmony_MissionManager_5900------------")
        var id = 44642;
        missionManager.unregisterMissionListener(id, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_5900 AsyncCallback errCode : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
        console.log("---------start SUB_AA_OpenHarmony_MissionManager_5900------------")
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6000
     * @tc.name    The input parameter is listener id and the registered ID
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6000', 0, async function (done){
         missionManager.unregisterMissionListener(result, (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_6000 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code == 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6100
     * @tc.name    The input parameter is listener id, which is the unregistered ID
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6100', 0, async function (done){
         missionManager.unregisterMissionListener(result, (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_6100 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code == 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6200
     * @tc.name    Call the interface to cancel task listening. The input parameter listener id is undefined
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6200', 0, async function (done){
         let listenerId = undefined
         missionManager.unregisterMissionListener(listenerId, (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_6200 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6300
     * @tc.name    Calling the interface to cancel task listening. The input parameter listener id is null
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6300', 0, async function (done) {
         missionManager.unregisterMissionListener(null, (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_6300 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6400
     * @tc.name    Call the interface to cancel task listening. The input parameter listener id is of string type
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6400', 0, async function (done){
         missionManager.unregisterMissionListener('cc', (err, data) => {
             console.log('SUB_AA_OpenHarmony_MissionManager_6400 AsyncCallback errCode : '
             + JSON.stringify(err) + " data: " + JSON.stringify(data));
             expect(err.code != 0).assertTrue();
             done();
         })
    })

    /*
     * @tc.number  SUB_AA_OpenHarmony_MissionManager_6500
     * @tc.name    The input parameter listener id is a floating-point type that exists
     * @tc.desc    Function test
     * @tc.level   0
     */
    it('SUB_AA_OpenHarmony_MissionManager_6500', 0, async function (done){
        missionManager.unregisterMissionListener(2.0, (err, data) => {
            console.log('SUB_AA_OpenHarmony_MissionManager_6500 AsyncCallback errCode123123 : '
            + JSON.stringify(err) + " data: " + JSON.stringify(data));
            expect(err.code == 0).assertTrue();
            done();
        })
    })
    function sleep (time) {
        return new Promise((resolve) => setTimeout(resolve, time));
    };
})
