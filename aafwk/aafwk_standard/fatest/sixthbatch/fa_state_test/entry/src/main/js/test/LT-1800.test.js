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
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1800
     * @tc.name: Unregister verification after registering two listens
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1800", 0, async function (done) {
        await sleep(1000)
        console.log("---start SUB_AA_OpenHarmony_StateListener_1800-----");
        var rest = appManager.registerApplicationStateObserver({
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
        console.log('registerApplicationStateObserver rest  : ' + rest);
        expect(typeof rest === 'number').assertTrue();
        await sleep(500)
        var want = {
            "bundleName": "com.example.sum_statelistener",
            "abilityName": "com.example.sum_statelistener.MainAbility2"
        }
        await featureAbility.startAbility({ want }).then((data) => {
            setTimeout(function () {
                console.log("startAbility data : " + JSON.stringify(data));
                checkArr(AbilityStateChanged1, ForegroundApplication1)
                done();
            }, 1000)
        }).catch((err) => {
            console.log("startAbility err : " + JSON.stringify(err));
        });
    })

    function checkArr(AbilityStateChanged, ForegroundApplication) {
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==appState==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility') {
                testData = AbilityStateChanged[i]
                console.log('==chtest==> :' + JSON.stringify(testData))
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

    function checkAbilityStateData2(list) {
        console.log('==checkAbilityStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        console.log('==list.bundleName==>' + JSON.stringify(list.bundleName))
        expect('com.example.sum_statelistener.MainAbility').assertEqual(list.abilityName)
        console.log('list.abilityName' + JSON.stringify(list.abilityName))
        expect(list.pid > 0).assertTrue()
        console.log('==list.pid==>' + JSON.stringify(list.pid))
        expect(list.uid > 0).assertTrue()
        console.log('==list.uid==>' + JSON.stringify(list.uid))
        expect(3).assertEqual(list.state)
        console.log('==list.state==>' + JSON.stringify(list.state))
    }

    function checkAbilityStateData3(list) {
        console.log('==checkAbilityStateData3==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility2').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkAppStateData2(list) {
        console.log('==checkAppStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function getProcessData(reslist, key) {
        console.log('getProcessData---start' + JSON.stringify(reslist))
        var listofkey = [];
        for (let i = 0;i < reslist.length; i++) {
            console.log('==getProcessData==> reslist[i] : ' + JSON.stringify(reslist[i]))
            var callback = reslist[i]
            console.log('==callback==>  : ' + JSON.stringify(callback))
            if (callback == key) {
                listofkey.push(reslist[i+1])
                console.log('==reslist[i+1]==>  : ' + JSON.stringify(reslist[i+1]))
            }
        }
        console.log('getProcessData' + JSON.stringify(listofkey))
        return listofkey
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }
})