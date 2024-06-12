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

import AbilityStage from '@ohos.app.ability.AbilityStage'
import hilog from '@ohos.hilog';
import Want from '@ohos.app.ability.Want';
import commonEvent from '@ohos.commonEvent';

const EVENT_AbilityMultiInstance_1000_Application = "EVENT_AbilityMultiInstance_1000_Application";

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'application onCreate');
  }

  onAcceptWant(want: Want) {
    hilog.info(0x0000, 'testTag', '%{public}s', `applicationA onAcceptWant: ${JSON.stringify(want)}`);
    commonEvent.publish(EVENT_AbilityMultiInstance_1000_Application, {
      parameters: {
        data: true
      }
    }, (err, data) => {
      hilog.info(0x0000, 'testTag', '%{public}s', `applicationA publish event: ${EVENT_AbilityMultiInstance_1000_Application}`);
    })
    if (want.parameters.number == 1000 && want.parameters.id == 1) {
      return "1";
    } else if (want.parameters.number == 1000 && want.parameters.id == 2) {
      return "2";
    } else if (want.parameters.number == 1700) {
      return undefined;
    }
    return ""
  }
}