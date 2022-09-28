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

export default class MainAbility1 extends Ability {
    onCreate(want, launchParam) {
        console.log("InAppCardDeleteStage SecondAbility onCreate")
        globalThis.abilityWant = want;
        if (want.parameters["formId"]) {
            AppStorage.SetOrCreate('formId', want.parameters["formId"]);
        } else {
            AppStorage.SetOrCreate('formId', 0);
        }
    }

    onDestroy() {
        console.log("InAppCardDeleteStage SecondAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("InAppCardDeleteStage SecondAbility onWindowStageCreate")
        windowStage.setUIContent(this.context, "pages/second", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("InAppCardDeleteStage SecondAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("InAppCardDeleteStage SecondAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("InAppCardDeleteStage SecondAbility onBackground")
    }
};
