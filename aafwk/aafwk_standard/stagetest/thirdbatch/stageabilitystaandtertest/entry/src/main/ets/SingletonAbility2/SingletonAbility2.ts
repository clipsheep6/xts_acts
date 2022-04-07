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

export default class SingletonAbility2 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("SingletonAbility2 onCreate");
        globalThis.abilityWant = want;
        commonEvent.publish("singletonAbility2_onCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onCreate")
        });

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("SingletonAbility2EventTest terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SingletonAbility2EventTest terminateSelf error: " + JSON.stringify(error))
            })
        }, 1000)
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("SingletonAbility2 onDestroy");
        commonEvent.publish("singletonAbility2_onDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("SingletonAbility2 onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.singletonAbility2Context = this.context;
        commonEvent.publish("singletonAbility2_onWindowStageCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onWindowStageCreate")
        });
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("SingletonAbility2 onWindowStageDestroy") ;
        commonEvent.publish("singletonAbility2_onWindowStageDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("SingletonAbility2 onForeground");
        commonEvent.publish("singletonAbility2_onForeground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onForeground")
        });
    }

    onBackground() {
        // Ability has back to background
        console.log("SingletonAbility2 onBackground");
        commonEvent.publish("singletonAbility2_onBackground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility2_onBackground")
        });
    }
};
