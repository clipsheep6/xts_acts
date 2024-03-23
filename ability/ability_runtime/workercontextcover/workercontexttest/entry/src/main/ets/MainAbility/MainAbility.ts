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

import Ability from '@ohos.app.ability.UIAbility';
import AbilityConstant from '@ohos.app.ability.AbilityConstant';
import Want from '@ohos.app.ability.Want';
import window from '@ohos.window';
import common from '@ohos.app.ability.common';

let printLog1 = 'Worker:MainAbility:';
let listPush1 = 'Worker_MainAbility_';

export default class MainAbility extends Ability {
  onCreate(want: Want, launchParam: AbilityConstant.LaunchParam) {
    console.info(printLog1 + 'onCreate');
    globalThis.abilityWant = want;
    globalThis.applicationContext = this.context.getApplicationContext();
    AppStorage.setOrCreate<common.UIAbilityContext>("abilityContext", this.context);
  }

  onDestroy() {
    console.info(printLog1 + 'onDestroy');
  }

  onWindowStageCreate(windowStage: window.WindowStage) {
    // Main window is created, set main page for this ability
    console.info(printLog1 + 'onWindowStageCreate');

    windowStage.loadContent("MainAbility/pages/index", (err, data) => {
      if (err.code) {
        console.error('Failed to load the content. Cause:' + JSON.stringify(err));
        return;
      }
      console.info('Succeeded in loading the content. Data: ' + JSON.stringify(data));
    });
  }

  onWindowStageDestroy() {
    console.info(printLog1 + 'onWindowStageDestroy');
  }

  onForeground() {
    console.info(printLog1 + 'onForeground');
  }

  onBackground() {
    console.info(printLog1 + 'onBackground');
  }
};
