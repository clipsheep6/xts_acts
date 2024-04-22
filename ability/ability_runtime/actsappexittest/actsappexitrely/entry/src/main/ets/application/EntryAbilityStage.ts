/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import AbilityStage from '@ohos.app.ability.AbilityStage';
import commonEvent from '@ohos.commonEventManager';
import { BusinessError, Callback } from '@ohos.base';
import Want from '@ohos.app.ability.Want';
import process from '@ohos.process';

let ACTS_CallFunction: commonEvent.CommonEventSubscribeInfo = {
  events: ['RelySecondAbilityStageOnDestory']
};

export default class EntryAbilityStage extends AbilityStage {
  onCreate(): void {
    console.info('=====> [RelyAbilityStage] onCreate pid: ' + JSON.stringify(process.pid));
  }

  onDestroy(): void {
    // process.pid
    console.info('=====> [RelyAbilityStage] onDestory pid: ' + JSON.stringify(process.pid));
    commonEvent.publish('RelyAbilityStageOnDestory', (err) => {
      console.info('====> [RelyAbilityStage] Acts_EntryOnDestroy publish err: ' + JSON.stringify(err));
    });

    let start = (new Date()).valueOf();
    let a = 0;
    while (true) {
      let end = (new Date()).valueOf();
      if (a < 10) {
        console.info('====> [RelyAbilityStage]  a: ' + JSON.stringify(a));
        a++;
      }
      if (end - start > 2000) {
        break;
      }
    }
  }
}