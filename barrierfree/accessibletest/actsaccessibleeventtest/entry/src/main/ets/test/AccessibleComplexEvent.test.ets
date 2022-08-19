/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from 'deccjsunit/index'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config'

let isSucceed: boolean = false;
let target: boolean = false;
let assist: boolean = false;
let subScriber = undefined;
let caseName = '';
const EXPECT_TIMEOUT = 6000;

function publishCase(caseName: string) {
    let commonEventPublishData = {
      data: caseName
    }
    commonEvent.publish('on_target_change', commonEventPublishData, (err, data) => {
      console.info(caseName + " publish event: on_target_change");
    });
}

export default function abilityComplexTest(abilityContext) {

    describe('ActsAccessibleComplexEventTest', function () {
      beforeAll(async function (done) {
        console.info('ActsAccessibleComplexEventTest: beforeAll');
        subScriber = await commonEvent.createSubscriber({events: ['on_assist_change_extra', 'on_target_change_extra']});
        commonEvent.subscribe(subScriber, (err, data) => {
            console.info('ActsAccessibleComplexEventTest beforeAll subscribe data:' + JSON.stringify(data) );
            if (data.data) {
            switch (data.data) {
                case caseName +"_on_target_change_extra_success":
                target =true;
                break;
                case caseName +"_on_assist_change_extra_success":
                assist = true;
                break;
            }
            if (data.code) {
                console.info('ActsAccessibleComplexEventTest: beforeAll data.data' + JSON.parse(data.data));
                assist = assist && JSON.parse(data.data);
            }
            isSucceed = target && assist;
            }
        });

        config.enableAbility('com.example.myapplication/ServiceExtAbility', ["retrieve"]).then(() => {
          console.info('ActsAccessibleComplexEventTest beforeAll enableAbility myapplication');
        });
        config.enableAbility('com.example.accessibilitytouchguide.hmservice/ServiceExtAbility', 
                  ["retrieve", "touchGuide", "gesture"]).then((result) => {
          console.info('ActsAccessibleComplexEventTest beforeAll enableAbility accessibilitytouchguide');
        });
        setTimeout(done, 3000);
      })

      afterAll(async function (done) {
        console.info('ActsAccessibleComplexEventTest: afterAll');
        commonEvent.unsubscribe(subScriber);

        config.disableAbility("com.example.myapplication/ServiceExtAbility").then(() => {
          console.info('ActsAccessibleComplexEventTest afterAll disableAbility myapplication');
        });
        config.disableAbility("com.example.accessibilitytouchguide.hmservice/ServiceExtAbility").then(() => {
          console.info('ActsAccessibleComplexEventTest afterAll disableAbility accessibilitytouchguide');
        });
        setTimeout(done, 3000);
      })

      beforeEach(async function (done) {
        isSucceed = false;
        assist =false;
        target =false;
        done();
      })

      /**
       * @tc.number  SendEventClickFocusLongClick_0030
       * @tc.name    SendEventClickFocusLongClick_0030
       * @tc.desc    Send the click, focus and longClick events form the target APP to verify that the event can be received.
       */
      it('SendEventClickFocusLongClick_0030', 3, async function (done) {
        caseName = "SendEventClickFocusLongClick_0030";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventClickFocusLongClick_0040
       * @tc.name    SendEventClickFocusLongClick_0040
       * @tc.desc    Send the click, focus and longClick events form the target APP to verify that the event can be received.
       */
      it('SendEventClickFocusLongClick_0040', 3, async function (done) {
        caseName = "SendEventClickFocusLongClick_0040";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
    })
}