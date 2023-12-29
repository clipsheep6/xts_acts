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
import commonEvent from '@ohos.commonEvent';
const EVENT_HAP6 = 'EVENT_HAP6_666'

let arr = []
function publishEvent(parameters){
  hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish begin`);
  try{
    commonEvent.publish(EVENT_HAP6, parameters, (err, data) => {
      hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish parameter: ${arr}`);
    })
  }catch(err){
    hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish err: ${err}`);
  }

  hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish end`);
}
export default {
  onCreate() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'hap6-Application onCreate');
    arr[0] = 'onCreate'
  },
  onActive(){
    hilog.info(0x0000, 'testTag', '%{public}s', 'hap6-Application onActive')
    arr[1] = 'onActive'
    hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish begin`);
    setTimeout(()=> {
      try{
        commonEvent.publish(EVENT_HAP6, {parameters: {data: arr}}, (err, data) => {
          hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish parameter: ${arr}`);
        })
      }catch(err){
        hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish err: ${err}`);
      }
    }, 500)

    hilog.info(0x0000, 'testTag', '%{public}s', `hap6 publish end`);
  },
  onDestroy() {
    hilog.info(0x0000, 'testTag', '%{public}s', 'Application onDestroy');
  },
}