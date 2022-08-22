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

export default class MainAbility5 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility5 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("mainAbility5_onCreate", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onCreate")
        });

        this.context.startAbility({
            abilityName: "com.example.etsmyapplication.MainAbility6",
            bundleName: "com.example.etsmyapplication",
        }, (error, data) => {
            console.log("MainAbility6 success, err: " +
            JSON.stringify(error) + ",data: " + JSON.stringify(data));
            commonEvent.publish("MainAbility6_Event", () => {
                console.log("MainAbility6_Event publish success!")
            });
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility5 onDestroy");
        commonEvent.publish("mainAbility5_onDestroy", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility5 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability5Context = this.context;
        commonEvent.publish("mainAbility5_onWindowStageCreate", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility5 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility5_onWindowStageDestroy", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility5 onForeground");
        commonEvent.publish("mainAbility5_onForeground", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility5 onBackground");
        commonEvent.publish("mainAbility5_onBackground", () => {
            console.log("MainAbility5 Publish CallBack mainAbility5_onBackground")
        });
    }
};
