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
import ShareExtensionAbility from '@ohos.app.ability.ShareExtensionAbility';
import commonEventManager from '@ohos.commonEventManager';

let count = 0;

export default class ActsShareExtensionAbility extends ShareExtensionAbility {
  storage: LocalStorage;
  message: string;

  onCreate() {
    console.log('====>ActsShareExtensionAbility onCreate called');
  }

  onForeground() {
    console.log('====>ActsShareExtensionAbility onForeground called');
  }

  onBackground() {
    console.log('====>ActsShareExtensionAbility onBackground called');
  }

  onSessionCreate(want, session) {
    console.log('====>ActsShareExtensionAbility onSessionCreate called');
  }

  onDestroy() {
    console.log('====>ActsShareExtensionAbility onDestroy called');
  }

  onSessionDestroy(session) {
    console.log('====>ActsShareExtensionAbility onSessionDestroy called');
  }
}
