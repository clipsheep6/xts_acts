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

// @ts-nocheck
import Ability from '@ohos.application.Ability'

export default class MainAbility3 extends Ability {
    onCreate(want, launchParam) {
        console.log("[Demo] MainAbility3 onCreate====>" + want.parameters);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters));
        AppStorage.SetOrCreate('formId', want.parameters["formId"]);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters["formId"]));
        AppStorage.SetOrCreate('bundleName', want.parameters["bundleName"]);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters["bundleName"]));
        AppStorage.SetOrCreate('abilityName', want.parameters["abilityName"]);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters["abilityName"]));
        AppStorage.SetOrCreate('moduleName', want.parameters["moduleNameA"]);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters["moduleNameA"]));
        AppStorage.SetOrCreate('formName', want.parameters["formName"]);
        console.log("ACTS_InAppLoadCard parameters====>" + JSON.stringify(want.parameters["formName"]));
        if(want.parameters["dimension"] == "2*2") {
            AppStorage.SetOrCreate('dimension', FormDimension.Dimension_2_2);
        } else{
            AppStorage.SetOrCreate('dimension', FormDimension.Dimension_2_4);
        }
        globalThis.ability1Context = this.context;
        console.info("ACTS_InAppLoadCard ====> want:"+ want)
    }

    onDestroy() {
        console.log("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility onWindowStageCreate")

        windowStage.setUIContent(this.context, "pages/index3", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[Demo] MainAbility onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility onBackground")
    }
};
