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

export default class SingletonAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("SingletonAbility onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("singletonAbility3_onCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("SingletonAbility3 onDestroy");
        commonEvent.publish("singletonAbility3_onDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("SingletonAbility3 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.singletonAbility3Context = this.context;
        commonEvent.publish("singletonAbility3_onWindowStageCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("SingletonAbility3 onWindowStageDestroy") ;
        commonEvent.publish("singletonAbility3_onWindowStageDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("SingletonAbility3 onForeground");
        commonEvent.publish("singletonAbility3_onForeground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("SingletonAbility3 onBackground");
        commonEvent.publish("singletonAbility3_onBackground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility3_onBackground")
        });
    }
};
