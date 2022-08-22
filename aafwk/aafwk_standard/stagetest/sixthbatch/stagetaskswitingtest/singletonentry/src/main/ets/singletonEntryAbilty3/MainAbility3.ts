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

export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility3 onCreate");
        //    globalThis.abilityWant = want;
        commonEvent.publish("mainAbility3_onCreate", () => {
            console.log("MainAbility2 Publish CallBack mainAbility2_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility3 onDestroy");
        commonEvent.publish("mainAbility3_onDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility3 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.ability2Context = this.context;
        commonEvent.publish("mainAbility3_onWindowStageCreate", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility3 onWindowStageDestroy") ;
        commonEvent.publish("mainAbility3_onWindowStageDestroy", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility3 onForeground");
        commonEvent.publish("mainAbility3_onForeground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onForeground")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbility3EventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbility3EventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 5000)
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility3 onBackground");
        commonEvent.publish("mainAbility3_onBackground", () => {
            console.log("MainAbility3 Publish CallBack mainAbility3_onBackground")
        });
    }
};
