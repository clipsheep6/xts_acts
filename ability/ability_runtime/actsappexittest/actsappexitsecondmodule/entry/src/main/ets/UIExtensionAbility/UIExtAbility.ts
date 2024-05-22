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

import commonEvent from '@ohos.commonEventManager';
import hilog from '@ohos.hilog';
import ShareExtensionAbility from '@ohos.app.ability.ShareExtensionAbility';
import AbilityDelegatorRegistry from '@ohos.app.ability.abilityDelegatorRegistry';
import type UIExtensionContentSession from '@ohos.app.ability.UIExtensionContentSession';
import UIExtensionAbility from '@ohos.app.ability.UIExtensionAbility';
import { BusinessError, Callback } from '@ohos.base';
import process from '@ohos.process';

let abilityDelegator = AbilityDelegatorRegistry.getAbilityDelegator();

function sleep(time: number): Promise<number> {
  return new Promise((resolve) => setTimeout(resolve, time));
}

let sessionCode: UIExtensionContentSession;

export default class UiExtAbility extends UIExtensionAbility {
  onCreate() {
    hilog.info(0x0000, 'testTag', 'UIExtAbility onCreate  want: %{public}s');
    console.info('=======>RelySecondUIExtAbility onCreate======> pid: ' + JSON.stringify(process.pid));

  }

  async onSessionCreate(want, session) {
    sessionCode = session;
    console.log(`want: ${JSON.stringify(want)}}`);
    let storage: LocalStorage = new LocalStorage({
      'session': session
    });

    session.loadContent('pages/Page', storage);
    console.info('=======>RelySecondUIExtAbility onSessionCreate======> pid: ' + JSON.stringify(process.pid));

    let applicationContext = this.context.getApplicationContext();

    console.info('====> [RelySecondUIExtAbility] want.action: ' + JSON.stringify(want.action));

    if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0600') {
      console.info('====> [RelySecondUIExtAbility] want.action === 0600');
      try {
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelySecondUIExtAbility] 0600 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelySecondUIExtAbility] 0600 terminateApplication throw err: ' + JSON.stringify(err));
      }
    }
    else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1200') {
      try {
        applicationContext.terminateApplication().catch((err: BusinessError) => {
          console.info('====> [RelySecondUIExtAbility] 1200 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelySecondUIExtAbility] 1200 terminateApplication throw err: ' + JSON.stringify(err));
      }
    }
  }

  onSessionDestroy(session) {
    console.log('SecondonSessionDestroy pid: ' + JSON.stringify(process.pid));
  }

  onDestroy() {
    console.info('=======>SecondUIExtensionAbility onDestroy ======> pid: ' + JSON.stringify(process.pid));
    commonEvent.publish('RelySecondUIExtAbilityOnDestroy', (err) => {
      console.info('====> [RelyUIExtAbility] 0300 publish err: ' + JSON.stringify(err));
    });
  }

  onForeground() {
    // Ability has brought to foreground
    console.log('=====> Second UIExtAbility onForeground =====> pid: ' + JSON.stringify(process.pid));
  }
};
