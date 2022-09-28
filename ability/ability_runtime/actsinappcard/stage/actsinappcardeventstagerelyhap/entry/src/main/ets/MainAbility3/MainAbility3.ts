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
import commonEvent from '@ohos.commonEvent'
let message;
let commonEventData={
    parameters:{
        message:message
    }
}
export default class MainAbility3 extends Ability {
    onCreate(want, launchParam) {
        console.log("[Demo] MainAbility3 onCreate")
        AppStorage.SetOrCreate('bundleName', want.parameters.bundleName);
        AppStorage.SetOrCreate('abilityName', want.parameters.abilityName);
        AppStorage.SetOrCreate('moduleName', want.parameters.moduleName);
        AppStorage.SetOrCreate('formName', want.parameters.formName);
        console.log("MainAbility3 onCreate want"+JSON.stringify(want.parameters.message));
        commonEventData.parameters.message=want.parameters.message
        if(want.parameters.message == 'add detail3'){
            globalThis.abilityWant = want;
            commonEvent.publish("ACTS_FORM_ID3",commonEventData,(err,data)=>{
                console.log(`ACTS_InAppCardRouterEvent3====>publish:data:` + JSON.stringify(data));
                console.log(`ACTS_InAppCardRouterEvent3====>publish:err:` + JSON.stringify(err));
            })
        }
    }

    onDestroy() {
        console.log("[Demo] MainAbility3 onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility3 onWindowStageCreate")

        windowStage.setUIContent(this.context, "pages/index", null)
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("[Demo] MainAbility3 onWindowStageDestroy")
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("[Demo] MainAbility3 onForeground")
    }

    onBackground() {
        // Ability has back to background
        console.log("[Demo] MainAbility3 onBackground")
    }
};
