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

const CASE_TIME_OUT = 5000;
var Acts_PushCheck = {
  events: ['ACTS_PUBLISH_NOTIFICATION_EVENT']
}
const BUNDLE = {
  bundle : "com.example.pushcheckpublisher"
}
export default function abilityTest() {
  describe('ActsPushCheckTest', function () {
    beforeAll(async (done) => {
      notificationManager.setNotificationEnable(BUNDLE, true, (err) =>{
        console.info(`====>beforeAll first setNotificationEnable err: ${JSON.stringify(err)}`);
        done()
      })
    })

    afterEach(async (done) => {
      setTimeout(function () {
        console.info('====>afterEach called')
        done()
      }, 1000);
    })

    /*
     * @tc.number: Acts_PushCheck_0300
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with not permissions, call the on method.
     */
    it('Acts_PushCheck_0300',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_0300 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_0300 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.actspushchecksystem',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_0300'
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_0300 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_0300 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info('====>Acts_PushCheck_0300 unSubscribeCallback');
        done();
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })


    /*
     * @tc.number: Acts_PushCheck_0700
     * @tc.name: Integration of local and remote notification experience
     * @tc.desc: system applications with not permissions, call the off method.
     */
    it('Acts_PushCheck_0700',0, async function (done) {
      var subscriber;
      var flag = false;
      console.info('====>Acts_PushCheck_0700 start');
      CommonEventManager.createSubscriber(Acts_PushCheck).then(async (data) => {
        console.info('====>Acts_PushCheck_0700 Create Subscribe');
        subscriber = data;
        CommonEventManager.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.actspushchecksystem',
          abilityName: 'EntryAbility',
          parameters: {
            action: 'Acts_PushCheck_0700'
          }
        },(err) => {
          console.info(`====>Acts_PushCheck_0700 startAbility err: ${JSON.stringify(err)}`);
          expect(err.code).assertEqual(0)
        })
      })

      function subscribeCallBack(err, data) {
        console.info(`====>Acts_PushCheck_0700 subscribeCallBack data: ${JSON.stringify(data)}`);
        if (data.event === 'ACTS_PUBLISH_NOTIFICATION_EVENT') {
          flag = true;
          expect(data.parameters.message).assertTrue()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      }

      function unSubscribeCallback() {
        console.info('====>Acts_PushCheck_0700 unSubscribeCallback');
        done();
      }

      setTimeout(() => {
        if (flag === false){
          expect().assertFail()
          CommonEventManager.unsubscribe(subscriber, unSubscribeCallback);
        }
      },CASE_TIME_OUT)
    })


  })
}