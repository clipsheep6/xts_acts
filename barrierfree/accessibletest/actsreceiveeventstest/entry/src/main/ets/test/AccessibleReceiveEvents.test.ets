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

import { describe, beforeAll, beforeEach, afterAll, it, expect } from "deccjsunit/index"
import commonEvent from '@ohos.commonEvent'
import config from '@ohos.accessibility.config';
import accessibility from '@ohos.accessibility'
const accessibility_all_bundleName = 'com.example.myapplicationxtsd/ServiceExtAbilityAllAbility';
const accessibility_all2_bundleName = 'com.example.accessibilityall2.hmservice/ServiceExtAbilityAllAbility2';
const accessibility_receiveEvent_bundleName = 'com.example.myapplicationevent/ServiceExtAbilityReceiveEvent';
const EXPECT_TIMEOUT = 6000;

const setExtentionEnabled = async (logTag, name) => {
  var capability = [];
  switch (name) {
    case accessibility_all_bundleName:
    case accessibility_all2_bundleName:
    case accessibility_receiveEvent_bundleName:
      capability = ['retrieve', 'keyEventObserver', 'gesture'];
      break;
    default:
      break;
  }
  await config.enableAbility(name, capability, (err) => {
    if (err?.code) {
      console.info(logTag + " extentionEnabled err=" + JSON.stringify(err));
    } else {
      console.info(logTag + " extentionEnabled success");
    }
  });
}

const setExtentionDisabled = async (logTag, bundleNameArr) => {
  for (var i = 0; i < bundleNameArr.length; i++) {
    await config.disableAbility(bundleNameArr[i], (err) => {
      if (err?.code) {
        console.info(logTag + " extentionDisabled err=" + JSON.stringify(err));
      } else {
        console.info(logTag + " extentionDisabled success");
      }
    });
  }
}

const START_TIMEOUT = 5000;
let caseName = '';
let target: boolean = false;
let target_b: boolean = false;
let assist_success: boolean = false;
let assist_success1: boolean = false;
const logTag = "[xtsLog] "
let isSucceed: boolean = false;
let subScriber = undefined;
let subscriberInfo = {
  events: ["on_assist_change_extra","on_target_change_extra"],
};

