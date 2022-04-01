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
var ForegroundApplication1 = []
var testData
var onProcessCreated1 = []

describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_1500
     * @tc.name: After registering listening, Ability binds directly to service validation
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_1500", 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_StateListener_1500 start");
        var rtt = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log("--SUB_onForegroundApplicationChanged" + JSON.stringify(aapData))
                ForegroundApplication1.push(aapData);
                console.log('ForegroundApplication :' + JSON.stringify(ForegroundApplication1))
            },
            onAbilityStateChanged: (StateData) => {
                console.log("--onAbilityStateChanged1==>" + JSON.stringify(StateData))
            },
            onProcessCreated: (CreateData) => {
                console.log("--SUB_onProcessCreated" + JSON.stringify(CreateData))
                onProcessCreated1.push(CreateData)
                console.log("onProcessCreated1:" + JSON.stringify(onProcessCreated1))
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
        console.log('connId==>' + JSON.stringify(connId));
        setTimeout(() => {
            checkServiceExtension(ForegroundApplication1, onProcessCreated1)
            done();
        }, 400)

    })

    function checkServiceExtension(ForegroundApplication, onProcessCreated) {
        console.log('ForegroundApplication===>>' + JSON.stringify(ForegroundApplication))
        console.log('onProcessCreated===>>' + JSON.stringify(onProcessCreated))
        for (let i = 0;i < ForegroundApplication.length; i++) {
            console.log('==F==>' + JSON.stringify(ForegroundApplication[i]))
            if (ForegroundApplication[i].bundleName == 'com.example.fzstatelistener') {
                assistData = ForegroundApplication[i]
                console.log('==check assistData==> :' + JSON.stringify(assistData))
            }
        }
        chek(assistData)
        for (let i = 0;i < onProcessCreated.length; i++) {
            console.log('==abilityState==>' + JSON.stringify(onProcessCreated[i]))
            if (onProcessCreated[i].bundleName == 'com.example.fzstatelistener') {
                testData = onProcessCreated[i]
                console.log('==check assistData2==> :' + JSON.stringify(testData))
            }
        }
        chekAss(testData)
    }

    function chek(list) {
        console.log('==chek list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.uid > 0).assertTrue()
        expect(2).assertEqual(list.state)
    }

    function chekAss(list) {
        console.log('==chekAss list==>' + JSON.stringify(list))
        expect('com.example.fzstatelistener').assertEqual(list.bundleName)
        expect(list.pid > 0).assertTrue()
        expect(list.uid > 0).assertTrue()
    }

})