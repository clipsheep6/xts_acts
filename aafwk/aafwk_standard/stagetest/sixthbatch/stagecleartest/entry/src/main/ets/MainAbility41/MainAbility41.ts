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

export default class MainAbility41 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility41 onCreate")
        commonEvent.publish("mainAbility41_onCreate", () => {
            console.log("MainAbility41 Publish CallBack mainAbility41_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("SUB_AA_OpenHarmony_Clear_0100-MainAbility41EventTest terminateSelf data: " 
                + JSON.stringify(data))
            }).catch((error) => {
                console.log("SUB_AA_OpenHarmony_Clear_0100-MainAbility41EventTest terminateSelf error: " 
                + JSON.stringify(error))
            })
        }, 1000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility41 onDestroy")
        commonEvent.publish("mainAbility41_onDestroy", () => {
            console.log("MainAbility41 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility41 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability41Context = this.context;
        commonEvent.publish("mainAbility41_onWindowStageCreate", () => {
            console.log("MainAbility41 Publish CallBack onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility41 onWindowStageDestroy")
        commonEvent.publish("mainAbility41_onWindowStageDestroy", () => {
            console.log("MainAbility41 Publish CallBack onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility41 onForeground")
        commonEvent.publish("mainAbility41_onForeground", () => {
            console.log("MainAbility41 Publish CallBack onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility41 onBackground")
        commonEvent.publish("mainAbility41_onBackground", () => {
            console.log("MainAbility41 Publish CallBack onBackground")
        });
    }
};
