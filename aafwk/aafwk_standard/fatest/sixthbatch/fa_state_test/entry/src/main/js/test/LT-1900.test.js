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
import appManager from '@ohos.application.appManager';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "deccjsunit/index"
import featureAbility from '@ohos.ability.featureAbility';
var AbilityStateChanged1 = []
var ForegroundApplication1 = []
var testData
var testData1

describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1900
     * @tc.name: After registering listening, Ability initiates mutual verification
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1900", 0, async function (done) {
        console.log("---start SUB_AA_OpenHarmony_StateListener_1900-----");

        var suc = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log("SUB_onForegroundApplicationChanged" + JSON.stringify(aapData))
                ForegroundApplication1.push(aapData);
                console.log('ForegroundApplication :' + JSON.stringify(ForegroundApplication1))
            },
            onAbilityStateChanged: (StateData) => {
                console.log("==onAbilityStateChanged1==>" + JSON.stringify(StateData))
                AbilityStateChanged1.push(StateData)
                console.log('AbilityStateChanged1:' + JSON.stringify(AbilityStateChanged1))
            },
            onProcessCreated: (CreateData) => {
                console.log("SUB_onProcessCreated" + JSON.stringify(CreateData))
            },
            onProcessDied: (ProcessData) => {
                console.log("SUB_onProcessDied" + JSON.stringify(ProcessData))
            }
        })
        console.log('===suc===> : ' + suc);
        expect(typeof suc === 'number').assertTrue();

        featureAbility.startAbility({
            want: {
                "bundleName": "com.example.sum_statelistener",
                "abilityName": "com.example.sum_statelistener.MainAbility2" }
        }, (error, data) => {
            console.log('==startAbility2=> error1 :' + JSON.stringify(error) + " data: " 
            + JSON.stringify(data));
            setTimeout(() => {
                console.log('startAbility3 --start : ');
                featureAbility.startAbility({
                    want: {
                        bundleName: "com.example.sum_statelistener",
                        abilityName: "com.example.sum_statelistener.MainAbility3" }
                }, (error, data) => {
                    console.log('==startAbility3====> error1 :' + JSON.stringify(error) + " data: " 
                    + JSON.stringify(data));
                    setTimeout(() => {
                        checkPro(AbilityStateChanged1, ForegroundApplication1);
                        setTimeout(() => {
                            console.log('3--2--startAbility2 ');
                            featureAbility.startAbility({
                                want: {
                                    bundleName: "com.example.sum_statelistener",
                                    abilityName: "com.example.sum_statelistener.MainAbility2" }
                            }, (error, data) => {
                                console.log('==3--2--startAbility2====> error1 :' + JSON.stringify(error) 
                                + " data: " + JSON.stringify(data));
                                setTimeout(() => {
                                    checkPro1(AbilityStateChanged1, ForegroundApplication1)
                                }, 1300)

                            });
                        }, 1200);
                    }, 1000)
                });
            }, 500);
        })
        done();
    })

    function checkPro(AbilityStateChanged, ForegroundApplication) {
        console.log('==appState=1=> :' + JSON.stringify(AbilityStateChanged))
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==appState=2=> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility3') {
                testData = AbilityStateChanged[i]
                console.log('==TEST==> :' + JSON.stringify(testData))
            }
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility2') {
                testData1 = AbilityStateChanged[i]
                console.log('==testData11==> :' + JSON.stringify(testData1))
            }
        }
        checkAbilityStateData2(testData)
        checkAbilityStateData3(testData1)

        console.log('==app==:' + ForegroundApplication.length)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==abilityState==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.sum_statelistener') {
                testData = ForegroundApplication[i]
                console.log('==check testData2==> :' + JSON.stringify(testData))
            }
        }
        checkAppStateData2(testData)
    }

    function checkPro1(AbilityStateChanged, ForegroundApplication) {
        console.log('==checkPro1=> :' + JSON.stringify(AbilityStateChanged))
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==appState1==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility2') {
                testData = AbilityStateChanged[i]
                console.log('==chTeSt1==> :' + JSON.stringify(testData))
            }
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility3') {
                testData1 = AbilityStateChanged[i]
                console.log('==test1==> :' + JSON.stringify(testData1))
            }
        }
        checkTestData2(testData)
        checkTestData3(testData1)

        console.log('==end1111==:' + ForegroundApplication.length)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==State==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.sum_statelistener') {
                testData = ForegroundApplication[i]
                console.log('testData2==> :' + JSON.stringify(testData))
            }
        }
        cheData(testData)
    }

    function checkAbilityStateData3(list) {
        console.log('==checkAbilityStateData3==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility2').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkAppStateData2(list) {
        console.log('==checkAppStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkAbilityStateData2(list) {
        console.log('==checkAbilityStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility3').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkTestData2(list) {
        console.log('==checktestData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility2').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkTestData3(list) {
        console.log('==checkTestData3==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility3').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        console.log('checkTestData3 state' + JSON.stringify(list.state))
        expect(3).assertEqual(list.state)

    }

    function cheData(list) {
        console.log('==cheData==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }
})