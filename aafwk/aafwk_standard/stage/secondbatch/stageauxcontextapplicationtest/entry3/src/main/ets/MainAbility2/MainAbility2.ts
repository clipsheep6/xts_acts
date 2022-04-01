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

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("assist_app_MainAbility2 onCreate")
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("assist_app_MainAbility2 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("assist_app_MainAbility2 onWindowStageCreate")
        globalThis.assistAppAbilityContext2 = this.context
        windowStage.setUIContent(this.context, "pages/index", null);
        let bundleContext = globalThis.assistAppAbilityContext2.createBundleContext("com.example.assistmyapplication");
        let stageBundleContext = globalThis.assistAppStageContext.createBundleContext("com.example.assistmyapplication");
        console.log("assist_app_MainAbility2 bundleContext:" + JSON.stringify(bundleContext));
        console.log("assist_app_MainAbility2 stageBundleContext:" + JSON.stringify(stageBundleContext));
        let getStringResult = "";
        let stageGetStringResult = "";
        bundleContext.resourceManager.getString(16777219).then(data2 => {
            getStringResult = data2;
            console.log("assist_app_MainAbility2 getStringResult : " + JSON.stringify(getStringResult))
        });
        stageBundleContext.resourceManager.getString(16777219).then(data3 => {
            stageGetStringResult = data3;
            console.log("assist_app_MainAbility2 stageBundleContext : " + JSON.stringify(stageGetStringResult))
        })
        setTimeout(function() {
            commonEvent.publish("assist_app_MainAbility2_Start_CommonEvent",
                {
                    parameters: {
                        assistBundleContextGetStringResult: getStringResult,
                        assistStageBundleContextGetStringResult: stageGetStringResult
                    }
                }, () => {
                    console.log("assist_app_MainAbility2 Publish CallBack assist_app_MainAbility2_Start_CommonEvent")
                });
        }, 1000)
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("assist_app_MainAbility2 terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("assist_app_MainAbility2 terminateSelf error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("assist_app_MainAbility2 onWindowStageDestroy")
        commonEvent.publish("assist_app_MainAbility2_Destroy_CommonEvent", () => {
            console.log("assist_app_MainAbility2 Publish CallBack assist_app_MainAbility2_Destroy_CommonEvent")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("assist_app_MainAbility2 onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("assist_app_MainAbility2 onBackground")
    }
};
