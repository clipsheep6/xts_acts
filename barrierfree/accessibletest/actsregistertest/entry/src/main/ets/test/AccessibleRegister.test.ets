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
import { describe, beforeAll, beforeEach, afterAll, it, expect } from '@ohos/hypium'
import commonEvent from '@ohos.commonEvent'

const logTag = "[xtsLog] "
let caseName = '';
let target: boolean = false;
let assist_connect: boolean = false;
let assist_disconnect: boolean = false;
let isSucceed: boolean = false;
let subScriber = undefined;
let subscriberInfo = {
  events: ["on_assist_change_extra","on_target_change_extra"],
};
const EXPECT_TIMEOUT = 8000;

const excuteCase = async (caseNamePara) => {

  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData,  (err, data) => {
    console.info(caseNamePara + " publish event: on_target_change");
  });
}

export default function AccessibleRegisterTest() {
  describe('ActsAccessibleRegisterTest', function () {
    beforeAll(async function (done) {
      console.info('AccessibleRegisterTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info('AccessibleRegisterTest beforeAll subscribe data:' + JSON.stringify(data) );
        if (data.data) {
          switch (data.data) {
            case "on_target_change_extra_success":
              target =true;
              break;
            case "on_connect_success":
              assist_connect =true;
              break;
            case "on_disconnect_success":
              assist_disconnect =true;
              break;
          }
        }
      });
      setTimeout(done(), 3000);
    });

    afterAll(async function (done) {
      console.info('AccessibleRegisterTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      done();
    });

    beforeEach(async function (done) {
      setTimeout(() => {
        isSucceed = false;
        assist_connect =false;
        assist_disconnect = false;
        target =false;
        done();
      }, 2000);
    });
    /**
     * @tc.number: RegisterStateOnOff_0010
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0010', 1, async function (done) {
      caseName = "RegisterStateOnOff_0010";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0012
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0012', 1, async function (done) {
      caseName = "RegisterStateOnOff_0012";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0020
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0020', 1, async function (done) {
      caseName = "RegisterStateOnOff_0020";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0022
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0022', 1, async function (done) {
      caseName = "RegisterStateOnOff_0022";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0030
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0030', 1, async function (done) {
      caseName = "RegisterStateOnOff_0030";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0032
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0032', 1, async function (done) {
      caseName = "RegisterStateOnOff_0032";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0040
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0040', 1, async function (done) {
      caseName = "RegisterStateOnOff_0040";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0042
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0042', 1, async function (done) {
      caseName = "RegisterStateOnOff_0042";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0050
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0050', 1, async function (done) {
      caseName = "RegisterStateOnOff_0050";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);

    })
    /**
     * @tc.number: RegisterStateOnOff_0060
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0060', 1, async function (done) {
      caseName = "RegisterStateOnOff_0060";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0070
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0070', 1, async function (done) {
      caseName = "RegisterStateOnOff_0070";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0080
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0080', 3, async function (done) {
      caseName = "RegisterStateOnOff_0080";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0090
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0090', 3, async function (done) {
      caseName = "RegisterStateOnOff_0090";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0100
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0100', 3, async function (done) {
      caseName = "RegisterStateOnOff_0100";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' target : ' + target+ ' assist_connect : ' + assist_connect);
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0110
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0110', 1, async function (done) {
      caseName = "RegisterStateOnOff_0110";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect && assist_disconnect;
        console.info(logTag + caseName + ' target : ' + target + ' assist_connect : ' + assist_connect + ' assist_disconnect : ' + assist_disconnect);
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0160
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0160', 1, async function (done) {
      caseName = "RegisterStateOnOff_0160";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0162
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0162', 1, async function (done) {
      caseName = "RegisterStateOnOff_0162";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0170
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0170', 1, async function (done) {
      caseName = "RegisterStateOnOff_0170";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0172
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0172', 1, async function (done) {
      caseName = "RegisterStateOnOff_0172";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0180
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0180', 1, async function (done) {
      caseName = "RegisterStateOnOff_0180";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0182
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0182', 1, async function (done) {
      caseName = "RegisterStateOnOff_0182";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0190
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0190', 1, async function (done) {
      caseName = "RegisterStateOnOff_0190";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0192
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0192', 1, async function (done) {
      caseName = "RegisterStateOnOff_0192";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0200
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0200', 1, async function (done) {
      caseName = "RegisterStateOnOff_0200";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0210
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0210', 1, async function (done) {
      caseName = "RegisterStateOnOff_0210";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0220
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0220', 1, async function (done) {
      caseName = "RegisterStateOnOff_0220";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0230
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0230', 1, async function (done) {
      caseName = "RegisterStateOnOff_0230";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_disconnect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0240
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0240', 3, async function (done) {
      caseName = "RegisterStateOnOff_0240";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0250
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0250', 3, async function (done) {
      caseName = "RegisterStateOnOff_0250";
      excuteCase(caseName);
      setTimeout(() => {
        isSucceed = !target && assist_connect;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RegisterStateOnOff_0260
     * @tc.name: Subscribe / unsubscribe ability status change.
     * @tc.desc: Subscribe / unsubscribe ability status change.
     */
    it('RegisterStateOnOff_0260', 3, async function (done) {
        caseName = "RegisterStateOnOff_0260";
        excuteCase(caseName);
        setTimeout(() => {
          isSucceed = !target && assist_connect;
          console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
    })

  })
}

