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
import Want from '@ohos.app.ability.Want';
import ServiceExtensionAbility from '@ohos.app.ability.ServiceExtensionAbility';
import common from '@ohos.app.ability.common';

export default class ServiceAbility extends ServiceExtensionAbility {
  onCreate(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onCreate ');
  }

  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onDestroy ');
  }

  onRequest(want: Want, startId: number) {
    hilog.info(0x0000, 'testTag', '%{public}s', 'ServiceAbility onRequest ');
    AppStorage.setOrCreate<common.ServiceExtensionContext>('myServiceExtensionContext', this.context);
  }
}
