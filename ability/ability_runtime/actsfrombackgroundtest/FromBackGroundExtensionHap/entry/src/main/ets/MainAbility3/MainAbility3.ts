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
import rpc from '@ohos.rpc';
import Want from '@ohos.app.ability.Want';
import { ConnectOptions } from 'ability/connectOptions';
import { ElementName } from 'bundle/elementName';

const sleepTimeOne = 1000;

function foregroundTimeout() {
  globalThis.ability2Context.startAbility(
    {
      bundleName: 'com.example.frombackgroundtest',
      abilityName: 'MainAbility3',
    }
  ).then(()=>{
    console.log('====>start com.example.frombackgroundtest.MainAbility3 finish====>');
  });
}

function backGroundTimeout() {
  let connectWant: Want = {
    bundleName: 'com.acts.frombackGroundextensionhap',
    abilityName: 'ServiceAbility'
  };
  let connectOptions: ConnectOptions = {
    onConnect(elementName: ElementName, remote: rpc.IRemoteObject): void {
      console.debug('ServiceExtensionAbility has been onConnect');
    },
    onDisconnect(elementName: ElementName): void {
      console.debug('ServiceExtensionAbility has been onDisconnect');
    },
    onFailed(code: number): void {
      console.debug('ServiceExtensionAbility has been onFailed');
    }
  };
  globalThis.context.connectServiceExtensionAbility(connectWant, connectOptions);
}

export default class MainAbility3 extends Ability {

  onCreate(want, launchParam) {
    console.log('MainAbility3 onCreate');
  }

  onDestroy() {
    // Ability is destroying, release resources for this ability
    console.log('MainAbility3 onDestroy');
  }

  onWindowStageCreate(windowStage) {
    // Main window is created, set main page for this ability
    console.log('MainAbility3 onWindowStageCreate');
    windowStage.setUIContent(this.context, 'pages/index3', null);
  }

  onWindowStageDestroy() {
    // Main window is destroyed, release UI related resources
    console.log('MainAbility3 onWindowStageDestroy');
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('MainAbility3 onForeground');
    globalThis.ability3Context = this.context;
    setTimeout(foregroundTimeout, sleepTimeOne);
  }

  onBackground() {
    // Ability has back to background
    console.log('MainAbility3 onBackground');
    setTimeout(backGroundTimeout, sleepTimeOne);
  }
};
