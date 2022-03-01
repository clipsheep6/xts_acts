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

export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("AUXMainAbility onCreate");
        globalThis.auxAbilityWant = want;
        commonEvent.publish("auxMainAbility_onCreate", () => {
            console.log("MainAbility Publish CallBack auxMainAbility_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelfWithResult({
                resultCode: 1,
                want:
                {
                    bundleName : "com.example.auxiliaryabilitywithreturnvalue",
                    abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility"
                },}).then((data) => {
                console.log("auxMainAbilityEventTest terminateSelf onCreate data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("auxMainAbilityEventTest terminateSelf onCreate error: " + JSON.stringify(error))
            })
        }, 5000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("AUXMainAbility onDestroy");
        commonEvent.publish("auxMainAbility_onDestroy", () => {
            console.log("MainAbility Publish CallBack auxMainAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("AUXMainAbility onWindowStageCreate");
        globalThis.auxAbilityContext = this.context;
        windowStage.setUIContent(this.context, "pages/index", null);
        var bundleContext = globalThis.auxAbilityContext.createBundleContext("com.example.auxiliaryabilitywithreturnvalue");
        commonEvent.publish("auxMainAbility_onWindowStageCreate",
            {
                parameters: {
                    auxAbilityContext:
                    globalThis.auxAbilityContext,
                    auxstageContext:
                    globalThis.auxstageContext,
                }
            }
            ,() => {
            console.log("MainAbility Publish CallBack auxMainAbility_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("assist_app_MainAbility onWindowStageCreate terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("assist_app_MainAbility onWindowStageCreate terminateSelf error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("AUXMainAbility onWindowStageDestroy") ;
        commonEvent.publish("auxMainAbility_onWindowStageDestroy", () => {
            console.log("MainAbility Publish CallBack auxMainAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("AUXMainAbility onForeground");
        commonEvent.publish("auxMainAbility_onForeground", () => {
            console.log("MainAbility Publish CallBack auxMainAbility_onForeground")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("assist_app_MainAbility onForeground terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("assist_app_MainAbility onForeground terminateSelf error: " + JSON.stringify(error))
            })
        }, 5000)
    }

    onBackground() {
        // Ability has back to background
        console.log("AUXMainAbility onBackground");
        commonEvent.publish("auxMainAbility_onBackground", () => {
            console.log("MainAbility Publish CallBack auxMainAbility_onBackground")
        });
    }
};
