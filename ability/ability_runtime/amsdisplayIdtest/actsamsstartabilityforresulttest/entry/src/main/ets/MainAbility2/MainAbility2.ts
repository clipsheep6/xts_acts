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

import Ability from '@ohos.app.ability.UIAbility';
import commonEvent from '@ohos.commonEvent';
import Want from '@ohos.app.ability.Want';
import common from '@ohos.app.ability.common';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import window from '@ohos.window';

async function onShowProcess() {
  let abilityWant = AppStorage.get<Want>("abilityWant2")!;

  let commonEventPublishData = {
    parameters: {
      displayId: abilityWant.parameters['ohos.aafwk.param.displayId'],
      windowMode: abilityWant.parameters['ohos.aafwk.param.windowMode'],
    }
  };
  console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify(abilityWant));
  commonEvent.publish("ACTS_TerminateSelf_CommonEvent", commonEventPublishData, () => {
    console.log('============>querytestsecond success==========>>');
    AppStorage.get<common.UIAbilityContext>("abilityContext2")!.terminateSelf();
  });

}

export default class MainAbility extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    // Ability is creating, initialize resources for this ability
    console.log("MainAbility2 onCreate")
    AppStorage.setOrCreate<Want>("abilityWant2", want);
    console.log("AbilityMultiInstanceAppA abilityWant = " + JSON.stringify(want));
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log("MainAbility2 onDestroy");
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.log("MainAbility2 onWindowStageCreate");
    AppStorage.setOrCreate<common.UIAbilityContext>("abilityContext2", this.context);
    windowStage.loadContent("MainAbility/pages/second/second", null);
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
}
