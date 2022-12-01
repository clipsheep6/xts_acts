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
        message:message,
    }
}
export default class MainAbility1 extends Ability {
    onCreate(want, launchParam) {
        console.debug("MainAbility1 onCreate want:" + JSON.stringify(want.parameters));
        AppStorage.SetOrCreate('bundleName', "com.example.actsinappcardroutereventstagetest");
        AppStorage.SetOrCreate('abilityName', "FormAbility");
        AppStorage.SetOrCreate('moduleName', "entry");
        AppStorage.SetOrCreate('formName', "widget1");
        commonEventData.parameters.message=want.parameters.message
        if(want.parameters.message == "add detail"){
            commonEvent.publish("ACTS_FORM_ID",commonEventData,(err)=>{
                console.log(`ACTS_InAppCardRouterEvent_0100====>publish:err:` + JSON.stringify(err));
            })
        }
        if(want.parameters.message == undefined){
            commonEvent.publish("ACTS_FORM_ID5",commonEventData,(err)=>{
                console.log(`ACTS_InAppCardRouterEvent_0500====>publish:err:` + JSON.stringify(err));
            })
        }
        if(want.parameters.message == ""){
            commonEvent.publish("ACTS_FORM_ID6",commonEventData,(err)=>{
                console.log(`ACTS_InAppCardRouterEvent_0600====>publish:err:` + JSON.stringify(err));
            })
        }
    }

    onDestroy() {
        console.log("[Demo] MainAbility onDestroy")
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("[Demo] MainAbility onWindowStageCreate")

        windowStage.setUIContent(this.context, "pages/index", null)
        globalThis.ability1Context = this.context;
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
