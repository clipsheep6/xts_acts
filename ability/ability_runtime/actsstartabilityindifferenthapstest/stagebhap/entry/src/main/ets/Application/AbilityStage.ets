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

import AbilityStage from '@ohos.app.ability.AbilityStage';
import hilog from '@ohos.hilog';
import commonEvent from '@ohos.commonEvent';
const EVENT_ABILITY_STAGE_222 = 'event_ability_stage_222'

export default class MyAbilityStage extends AbilityStage {
  onCreate() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'application hap2 AbilityStage onCreate');
    commonEvent.publish(EVENT_ABILITY_STAGE_222,
      {parameters: {
        'data': 'ability_stage_222'
      }}, (err, data) => {
        hilog.info(0x0000, 'testTag', '%{public}s', 'application hap2 AbilityStage publish event');
      }
    )
  }
}