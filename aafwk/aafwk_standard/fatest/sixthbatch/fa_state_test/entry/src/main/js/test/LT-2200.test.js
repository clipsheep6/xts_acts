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
import {describe, it, expect} from "deccjsunit/index"
import featureAbility from '@ohos.ability.featureAbility';
var assistData
var AbilityStateChanged1 = []
var ForegroundApplication1 = []
var testData
var onProcessCreated1 = []
var TAG = "";
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_2200
     * @tc.name: After registering listeners, different applications pull together to verify Ability
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_2200", 0, async function (done) {
        console.log("---start SUB_AA_OpenHarmony_StateListener_2200-----");
        TAG = "SUB_AA_OpenHarmony_StateListener_2200";
        var rest = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log(TAG + "==>onF" + JSON.stringify(aapData))
                ForegroundApplication1.push(aapData);
                console.log(TAG + 'ForegroundApplication :' + JSON.stringify(ForegroundApplication1))
            },
            onAbilityStateChanged: (StateData) => {
                console.log(TAG + "==onA==>" + JSON.stringify(StateData))
                AbilityStateChanged1.push(StateData)
                console.log(TAG + 'AbilityStateChanged1:' + JSON.stringify(AbilityStateChanged1))
            },
            onProcessCreated: (CreateData) => {
                console.log(TAG + "==onP==>" + JSON.stringify(CreateData))
                onProcessCreated1.push(CreateData)
                console.log(TAG + "onProcessCreated1:" + JSON.stringify(onProcessCreated1))
            },
            onProcessDied: (ProcessData) => {
                console.log(TAG + "SUB_onProcessDied" + JSON.stringify(ProcessData))
            }
        })
        console.log(TAG + '==rest:' + JSON.stringify(rest))
        var want = {
            "bundleName": "com.example.fzstatelistener",
            "abilityName": "com.example.fzstatelistener.MainAbility"
        }
        featureAbility.startAbility({ want }, (error, data) => {
            console.log('==error:' + JSON.stringify(error) + ',' + 'data==>' + JSON.stringify(data))
        })
        setTimeout(() => {
            checkArr(onProcessCreated1, AbilityStateChanged1, ForegroundApplication1)
            onProcessCreated1=[]
            AbilityStateChanged1=[]
            ForegroundApplication1=[]
        }, 3500)
        setTimeout(() => {
            checkTest(AbilityStateChanged1, ForegroundApplication1)
            done();
        },5000)
    })

    function checkArr(onProcessCreated, AbilityStateChanged, ForegroundApplication) {
        console.log(TAG + 'checkArr==>onProcessCreated==>' + JSON.stringify(onProcessCreated))
        for (let i = 0;i < onProcessCreated.length; i++) {
            console.log(TAG + 'checkArr==> onProcessCreated[i] :' + JSON.stringify(onProcessCreated[i]))
            if (onProcessCreated[i].bundleName == 'com.example.statelistener_fz_2') {
                assistData = onProcessCreated[i]
                console.log(TAG + 'checkArr== test assistData==>' + JSON.stringify(assistData))
            }
        }
        checkProcessData(assistData)
        console.log(TAG + 'checkArr==>AbilityStateChanged==>' + JSON.stringify(AbilityStateChanged))
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log(TAG + 'checkArr==app State==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].bundleName == 'com.example.statelistener_fz_2') {
                assistData = AbilityStateChanged[i]
                console.log(TAG + 'checkArr==check assistData==> :' + JSON.stringify(assistData))
            }
            if (AbilityStateChanged[i].bundleName == 'com.example.fzstatelistener') {

                testData = AbilityStateChanged[i]
                console.log(TAG + 'checkArr==check testData==> :' + JSON.stringify(testData))

            }
        }

        checkAbilityStateData(assistData)
        checkAbilityStateData2(testData)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log(TAG + 'checkArr==ability State==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.statelistener_fz_2') {
                assistData = ForegroundApplication[i]
                console.log(TAG + 'checkArr==check assist Data2==> :' + JSON.stringify(assistData))

            }
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener' && 
            ForegroundApplication[i].state=='3') {
                testData = ForegroundApplication[i]
                console.log(TAG + 'checkArr==check test Data2==> :' + JSON.stringify(testData))
            }
        }
        checkAppStateData(assistData)
        checkAppStateData2(testData)

    }

    function checkTest(AbilityStateChanged, ForegroundApplication) {
        console.log(TAG + 'checkTest==>AbilityStateChanged==>' + JSON.stringify(AbilityStateChanged))
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log(TAG + 'checkTest==app State==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].bundleName == 'com.example.fzstatelistener') {
                assistData = AbilityStateChanged[i]
                console.log(TAG + 'checkTest==check assistData==> :' + JSON.stringify(assistData))
            }
            if (AbilityStateChanged[i].bundleName == 'com.example.statelistener_fz_2') {

                testData = AbilityStateChanged[i]
                console.log(TAG + 'checkTest==check testData==> :' + JSON.stringify(testData))

            }
        }
        checkAbility(assistData)
        checkAbility2(testData)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log(TAG + 'checkTest==ability State==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener') {
                assistData = ForegroundApplication[i]
                console.log(TAG + 'checkTest==check assist Data2==> :' + JSON.stringify(assistData))

            }
            if (ForegroundApplication[i].bundleName == 'com.example.statelistener_fz_2') {
                testData = ForegroundApplication[i]
                console.log(TAG + 'checkTest==check test Data2==> :' + JSON.stringify(testData))
            }
        }
        checkStateData(assistData)
        checkStateData2(testData)

    }

    function checkAbilityStateData2(list) {
        console.log(TAG + '==check AbilityStateData2==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect('com.example.fzstatelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }


    function checkAbilityStateData(list) {
        console.log(TAG + '==check AbilityStateData==>' + JSON.stringify(list))
        expect('com.example.statelistener_fz_2').assertEqual(list.bundleName)
        expect('com.example.statelistener_fz_2.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }


    function checkAppStateData2(list) {
        console.log(TAG + '==check AppStateData2==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkAppStateData(list) {
        console.log(TAG + '==check AppStateData==>' + JSON.stringify(list))
        expect('com.example.statelistener_fz_2').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkProcessData(list) {
        console.log(TAG + '==check ProcessData==>' + JSON.stringify(list))
        expect('com.example.statelistener_fz_2').assertEqual(list.bundleName)
        expect(list.pid >= 0).assertTrue()
        expect(list.uid >= 0).assertTrue()

    }

    function checkAbility(list) {
        console.log(TAG + 'checkTest==check checkAbility==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect('com.example.fzstatelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function checkAbility2(list) {
        console.log(TAG + 'checkTest==check Ability2==>' + JSON.stringify(list))
        expect('com.example.statelistener_fz_2').assertEqual(list.bundleName)
        expect('com.example.statelistener_fz_2.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkStateData2(list) {
        console.log(TAG + 'checkTest==check AppStateData2==>' + JSON.stringify(list))
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }

    function checkStateData(list) {
        console.log(TAG + 'checkTest==check AppStateData==>' + JSON.stringify(list))
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }

})