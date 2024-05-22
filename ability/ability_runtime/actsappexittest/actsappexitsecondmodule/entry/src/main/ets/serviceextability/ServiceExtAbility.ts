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

import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility';
import rpc from '@ohos.rpc';
import { BusinessError, Callback } from '@ohos.base';

const TAG: string = '[Example].[Entry].[ServiceExtAbility]';
const REQUEST_CODE = 210;


class StubTest extends rpc.RemoteObject {
}

export default class ServiceExtAbility extends ServiceExtensionAbility {
  onCreate(want) {
    console.info('====> [RelyServiceExtAbility] ServiceExtAbility start');
    let applicationContext = this.context.getApplicationContext();
    if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_0500') {
      try {
        applicationContext.terminateProcess().catch((err: BusinessError) => {
          console.info('====> [RelyMultipleAbility] 0500 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelyMultipleAbility] 0500 terminateApplication throw err: ' + JSON.stringify(err));
      }
    } else if (want.action === 'SUB_Ability_AbilityRuntime_terminateProcess_1100') {
      try {
        applicationContext.terminateApplication().catch((err: BusinessError) => {
          console.info('====> [RelyMultipleAbility] 1100 terminateApplication err: ' + JSON.stringify(err));
        });
      } catch (err) {
        console.info('====> [RelyMultipleAbility] 1100 terminateApplication throw err: ' + JSON.stringify(err));
      }
    }
  }

  onRequest(want, startId) {
    console.info(TAG, `onRequest, want: ${want.abilityName}`);
  }

  onConnect(want) {
    console.info(TAG, `onConnect, want: ${want.abilityName}`);
    return new StubTest('test');
  }

  onDisconnect(want) {
    console.info(TAG, `onDisconnect, want: ${want.abilityName}`);
  }

  onDestroy() {
    console.info(TAG, 'onDestroy');
  }
}