const excuteCase = async (caseNamePara) => {
  console.info(logTag+'AccessibleReceiveEventTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.error(logTag+caseNamePara + " publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
  setTimeout(function (){
    commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
  }, 800);

}

export default function AccessibleReceiveEventsTest(abilityContext) {

  describe('ActsAccessibleReceiveEventsTest', function () {
    beforeAll(async function (done) {
      console.error(logTag+'AccessibleReceiveEventsTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.error(logTag+'AccessibleReceiveEventsTest beforeAll subscribe data:' + JSON.stringify(data) );
        if (data.data) {
          console.error(logTag+ data.data );
          switch (data.data) {
            case "on_target_change_extra_success":
              target =true;
              break;
            case "on_target_change_b_extra_success":
              target_b =true;
              break;
            case "on_assist_change_extra_success":
              assist_success =true;
              break;
            case "on_assist1_change_extra_success":
              assist_success1 =true;
              break;
          }
        }
      });
      config.enableAbility('com.example.myapplicationxtsd/ServiceExtAbilityAllAbility',
        ['retrieve', 'keyEventObserver', 'gesture']).then(() => {
        console.info('AccessibleReceiveEventsTest beforeAll enableAbility success' );
        this.isEnable = true;
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info('AccessibleReceiveEventsTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.disableAbility("com.example.myapplicationxtsd/ServiceExtAbilityAllAbility").then(() => {
        console.info('AccessibleReceiveEventsTest afterAll disableAbility success' );
        this.isEnable = false;
      });
      config.disableAbility("com.example.accessibilityall2.hmservice/ServiceExtAbilityAllAbility2").then(() => {
        console.info('AccessibleReceiveEventsTest afterAll disableAbility success' );
        this.isEnable = false;
      });
      done();
    });
    beforeEach(async function (done) {
      setTimeout(() => {
        isSucceed = false;
        target_b = false;
        assist_success = false;
        assist_success1 = false;
        target =false;
        done();
      }, 2000);
    });
    /**
     * @tc.number: ReceiveEventsFilter_0310
     * @tc.name: When the filter event type is set to "undefined", no event is received.
     * @tc.desc: When the filter event type is set to "undefined", no event is received.
     */
    it('ReceiveEventsFilter_0310', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0310";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0630
     * @tc.name: When the filter event type is set to "undefined", no event is received.
     * @tc.desc: When the filter event type is set to "undefined", no event is received.
     */
    it('ReceiveEventsFilter_0630', 2, async function (done) {
      caseName = "ReceiveEventsFilter_0630";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0010
     * @tc.name: When the filter event type is set to "click", only click events can be received.
     * @tc.desc: When the filter event type is set to "click", only click events can be received.
     */
    it('ReceiveEventsFilter_0010', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0010";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0020
     * @tc.name: When the filter event type is set to "longClick", only longClick events can be received.
     * @tc.desc: When the filter event type is set to "longClick", only longClick events can be received.
     */
    it('ReceiveEventsFilter_0020', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0020";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0030
     * @tc.name: When the filter event type is set to "select", only select events can be received.
     * @tc.desc: When the filter event type is set to "select", only select events can be received.
     */
    it('ReceiveEventsFilter_0030', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0030";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0040
     * @tc.name: When the filter event type is set to "focus", only focus events can be received.
     * @tc.desc: When the filter event type is set to "focus", only focus events can be received.
     */
    it('ReceiveEventsFilter_0040', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0040";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0050
     * @tc.name: When the filter event type is set to "textUpdate", only textUpdate events can be received.
     * @tc.desc: When the filter event type is set to "textUpdate", only textUpdate events can be received.
     */
    it('ReceiveEventsFilter_0050', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0050";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0070
     * @tc.name: When the filter event type is set to "scroll", only scroll events can be received.
     * @tc.desc: When the filter event type is set to "scroll", only scroll events can be received.
     */
    it('ReceiveEventsFilter_0070', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0070";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0080
     * @tc.name: When the filter event type is set to "textSelectionUpdate", only textSelectionUpdate events can be received.
     * @tc.desc: When the filter event type is set to "textSelectionUpdate", only textSelectionUpdate events can be received.
     */
    it('ReceiveEventsFilter_0080', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0080";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0090
     * @tc.name: When the filter event type is set to "accessibilityFocus", only accessibilityFocus events can be received.
     * @tc.desc: When the filter event type is set to "accessibilityFocus", only accessibilityFocus events can be received.
     */
    it('ReceiveEventsFilter_0090', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0090";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0100
     * @tc.name: When the filter event type is set to "accessibilityFocusClear", only accessibilityFocusClear events can be received.
     * @tc.desc: When the filter event type is set to "accessibilityFocusClear", only accessibilityFocusClear events can be received.
     */
    it('ReceiveEventsFilter_0100', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0100";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0120
     * @tc.name: When the filter event type is set to multiple, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set to multiple, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0120', 3, async function (done) {
      caseName = "ReceiveEventsFilter_0120";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, 13000);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0130
     * @tc.name: When the filter event type is set to multiple, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set to multiple, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0130', 3, async function (done) {
      caseName = "ReceiveEventsFilter_0130";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0150
     * @tc.name: When the filter event type is set to "hoverEnter", only hoverEnter events can be received.
     * @tc.desc: When the filter event type is set to "hoverEnter", only hoverEnter events can be received.
     */
    it('ReceiveEventsFilter_0150', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0150";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0160
     * @tc.name: When the filter event type is set to "hoverExit", only hoverExit events can be received.
     * @tc.desc: When the filter event type is set to "hoverExit", only hoverExit events can be received.
     */
    it('ReceiveEventsFilter_0160', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0160";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0270
     * @tc.name: When the filter event type is set to "click", only click events can be received.
     * @tc.desc: When the filter event type is set to "click", only click events can be received.
     */
    it('ReceiveEventsFilter_0270', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0270";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0320
     * @tc.name: When targetnames is set to '', no event is received.
     * @tc.desc: When targetnames is set to '', no event is received.
     */
    it('ReceiveEventsFilter_0320', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0320";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0330
     * @tc.name: When the filter event type is set to "click", only click events can be received.
     * @tc.desc: When the filter event type is set to "click", only click events can be received.
     */
    it('ReceiveEventsFilter_0330', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0330";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0340
     * @tc.name: When the filter event type is set to "longClick", only longClick events can be received.
     * @tc.desc: When the filter event type is set to "longClick", only longClick events can be received.
     */
    it('ReceiveEventsFilter_0340', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0340";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0350
     * @tc.name: When the filter event type is set to "select", only select events can be received.
     * @tc.desc: When the filter event type is set to "select", only select events can be received.
     */
    it('ReceiveEventsFilter_0350', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0350";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0360
     * @tc.name: When the filter event type is set to "focus", only focus events can be received.
     * @tc.desc: When the filter event type is set to "focus", only focus events can be received.
     */
    it('ReceiveEventsFilter_0360', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0360";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0370
     * @tc.name: When the filter event type is set to "textUpdate", only textUpdate events can be received.
     * @tc.desc: When the filter event type is set to "textUpdate", only textUpdate events can be received.
     */
    it('ReceiveEventsFilter_0370', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0370";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0390
     * @tc.name: When the filter event type is set to "scroll", only scroll events can be received.
     * @tc.desc: When the filter event type is set to "scroll", only scroll events can be received.
     */
    it('ReceiveEventsFilter_0390', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0390";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0400
     * @tc.name: When the filter event type is set to "textSelectionUpdate", only textSelectionUpdate events can be received.
     * @tc.desc: When the filter event type is set to "textSelectionUpdate", only textSelectionUpdate events can be received.
     */
    it('ReceiveEventsFilter_0400', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0400";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0410
     * @tc.name: When the filter event type is set to "accessibilityFocus", only accessibilityFocus events can be received.
     * @tc.desc: When the filter event type is set to "accessibilityFocus", only accessibilityFocus events can be received.
     */
    it('ReceiveEventsFilter_0410', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0410";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0420
     * @tc.name: When the filter event type is set to "accessibilityFocusClear", only accessibilityFocusClear events can be received.
     * @tc.desc: When the filter event type is set to "accessibilityFocusClear", only accessibilityFocusClear events can be received.
     */
    it('ReceiveEventsFilter_0420', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0420";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0440
     * @tc.name: When the filter event type is set to multiple, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set to multiple, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0440', 3, async function (done) {
      caseName = "ReceiveEventsFilter_0440";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, 13000);
    })
    /**
    * @tc.number: ReceiveEventsFilter_0450
    * @tc.name: When the filter event type is set to multiple, only the corresponding event can be received.
    * @tc.desc: When the filter event type is set to multiple, only the corresponding event can be received.
    */
    it('ReceiveEventsFilter_0450', 2, async function (done) {
      caseName = "ReceiveEventsFilter_0450";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0470
     * @tc.name: When the filter event type is set to "hoverEnter", only hoverEnter events can be received.
     * @tc.desc: When the filter event type is set to "hoverEnter", only hoverEnter events can be received.
     */
    it('ReceiveEventsFilter_0470', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0470";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0480
     * @tc.name: When the filter event type is set to "hoverExit", only hoverExit events can be received.
     * @tc.desc: When the filter event type is set to "hoverExit", only hoverExit events can be received.
     */
    it('ReceiveEventsFilter_0480', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0480";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0590
     * @tc.name: When the filter event type is set to "click", only click events can be received.
     * @tc.desc: When the filter event type is set to "click", only click events can be received.
     */
    it('ReceiveEventsFilter_0590', 1, async function (done) {
      caseName = "ReceiveEventsFilter_0590";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0640
     * @tc.name: When targetnames is set to '', no event is received.
     * @tc.desc: When targetnames is set to '', no event is received.
     */
    it('ReceiveEventsFilter_0640', 2, async function (done) {
      caseName = "ReceiveEventsFilter_0640";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0280
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0280', 3, async function (done) {
      caseName = "ReceiveEventsFilter_0280";
      setExtentionEnabled(logTag + caseName, accessibility_all2_bundleName);
      setTimeout(() => {
        excuteCase(caseName)
      }, 3000);

      setTimeout(() => {
        isSucceed = target && assist_success && assist_success1;
        console.info(logTag + caseName + ' target : ' + target + ' assist_success : ' + assist_success + ' assist_success1 : ' + assist_success1);
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, 8000);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0600
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0600', 3, async function (done) {
      caseName = "ReceiveEventsFilter_0600";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success && assist_success1;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
  })
}

