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

import DataShareExtensionAbility from '@ohos.application.DataShareExtensionAbility'
import commonEvent from '@ohos.commonEventManager'

const TAG = '[DataShareExtAbility]'
let message;
let commonEventData = {
  parameters: {
    message: message,
  }
}

export default class DataShareExtAbility extends DataShareExtensionAbility {
  onCreate(want, callback) {
    commonEventData.parameters.message = true;
    console.info(TAG, 'Extension Ability onCreate called ' + JSON.stringify(want));
    commonEvent.publish("Acts_SwitchUserExtension_First", commonEventData, (err) => {
      console.info(TAG, 'publish Acts_SwitchUserExtension_First err: ' + JSON.stringify(err));
    })
  }

  insert(uri, value, callback) {
    console.info(TAG, 'Extension Ability insert called ' + JSON.stringify(uri));
    console.info(TAG, 'Extension Ability insert called ' + JSON.stringify(value));
  }

  delete(uri, predicates, callback) {
    console.info(TAG, 'Extension Ability delete called ' + JSON.stringify(uri));
    console.info(TAG, 'Extension Ability delete called ' + JSON.stringify(predicates));
  }

  query(uri, predicates, columns, callback) {
    console.info(TAG, 'Extension Ability query called ' + JSON.stringify(uri));
    console.info(TAG, 'Extension Ability query called ' + JSON.stringify(predicates));
    console.info(TAG, 'Extension Ability query called ' + JSON.stringify(columns));
  }

  update(uri, predicates, value, callback) {
    console.info(TAG, 'Extension Ability update called ' + JSON.stringify(uri));
    console.info(TAG, 'Extension Ability update called ' + JSON.stringify(predicates));
    console.info(TAG, 'Extension Ability update called ' + JSON.stringify(value));
  }

  denormalizeUri(uri, callback) {
    console.info(TAG, 'Extension Ability denormalizeUri called ' + JSON.stringify(uri));
  }

  normalizeUri(uri, callback) {
    console.info(TAG, 'Extension Ability normalizeUri called ' + JSON.stringify(uri));
  }
}