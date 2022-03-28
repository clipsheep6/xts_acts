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
var assistData1
var AbilityStateChanged1 = []
var ForegroundApplication1 = []

describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1600
     * @tc.name: After registering listening, Ability unbinds service authentication
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1600", 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_StateListener_1600 start");
        var rtt = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log("--SUB_onForegroundApplicationChanged" + JSON.stringify(aapData))
                ForegroundApplication1.push(aapData);
                console.log('ForegroundApplication :' + JSON.stringify(ForegroundApplication1))
            },
            onAbilityStateChanged: (StateData) => {
                console.log("--onAbilityStateChanged1==>" + JSON.stringify(StateData))
                AbilityStateChanged1.push(StateData);
                console.log('AbilityStateChanged1 :' + JSON.stringify(AbilityStateChanged1))
            },
            onProcessCreated: (CreateData) => {
                console.log("--SUB_onProcessCreated" + JSON.stringify(CreateData))
            },
            onProcessDied: (ProcessData) => {
                console.log("--SUB_onProcessDied" + JSON.stringify(ProcessData))
            }
        })
        console.log('registerApplicationStateObserver rtt : ' + JSON.stringify(rtt));
        expect(typeof rtt === 'number').assertTrue();
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
        console.log('connId==>'+JSON.stringify(connId))
        setTimeout(()=>{
            featureAbility.disconnectAbility(connId, (error, data) => {
                console.log('DisConnectJsSameBundleName result errCode : ' + error.code + " data>: " + data)
            },);
        },1500)
        setTimeout(()=>{
            console.log('ForegroundApplication1===>>'+JSON.stringify(ForegroundApplication1))
            console.log('AbilityStateChanged1===>>'+JSON.stringify(AbilityStateChanged1))
            checkExtension(ForegroundApplication1,AbilityStateChanged1)
            done();
        },4900)

    })
    function checkExtension(ForegroundApplication,AbilityStateChanged){
        console.log('Foreground===>>'+JSON.stringify(ForegroundApplication))
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==F==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener') {
                assistData = ForegroundApplication[i]
                console.log('==check Data==> :' + JSON.stringify(assistData))
            }
        }
        checkExt(assistData)
        console.log('AbilityStateChanged===>>'+JSON.stringify(AbilityStateChanged))
        for (let i = 0;i < AbilityStateChanged.length; i++) {
            console.log('==F AbilityStateChanged1==>' + JSON.stringify(AbilityStateChanged[i]))
            if (AbilityStateChanged[i].state == '3') {
                assistData1 = AbilityStateChanged[i]
                console.log('==check assistData1==> :' + JSON.stringify(assistData1))
            }
        }
        checkExt1(assistData1)
    }
    function checkExt(list){
        console.log('==list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(3).assertEqual(list.state)
    }
    function checkExt1(list){
        console.log('==list1==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect('com.example.fzstatelistener.ServiceAbility').assertEqual(list.abilityName)
        expect(list.uid > 0).assertTrue()
        expect(list.pid > 0).assertTrue()
        expect(2).assertEqual(list.abilityType)
    }
})
