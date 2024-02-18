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

import hilog from '@ohos.hilog';
import Want from '@ohos.app.ability.Want';
import featureAbility from '@ohos.ability.featureAbility';


function startHapAbility(want) {

  try {
    setTimeout(() => {
      featureAbility.startAbility({ want: want }).then(() => {
        hilog.info(0x0000, 'testTag', '%{public}s', `start  ability ----> ${want.abilityName}`);
        featureAbility.terminateSelf();
      })
    }, 500)
  } catch (err) {
    hilog.info(0x0000, 'testTag', '%{public}s', `err -----> ${err}`);
  }
}

export default {
  onCreate() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'hap5-Application onCreate');
  },
  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Application onDestroy');
  },
  onActive() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Application onActive');
  },
  onShow() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Application onShow');
    setTimeout(() => {
      featureAbility.getWant((err, sourceWant) => {
        hilog.info(0x0000, 'testTag', '%{public}s', `get sourcewant: ${JSON.stringify(sourceWant)} `);
        let hap6Want: Want = {
          bundleName: 'com.ohos.fahap6',
          abilityName: 'com.ohos.fahap6.MainAbility',
        }

        let hap2Want: Want = {
          bundleName: 'com.ohos.stagehap2',
          abilityName: 'EntryAbility',
          parameters: {
            'data': 999
          }
        }
        if (sourceWant.parameters.data === 1000) {
          startHapAbility(hap6Want)
        } else if (sourceWant.parameters.data === 900) {
          startHapAbility(hap2Want)
        }
      })
    }, 500)
  }
}