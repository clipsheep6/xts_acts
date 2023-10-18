/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import dataShare from '@ohos.data.dataShare';

const sleepTimeOne = 1000;

let dseUri = ('datashare:///com.samples.datasharetest.DataShare');

function foregroundTimeout() {
  globalThis.ability2Context.startAbility(
    {
      bundleName: 'com.example.frombackgroundtest',
      abilityName: 'MainAbility2',
    }
  ).then(()=>{
    console.log('====>start com.example.frombackgroundtest.MainAbility2 finish====>');
  });
}

function backGroundTimeout() {
  dataShare.createDataShareHelper(globalThis.ability2Context, dseUri, (err, data) => {
    console.log('datashareAbility create success');
  });
}

export default class MainAbility2 extends Ability {

  onCreate(want, launchParam) {
    console.log('MainAbility2 onCreate');
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log('MainAbility2 onDestroy');
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log('MainAbility2 onWindowStageCreate');
    windowStage.setUIContent(this.context, 'pages/index2', null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('MainAbility2 onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('MainAbility2 onForeground');
    globalThis.ability2Context = this.context;
    setTimeout(foregroundTimeout, sleepTimeOne);
  }

  onBackground() {
    // Ability has back to background
    console.log('MainAbility2 onBackground');
    setTimeout(backGroundTimeout, sleepTimeOne);
    
  }
};
