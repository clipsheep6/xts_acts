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
var assistData_2000
var assistData1_2000
var assistData2_2000
var assistData3_2000
var assistData4_2000
var assistData5_2000
var testData2_2000
var AbilityStateChanged1_2000 = []
var ForegroundApplication1_2000 = []
var testData_2000
var testData1_2000
var testData3_2000
var onProcessCreated1_2000 = []
var TAG = "";
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_2000
     * @tc.name: After registering listeners, different applications pull together to verify Ability
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_2000", 0, async function (done) {
        console.log("---start SUB_AA_OpenHarmony_StateListener_2000-----");
        var TAG = "SUB_AA_OpenHarmony_StateListener_2000";
        var restTT = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log(TAG + "==>onF" + JSON.stringify(aapData))
                ForegroundApplication1_2000.push(aapData);
                console.log(TAG + 'ForegroundApplication :' + JSON.stringify(ForegroundApplication1_2000))
            },
            onAbilityStateChanged: (StateData) => {
                console.log(TAG + "==onA==>" + JSON.stringify(StateData))
                AbilityStateChanged1_2000.push(StateData)
                console.log(TAG + 'AbilityStateChanged1:' + JSON.stringify(AbilityStateChanged1_2000))
            },
            onProcessCreated: (CreateData) => {
                console.log(TAG + "==onP==>" + JSON.stringify(CreateData))
                onProcessCreated1_2000.push(CreateData)
                console.log(TAG + "onProcessCreated1:" + JSON.stringify(onProcessCreated1_2000))
            },
            onProcessDied: (ProcessData) => {
                console.log(TAG + "SUB_onProcessDied" + JSON.stringify(ProcessData))
            }
        })
        console.log(TAG + '==rest:' + JSON.stringify(restTT))
        expect(typeof restTT == 'number').assertTue();
        setTimeout(()=>{
            featureAbility.startAbility({
                want: {
                    bundleName: "com.example.fzstatelistener",
                    abilityName: "com.example.fzstatelistener.MainAbility"
                }
            }, (error, data) => {
                console.log(TAG + '==err1=>: ' + JSON.stringify(error) + TAG + " ==>data===>>: " + JSON.stringify(data));
                setTimeout(() => {
                    chekTest(onProcessCreated1_2000, AbilityStateChanged1_2000, ForegroundApplication1_2000)
                }, 1500)
            })
        },500)


        featureAbility.startAbility({
            want: {
                bundleName: "com.example.fzstatelistener",
                abilityName: "com.example.fzstatelistener.MainAbility2" }
        }, (error, data) => {
            console.log(TAG + '==err2=>: ' + JSON.stringify(error) + TAG + " ==>data===>>: " + JSON.stringify(data));
            setTimeout(() => {
                chekTestL(onProcessCreated1_2000, AbilityStateChanged1_2000, ForegroundApplication1_2000)
                done();
            }, 2000)
        })
    })

    function chekTest(onProcessCreated, AbilityStateChanged, ForegroundApplication) {
        console.log('==>onProcessCreated==>' + JSON.stringify(onProcessCreated))
        for (let i = 0;i < onProcessCreated.length; i++) {
            console.log('==> onProcessCreated[i] :' + JSON.stringify(onProcessCreated[i]))
            if (onProcessCreated[i].bundleName == 'com.example.fzstatelistener') {
                assistData_2000 = onProcessCreated[i]
                console.log('== test assistData==>' + JSON.stringify(assistData_2000))
            }
        }
        checkPr2000(assistData_2000)
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==app State==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].bundleName == 'com.example.fzstatelistener') {
                assistData1_2000 = AbilityStateChanged[i]
                console.log('==assistData1_2000==> :' + JSON.stringify(assistData1_2000))
            }
            if (AbilityStateChanged[i].bundleName == 'com.example.sum_statelistener') {
                testData_2000 = AbilityStateChanged[i]
                console.log('==check testData==> :' + JSON.stringify(testData_2000))
            }
        }
        checkAbi(assistData1_2000)
        checkAbiTest(testData_2000)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==app State==> :' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener') {
                assistData2_2000 = ForegroundApplication[i]
                console.log('==check assistData==> :' + JSON.stringify(assistData2_2000))
            }
            if (ForegroundApplication[i].bundleName == 'com.example.sum_statelistener') {
                testData2_2000 = ForegroundApplication[i]
                console.log('==check testData==> :' + JSON.stringify(testData2_2000))

            }
        }
        checkF(assistData2_2000)
        checkF2(testData2_2000)
    }

    function chekTestL(onProcessCreated, AbilityStateChanged, ForegroundApplication) {
        console.log('==>chekTestL onProcessCreated==>' + JSON.stringify(onProcessCreated))
        for (let i = 0;i < onProcessCreated.length; i++) {
            console.log('==> chekTestL onProcessCreated[i] :' + JSON.stringify(onProcessCreated[i]))
            if (onProcessCreated[i].bundleName == 'com.example.fzstatelistener') {
                assistData3_2000 = onProcessCreated[i]
                console.log('==chekTestL  test assistData==>' + JSON.stringify(assistData3_2000))
            }
        }
        checkPrL2000(assistData3_2000)
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('chekTestL==app State==> :' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].abilityName == 'com.example.fzstatelistener.MainAbility2') {
                assistData4_2000 = AbilityStateChanged[i]
                console.log('chekTestL==assistData1_2000==> :' + JSON.stringify(assistData4_2000))
            }
            if (AbilityStateChanged[i].abilityName == 'com.example.sum_statelistener.MainAbility') {
                testData1_2000 = AbilityStateChanged[i]
                console.log('chekTestL==check testData==> :' + JSON.stringify(testData1_2000))
            }
        }
        checkAbi2(assistData4_2000)
        checkAbiTest2(testData1_2000)
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('chekTestL==app State==> :' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].state == '2') {
                assistData5_2000 = ForegroundApplication[i]
                console.log('chekTestL==check assistData==> :' + JSON.stringify(assistData5_2000))
            }
            if (ForegroundApplication[i].state == '3') {
                testData3_2000 = ForegroundApplication[i]
                console.log('chekTestL==check testData==> :' + JSON.stringify(testData3_2000))
            }
        }
        checkFor(assistData5_2000)
        checkFor2(testData3_2000)
    }

    function checkPr2000(list) {
        console.log('==checkPr2000==>' + JSON.stringify(list))
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()

    }

    function checkAbi(list) {
        console.log('==checkAbi==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkAbiTest(list) {
        console.log('==checkAbiTest==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener.MainAbility').assertEqual(list.abilityName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)

    }

    function checkF(list) {
        console.log('==checkF==>' + JSON.stringify(list))
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkF2(list) {
        console.log('==checkF2==>' + JSON.stringify(list))
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)

    }

    function checkPrL2000(list) {
        console.log('==checkPrL2000==>' + JSON.stringify(list))
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()

    }

    function checkAbi2(list) {
        console.log('==checkAbi2==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkAbiTest2(list) {
        console.log('==checkAbiTest2==>' + JSON.stringify(list))
        expect('com.example.sum_statelistener').assertEqual(list.bundleName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)

    }

    function checkFor(list) {
        console.log('==checkFor==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)

    }

    function checkFor2(list) {
        console.log('==checkFor2==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)

    }
})