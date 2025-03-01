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
import AbilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';
import { Hypium } from '@ohos/hypium';
import testsuite from '../test/List.test';
import common from '@ohos.app.ability.common';

const TAG1 = 'SupportFunction:TestAbility:';

export default class MainAbility extends Ability {
  onCreate(want, launchParam) {
    console.log(TAG1 + 'onCreate');
    AppStorage.setOrCreate<common.UIAbilityContext>("abilityTestContext", this.context);
    globalThis.abilityTestContext = this.context;
    globalThis.abilityWant = want;
    globalThis.abilityWant.parameters.timeout = 15000;
    var abilityDelegator: any
    abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator()
    var abilityDelegatorArguments: any
    abilityDelegatorArguments = AbilityDelegatorRegistry.getArguments()
    console.log('start run testcase!!!')
    Hypium.hypiumTest(abilityDelegator, abilityDelegatorArguments, testsuite)
  }

  onDestroy() {
    console.log(TAG1 + 'onDestroy');
  }

  onWindowStageCreate(windowStage) {
    console.log(TAG1 + 'onWindowStageCreate');

    windowStage.loadContent("pages/index", (err, data) => {
      if (err.code) {
        console.log(TAG1 + 'Failed to load the content. Cause:' + JSON.stringify(err));
        return;
      }
      console.log(TAG1 + 'Succeeded in loading the content. Data: ' + JSON.stringify(data));
    });
  }

  onWindowStageDestroy() {
    console.log(TAG1 + 'onWindowStageDestroy');
  }

  onForeground() {
    console.log(TAG1 + 'onForeground');
  }

  onBackground() {
    console.log(TAG1 + 'onBackground');
  }
};
