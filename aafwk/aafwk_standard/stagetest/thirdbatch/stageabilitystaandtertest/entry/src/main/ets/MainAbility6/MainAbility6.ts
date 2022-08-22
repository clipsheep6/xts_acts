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

export default class MainAbility6 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility6 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("mainAbility6_onCreate", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onCreate")
        });

        this.context.startAbility({
            abilityName: "com.example.etsmyapplication.MainAbility7",
            bundleName: "com.example.etsmyapplication",
        }, (error, data) => {
            console.log("MainAbility7 success, err: " +
            JSON.stringify(error) + ",data: " + JSON.stringify(data));
            commonEvent.publish("MainAbility7_Event", () => {
                console.log("MainAbility7_Event publish success!")
            });
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility6 onDestroy");
        commonEvent.publish("mainAbility6_onDestroy", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility6 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability6Context = this.context;
        commonEvent.publish("mainAbility6_onWindowStageCreate", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility6 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility6_onWindowStageDestroy", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility6 onForeground");
        commonEvent.publish("mainAbility6_onForeground", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility6 onBackground");
        commonEvent.publish("mainAbility6_onBackground", () => {
            console.log("MainAbility6 Publish CallBack mainAbility6_onBackground")
        });
    }
};
