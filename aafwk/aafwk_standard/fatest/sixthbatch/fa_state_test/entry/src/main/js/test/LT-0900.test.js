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
     * @tc.number: SUB_AA_OpenHarmony_StateListener_0900
     * @tc.name: Batch registration and de-registration verification
     * @tc.desc: Function test
     * @tc.level   0
     */
    it("SUB_AA_OpenHarmony_StateListener_0900", 0, async function (done) {
        console.log("SUB_AA_OpenHarmony_StateListener_0900 start");
        for (let i = 0; i <= 100; i++) {
            let test = appManager.registerApplicationStateObserver({
                onForegroundApplicationChanged: (data) => {
                    console.log("SUB_onForegroundApplicationChanged")
                },
                onAbilityStateChanged: (data) => {
                    console.log("SUB_onAbilityStateChanged")
                },
                onProcessCreated: (data) => {
                    console.log("SUB_onProcessCreated")
                },
                onProcessDied: (data) => {
                    console.log("SUB_onProcessDied")
                }
            })
            console.log('registerApplicationStateObserver test3  : ' + test);
            expect(typeof test === 'number').assertTrue();
            sleep(500)
            appManager.unregisterApplicationStateObserver(test, (error, data) => {
                console.log('=>st0900==>  test  : ' + JSON.stringify(error) + " data: " 
                + JSON.stringify(data));
                expect(error.code === 0).assertTrue();
            })
        }
        featureAbility.startAbility({
            want: {
                bundleName: "com.example.fzstatelistener",
                abilityName: "com.example.fzstatelistener.MainAbility" }
        }, (error, data) => {
            console.log('==>startAbiFZ==>  error1  : ' + JSON.stringify(error) + " data: " 
            + JSON.stringify(data));
        })
        done()
    });
    function sleep(time) {
        return new Promise((resolve) => setTimeout(resolve, time))
    }
})