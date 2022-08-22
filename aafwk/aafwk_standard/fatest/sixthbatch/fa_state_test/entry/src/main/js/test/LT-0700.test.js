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
describe("appManagerTest", function () {
    console.log("---appManagerTest-- starting---");

    /**
     * @tc.number: SUB_AA_OpenHarmony_StateListener_0700
     * @tc.name: Unregister verification after registering two listens
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_0700", 0, async function (done) {
        console.log("---start SUB_AA_OpenHarmony_StateListener_0700-----");
        var want = {
            "bundleName": "com.example.fzstatelistener",
            "abilityName": "com.example.fzstatelistener.MainAbility"
        }
        await featureAbility.startAbility({ want }).then((data) => {
            setTimeout(function () {
                console.log("featureAbility.startAbility test 1,data : " + JSON.stringify(data));
                done();
            }, 2500)
        }).catch((err) => {
            console.log("featureAbility.startAbility test 1,err : " + JSON.stringify(err));
        });
        await sleep(1000)
        var rest = appManager.registerApplicationStateObserver({
            onForegroundApplicationChanged: (aapData) => {
                console.log("SUB_onForegroundApplicationChanged" + JSON.stringify(aapData))
            },
            onAbilityStateChanged: (StateData) => {
                console.log("==onAbilityStateChanged1==>" + JSON.stringify(StateData))
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
        await sleep(1000);
        appManager.killProcessWithAccount('com.example.fzstatelistener', 100).then((data) => {
            console.log('SUB_AA_OpenHarmony_StateListener_1000 successful. data: ' 
            + JSON.stringify(data));
        }).catch((error) => {
            console.error('SUB_AA_OpenHarmony_StateListener_1000 failed. error: ' 
            + JSON.stringify(error));
            expect().assertFail();
        })
    })
    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }
})