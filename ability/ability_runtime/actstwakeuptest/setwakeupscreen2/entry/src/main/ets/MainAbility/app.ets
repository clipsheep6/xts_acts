/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import featureAbility from '@ohos.ability.featureAbility';
import CommonEvent from '@ohos.commonEvent';

const TAG: string = 'SetWakeupScreenTest2';

function publishCallBack() {
  console.info(`${TAG}`, `====>AbilityMultiInstanceAppB Publish CallBack ====>`);
}

export default {
  async onCreate() {
    hilog.info(0x0000, TAG, '%{public}s', 'Application onCreate');
    let want = await featureAbility.getWant()
    let context: featureAbility.Context = featureAbility.getContext();
    try {
      let wakeUp = this.getWakeUpParameter(want);
      let isCallbackFun = this.isCallback(want)
      hilog.info(0x0000, TAG, '%{public}s', 'wakeUp:' + JSON.stringify(wakeUp));
      if (isCallbackFun) {
        context.setWakeUpScreen(wakeUp, (error) => {
          console.error(`setWakeUpScreen fail, error: ${JSON.stringify(error)}`);
        });
      } else {
        // @ts-ignore
        context.setWakeUpScreen(wakeUp).then((data) => {
          console.info(`setWakeUpScreen data: ${JSON.stringify(data)}`);
        });
      }
    } catch (err) {
      console.error(`${TAG}`, `setWakeUpScreen data: ${err}`);
      CommonEvent.publish("SetWakeupScreenTest2_setWakeUpScreen_ERR", publishCallBack);
    }

    CommonEvent.publish("SetWakeupScreenTest2_onCreate", publishCallBack);


    setTimeout(() => {
      featureAbility.terminateSelf()
    }, 2000)
  },

  isCallback(want) {
    let parametersNumber = want.parameters.number
    let value = want.parameters.value

    if (parametersNumber === 2) {
      if (value === true) {
        return true
      }
    }
    return false
  },

  getWakeUpParameter(want) {
    let parametersNumber = want.parameters.number
    let value = want.parameters.value
    if (parametersNumber === 4) {
      return [true, false]
    }

    if (parametersNumber === 3) {
      return value
    }

    if (parametersNumber === 5) {
      return {
        status1: true, status2: true
      }
    }

    if (parametersNumber === 2) {
      return value
    }

    if (parametersNumber === 1) {
      return value
    }
  },


  onActive() {
    hilog.info(0x0000, TAG, '%{public}s', 'Application onCreate');
    CommonEvent.publish("SetWakeupScreenTest2_onActive", publishCallBack);
  },

  onDestroy() {
    hilog.info(0x0000, TAG, '%{public}s', 'Application onDestroy');
     CommonEvent.publish("SetWakeupScreenTest2_onDestroy", publishCallBack);
  },
}