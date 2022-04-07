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

export default class MultiAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MultiAbility3 onCreate");
        globalThis.abilityWant = want;
        globalThis.resultCode = 1;
        globalThis.abilityName = "com.example.etsmyapplication.MultiAbility3",
        globalThis.bundleName = "com.example.etsmyapplication"
        var resultCodeWithResult = globalThis.resultCode;
        var abilityNameWithResult = globalThis.abilityName;
        var bundleNameWithResult = globalThis.bundleName;

        commonEvent.publish("multiAbility3_onCreate", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onCreate")
        });

        this.context.startAbility({
            abilityName: "com.example.auxiliaryabilitywithreturnvalue.MainAbility7",
            bundleName: "com.example.auxiliaryabilitywithreturnvalue"
        }, (error, data) => {
            console.log(" start MainAbility7 success, err: " +
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
            console.log("MmultiAbility3WithResultEventTest terminateSelf onCreate data: " +
            JSON.stringify(data))
            commonEvent.publish("multiAbility3WithResult", {
                parameters:{
                    resultCode: resultCodeWithResult,
                    abilityName: abilityNameWithResult,
                    bundleName: bundleNameWithResult
                }
            }, () => {
                console.log("multiAbility3WithResult Publish CallBack success")
            });
        }).catch((error) => {
            console.log("MmultiAbility3WithResultEventTest terminateSelf onCreate error: " +
            JSON.stringify(error))
        })
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MultiAbility3 onDestroy");
        commonEvent.publish("multiAbility3_onDestroy", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MultiAbility3 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.multiAbility3Context = this.context;
        commonEvent.publish("multiAbility3_onWindowStageCreate", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MultiAbility3 onWindowStageDestroy") ;
        commonEvent.publish("multiAbility3_onWindowStageDestroy", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MultiAbility3 onForeground");
        commonEvent.publish("multiAbility3_onForeground", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MultiAbility3 onBackground");
        commonEvent.publish("multiAbility3_onBackground", () => {
            console.log("MultiAbility3 Publish CallBack multiAbility3_onBackground")
        });
    }
};
