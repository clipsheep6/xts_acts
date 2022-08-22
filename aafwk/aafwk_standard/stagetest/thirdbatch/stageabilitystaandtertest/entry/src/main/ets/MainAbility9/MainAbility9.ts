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

export default class MainAbility9 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility9 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("mainAbility9_onCreate", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onCreate")
        });

        this.context.startAbility({
            abilityName: "com.example.entry2.Entry2MainAbility3",
            bundleName: "com.example.etsmyapplication",
        }, (error, data) => {
            console.log("Entry2MainAbility3 success, err: " +
            JSON.stringify(error) + ",data: " + JSON.stringify(data));
            commonEvent.publish("Entry2MainAbility3_Event", () => {
                console.log("Entry2MainAbility3_Event publish success!")
            });
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility9 onDestroy");
        commonEvent.publish("mainAbility9_onDestroy", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility9 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability9Context = this.context;
        commonEvent.publish("mainAbility9_onWindowStageCreate", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility9 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility9_onWindowStageDestroy", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility9 onForeground");
        commonEvent.publish("mainAbility9_onForeground", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility9 onBackground");
        commonEvent.publish("mainAbility9_onBackground", () => {
            console.log("MainAbility9 Publish CallBack mainAbility9_onBackground")
        });
    }
};
