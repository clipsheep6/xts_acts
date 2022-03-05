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

export default class MainAbility3 extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility onCreate");
        globalThis.abilityWant = want;
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onCreate"]);
        console.log("MainAbilityEvent_onCreate success, eventList is : " + JSON.stringify(globalThis.eventList));

        if(want.paramters.operation == "starAuxAbility3"){
            this.abilityContext.startAbilityForResult({
                Want:{
                    abilityName : "com.example.auxiliaryabilitywithreturnvalue.MainAbility",
                    bundleName : "com.example.auxiliaryabilitywithreturnvalue"
                }
            },(err, data)=>{
                console.log("startAuxAbility success, result is " + JSON.stringify(err) + JSON.stringify(data));
            });
        }

    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility onDestroy");
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onDestroy"]);
        console.log("MainAbilityEvent_onDestroy success, eventList is : " + JSON.stringify(globalThis.eventList));
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility onWindowStageCreate");
        windowStage.setUIContent(this.context, "pages/index", null);
        globalThis.abilityContext = this.context;
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onWindowStageCreate"]);
        console.log("MainAbilityEvent_onWindowStageCreate success, eventList is : " + JSON.stringify(globalThis.eventList));

        setTimeout(()=>{
            this.context.terminateSelf().then((data) => {
                console.log("MainAbilityEventTest terminateSelf data: " + JSON.stringify(data))
            }).catch((error) => {
                console.log("MainAbilityEventTest terminateSelf error: " + JSON.stringify(error))
            })
        }, 500)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility onWindowStageDestroy") ;
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onWindowStageDestroy"]);
        console.log("MainAbilityEvent_onWindowStageDestroy success, eventList is : " + JSON.stringify(globalThis.eventList));
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility onForeground");
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onForeground"]);
        console.log("MainAbilityEvent_onForeground success, eventList is : " + JSON.stringify(globalThis.eventList));

    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility onBackground");
        globalThis.eventList.push(["auxiliaryabilitywithreturnvalue.MainAbility2", "onBackground"]);
        console.log("MainAbilityEvent_onBackground success, eventList is : " + JSON.stringify(globalThis.eventList));

    }

};
