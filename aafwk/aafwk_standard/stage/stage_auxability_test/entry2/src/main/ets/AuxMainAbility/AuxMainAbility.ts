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

export default class AuxMainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("AUXMainAbility2 onCreate");
        globalThis.auxAbility2Want = want;
        commonEvent.publish("auxMainAbility2_onCreate", () => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                    bundleName : "com.example.auxiliaryabilitywithreturnvalue",
                    abilityName : "com.example.entry2.AuxMainAbility"
                },}).then((data) => {
                console.log("AuxMainAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("AuxMainAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("AUXMainAbility2 onDestroy");
        commonEvent.publish("auxMainAbility2_onDestroy", () => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("AUXMainAbility2 onWindowStageCreate");
        globalThis.auxAbility2Context = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        var bundleContext = globalThis.auxAbilityContext.createBundleContext("com.example.auxiliaryabilitywithreturnvalue");
        commonEvent.publish("auxMainAbility2_onWindowStageCreate",
            {
                parameters: {
                    auxAbilityContext:
                    globalThis.auxAbility2Context,
                    auxstageContext:
                    globalThis.auxstage2Context,
                }
            }
            ,() => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onWindowStageCreate")
        });
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
        console.log("AUXMainAbility2 onWindowStageDestroy") ;
        commonEvent.publish("auxMainAbility2_onWindowStageDestroy", () => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("AUXMainAbility2 onForeground");
        commonEvent.publish("auxMainAbility2_onForeground", () => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("AUXMainAbility2 onBackground");
        commonEvent.publish("auxMainAbility2_onBackground", () => {
            console.log("MainAbility Publish CallBack auxMainAbility2_onBackground")
        });
    }
};
