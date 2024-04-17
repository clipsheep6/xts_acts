/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import Ability from '@ohos.app.ability.UIAbility'

let context11 = undefined;

export default class MainAbility11 extends Ability {
    onCreate(want, launchParam) {
        console.log("[Demo] MainAbility11 onCreate")
        globalThis.abilityWant11 = want;
        context11 = this.context;
        globalThis.ability11 = this.context;
        var listKey11 = [];
        if (!globalThis.list11) {
            globalThis.list11 = []
        }
        let AbilityLifecycleCallback = {
            onAbilityCreate(ability) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onAbilityCreate abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onAbilityCreate");
                globalThis.list11.push(abilityname + " onAbilityCreate");
            },
            onWindowStageCreate(ability, windowStage) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onWindowStageCreate abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onWindowStageCreate");
                globalThis.list11.push(abilityname + " onWindowStageCreate");
            },
            onWindowStageActive(ability, windowStage) {
                let abilityname = ability.context.abilityInfo.name;
                console.log(abilityname + " onWindowStageActive")
            },
            onWindowStageInactive(ability, windowStage) {
                let abilityname = ability.context.abilityInfo.name;
                console.log(abilityname + " onWindowStageInactive")
            },
            onWindowStageDestroy(ability, windowStage) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onWindowStageDestroy abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onWindowStageDestroy");
                globalThis.list11.push(abilityname + " onWindowStageDestroy");
            },
            onAbilityDestroy(ability) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onAbilityDestroy abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onAbilityDestroy");
                globalThis.list11.push(abilityname + " onAbilityDestroy");
            },
            onAbilityForeground(ability) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onAbilityForeground abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onAbilityForeground");
                globalThis.list11.push(abilityname + " onAbilityForeground");
            },
            onAbilityBackground(ability) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onAbilityBackground abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onAbilityBackground");
                globalThis.list11.push(abilityname + " onAbilityBackground");
            },
            onAbilityContinue(ability) {
                let abilityname = ability.context.abilityInfo.name;
                console.log("[Demo] AbilityLifecycleCallback11 onAbilityContinue abilityname:"
                + JSON.stringify(abilityname));
                console.log("[Demo] " + abilityname + " onAbilityContinue");
                globalThis.list11.push(abilityname + " onAbilityContinue");
            }
        }
        globalThis.applicationContext11 = globalThis.ability11.getApplicationContext();
        let lifecycleid = globalThis.applicationContext11.registerAbilityLifecycleCallback(AbilityLifecycleCallback);
        console.log("[Demo] registerAbilityLifecycleCallback11 number: " + JSON.stringify(lifecycleid));
        globalThis.callbackid11 = lifecycleid;
    }

    onDestroy() {
        context11 = undefined;
        console.log("[Demo] MainAbility11 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility11 onWindowStageCreate")

        windowStage.setUIContent(this.context, "MainAbility/pages/index11", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility11 onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[Demo] MainAbility11 onForeground")
        setTimeout(function () {
            if (context11) {
                context11.terminateSelf()
                    .then((data) => {
                        console.info('[Demo] MainAbility11 terminateself succeeded: ' + data);
                    }).catch((error) => {
                    console.error('[Demo] MainAbility11 terminateself failed. Cause: ' + error);
                })
            }
        }, 2500);
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility onBackground")
    }
};
