/**
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

export default class MainAbility7 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("auxMainAbility7 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.auxiliaryabilitywithreturnvalue.MainAbility7",
        globalThis.bundleName = "com.example.auxiliaryabilitywithreturnvalue"
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("auxmainAbility7_onCreate", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onCreate")
        });

        this.context.startAbilityForResult({
            abilityName: "com.example.etsmyapplication.MultiAbility3",
            bundleName: "com.example.etsmyapplication"
        }, (error, data) => {
            console.log(" start MultiAbility3 success, err: " +
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
            console.log("auxmainAbility7WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("auxMainAbility7WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("auxmainAbility7WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("auxmainAbility7WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("auxMainAbility7 onDestroy");
        commonEvent.publish("auxmainAbility7_onDestroy", () => {
            console.log("MainAbility7 Publish CallBack auxmainAbility7_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("auxMainAbility7 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.auxability7Context = this.context;
        commonEvent.publish("auxmainAbility7_onWindowStageCreate", () => {
            console.log("MainAbility7 Publish CallBack auxmainAbility7_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("auxMainAbility7 onWindowStageDestroy") ;
        commonEvent.publish("auxmainAbility7_onWindowStageDestroy", () => {
            console.log("MainAbility7 Publish CallBack auxmainAbility7_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("auxMainAbility7 onForeground");
        commonEvent.publish("auxmainAbility7_onForeground", () => {
            console.log("MainAbility7 Publish CallBack auxmainAbility7_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("auxMainAbility7 onBackground");
        commonEvent.publish("auxmainAbility7_onBackground", () => {
            console.log("MainAbility7 Publish CallBack auxmainAbility7_onBackground")
        });
    }
};
