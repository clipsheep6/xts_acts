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

export default class MainAbility8 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("auxMainAbility8 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.auxiliaryabilitywithreturnvalue.MainAbility8",
        globalThis.bundleName = "com.example.auxiliaryabilitywithreturnvalue"
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("auxmainAbility8_onCreate", () => {
            console.log("MainAbility8 Publish CallBack mainAbility8_onCreate")
        });

        this.context.startAbilityForResult({
            abilityName: "com.example.entry2.AuxMainAbility3",
            bundleName: "com.example.auxiliaryabilitywithreturnvalue"
        }, (error, data) => {
            console.log(" start AuxMainAbility3 success, err: " +
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
            console.log("auxmainAbility8WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("auxMainAbility8WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("auxmainAbility8WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("auxmainAbility8WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("auxMainAbility8 onDestroy");
        commonEvent.publish("auxmainAbility8_onDestroy", () => {
            console.log("MainAbility8 Publish CallBack auxmainAbility8_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("auxMainAbility8 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.auxability8Context = this.context;
        commonEvent.publish("auxmainAbility8_onWindowStageCreate", () => {
            console.log("MainAbility8 Publish CallBack auxmainAbility8_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("auxMainAbility8 onWindowStageDestroy") ;
        commonEvent.publish("auxmainAbility8_onWindowStageDestroy", () => {
            console.log("MainAbility8 Publish CallBack auxmainAbility8_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("auxMainAbility8 onForeground");
        commonEvent.publish("auxmainAbility8_onForeground", () => {
            console.log("MainAbility8 Publish CallBack auxmainAbility8_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("auxMainAbility8 onBackground");
        commonEvent.publish("auxmainAbility8_onBackground", () => {
            console.log("MainAbility8 Publish CallBack auxmainAbility8_onBackground")
        });
    }
};
