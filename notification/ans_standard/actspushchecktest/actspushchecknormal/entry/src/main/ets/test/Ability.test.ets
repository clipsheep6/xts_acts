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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import CommonEventManager from '@ohos.commonEventManager'
import notificationManager from '@ohos.notificationManager'
export default function abilityTest() {
  describe('ActsPushCheckTest', function () {

    /*
     * @tc.number: Acts_PushCheck_0200
     * @tc.name: Integration of local and remote notification experiences
     * @tc.desc: Non system application registration push callback failed and threw an exception error code
     */
    it('Acts_PushCheck_0200', 0, async function (done) {
      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0100 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }
      try {
        notificationManager.on("checkNotification", OnCheckNotification)
        console.info(`====>Acts_PushCheck_0200 notificationManager.on end`)
        done()
      } catch (error) {
        expect(error.code).assertEqual(202)
        console.info(`====>Acts_PushCheck_0200 notificationManager.off error: ${JSON.stringify(error)}`)
        done()
      }
    })

    /*
     * @tc.number: Acts_PushCheck_0600
     * @tc.name: Integration of local and remote notification experiences
     * @tc.desc: Non system application registration push callback failed and threw an exception error code
     */
    it('Acts_PushCheck_0600', 0, async function (done) {
      function OnCheckNotification(info : notificationManager.NotificationCheckInfo) {
        console.info(`====>Acts_PushCheck_0600 OnCheckNotification info: ${JSON.stringify(info)}`);
        if(info.notificationId == 1){
          return { code: 1, message: "testMsg1"}
        } else {
          return { code: 0, message: "testMsg0"}
        }
      }
      try {
        notificationManager.off("checkNotification", OnCheckNotification)
        console.info(`====>Acts_PushCheck_0600 notificationManager.on end`)
        done()
      } catch (error) {
        expect(error.code).assertEqual(202)
        console.info(`====>Acts_PushCheck_0600 notificationManager.off error: ${JSON.stringify(error)}`)
        done()
      }
    })
  })
}