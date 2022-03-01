/**
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

export default class SingletonAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("SingletonAbility onCreate");
        commonEvent.publish("singletonAbility_onCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onCreate")
        });
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("SingletonAbility onDestroy");
        commonEvent.publish("singletonAbility_onDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onDestroy")
        });
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("SingletonAbility onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.singletonAbilityContext = this.context;
        commonEvent.publish("singletonAbility_onWindowStageCreate", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onWindowStageCreate")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("SingletonAbilityEventTest terminateSelf windowStage data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SingletonAbilityEventTest terminateSelf windowStage error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("SingletonAbility onWindowStageDestroy") ;
        commonEvent.publish("singletonAbility_onWindowStageDestroy", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onWindowStageDestroy")
        });
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("SingletonAbility onForeground");
        commonEvent.publish("singletonAbility_onForeground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onForeground")
        });
        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("SingletonAbilityEventTest terminateSelf onForeground data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("SingletonAbilityEventTest terminateSelf onForeground error: " + JSON.stringify(error))
            })
        }, 2000)
    }

    onBackground() {
        // Ability has back to background
        console.log("SingletonAbility onBackground");
        commonEvent.publish("singletonAbility_onBackground", () => {
            console.log("SingletonAbility Publish CallBack singletonAbility_onBackground")
        });
    }
};
