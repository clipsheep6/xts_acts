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
import Ability from '@ohos.app.ability.UIAbility'
import commonEvent from '@ohos.commonEventManager'

async function onShowProcess() {
    let abilityWant = globalThis.abilityWant2;

    let commonEventPublishData = {
        parameters: {
            displayId: abilityWant.parameters['ohos.aafwk.param.displayId'],
        }
    };
   
    console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify(abilityWant));
  
    commonEvent.publish("ACTS_TerminateSelf_CommonEvent", commonEventPublishData, () => {
        console.log('============>querytestsecond success==========>>');
        globalThis.abilityContext2.terminateSelf();
    });
    
}
export default class MainAbility extends Ability {

    onCreate(want, launchParam) {
        // Ability is creating, initialize resources for this ability
        console.log("MainAbility2 onCreate");
        globalThis.abilityWant2 = want;
        console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify( globalThis.abilityWant2));
    }

    onDestroy() {
        // Ability is destroying, release resources for this ability
        console.log("MainAbility2 onDestroy");
    }

    onWindowStageCreate(windowStage) {
        // Main window is created, set main page for this ability
        console.log("MainAbility2 onWindowStageCreate");
        globalThis.abilityContext2 = this.context;
        windowStage.setUIContent(this.context, "MainAbility/pages/second/second", null);
    }

    onWindowStageDestroy() {
        // Main window is destroyed, release UI related resources
        console.log("MainAbility onWindowStageDestroy");
    }

    onForeground() {
        // Ability has brought to foreground
        console.log("MainAbility onForeground");
        onShowProcess();
    }

    onBackground() {
        // Ability has back to background
        console.log("MainAbility onBackground");
    }
};