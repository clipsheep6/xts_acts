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

import hilog from '@ohos.hilog';
import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility';

const TAG = '[ActsNotifyAppFault_Rely]';
const DOMAIN = 0xF811;
const ABILITY = 'serviceAbilitySec';
const APP_FREEZE_TIME_OUT = 300;

export default class ServiceAbilitySec extends ServiceExtensionAbility {
  onCreate(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onCreate, want: ${JSON.stringify(want)}`);
  }

  onDestroy() {
    hilog.info(DOMAIN, TAG, ABILITY + ' onDestroy');
  }

  onRequest(want, startId) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onRequest, want: ${JSON.stringify(want)}`);
  }

  onConnect(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onConnect, want: ${JSON.stringify(want)}`);
    setTimeout(() => {
      while (true) {
      }
    }, APP_FREEZE_TIME_OUT);
    return want;
  }

  onDisconnect(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onDisconnect, want: ${JSON.stringify(want)}`);
  }

  onReconnect(want) {
    hilog.info(DOMAIN, TAG, ABILITY + ` onReconnect, want: ${JSON.stringify(want)}`);
  }

  onConfigurationUpdate(newConfig) {
    hilog.info(DOMAIN, TAG, ABILITY + ' onConfigurationUpdate');
  }
}
