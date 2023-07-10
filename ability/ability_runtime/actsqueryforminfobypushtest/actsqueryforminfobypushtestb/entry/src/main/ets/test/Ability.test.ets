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
import { describe, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEventManager'
import formHost from '@ohos.app.form.formHost'
const CASE_TIME_OUT = 3000;
var ACTS_FormEvent = {
  events: ['ACTS_FirstAppFirstAbilityFirst']
};

export default function abilityTest() {
  describe('ActsAbilityTest', function () {
    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_0900
     * @tc.name: Listens to the event of notifyVisible type change.
     * @tc.desc: Call the on interface with the type of notifyVisible when there is no permission.
     */
    it('Acts_QueryFormInfoByPush_On_0900', 0, async function (done) {
      var count = 0;
      let callback = function (data) {
        count++;
      }
      try {
        formHost.on('notifyVisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_On_0900 Create Subscribe');
        var subscriber = data;
        var flag = false;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.queryforminfobypushtest',
          abilityName: 'EntryAbility',
          parameters: {
            'isVisible': 'notifyVisible'
          }
        }, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_0900 subscribeCallBack data:' + JSON.stringify(data));
          flag = true;
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(count).assertEqual(0);
            try {
              formHost.off('notifyVisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, 200);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })

    /*
     * @tc.number: Acts_QueryFormInfoByPush_On_1700
     * @tc.name: Listens to the event of notifyInvisible type change.
     * @tc.desc: Call the on interface with the type of notifyInvisible when there is no permission.
     */
    it('Acts_QueryFormInfoByPush_On_1700', 0, async function (done) {
      var count = 0;
      let callback = function () {
        count++;
      }
      try {
        formHost.on('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
      } catch (error) {
        expect().assertFail();
      }

      await commonEvent.createSubscriber(ACTS_FormEvent).then((data) => {
        console.info('====>Acts_QueryFormInfoByPush_On_1700 Create Subscribe');
        var flag = false;
        var subscriber = data;
        commonEvent.subscribe(subscriber, subscribeCallBack);
        globalThis.abilityContext.startAbility({
          bundleName: 'com.example.queryforminfobypushtest',
          abilityName: 'EntryAbility',
          parameters: {
            'isVisible': 'notifyInvisible'
          }
        }, (err) => {
          expect(err.code).assertEqual(0);
        });

        function subscribeCallBack(err, data) {
          console.info('====>Acts_QueryFormInfoByPush_On_1700 subscribeCallBack data:' + JSON.stringify(data));
          if (data.event == 'ACTS_FirstAppFirstAbilityFirst') {
            expect(count).assertEqual(0);
            flag = true;
            try {
              formHost.off('notifyInvisible', callback, 'com.example.queryforminfobypushtest');
            } catch (error) {
              expect().assertFail();
            }
            setTimeout(() => {
              commonEvent.unsubscribe(subscriber, unSubscribeCallback);
            }, 200);
          }
        }

        function unSubscribeCallback() {
          done();
        }
        setTimeout(() => {
          if (flag == false) {
            expect().assertFail();
            commonEvent.unsubscribe(subscriber, unSubscribeCallback);
          }
        }, CASE_TIME_OUT);
      })
    })
  })
}