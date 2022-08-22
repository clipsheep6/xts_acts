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

export default class MultiAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MultiAbility2 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("multiAbility2_onCreate", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MultiAbility2EventTest terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MultiAbility2EventTest terminateSelf error: " + JSON.stringify(error))
            })
        }, 1000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MultiAbility2 onDestroy");
        commonEvent.publish("multiAbility2_onDestroy", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MultiAbility2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.multiAbility2Context = this.context;
        commonEvent.publish("multiAbility2_onWindowStageCreate", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MultiAbility2 onWindowStageDestroy") ;
        commonEvent.publish("multiAbility2_onWindowStageDestroy", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MultiAbility2 onForeground");
        commonEvent.publish("multiAbility2_onForeground", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MultiAbility2 onBackground");
        commonEvent.publish("multiAbility2_onBackground", () => {
            console.log("MultiAbility2 Publish CallBack multiAbility2_onBackground")
        });
    }
};
