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

export default class MainAbility7 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility7 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("mainAbility7_onCreate", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility7 onDestroy");
        commonEvent.publish("mainAbility7_onDestroy", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility7 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability7Context = this.context;
        commonEvent.publish("mainAbility7_onWindowStageCreate", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility7 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility7_onWindowStageDestroy", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility7 onForeground");
        commonEvent.publish("mainAbility7_onForeground", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility7 onBackground");
        commonEvent.publish("mainAbility7_onBackground", () => {
            console.log("MainAbility7 Publish CallBack mainAbility7_onBackground")
        });
    }
};
