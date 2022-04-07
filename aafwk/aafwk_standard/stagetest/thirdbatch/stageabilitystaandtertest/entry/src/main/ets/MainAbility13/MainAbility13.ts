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

import Ability from '@ohos.application.Ability'
import commonEvent from '@ohos.commonevent'

export default class MainAbility13 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility13 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.etsmyapplication.MainAbility13",
        globalThis.bundleName = "com.example.etsmyapplication"
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("mainAbility13_onCreate", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onCreate")
        });

        this.context.startAbilityForResult({
            abilityName: "com.example.etsmyapplication.MainAbility14",
            bundleName: "com.example.etsmyapplication"
        }, (error, data) => {
            console.log(" start MainAbility14 success, err: " +
            JSON.stringify(error) + "," + "data: " + JSON.stringify(data));
        });

        this.context.terminateSelfWithResult({
            resultCode: resultCodeWithResult,
            want:
            {
                abilityName : abilityNameWithResult,
                bundleName : bundleNameWithResult
            },
        }).then((data) => {
            console.log("MainAbility13WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("mainAbility13WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("mainAbility13WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("mainAbility13WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility13 onDestroy");
        commonEvent.publish("mainAbility13_onDestroy", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility13 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability13Context = this.context;
        commonEvent.publish("mainAbility13_onWindowStageCreate", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility13 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility13_onWindowStageDestroy", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility13 onForeground");
        commonEvent.publish("mainAbility13_onForeground", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility13 onBackground");
        commonEvent.publish("mainAbility13_onBackground", () => {
            console.log("MainAbility13 Publish CallBack mainAbility13_onBackground")
        });
    }
};
