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

export default function abilityTouchTest(abilityContext) {

    describe('ActsAccessibleTouchEventTest', function () {
      beforeAll(async function (done) {
        console.info('ActsAccessibleTouchEventTest: beforeAll');
        subScriber = await commonEvent.createSubscriber({events: ['on_assist_change_extra', 'on_target_change_extra']});
        commonEvent.subscribe(subScriber, (err, data) => {
            console.info('ActsAccessibleTouchEventTest beforeAll subscribe data:' + JSON.stringify(data) );
            if (data.data) {
            switch (data.data) {
                case caseName +"_on_target_change_extra_success":
                target =true;
                break;
                case caseName +"_on_assist_change_extra_success":
                assist =true;
                break;
            }
            isSucceed = target && assist;
            }
        });

        config.enableAbility('com.example.myapplication/ServiceExtAbility', 
                  ["retrieve", "touchGuide", "gesture"]).then((result) => {
          console.info('ActsAccessibleTouchEventTest beforeAll enableAbility: result = ' + result);
          this.isEnable = true;
        });
        setTimeout(done, 3000);
      })

      afterAll(async function (done) {
        console.info('ActsAccessibleTouchEventTest: afterAll');
        commonEvent.unsubscribe(subScriber);

        config.disableAbility("com.example.myapplication/ServiceExtAbility").then((result) => {
          console.info('ActsAccessibleTouchEventTest afterAll disableAbility: result = ' + result);
          this.isEnable = false;
        });
        done();
      })

      beforeEach(async function (done) {
        isSucceed = false;
        assist =false;
        target =false;
        done();
      })

      /**
       * @tc.number  SendEventAccessibilityFocus_0010
       * @tc.name    SendEventAccessibilityFocus_0010
       * @tc.desc    Send the accessibility focus events in the form of callback to verify that the event can be received.
       */
      it('SendEventAccessibilityFocus_0010', 1, async function (done) {
        caseName = "SendEventAccessibilityFocus_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventAccessibilityFocus_0020
       * @tc.name    SendEventAccessibilityFocus_0020
       * @tc.desc    Send the accessibility focus events in the form of promise to verify that the event can be received.
       */
      it('SendEventAccessibilityFocus_0020', 1, async function (done) {
        caseName = "SendEventAccessibilityFocus_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventAccessibilityFocus_0030
       * @tc.name    SendEventAccessibilityFocus_0030
       * @tc.desc    Send the accessibilityFocus events form the target APP to verify that the event can be received.
       */
      it('SendEventAccessibilityFocus_0030', 3, async function (done) {
        caseName = "SendEventAccessibilityFocus_0030";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventAccessibilityFocusClear_0010
       * @tc.name    SendEventAccessibilityFocusClear_0010
       * @tc.desc    Send the accessibilityFocusClear events in the form of promise to verify that the event can be received.
       */
      it('SendEventAccessibilityFocusClear_0010', 1, async function (done) {
        caseName = "SendEventAccessibilityFocusClear_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventAccessibilityFocusClear_0020
       * @tc.name    SendEventAccessibilityFocusClear_0020
       * @tc.desc    Send the accessibilityFocusClear events in the form of promise to verify that the event can be received.
       */
      it('SendEventAccessibilityFocusClear_0020', 1, async function (done) {
        caseName = "SendEventAccessibilityFocusClear_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventAccessibilityFocusClear_0030
       * @tc.name    SendEventAccessibilityFocusClear_0030
       * @tc.desc    Send the accessibilityFocusClear events form the target APP to verify that the event can be received.
       */
      it('SendEventAccessibilityFocusClear_0030', 3, async function (done) {
        caseName = "SendEventAccessibilityFocusClear_0030";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventClick_0070
       * @tc.name    SendEventClick_0070
       * @tc.desc    Send the click events form the target APP to verify that the event can be received.
       */
      it('SendEventClick_0070', 3, async function (done) {
        caseName = "SendEventClick_0070";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventClick_0080
       * @tc.name    SendEventClick_0080
       * @tc.desc    Send the double click events form the target APP to verify that the event can be received.
       */
      it('SendEventClick_0080', 3, async function (done) {
        caseName = "SendEventClick_0080";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
    })
}