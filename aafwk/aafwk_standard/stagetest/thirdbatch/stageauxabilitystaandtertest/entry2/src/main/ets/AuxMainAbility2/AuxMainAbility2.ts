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

export default class AuxMainAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("entry2AuxMainAbility2 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.entry2.AuxMainAbility2",
        globalThis.bundleName = "com.example.auxiliaryabilitywithreturnvalue";
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("entry2AuxMainAbility2_onCreate", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onCreate")
        });

        this.context.terminateSelfWithResult({
            resultCode: resultCodeWithResult,
            want:
            {
                abilityName : abilityNameWithResult,
                bundleName : bundleNameWithResult
            },
        }).then((data) => {
            console.log("entry2AuxMainAbility2WithResultEventTest terminateSelf data: " +
            JSON.stringify(data))
            commonEvent.publish("entry2AuxMainAbility2WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("entry2AuxMainAbility2WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("entry2AuxMainAbility2WithResultEventTest terminateSelf error: " +
            JSON.stringify(error))
        })

    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("entry2AuxMainAbility2 onDestroy");
        commonEvent.publish("entry2AuxMainAbility2_onDestroy", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("entry2AuxMainAbility2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.entry2AuxMainAbility2Context = this.context;
        commonEvent.publish("entry2AuxMainAbility2_onWindowStageCreate", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("entry2AuxMainAbility2 onWindowStageDestroy") ;
        commonEvent.publish("entry2AuxMainAbility2_onWindowStageDestroy", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("entry2AuxMainAbility2 onForeground");
        commonEvent.publish("entry2AuxMainAbility2_onForeground", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("entry2AuxMainAbility2 onBackground");
        commonEvent.publish("entry2AuxMainAbility2_onBackground", () => {
            console.log("entry2AuxMainAbility2 Publish CallBack entry2AuxMainAbility2_onBackground")
        });
    }
};
