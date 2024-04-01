/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { describe, it, expect } from '@ohos/hypium'
import commonEventManager from '@ohos.commonEventManager';

export default function staticSubscriberStatePerfTest() {
  describe('staticSubscriberStatePerfTest', function () {
    const BASE_COUNT = 1000;
    const BASE_LINE_SET_STATIC_SUBSCRIBER_STATE = 500000;

    /**
     * @tc.number: Acts_SetStaticSubscriberStatePerfTest_0100
     * @tc.name: SetStaticSubscriberStatePerfTest with valid parameters.
     * @tc.desc: Manually call the SetStaticSubscriberStatePerfTest interface, test performance.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('Acts_SetStaticSubscriberStatePerfTest_0100', 0, async function (done) {
      let enable: boolean = true;
      let events: Array<string> = [
        'usual.event.CHARGE_IDLE_MODE_CHANGED'
      ];
      let startTime = new Date().getTime();
      let curTime = new Date().getTime();
      try {
        setStaticSubscriberStatePerfTest(0);
      } catch (error) {
        console.log("Acts_SetStaticSubscriberStatePerfTest_0100 failed!")
        done();
      }
     
      function setStaticSubscriberStatePerfTest(index) {
        commonEventManager.setStaticSubscriberState(enable, events)
          .then(()=>{
            if(index < BASE_COUNT) {
              setStaticSubscriberStatePerfTest(index + 1);
            } else {
              let endTime = new Date().getTime();
              console.info('Acts_SetStaticSubscriberStatePerfTest_0100 endTime: ' + endTime);
              let averageTime = ((endTime - startTime) * 1000 ) / BASE_COUNT;
              console.info('Acts_SetStaticSubscriberStatePerfTest_0100 average Time: ' + averageTime + ' μs');
              expect(averageTime < BASE_LINE_SET_STATIC_SUBSCRIBER_STATE).assertTrue();
              done();
            }
          }) 
      }
    })
  })
}