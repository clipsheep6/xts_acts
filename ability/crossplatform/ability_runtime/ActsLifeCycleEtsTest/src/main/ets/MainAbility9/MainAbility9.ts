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

export default class MainAbility9 extends Ability {
    onCreate(want, launchParam) {
        console.log("[Demo] MainAbility9 onCreate")
        globalThis.abilityWant9 = want;
    }

    onDestroy() {
        console.log("[Demo] MainAbility9 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility9 onWindowStageCreate")

        windowStage.loadContent('testability/pages/index9', (err, data) => {
            if (err.code) {
                console.log('MainAbility9 loadContent error');
                return;
            }
            console.log('MainAbility9 loadContent success');
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility9 onWindowStageDestroy")
    }

    onForeground() {
        var listKey9 = [];
        var abilityName = "";
        let AbilityLifecycleCallback = {
            onAbilityCreate(ability) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onAbilityCreate");
            },
            onWindowStageCreate(ability, windowStage) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onWindowStageCreate");
            },
            onWindowStageActive(ability, windowStage) {
                abilityName = ability.context.abilityInfo.name;
            },
            onWindowStageInactive(ability, windowStage) {
                abilityName = ability.context.abilityInfo.name;
            },
            onAbilityForeground(ability) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onAbilityForeground");
            },
            onAbilityBackground(ability) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onAbilityBackground");
            },
            onWindowStageDestroy(ability, windowStage) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onWindowStageDestroy");
            },
            onAbilityDestroy(ability) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onAbilityDestroy");
            },
            onAbilityContinue(ability) {
                abilityName = ability.context.abilityInfo.name;
                listKey9.push(abilityName + " onAbilityContinue");
            }
        }
        globalThis.applicationContext9 = this.context.getApplicationContext();
        var callBackId = globalThis.applicationContext9.on('abilityLifecycle', AbilityLifecycleCallback);
        globalThis.MainAbility9onForeground = true;
        console.log("callBackId is aaa :" + callBackId);
        setTimeout(() => {
            globalThis.mainAbility9ListKey = listKey9
            globalThis.mainAbility9CallBackId = callBackId
            console.log("listKey is :" + listKey9);
            console.log("callBackId is :" + callBackId);
            globalThis.applicationContext9onAbilityLifecycle = true;
        }, 3000)
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility9 onBackground")
    }
};
