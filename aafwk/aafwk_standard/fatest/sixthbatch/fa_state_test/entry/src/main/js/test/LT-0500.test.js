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
var assistData
var arr1 = []
var AbilityStateChanged1 = []
var ForegroundApplication1 = []
var testData
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_0500
     * @tc.name: Unregister verification after registering two listens
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_0500", 0, async function (done) {
        console.log("---SUB_AA_OpenHarmony_StateListener_0500--- start--");
        var mTes = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (AppStateData) => {
                console.log("SUB_Changed-0500" + JSON.stringify(AppStateData))
                ForegroundApplication1.push(AppStateData);
                console.log('F==> :' + JSON.stringify(ForegroundApplication1))
            },
            onAbilityStateChanged: (AbilityStateData) => {
                console.log("==Changed1-05==>" + JSON.stringify(AbilityStateData))
                AbilityStateChanged1.push(AbilityStateData)
                console.log('=>AbilityStateChanged1:' + JSON.stringify(AbilityStateChanged1))
            },
            onProcessCreated: (CreateData) => {
                console.log("SUB_onProcessCreated" + JSON.stringify(CreateData))
                arr1.push('=>onProcessCreated', CreateData)
                console.log('arr1==>:' + JSON.stringify(arr1))
            },
            onProcessDied: (ProcessData) => {
                console.log("SUB_onProcessDied" + JSON.stringify(ProcessData))
            }

        })
        console.log('===test sucFul : ' + mTes);
        expect(typeof mTes === 'number').assertTrue();
        featureAbility.startAbility({
            want: {
                bundleName: "com.example.sum_statelistener",
                abilityName: "com.example.sum_statelistener.MainAbility2" }
        }, (error, data) => {
            console.log('==>SUB-05==>  error1  : ' + JSON.stringify(error) + 
            " data11: " + JSON.stringify(data));

        })

        console.log('registerApplicationStateObserver start===> : ');
        var vst = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (data) => {
                console.log("--1-SUB_onForegroundApplicationChanged")
            },
            onAbilityStateChanged: (data) => {
                console.log("--1-SUB_onAbilityStateChanged")
            },
            onProcessCreated: (data) => {
                console.log("--1-SUB_onProcessCreated")
            },
            onProcessDied: (data) => {
                console.log("--1-SUB_onProcessDied")
            }
        })
        console.log('registerApplicationStateObserver vst  : ' + JSON.stringify(vst));
        expect((mTes + 1) == vst).assertTrue();


        appManager.unregisterApplicationStateObserver(vst, (error, data) => {
            console.log('==>error: ' + JSON.stringify(error) + " data111: " 
            + JSON.stringify(data));
            expect(error.code == 0).assertTrue();
        })

        setTimeout(() => {
            var want = {
                "bundleName": "com.example.fzstatelistener",
                "abilityName": "com.example.fzstatelistener.MainAbility"
            }
            featureAbility.startAbility({ want }, (error, data) => {
                console.log('==startAbility=>  error1  : ' + JSON.stringify(error) + 
                " ==data: " + JSON.stringify(data));
                setTimeout(() => {
                    checkArr(arr1, AbilityStateChanged1, ForegroundApplication1)
                }, 1500)
            })
        }, 1000)
        done();
    })

    function checkArr(arr, AbilityStateChanged, ForegroundApplication) {
        console.log('=>stRat' + JSON.stringify(arr))
        for (let i = 0;i < arr.length; i++) {
            console.log('==check arr==> arr[i] :' + JSON.stringify(arr[i]))
            if (arr[i].bundleName == 'com.example.fzstatelistener') {
                assistData = arr[i]
                console.log('Data==>' + JSON.stringify(assistData))
            }
        }

        checkProcessData(assistData)
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==ppState==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].bundleName == 'com.example.fzstatelistener') {
                assistData = AbilityStateChanged[i]
                console.log('==check Data==> :' + JSON.stringify(assistData))
            }
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility2') {
                testData = AbilityStateChanged[i]
                console.log('==check test==> :' + JSON.stringify(testData))

            }
        }
        checkAbilityStateData(assistData)
        checkAbilityStateData2(testData)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==abilityState==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener') {
                assistData = ForegroundApplication[i]
                console.log('==check assistData2==> :' + JSON.stringify(assistData))
            }
            if (ForegroundApplication[i].bundleName == 'com.example.sum_statelistener') {
                testData = ForegroundApplication[i]
                console.log('==check testData2==> :' + JSON.stringify(testData))
            }
        }
        checkAppStateData(assistData)
        checkAppStateData2(testData)
    }
    function checkAbilityStateData2(list) {
        console.log('==checkAbilityStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect('com.example.sum_statelistener.MainAbility2').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkAbilityStateData(list) {
        console.log('==checkAbilityStateData==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect('com.example.fzstatelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkAppStateData2(list) {
        console.log('==checkAppStateData2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkAppStateData(list) {
        console.log('==checkAppStateData==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkProcessData(list) {
        console.log('==checkProcessData==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        console.log('==list.bundleName==>' + JSON.stringify(list.bundleName))
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
    }

})
