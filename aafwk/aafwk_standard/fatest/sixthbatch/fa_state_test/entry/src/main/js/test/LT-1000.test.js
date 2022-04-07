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
var assistData1
var arr1 = []
var AbilityStateChanged1 = []
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1000
     * @tc.name: Verify the onProcessDied callback
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1000", 0, async function (done) {
        console.log("start SUB_AA_OpenHarmony_StateListener_1000   start");
        var crShi = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log("==onForegroundApplicationChanged==>" + JSON.stringify(aapData))
            },
            onAbilityStateChanged: (StateData) => {
                console.log("==onAbilityStateChanged==>" + JSON.stringify(StateData))
                AbilityStateChanged1.push(StateData)
                console.log('AbilityStateChanged1----11:' + JSON.stringify(AbilityStateChanged1))
            },
            onProcessCreated: (CreateData) => {
                console.log("==onProcessCreated==>" + JSON.stringify(CreateData))
            },
            onProcessDied: (ProcessData) => {
                console.log("==onProcessDied==>" + JSON.stringify(ProcessData))
                arr1.push('onProcessDied', ProcessData)
                console.log("===arr===>:" + JSON.stringify(arr1))
            }
        });
        console.log('SUB_AA_OpenHarmony_StateListener_1000 rest:' + JSON.stringify(crShi));
        expect(typeof crShi == 'number').assertTrue();
        var want = {
            "bundleName": "com.example.fzstatelistener",
            "abilityName": "com.example.fzstatelistener.MainAbility"
        }
        featureAbility.startAbility({ want }).then((data) => {
            console.log('start startAbility===> data:' + JSON.stringify(data));
        }).catch((error) => {
            console.log('end error:' + JSON.stringify(error));
        });

        console.log('kill====>')
        appManager.killProcessWithAccount('com.example.fzstatelistener', 100, (error, data) => {
            console.log('==startAbility2=> error1 :' + JSON.stringify(error) + " data: " 
            + JSON.stringify(data));
            setTimeout(() => {
                checkAe(arr1, AbilityStateChanged1);
            }, 1500)

        })
        done();
    })

    function checkAe(arr, AbilityStateChanged) {
        console.log('==checkAe process==>' + JSON.stringify(arr))
        for (let i in arr) {
            console.log('==i1111==>' + JSON.stringify(arr[i].bundleName))
        }
        for (let i = 0;i < arr.length; i++) {
            console.log('==checkAe arr[i] :' + JSON.stringify(arr[i]))
            if (arr[i].bundleName == 'com.example.fzstatelistener') {
                assistData = arr[i]
                console.log('==checkAe assistData==>' + JSON.stringify(assistData))
            }
        }
        checkProcess(assistData)
        console.log('==StateChanged--》' + JSON.stringify(AbilityStateChanged))
        for (let i in AbilityStateChanged) {
            console.log('==i==>' + JSON.stringify(AbilityStateChanged[i].bundleName))
        }
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==appState==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].bundleName == 'com.example.fzstatelistener') {
                assistData1 = AbilityStateChanged[i]
                console.log('==assistData1==> :' + JSON.stringify(assistData1))
            }
        }
        console.log('test ass:' + JSON.stringify(assistData1))
        checkAbility(assistData1)
    }

    function checkAbility(list) {
        console.log('==checkAbilityStateData==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect('com.example.fzstatelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(4).assertEqual(list.state)

    }

    function checkProcess(list) {
        console.log('==1000==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.pid >= 0).assertTrue()
        expect(list.uid >= 0).assertTrue()
    }

    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }
}
)