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
let target: boolean = false;
let assist: boolean = false;
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

export default function abilityTest() {

    describe('ActsAccessibleEventTest', function () {
      beforeAll(async function (done) {
        console.info('ActsAccessibleEventTest: beforeAll');
        subScriber = await commonEvent.createSubscriber({events: ['on_assist_change_extra', 'on_target_change_extra']});
        commonEvent.subscribe(subScriber, (err, data) => {
            console.info('ActsAccessibleEventTest beforeAll subscribe data:' + JSON.stringify(data) );
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

        config.enableAbility(BUNDLE_NAME_ABILITY_NAME, ["retrieve", "gesture"]).then(() => {
          console.info('ActsAccessibleEventTest beforeAll enableAbility');
        });
        setTimeout(done, 3000);
      })

      afterAll(async function (done) {
        console.info('ActsAccessibleEventTest: afterAll');
        commonEvent.unsubscribe(subScriber);

        config.disableAbility(BUNDLE_NAME_ABILITY_NAME).then(() => {
          console.info('ActsAccessibleEventTest afterAll disableAbility');
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
       * @tc.number  SendEventClick_0010
       * @tc.name    SendEventClick_0010
       * @tc.desc    Send the click events in the form of callback to verify that the event can be received.
       */
      it('SendEventClick_0010', 1, async function (done) {
        caseName = "SendEventClick_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventClick_0020
       * @tc.name    SendEventClick_0020
       * @tc.desc    Send the click events in the form of promise to verify that the event can be received.
       */
      it('SendEventClick_0020', 1, async function (done) {
        caseName = "SendEventClick_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventClick_0030
       * @tc.name    SendEventClick_0030
       * @tc.desc    Send the click events form the target APP to verify that the event can be received.
       */
      it('SendEventClick_0030', 3, async function (done) {
        caseName = "SendEventClick_0030";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventLongClick_0010
       * @tc.name    SendEventLongClick_0010
       * @tc.desc    Send the long click events in the form of callback to verify that the event can be received.
       */
      it('SendEventLongClick_0010', 1, async function (done) {
        caseName = "SendEventLongClick_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventLongClick_0020
       * @tc.name    SendEventLongClick_0020
       * @tc.desc    Send the long click events in the form of promise to verify that the event can be received.
       */
      it('SendEventLongClick_0020', 1, async function (done) {
        caseName = "SendEventLongClick_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventLongClick_0030
       * @tc.name    SendEventLongClick_0030
       * @tc.desc    Send the long click events form the target APP to verify that the event can be received.
       */
//      it('SendEventLongClick_0030', 3, async function (done) {
//        caseName = "SendEventLongClick_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventFocus_0010
       * @tc.name    SendEventFocus_0010
       * @tc.desc    Send the focus events in the form of callback to verify that the event can be received.
       */
      it('SendEventFocus_0010', 1, async function (done) {
        caseName = "SendEventFocus_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventFocus_0020
       * @tc.name    SendEventFocus_0020
       * @tc.desc    Send the focus events in the form of promise to verify that the event can be received.
       */
      it('SendEventFocus_0020', 1, async function (done) {
        caseName = "SendEventFocus_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventFocus_0030
       * @tc.name    SendEventFocus_0030
       * @tc.desc    Send the focus events form the target APP to verify that the event can be received.
       */
//      it('SendEventFocus_0030', 3, async function (done) {
//        caseName = "SendEventFocus_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventSelect_0010
       * @tc.name    SendEventSelect_0010
       * @tc.desc    Send the select events in the form of callback to verify that the event can be received.
       */
      it('SendEventSelect_0010', 1, async function (done) {
        caseName = "SendEventSelect_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventSelect_0020
       * @tc.name    SendEventSelect_0020
       * @tc.desc    Send the select events in the form of promise to verify that the event can be received.
       */
      it('SendEventSelect_0020', 1, async function (done) {
        caseName = "SendEventSelect_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventSelect_0030
       * @tc.name    SendEventSelect_0030
       * @tc.desc    Send the select events form the target APP to verify that the event can be received.
       */
//      it('SendEventSelect_0030', 3, async function (done) {
//        caseName = "SendEventSelect_0030";
//        publishCase(caseName);

//       setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventHoverEnter_0010
       * @tc.name    SendEventHoverEnter_0010
       * @tc.desc    Send the hoverEnter events in the form of callback to verify that the event can be received.
       */
      it('SendEventHoverEnter_0010', 1, async function (done) {
        caseName = "SendEventHoverEnter_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventHoverEnter_0020
       * @tc.name    SendEventHoverEnter_0020
       * @tc.desc    Send the hoverEnter events in the form of promise to verify that the event can be received.
       */
      it('SendEventHoverEnter_0020', 1, async function (done) {
        caseName = "SendEventHoverEnter_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventHoverEnter_0030
       * @tc.name    SendEventHoverEnter_0030
       * @tc.desc    Send the hoverEnter events form the target APP to verify that the event can be received.
       */
//      it('SendEventHoverEnter_0030', 3, async function (done) {
//        caseName = "SendEventHoverEnter_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventHoverExit_0010
       * @tc.name    SendEventHoverExit_0010
       * @tc.desc    Send the hoverExit events in the form of callback to verify that the event can be received.
       */
      it('SendEventHoverExit_0010', 1, async function (done) {
        caseName = "SendEventHoverExit_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventHoverExit_0020
       * @tc.name    SendEventHoverExit_0020
       * @tc.desc    Send the hoverExit events in the form of promise to verify that the event can be received.
       */
      it('SendEventHoverExit_0020', 1, async function (done) {
        caseName = "SendEventHoverExit_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventHoverExit_0030
       * @tc.name    SendEventHoverExit_0030
       * @tc.desc    Send the hoverExit events form the target APP to verify that the event can be received.
       */
//      it('SendEventHoverExit_0030', 3, async function (done) {
//        caseName = "SendEventHoverExit_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventTextUpdate_0010
       * @tc.name    SendEventTextUpdate_0010
       * @tc.desc    Send the textUpdate events in the form of callback to verify that the event can be received.
       */
      it('SendEventTextUpdate_0010', 1, async function (done) {
        caseName = "SendEventTextUpdate_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventTextUpdate_0020
       * @tc.name    SendEventTextUpdate_0020
       * @tc.desc    Send the textUpdate events in the form of promise to verify that the event can be received.
       */
      it('SendEventTextUpdate_0020', 1, async function (done) {
        caseName = "SendEventTextUpdate_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventTextUpdate_0030
       * @tc.name    SendEventTextUpdate_0030
       * @tc.desc    Send the textUpdate events form the target APP to verify that the event can be received.
       */
//      it('SendEventTextUpdate_0030', 3, async function (done) {
//        caseName = "SendEventTextUpdate_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventTextSelectionUpdate_0010
       * @tc.name    SendEventTextSelectionUpdate_0010
       * @tc.desc    Send the textSelectionUpdate events in the form of callback to verify that the event can be received.
       */
      it('SendEventTextSelectionUpdate_0010', 1, async function (done) {
        caseName = "SendEventTextSelectionUpdate_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventTextSelectionUpdate_0020
       * @tc.name    SendEventTextSelectionUpdate_0020
       * @tc.desc    Send the textSelectionUpdate events in the form of promise to verify that the event can be received.
       */
      it('SendEventTextSelectionUpdate_0020', 1, async function (done) {
        caseName = "SendEventTextSelectionUpdate_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventTextSelectionUpdate_0030
       * @tc.name    SendEventTextSelectionUpdate_0030
       * @tc.desc    Send the textSelectionUpdate events form the target APP to verify that the event can be received.
       */
//      it('SendEventTextSelectionUpdate_0030', 3, async function (done) {
//        caseName = "SendEventTextSelectionUpdate_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventScroll_0010
       * @tc.name    SendEventScroll_0010
       * @tc.desc    Send the scroll events in the form of callback to verify that the event can be received.
       */
      it('SendEventScroll_0010', 1, async function (done) {
        caseName = "SendEventScroll_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventScroll_0020
       * @tc.name    SendEventScroll_0020
       * @tc.desc    Send the scroll events in the form of promise to verify that the event can be received.
       */
      it('SendEventScroll_0020', 1, async function (done) {
        caseName = "SendEventScroll_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })

      /**
       * @tc.number  SendEventScroll_0030
       * @tc.name    SendEventScroll_0030
       * @tc.desc    Send the scroll events form the target APP to verify that the event can be received.
       */
//      it('SendEventScroll_0030', 3, async function (done) {
//        caseName = "SendEventScroll_0030";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventClickFocusLongClick_0010
       * @tc.name    SendEventClickFocusLongClick_0010
       * @tc.desc    Send the click, focus and longClick events in the form of callback to verify that the event can be received.
       */
      it('SendEventClickFocusLongClick_0010', 1, async function (done) {
        caseName = "SendEventClickFocusLongClick_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT + 3000);
      })

      /**
       * @tc.number  SendEventClickFocusLongClick_0020
       * @tc.name    SendEventClickFocusLongClick_0020
       * @tc.desc    Send the click, focus and longClick events in the form of promise to verify that the event can be received.
       */
//      it('SendEventClickFocusLongClick_0020', 1, async function (done) {
//        caseName = "SendEventClickFocusLongClick_0020";
//        publishCase(caseName);

//        setTimeout(() => {
//          expect(isSucceed).assertEqual(true);
//          done();
//        }, EXPECT_TIMEOUT);
//      })

      /**
       * @tc.number  SendEventErrorEv_0010
       * @tc.name    SendEventErrorEv_0010
       * @tc.desc    Send an error event in the form of callback to verify that the event cannot be received.
       */
      it('SendEventErrorEv_0010', 2, async function (done) {
        caseName = "SendEventErrorEv_0010";
        publishCase(caseName);

        setTimeout(() => {
          expect(target).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
      
      /**
       * @tc.number  SendEventErrorEv_0020
       * @tc.name    SendEventErrorEv_0020
       * @tc.desc    Send an error event in the form of promise to verify that the event cannot be received.
       */
      it('SendEventErrorEv_0020', 2, async function (done) {
        caseName = "SendEventErrorEv_0020";
        publishCase(caseName);

        setTimeout(() => {
          expect(target).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
      })
    })
}
