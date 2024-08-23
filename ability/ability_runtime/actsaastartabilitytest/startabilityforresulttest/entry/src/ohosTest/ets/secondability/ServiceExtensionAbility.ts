/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import UIAbility from '@ohos.app.ability.UIAbility';
import hilog from '@ohos.hilog';
import window from '@ohos.window';
import ServiceExtension from '@ohos.app.ability.ServiceExtensionAbility';
import Want from '@ohos.app.ability.Want';
import StartOptions from '@ohos.app.ability.StartOptions';
import { BusinessError } from '@ohos.base';
import common from '@ohos.app.ability.common';

export default class MyServiceExtensionAbility extends ServiceExtension {
  onCreate(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onCreate');
  }

  onRequest(want: Want, startId: number) {
    console.log("async success!!!");
    let context = AppStorage.get('context') as common.UIAbilityContext;
    let want1: Want = {
      bundleName: 'com.hits.startabilityforresulttest',
      abilityName: 'SecondAbility',
    };
    let options: StartOptions = {
      windowMode: 1,
    };
    context.startAbility(want1, options).then(() => {
      hilog.info(0x0000, '%{public}s', `start secondability successful`);
    }).catch((err: BusinessError) => {
      hilog.info(0x0000, '%{public}s', `start secondability failed`);
    });
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Ability onDestroy');
  }
}