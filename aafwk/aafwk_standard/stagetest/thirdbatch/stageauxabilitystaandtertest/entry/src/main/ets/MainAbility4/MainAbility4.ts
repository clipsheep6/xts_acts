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

export default class MainAbility4 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("auxMainAbility4 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("auxmainAbility4_onCreate", () => {
            console.log("MainAbility4 Publish CallBack mainAbility4_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("auxMainAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("auxMainAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 5000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("auxMainAbility4 onDestroy");
        commonEvent.publish("auxmainAbility4_onDestroy", () => {
            console.log("MainAbility4 Publish CallBack auxmainAbility4_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("auxMainAbility4 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.auxability4Context = this.context;
        commonEvent.publish("auxmainAbility4_onWindowStageCreate", () => {
            console.log("MainAbility4 Publish CallBack auxmainAbility4_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("auxMainAbility4 onWindowStageDestroy") ;
        commonEvent.publish("auxmainAbility4_onWindowStageDestroy", () => {
            console.log("MainAbility4 Publish CallBack auxmainAbility4_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("auxMainAbility4 onForeground");
        commonEvent.publish("auxmainAbility4_onForeground", () => {
            console.log("MainAbility4 Publish CallBack auxmainAbility4_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("auxMainAbility4 onBackground");
        commonEvent.publish("auxmainAbility4_onBackground", () => {
            console.log("MainAbility4 Publish CallBack auxmainAbility4_onBackground")
        });
    }
};
