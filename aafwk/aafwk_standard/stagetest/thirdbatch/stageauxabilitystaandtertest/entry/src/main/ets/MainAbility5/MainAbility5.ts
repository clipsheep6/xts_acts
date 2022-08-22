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

export default class MainAbility5 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("auxMainAbility5 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.auxiliaryabilitywithreturnvalue.MainAbility5";
        globalThis.bundleName = "com.example.auxiliaryabilitywithreturnvalue";
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("auxmainAbility5_onCreate", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onCreate")
        });

        this.context.terminateSelfWithResult({
            resultCode: resultCodeWithResult,
            want:
            {
                abilityName : abilityNameWithResult,
                bundleName : bundleNameWithResult
            },
        }).then((data) => {
            console.log("auxmainAbility5WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("auxMainAbility5WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("auxmainAbility5WithResultWithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("auxmainAbility5WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })

    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("auxMainAbility5 onDestroy");
        commonEvent.publish("auxmainAbility5_onDestroy", () => {
            console.log("MainAbility5 Publish CallBack auxmainAbility5_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("auxMainAbility5 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.auxability5Context = this.context;
        commonEvent.publish("auxmainAbility5_onWindowStageCreate", () => {
            console.log("MainAbility5 Publish CallBack auxmainAbility5_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("auxMainAbility5 onWindowStageDestroy") ;
        commonEvent.publish("auxmainAbility5_onWindowStageDestroy", () => {
            console.log("MainAbility5 Publish CallBack auxmainAbility5_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("auxMainAbility5 onForeground");
        commonEvent.publish("auxmainAbility5_onForeground", () => {
            console.log("MainAbility5 Publish CallBack auxmainAbility5_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("auxMainAbility5 onBackground");
        commonEvent.publish("auxmainAbility5_onBackground", () => {
            console.log("MainAbility5 Publish CallBack auxmainAbility5_onBackground")
        });
    }
};
