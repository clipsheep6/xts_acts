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
import notificationManager from '@ohos.notificationManager';

export default function setDoNotDisturbProfilePerfTest() {
  describe('setDoNotDisturbProfilePerfTest', function () {
    const BASE_COUNT = 1000;
    const BASE_LINE_SET_DO_NOT_DISTURB_PROFILE = 500000;
    let profile :notificationManager.DoNotDisturbProfile = {
      id: 0,
      name: 'test',
      trustlist: [
        {
          bundle: 'com.acts.notificationsetdonotdisturbprofileperftest'
        }
      ]
    }

    /**
     * @tc.number: Acts_SetDoNotDisturbProfilePerfTest_0100
     * @tc.name: addDoNotDisturbProfilePerfTest valid parameters.
     * @tc.desc: Manually call the addDoNotDisturbProfile interface, test performance.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('Acts_SetDoNotDisturbProfilePerfTest_0100', 0, async function (done) {
      let startTime = new Date().getTime();
      let curTime = new Date().getTime();
      try {
        setDoNotDisturbProfilePerfTest(0);
      } catch (error) {
        console.log("Acts_SetDoNotDisturbProfilePerfTest_0100 failed: ", error)
        done();
      }
      function setDoNotDisturbProfilePerfTest(index) {
        notificationManager.addDoNotDisturbProfile([profile])
          .then(()=>{
            if(index < BASE_COUNT) {
              setDoNotDisturbProfilePerfTest(index + 1);
            } else {
              let endTime = new Date().getTime();
              console.info('Acts_SetDoNotDisturbProfilePerfTest_0100 endTime: ' + endTime);
              let averageTime = ((endTime - startTime) * 1000 ) / BASE_COUNT;
              console.info('Acts_SetDoNotDisturbProfilePerfTest_0100 average Time: ' + averageTime + ' μs');
              expect(averageTime < BASE_LINE_SET_DO_NOT_DISTURB_PROFILE).assertTrue();
              done();
            }
          }) 
      }
    })

    /**
     * @tc.number: Acts_SetDoNotDisturbProfilePerfTest_0100
     * @tc.name: removeDoNotDisturbProfilePerfTest valid parameters.
     * @tc.desc: Manually call the removeDoNotDisturbProfile interface, test performance.
     * @tc.size      : MediumTest
     * @tc.type      : Function
     */
    it('Acts_SetDoNotDisturbProfilePerfTest_0200', 0, async function (done) {
      let startTime = new Date().getTime();
      let curTime = new Date().getTime();
      try {
        setDoNotDisturbProfilePerfTest(0);
      } catch (error) {
        console.log("Acts_SetDoNotDisturbProfilePerfTest_0200 failed: ", error)
        done();
      }
      function setDoNotDisturbProfilePerfTest(index) {
        notificationManager.removeDoNotDisturbProfile([profile])
          .then(()=>{
            if(index < BASE_COUNT) {
              setDoNotDisturbProfilePerfTest(index + 1);
            } else {
              let endTime = new Date().getTime();
              console.info('Acts_SetDoNotDisturbProfilePerfTest_0200 endTime: ' + endTime);
              let averageTime = ((endTime - startTime) * 1000 ) / BASE_COUNT;
              console.info('Acts_SetDoNotDisturbProfilePerfTest_0200 average Time: ' + averageTime + ' μs');
              expect(averageTime < BASE_LINE_SET_DO_NOT_DISTURB_PROFILE).assertTrue();
              done();
            }
          }) 
      }
    })
  })
}