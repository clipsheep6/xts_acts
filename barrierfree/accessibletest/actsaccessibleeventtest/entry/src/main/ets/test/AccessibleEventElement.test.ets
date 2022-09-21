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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config'

let isSucceed: boolean = false;
let TARGET_CODE = 1;
let ASSIST_CODE = 2;
let target = '';
let assist = '';
let subScriber = undefined;
let caseName = '';
const BUNDLE_NAME_ABILITY_NAME = 'com.example.myapplication/ServiceExtAbility';
const EXPECT_TIMEOUT = 6000;

function publishCase(caseName: string) {
    let commonEventPublishData = {
      data: caseName
    }
    commonEvent.publish('on_target_change', commonEventPublishData, (err, data) => {
      console.info(caseName + " publish event: on_target_change");
    });
}

export default function abilityElementTest() {

    describe('ActsAccessibleEventElementTest', function () {
      beforeAll(async function (done) {
        console.info('ActsAccessibleEventElementTest: beforeAll');
        subScriber = await commonEvent.createSubscriber({events: ['on_assist_change_extra', 'on_target_change_extra']});
        commonEvent.subscribe(subScriber, (err, data) => {
            console.info('ActsAccessibleEventElementTest beforeAll subscribe data:' + JSON.stringify(data) );
            if (data.code) {
              switch (data.code) {
                case TARGET_CODE:
                  target = data.data;
                  break;
                case ASSIST_CODE:
                  assist = data.data;
                  break;
                default:
                  break;
              }
              if (target === assist) {
                isSucceed = true;
              }
            }
        });

        config.enableAbility(BUNDLE_NAME_ABILITY_NAME, ["retrieve"]).then(() => {
          console.info('ActsAccessibleEventElementTest beforeAll enableAbility');
        });
        setTimeout(done, 3000);
      })

      afterAll(async function (done) {
        console.info('ActsAccessibleEventElementTest: afterAll');
        commonEvent.unsubscribe(subScriber);

        config.disableAbility(BUNDLE_NAME_ABILITY_NAME).then(() => {
          console.info('ActsAccessibleEventElementTest afterAll disableAbility');
        });
        setTimeout(done, 3000);
      })

      beforeEach(async function (done) {
        isSucceed = false;
        assist = '';
        target = '';
        done();
      })

      /**
       * @tc.number  SendEventElement_0010
       * @tc.name    SendEventElement_0010
       * @tc.desc    Send the click event with the add attribute, and verify that the event can be received.
       */
      it('SendEventElement_0010', 1, async function (done) {
        caseName = "SendEventElement_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0020
       * @tc.name    SendEventElement_0020
       * @tc.desc    Send the click event with the remove attribute, and verify that the event can be received.
       */
      it('SendEventElement_0020', 1, async function (done) {
        caseName = "SendEventElement_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0030
       * @tc.name    SendEventElement_0030
       * @tc.desc    Send the click event with the active attribute, and verify that the event can be received.
       */
      it('SendEventElement_0030', 1, async function (done) {
        caseName = "SendEventElement_0030";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0040
       * @tc.name    SendEventElement_0040
       * @tc.desc    Send the click event with the bounds attribute, and verify that the event can be received.
       */
      it('SendEventElement_0040', 1, async function (done) {
        caseName = "SendEventElement_0040";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0050
       * @tc.name    SendEventElement_0050
       * @tc.desc    Send the click event with the focus attribute, and verify that the event can be received.
       */
      it('SendEventElement_0050', 1, async function (done) {
        caseName = "SendEventElement_0050";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0060
       * @tc.name    SendEventElement_0060
       * @tc.desc    Send the click event with the bundleName attribute, and verify that the event can be received.
       */
      it('SendEventElement_0060', 1, async function (done) {
        caseName = "SendEventElement_0060";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0070
       * @tc.name    SendEventElement_0070
       * @tc.desc    Send the click event with the componentType attribute, and verify that the event can be received.
       */
      it('SendEventElement_0070', 1, async function (done) {
        caseName = "SendEventElement_0070";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0080
       * @tc.name    SendEventElement_0080
       * @tc.desc    Send the click event with the pageId attribute, and verify that the event can be received.
       */
      it('SendEventElement_0080', 1, async function (done) {
        caseName = "SendEventElement_0080";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0090
       * @tc.name    SendEventElement_0090
       * @tc.desc    Send the click event with the description attribute, and verify that the event can be received.
       */
      it('SendEventElement_0090', 1, async function (done) {
        caseName = "SendEventElement_0090";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0100
       * @tc.name    SendEventElement_0100
       * @tc.desc    Send the click event with the char attribute, and verify that the event can be received.
       */
      it('SendEventElement_0100', 1, async function (done) {
        caseName = "SendEventElement_0100";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0110
       * @tc.name    SendEventElement_0110
       * @tc.desc    Send the click event with the word attribute, and verify that the event can be received.
       */
      it('SendEventElement_0110', 1, async function (done) {
        caseName = "SendEventElement_0110";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0120
       * @tc.name    SendEventElement_0120
       * @tc.desc    Send the click event with the line attribute, and verify that the event can be received.
       */
      it('SendEventElement_0120', 1, async function (done) {
        caseName = "SendEventElement_0120";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0130
       * @tc.name    SendEventElement_0130
       * @tc.desc    Send the click event with the page attribute, and verify that the event can be received.
       */
      it('SendEventElement_0130', 1, async function (done) {
        caseName = "SendEventElement_0130";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0140
       * @tc.name    SendEventElement_0140
       * @tc.desc    Send the click event with the paragraph attribute, and verify that the event can be received.
       */
      it('SendEventElement_0140', 1, async function (done) {
        caseName = "SendEventElement_0140";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0150
       * @tc.name    SendEventElement_0150
       * @tc.desc    Send the click event with the contents attribute, and verify that the event can be received.
       */
      it('SendEventElement_0150', 1, async function (done) {
        caseName = "SendEventElement_0150";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0160
       * @tc.name    SendEventElement_0160
       * @tc.desc    Send the click event with the lastContent attribute, and verify that the event can be received.
       */
      it('SendEventElement_0160', 1, async function (done) {
        caseName = "SendEventElement_0160";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0170
       * @tc.name    SendEventElement_0170
       * @tc.desc    Send the click event with the beginIndex attribute, and verify that the event can be received.
       */
      it('SendEventElement_0170', 1, async function (done) {
        caseName = "SendEventElement_0170";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0180
       * @tc.name    SendEventElement_0180
       * @tc.desc    Send the click event with the currentIndex attribute, and verify that the event can be received.
       */
      it('SendEventElement_0180', 1, async function (done) {
        caseName = "SendEventElement_0180";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0190
       * @tc.name    SendEventElement_0190
       * @tc.desc    Send the click event with the endIndex attribute, and verify that the event can be received.
       */
      it('SendEventElement_0190', 1, async function (done) {
        caseName = "SendEventElement_0190";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0200
       * @tc.name    SendEventElement_0200
       * @tc.desc    Send the click event with the itemCount attribute, and verify that the event can be received.
       */
      it('SendEventElement_0200', 1, async function (done) {
        caseName = "SendEventElement_0200";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0210
       * @tc.name    SendEventElement_0210
       * @tc.desc    Send the click event with the accessibilityFocus attribute, and verify that the event can be received.
       */
      it('SendEventElement_0210', 1, async function (done) {
        caseName = "SendEventElement_0210";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0220
       * @tc.name    SendEventElement_0220
       * @tc.desc    Send the click event with the clearAccessibilityFocus attribute, and verify that the event can be received.
       */
      it('SendEventElement_0220', 1, async function (done) {
        caseName = "SendEventElement_0220";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0230
       * @tc.name    SendEventElement_0230
       * @tc.desc    Send the click event with the focus attribute, and verify that the event can be received.
       */
      it('SendEventElement_0230', 1, async function (done) {
        caseName = "SendEventElement_0230";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0240
       * @tc.name    SendEventElement_0240
       * @tc.desc    Send the click event with the clearFocus attribute, and verify that the event can be received.
       */
      it('SendEventElement_0240', 1, async function (done) {
        caseName = "SendEventElement_0240";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0250
       * @tc.name    SendEventElement_0250
       * @tc.desc    Send the click event with the clearSelection attribute, and verify that the event can be received.
       */
      it('SendEventElement_0250', 1, async function (done) {
        caseName = "SendEventElement_0250";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0260
       * @tc.name    SendEventElement_0260
       * @tc.desc    Send the click event with the click attribute, and verify that the event can be received.
       */
      it('SendEventElement_0260', 1, async function (done) {
        caseName = "SendEventElement_0260";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0270
       * @tc.name    SendEventElement_0270
       * @tc.desc    Send the click event with the longClick attribute, and verify that the event can be received.
       */
      it('SendEventElement_0270', 1, async function (done) {
        caseName = "SendEventElement_0270";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0280
       * @tc.name    SendEventElement_0280
       * @tc.desc    Send the click event with the cut attribute, and verify that the event can be received.
       */
      it('SendEventElement_0280', 1, async function (done) {
        caseName = "SendEventElement_0280";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0290
       * @tc.name    SendEventElement_0290
       * @tc.desc    Send the click event with the copy attribute, and verify that the event can be received.
       */
      it('SendEventElement_0290', 1, async function (done) {
        caseName = "SendEventElement_0290";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0300
       * @tc.name    SendEventElement_0300
       * @tc.desc    Send the click event with the paste attribute, and verify that the event can be received.
       */
      it('SendEventElement_0300', 1, async function (done) {
        caseName = "SendEventElement_0300";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0310
       * @tc.name    SendEventElement_0310
       * @tc.desc    Send the click event with the select attribute, and verify that the event can be received.
       */
      it('SendEventElement_0310', 1, async function (done) {
        caseName = "SendEventElement_0310";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0320
       * @tc.name    SendEventElement_0320
       * @tc.desc    Send the click event with the setText attribute, and verify that the event can be received.
       */
      it('SendEventElement_0320', 1, async function (done) {
        caseName = "SendEventElement_0320";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0330
       * @tc.name    SendEventElement_0330
       * @tc.desc    Send the click event with the delete attribute, and verify that the event can be received.
       */
      it('SendEventElement_0330', 1, async function (done) {
        caseName = "SendEventElement_0330";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0340
       * @tc.name    SendEventElement_0340
       * @tc.desc    Send the click event with the scrollForward attribute, and verify that the event can be received.
       */
      it('SendEventElement_0340', 1, async function (done) {
        caseName = "SendEventElement_0340";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0350
       * @tc.name    SendEventElement_0350
       * @tc.desc    Send the click event with the scrollBackward attribute, and verify that the event can be received.
       */
      it('SendEventElement_0350', 1, async function (done) {
        caseName = "SendEventElement_0350";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventElement_0360
       * @tc.name    SendEventElement_0360
       * @tc.desc    Send the click event with the setSelection attribute, and verify that the event can be received.
       */
      it('SendEventElement_0360', 1, async function (done) {
        caseName = "SendEventElement_0360";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
    })
}
