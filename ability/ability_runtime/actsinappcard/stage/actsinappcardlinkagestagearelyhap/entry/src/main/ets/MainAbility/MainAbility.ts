/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
const TIMEOUT_START_TIME=10000
export default class MainAbility extends Ability {
    onCreate(want, launchParam) {
        console.log("InAppCardUserStageA MainAbility onCreate")
        globalThis.abilityWant = want;
        globalThis.abilityContext = this.context;
        AppStorage.SetOrCreate('bundleName',"com.inappcard.linkagestagetest");
        AppStorage.SetOrCreate('abilityName',"FormAbility");
        AppStorage.SetOrCreate('moduleName',"entry");
        AppStorage.SetOrCreate('formName', "stage_widget");
        AppStorage.SetOrCreate('formId', want.parameters["fromId"]);
    }

    onDestroy() {
        console.log("InAppCardUserStageA MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("InAppCardUserStageA MainAbility onWindowStageCreate")

        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("InAppCardUserStageA MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("InAppCardUserStageA MainAbility onForeground")
        setTimeout(async()=>{
            await globalThis.abilityContext.terminateSelf()
        },TIMEOUT_START_TIME)
    }

    onBackground() {
        // Ability has back to background
        console.log("InAppCardUserStageA MainAbility onBackground")
    }
};
