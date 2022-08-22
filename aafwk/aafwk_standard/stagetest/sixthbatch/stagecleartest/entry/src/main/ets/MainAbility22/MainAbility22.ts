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

export default class MainAbility22 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility22 onCreate")
        commonEvent.publish("mainAbility22_onCreate", () => {
            console.log("MainAbility22 Publish CallBack mainAbility22_onCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility22EventTest terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility22EventTest terminateSelf error: " + JSON.stringify(error))
            })
        }, 2500)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility22 onDestroy")
        commonEvent.publish("mainAbility22_onDestroy", () => {
            console.log("MainAbility22 Publish CallBack mainAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility22 onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability22Context = this.context;
        commonEvent.publish("mainAbility22_onWindowStageCreate", () => {
            console.log("MainAbility22 Publish CallBack onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility22 onWindowStageDestroy")
        commonEvent.publish("mainAbility22_onWindowStageDestroy", () => {
            console.log("MainAbility22 Publish CallBack onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility22 onForeground")
        commonEvent.publish("mainAbility22_onForeground", () => {
            console.log("MainAbility22 Publish CallBack onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility22 onBackground")
        commonEvent.publish("mainAbility22_onBackground", () => {
            console.log("MainAbility22 Publish CallBack onBackground")
        });
    }
};
