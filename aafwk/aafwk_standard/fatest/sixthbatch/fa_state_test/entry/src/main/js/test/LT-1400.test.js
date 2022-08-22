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
import rpc from '@ohos.rpc'
var TAG = "";
//SUB_AA_OpenHarmony_StateListener_1400
var AbilityStateChanged11400 = []
var ForegroundApplication11400 = []
var testData1400
var assistData1400
var assistData11400
var assistData21400
var onProcessCreated11400 = []
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1400
     * @tc.name: Two Ability registers two listening validations
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1400", 0, async function (done) {
        TAG = "SUB_AA_OpenHarmony_StateListener_1400";
        var rtEt = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log(TAG + "onForegroundApplicationChanged===>>>" + JSON.stringify(aapData))
                ForegroundApplication11400.push(aapData);
            },
            onAbilityStateChanged: (StateData) => {
                console.log(TAG + "onAbilityStateChanged==>>>>" + JSON.stringify(StateData))
                AbilityStateChanged11400.push(StateData);
            },
            onProcessCreated: (CreateData) => {
                console.log(TAG + "onProcessCreated====>>>>>>>>>>" + JSON.stringify(CreateData))
                onProcessCreated11400.push(CreateData);
            },
            onProcessDied: (ProcessData) => {
                console.log(TAG + "onProcessDied=====>>>>>>>>" + JSON.stringify(ProcessData))
            }
        })
        console.log(TAG + 'registerApplicationStateObserver rtEt : ' + JSON.stringify(rtEt));
        expect(typeof rtEt === 'number').assertTrue();
        featureAbility.startAbility({
            want: {
                bundleName: "com.example.fzstatelistener",
                abilityName: "com.example.fzstatelistener.MainAbility" }
        }, (error, data) => {
            console.log(TAG + '==error start=>: ' + JSON.stringify(error) + " ==>data===>>: " 
            + JSON.stringify(data));

        })
        var connId = featureAbility.connectAbility(
            {
                bundleName: "com.example.fzstatelistener",
                abilityName: "com.example.fzstatelistener.ServiceAbility",
            },
            {
                onConnect: (elementName, remoteObject) => {
                    console.log('==elementName=>' + JSON.stringify(elementName))
                    console.log('==remoteObject=>' + JSON.stringify(remoteObject))
                },
                onDisconnect: (elementName) => {
                    console.log('==elementName=>' + JSON.stringify(elementName))
                },
                onFailed: (code) => {
                    console.log('===code>' + JSON.stringify(code))
                }
            },
        );
        console.log(TAG + 'connId==>' + JSON.stringify(connId))
        setTimeout(() => {
            console.log(TAG + '==ForegroundApplication1==>>>' + JSON.stringify(ForegroundApplication11400))
            console.log(TAG + '==AbilityStateChanged1==>>>' + JSON.stringify(AbilityStateChanged11400))
            console.log(TAG + '==onProcessCreated1==>>>' + JSON.stringify(onProcessCreated11400))
            checkEx(ForegroundApplication11400, AbilityStateChanged11400, onProcessCreated11400)
            done();
        }, 3900)
        featureAbility.connectAbility(
            {
                bundleName: "com.example.fzstatelistener",
                abilityName: "com.example.fzstatelistener.ServiceAbility",
            },
            {
                onConnect: (elementName, remoteObject) => {
                    console.log(TAG + '==elementName1=>' + JSON.stringify(elementName))
                    console.log(TAG + '==remoteObject1=>' + JSON.stringify(remoteObject))
                },
                onDisconnect: (elementName) => {
                    console.log(TAG + '==elementName1==>' + JSON.stringify(elementName))
                },
                onFailed: (code) => {
                    console.log(TAG + '===code1==>' + JSON.stringify(code))
                }
            },
        );
        console.log(TAG + '======end=======>')
        chenK(AbilityStateChanged11400)
    })
    function chenK(AbilityStateChanged){
        console.log(TAG +'==chenK==:' + JSON.stringify(AbilityStateChanged))
        if (AbilityStateChanged == [] ) {
            expect(AbilityStateChanged == []).assertTrue()
        }
    }
    function checkEx(ForegroundApplication1, AbilityStateChanged1, onProcessCreated1) {
        for (let i = 0;i < ForegroundApplication1.length; i++) {
            console.log(TAG + '==F==>' + JSON.stringify(ForegroundApplication1[i]))
            if (ForegroundApplication1[i].bundleName == 'com.example.fzstatelistener') {
                assistData1400 = ForegroundApplication1[i]
                console.log(TAG + '==>>>Data==> :' + JSON.stringify(assistData1400))
            }
        }
        checkExt(assistData1400)
        for (let i = 0;i < AbilityStateChanged1.length; i++) {
            console.log(TAG + '==>>>Changed1==>' + JSON.stringify(AbilityStateChanged1[i]))
            if (AbilityStateChanged1[i].state == '0') {
                assistData11400 = AbilityStateChanged1[i]
                console.log(TAG + '==check ass==> :' + JSON.stringify(assistData11400))
            }
            if (AbilityStateChanged1[i].state == '2' && AbilityStateChanged1[i].abilityType == '2') {
                assistData21400 = AbilityStateChanged1[i]
                console.log(TAG + '==check ass2==> :' + JSON.stringify(assistData21400))
            }
        }
        cheExt1(assistData11400)
        cheExt2(assistData21400)
        for (let i = 0;i < onProcessCreated1.length; i++) {
            console.log(TAG + '==on pro==>' + JSON.stringify(onProcessCreated1[i]))
            if (onProcessCreated1[i].bundleName == 'com.example.fzstatelistener') {
                testData1400 = onProcessCreated1[i]
                console.log(TAG + '====> :' + JSON.stringify(testData1400))
            }
        }
        chekT(testData1400)
    }

    function checkExt(list) {
        console.log(TAG + 'checkExt==list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function chekT(list) {
        console.log(TAG + 'chekT==list==>' + JSON.stringify(list))
        expect(list.uid > 0).assertTrue()
        expect(list.pid > 0).assertTrue()
    }

    function cheExt1(list) {
        console.log(TAG + 'cheExt1==list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener.ServiceAbility').assertEqual(list.abilityName)
        expect(list.uid > 0).assertTrue()
        expect(list.pid > 0).assertTrue()
        expect(2).assertEqual(list.abilityType)
    }

    function cheExt2(list) {
        console.log(TAG + 'cheExt2==list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(list.pid > 0).assertTrue()
        expect(2).assertEqual(list.abilityType)
    }

})
