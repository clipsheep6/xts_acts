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

export default class MainAbility15 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility15 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.etsmyapplication.MainAbility15";
        globalThis.bundleName = "com.example.etsmyapplication";
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("mainAbility15_onCreate", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onCreate")
        });

        this.context.terminateSelfWithResult({
            resultCode: resultCodeWithResult,
            want:
            {
                abilityName : abilityNameWithResult,
                bundleName : bundleNameWithResult
            },
        }).then((data) => {
            console.log("MainAbility15WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("mainAbility15WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("mainAbility15WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("mainAbility15WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility15 onDestroy");
        commonEvent.publish("mainAbility15_onDestroy", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility15 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability15Context = this.context;
        commonEvent.publish("mainAbility15_onWindowStageCreate", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility15 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility15_onWindowStageDestroy", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility15 onForeground");
        commonEvent.publish("mainAbility15_onForeground", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility15 onBackground");
        commonEvent.publish("mainAbility15_onBackground", () => {
            console.log("MainAbility15 Publish CallBack mainAbility15_onBackground")
        });
    }
};
