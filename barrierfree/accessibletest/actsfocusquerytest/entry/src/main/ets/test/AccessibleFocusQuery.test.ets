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
import config from '@ohos.accessibility.config';
import accessibility from '@ohos.accessibility'
const accessibility_focusQuery_Name = 'com.example.myapplicationxtsd/ServiceExtAbilityFocusQuery';
const EXPECT_TIMEOUT = 6000;

const setExtentionEnabled = async (logTag, name) => {
  var capability = [];
  switch (name) {
    case accessibility_focusQuery_Name:
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

const setExtentionDisabled = (logTag, bundleNameArr) => {
  for (var i = 0; i < bundleNameArr.length; i++) {
    config.disableAbility(bundleNameArr[i], (err) => {
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
let assist_success: boolean = false;
const logTag = "[xtsLog] "
let isSucceed: boolean = false;
let subScriber = undefined;
let subscriberInfo = {
  events: ["on_assist_change_extra","on_target_change_extra"],
};

const excuteCase = async (caseNamePara) => {
  console.info(logTag+'AccessibleFocusQueryTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(logTag+caseNamePara + " publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);

  setTimeout(function (){
    commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
  }, 1000);

}

export default function AccessibleFocusQueryTest() {

  describe('ActsAccessibleFocusQueryTest', function () {
    beforeAll(async function (done) {
      console.info(logTag+'AccessibleFocusQueryTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(logTag+'AccessibleFocusQueryTest beforeAll subscribe data:' + JSON.stringify(data) );
        if (data.data) {
          console.info(logTag+ data.data );
          switch (data.data) {
            case "on_target_change_extra_success":
              target =true;
              break;
            case "on_assist_change_extra_success":
              assist_success =true;
              break;
          }
        }
      });
      config.enableAbility('com.example.myapplicationxtsd/ServiceExtAbilityFocusQuery',
        ['retrieve', 'keyEventObserver', 'gesture']).then(() => {
        console.info('ActsAccessibleFocusQueryTest beforeAll enableAbility success ');
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info('AccessibleFocusQueryTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.disableAbility("com.example.myapplication/ServiceExtAbilityFocusQuery").then(() => {
        console.info('ActsAccessibleFocusQueryTest afterAll disableAbility success');
      });
      done();
    });
    beforeEach(async function (done) {
      setTimeout(() => {
        isSucceed = false;
        assist_success =false;
        target =false;
        done();
      }, 2000);
    });
    /**
     * @tc.number: FocusQuery_0010
     * @tc.name: getFocusElement() in the call back mode.
     * @tc.desc: getFocusElement() in the call back mode.
     */
    it('FocusQuery_0010', 1, async function (done) {
      caseName = "FocusQuery_0010";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0011
     * @tc.name: getFocusElement(false) in the call back mode.
     * @tc.desc: getFocusElement(false) in the call back mode.
     */
    it('FocusQuery_0011', 1, async function (done) {
      caseName = "FocusQuery_0011";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0020
     * @tc.name: getFocusElement(false) in the promise mode.
     * @tc.desc: getFocusElement(false) in the promise mode.
     */
    it('FocusQuery_0020', 1, async function (done) {
      caseName = "FocusQuery_0020";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0030
     * @tc.name: findElement('focusType','normal') in the promise mode.
     * @tc.desc: findElement('focusType','normal') in the promise mode.
     */
    it('FocusQuery_0030', 1, async function (done) {
      caseName = "FocusQuery_0030";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0031
     * @tc.name: findElement('focusType','normal') in the call back mode.
     * @tc.desc: findElement('focusType','normal') in the call back mode.
     */
    it('FocusQuery_0031', 1, async function (done) {
      caseName = "FocusQuery_0031";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0040
     * @tc.name: findElement('focusDirection','up') in the promise mode.
     * @tc.desc: findElement('focusDirection','up') in the promise mode.
     */
    it('FocusQuery_0040', 1, async function (done) {
      caseName = "FocusQuery_0040";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0041
     * @tc.name: findElement('focusDirection','up') in the call back mode.
     * @tc.desc: findElement('focusDirection','up') in the call back mode.
     */
    it('FocusQuery_0041', 1, async function (done) {
      caseName = "FocusQuery_0041";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0060
     * @tc.name: findElement('focusDirection','down') in the promise mode.
     * @tc.desc: findElement('focusDirection','down') in the promise mode.
     */
    it('FocusQuery_0060', 1, async function (done) {
      caseName = "FocusQuery_0060";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0061
     * @tc.name: findElement('focusDirection','down') in the call back mode.
     * @tc.desc: findElement('focusDirection','down') in the call back mode.
     */
    it('FocusQuery_0061', 1, async function (done) {
      caseName = "FocusQuery_0061";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0070
     * @tc.name: getFocusElement() then attributeValue("parent") in the call back mode.
     * @tc.desc: getFocusElement() then attributeValue("parent") in the call back mode.
     */
    it('FocusQuery_0070', 1, async function (done) {
      caseName = "FocusQuery_0070";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0080
     * @tc.name: findElement('focusDirection','left') in the promise mode.
     * @tc.desc: findElement('focusDirection','left') in the promise mode.
     */
    it('FocusQuery_0080', 1, async function (done) {
      caseName = "FocusQuery_0080";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0081
    * @tc.name: findElement('focusDirection','left') in the call back mode.
    * @tc.desc: findElement('focusDirection','left') in the call back mode.
    */
    it('FocusQuery_0081', 1, async function (done) {
      caseName = "FocusQuery_0081";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0090
    * @tc.name: getFocusElement() then attributeValue("children") in the call back mode.
    * @tc.desc: getFocusElement() then attributeValue("children") in the call back mode.
    */
    it('FocusQuery_0090', 1, async function (done) {
      caseName = "FocusQuery_0090";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0091
    * @tc.name: getFocusElement() then actionNames() in the promise mode.
    * @tc.desc: getFocusElement() then actionNames() in the promise mode.
    */
    it('FocusQuery_0091', 1, async function (done) {
      caseName = "FocusQuery_0091";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0092
    * @tc.name: getFocusElement() then actionNames() in the call back mode.
    * @tc.desc: getFocusElement() then actionNames() in the call back mode.
    */
    it('FocusQuery_0092', 1, async function (done) {
      caseName = "FocusQuery_0092";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0100
    * @tc.name: findElement('focusDirection','right') in the promise mode.
    * @tc.desc: findElement('focusDirection','right') in the promise mode.
    */
    it('FocusQuery_0100', 1, async function (done) {
      caseName = "FocusQuery_0100";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0101
    * @tc.name: findElement('focusDirection','right') in the call back mode.
    * @tc.desc: findElement('focusDirection','right') in the call back mode.
    */
    it('FocusQuery_0101', 1, async function (done) {
      caseName = "FocusQuery_0101";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0120
    * @tc.name: findElement('focusDirection','forward') in the promise mode.
    * @tc.desc: findElement('focusDirection','forward') in the promise mode.
    */
    it('FocusQuery_0120', 1, async function (done) {
      caseName = "FocusQuery_0120";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0121
    * @tc.name: findElement('focusDirection','forward') in the call back mode.
    * @tc.desc: findElement('focusDirection','forward') in the call back mode.
    */
    it('FocusQuery_0121', 1, async function (done) {
      caseName = "FocusQuery_0121";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0139
    * @tc.name: findElement('focusDirection','backward') in the call back mode.
    * @tc.desc: findElement('focusDirection','backward') in the call back mode.
    */
    it('FocusQuery_0139', 1, async function (done) {
      caseName = "FocusQuery_0139";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0140
    * @tc.name: findElement('focusDirection','backward') in the promise mode.
    * @tc.desc: findElement('focusDirection','backward') in the promise mode.
    */
    it('FocusQuery_0140', 1, async function (done) {
      caseName = "FocusQuery_0140";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0150
     * @tc.name: getFocusElement() in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0150', 1, async function (done) {
      caseName = "FocusQuery_0150";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0151
     * @tc.name: getFocusElement(true) in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement(true) in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0151', 1, async function (done) {
      caseName = "FocusQuery_0151";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0160
     * @tc.name: getFocusElement(true) in the promise mode for accessibilityFocus.
     * @tc.desc: getFocusElement(true) in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0160', 1, async function (done) {
      caseName = "FocusQuery_0160";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0170
     * @tc.name: findElement('focusType','accessibility') in the promise mode for accessibilityFocus.
     * @tc.desc: findElement('focusType','accessibility') in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0170', 1, async function (done) {
      caseName = "FocusQuery_0170";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0171
     * @tc.name: findElement('focusType','accessibility') in the call back mode for accessibilityFocus.
     * @tc.desc: findElement('focusType','accessibility') in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0171', 1, async function (done) {
      caseName = "FocusQuery_0171";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0180
     * @tc.name: findElement('focusDirection','up') in the promise mode for accessibilityFocus.
     * @tc.desc: findElement('focusDirection','up') in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0180', 1, async function (done) {
      caseName = "FocusQuery_0180";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0181
     * @tc.name: findElement('focusDirection','up') in the call back mode for accessibilityFocus.
     * @tc.desc: findElement('focusDirection','up') in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0181', 1, async function (done) {
      caseName = "FocusQuery_0181";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0200
     * @tc.name: findElement('focusDirection','down') in the promise mode for accessibilityFocus.
     * @tc.desc: findElement('focusDirection','down') in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0200', 1, async function (done) {
      caseName = "FocusQuery_0200";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0201
    * @tc.name: findElement('focusDirection','down') in the call back mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','down') in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0201', 1, async function (done) {
      caseName = "FocusQuery_0201";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0210
     * @tc.name: getFocusElement() then attributeValue("parent") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("parent") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0210', 1, async function (done) {
      caseName = "FocusQuery_0210";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0220
     * @tc.name: findElement('focusDirection','left') in the promise mode for accessibilityFocus.
     * @tc.desc: findElement('focusDirection','left') in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0220', 1, async function (done) {
      caseName = "FocusQuery_0220";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0221
    * @tc.name: findElement('focusDirection','left') in the call back mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','left') in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0221', 1, async function (done) {
      caseName = "FocusQuery_0221";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0230
     * @tc.name: getFocusElement() then attributeValue("children") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("children") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0230', 1, async function (done) {
      caseName = "FocusQuery_0230";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0231
    * @tc.name: getFocusElement() then actionNames() in the promise mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then actionNames() in the promise mode for accessibilityFocus.
    */
    it('FocusQuery_0231', 1, async function (done) {
      caseName = "FocusQuery_0231";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0232
    * @tc.name: getFocusElement() then actionNames() in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then actionNames() in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0232', 1, async function (done) {
      caseName = "FocusQuery_0232";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0240
    * @tc.name: findElement('focusDirection','right') in the promise mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','right') in the promise mode for accessibilityFocus.
    */
    it('FocusQuery_0240', 1, async function (done) {
      caseName = "FocusQuery_0240";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0241
    * @tc.name: findElement('focusDirection','right') in the call back mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','right') in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0241', 1, async function (done) {
      caseName = "FocusQuery_0241";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0260
    * @tc.name: findElement('focusDirection','forward') in the promise mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','forward') in the promise mode for accessibilityFocus.
    */
    it('FocusQuery_0260', 1, async function (done) {
      caseName = "FocusQuery_0260";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0261
    * @tc.name: findElement('focusDirection','forward') in the call back mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','forward') in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0261', 1, async function (done) {
      caseName = "FocusQuery_0261";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0279
    * @tc.name: findElement('focusDirection','backward') in the call back mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','backward') in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0279', 1, async function (done) {
      caseName = "FocusQuery_0279";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0280
    * @tc.name: findElement('focusDirection','backward') in the promise mode for accessibilityFocus.
    * @tc.desc: findElement('focusDirection','backward') in the promise mode for accessibilityFocus.
    */
    it('FocusQuery_0280', 1, async function (done) {
      caseName = "FocusQuery_0280";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0310
     * @tc.name: getFocusElement() then attributeValue("windowId") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("windowId") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0310', 1, async function (done) {
      caseName = "FocusQuery_0310";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0311
     * @tc.name: getFocusElement() then attributeValue("pageId") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("pageId") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0311', 1, async function (done) {
      caseName = "FocusQuery_0311";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0312
     * @tc.name: getFocusElement() then attributeValue("checked") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("checked") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0312', 1, async function (done) {
      caseName = "FocusQuery_0312";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0313
     * @tc.name: getFocusElement() then attributeValue("inspectorKey") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("inspectorKey") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0313', 1, async function (done) {
      caseName = "FocusQuery_0313";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0314
     * @tc.name: getFocusElement() then attributeValue("bundleName") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("bundleName") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0314', 1, async function (done) {
      caseName = "FocusQuery_0314";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0315
     * @tc.name: getFocusElement() then attributeValue("componentType") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("componentType") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0315', 1, async function (done) {
      caseName = "FocusQuery_0315";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0316
     * @tc.name: getFocusElement() then attributeValue("inputType") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("inputType") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0316', 1, async function (done) {
      caseName = "FocusQuery_0316";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0317
     * @tc.name: getFocusElement() then attributeValue("text") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("text") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0317', 1, async function (done) {
      caseName = "FocusQuery_0317";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0318
     * @tc.name: getFocusElement() then attributeValue("hintText") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("hintText") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0318', 1, async function (done) {
      caseName = "FocusQuery_0318";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0319
     * @tc.name: getFocusElement() then attributeValue("description") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("description") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0319', 1, async function (done) {
      caseName = "FocusQuery_0319";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0320
     * @tc.name: getFocusElement() then attributeValue("resourceName") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("resourceName") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0320', 1, async function (done) {
      caseName = "FocusQuery_0320";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0322
     * @tc.name: getFocusElement() then attributeValue("textLengthLimit") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("textLengthLimit") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0322', 1, async function (done) {
      caseName = "FocusQuery_0322";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0323
     * @tc.name: getFocusElement() then attributeValue("rect") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("rect") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0323', 1, async function (done) {
      caseName = "FocusQuery_0323";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0324
     * @tc.name: getFocusElement() then attributeValue("checkable") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("checkable") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0324', 1, async function (done) {
      caseName = "FocusQuery_0324";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0325
     * @tc.name: getFocusElement() then attributeValue("focusable") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("focusable") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0325', 1, async function (done) {
      caseName = "FocusQuery_0325";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0326
    * @tc.name: getFocusElement() then attributeValue("isVisible") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("isVisible") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0326', 1, async function (done) {
      caseName = "FocusQuery_0326";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0327
    * @tc.name: getFocusElement() then attributeValue("accessibilityFocused") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("accessibilityFocused") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0327', 1, async function (done) {
      caseName = "FocusQuery_0327";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0328
    * @tc.name: getFocusElement() then attributeValue("selected") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("selected") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0328', 1, async function (done) {
      caseName = "FocusQuery_0328";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0329
    * @tc.name: getFocusElement() then attributeValue("clickable") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("clickable") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0329', 1, async function (done) {
      caseName = "FocusQuery_0329";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0330
    * @tc.name: getFocusElement() then attributeValue("longClickable") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("longClickable") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0330', 1, async function (done) {
      caseName = "FocusQuery_0330";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0331
    * @tc.name: getFocusElement() then attributeValue("isEnable") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("isEnable") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0331', 1, async function (done) {
      caseName = "FocusQuery_0331";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0332
    * @tc.name: getFocusElement() then attributeValue("isPassword") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("isPassword") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0332', 1, async function (done) {
      caseName = "FocusQuery_0332";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0333
    * @tc.name: getFocusElement() then attributeValue("scrollable") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("scrollable") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0333', 1, async function (done) {
      caseName = "FocusQuery_0333";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0334
    * @tc.name: getFocusElement() then attributeValue("editable") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("editable") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0334', 1, async function (done) {
      caseName = "FocusQuery_0334";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0336
    * @tc.name: getFocusElement() then attributeValue("pluralLineSupported") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("pluralLineSupported") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0336', 1, async function (done) {
      caseName = "FocusQuery_0336";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0338
    * @tc.name: getFocusElement() then attributeValue("isHint") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("isHint") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0338', 1, async function (done) {
      caseName = "FocusQuery_0338";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0340
    * @tc.name: getFocusElement() then attributeValue("itemCount") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("itemCount") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0340', 1, async function (done) {
      caseName = "FocusQuery_0340";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0341
    * @tc.name: getFocusElement() then attributeValue("currentIndex") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("currentIndex") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0341', 1, async function (done) {
      caseName = "FocusQuery_0341";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0342
    * @tc.name: getFocusElement() then attributeValue("startIndex") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("startIndex") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0342', 1, async function (done) {
      caseName = "FocusQuery_0342";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0343
    * @tc.name: getFocusElement() then attributeValue("endIndex") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("endIndex") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0343', 1, async function (done) {
      caseName = "FocusQuery_0343";;
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0349
    * @tc.name: getFocusElement() then attributeValue("error") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("error") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0349', 1, async function (done) {
      caseName = "FocusQuery_0349";;
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0353
    * @tc.name: getFocusElement() then attributeValue("textMoveUnit") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("textMoveUnit") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0353', 1, async function (done) {
      caseName = "FocusQuery_0353";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0354
    * @tc.name: getFocusElement() then attributeValue("valueMax") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("valueMax") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0354', 1, async function (done) {
      caseName = "FocusQuery_0354";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
   * @tc.number: FocusQuery_0355
   * @tc.name: getFocusElement() then attributeValue("valueMin") in the call back mode for accessibilityFocus.
   * @tc.desc: getFocusElement() then attributeValue("valueMin") in the call back mode for accessibilityFocus.
   */
    it('FocusQuery_0355', 1, async function (done) {
      caseName = "FocusQuery_0355";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: FocusQuery_0356
    * @tc.name: getFocusElement() then attributeValue("valueNow") in the call back mode for accessibilityFocus.
    * @tc.desc: getFocusElement() then attributeValue("valueNow") in the call back mode for accessibilityFocus.
    */
    it('FocusQuery_0356', 1, async function (done) {
      caseName = "FocusQuery_0356";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0270
     * @tc.name: getFocusElement() in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0270', 1, async function (done) {
      caseName = "FocusQuery_0270";
      globalThis.abilityContext.startAbility({
        bundleName: "com.ohos.mms",
        abilityName: "com.ohos.mms.MainAbility"
      },(error, data) => {
        console.info(logTag + "startAbility " + JSON.stringify(error) + ", " + JSON.stringify(data));
        setExtentionDisabled(caseName, [accessibility_focusQuery_Name]);
        setTimeout(() => {
          accessibility.getAbilityLists('all', 'enable')
            .then((res) => {
              for (let i = 0; i < res.length; i++) {
                console.info(logTag + "getAbilityLists res=" + JSON.stringify(res[i]))
              }
            })
            .catch((error) => {
              console.info(logTag + ' getAbilityLists error ' + JSON.stringify(error))
            })
          setTimeout(() => {
            setExtentionEnabled(caseName, accessibility_focusQuery_Name);
            setTimeout(() => {
              excuteCase(caseName)
            }, 1000);
          }, 1000);
        }, 3000);
        setTimeout(() => {
          isSucceed = assist_success;
          console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
          expect(isSucceed).assertEqual(true);
          done();
        }, 10000);
      })
    })
    /**
     * @tc.number: FocusQuery_0281
     * @tc.name: getFocusElement(true) in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement(true) in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0281', 1, async function (done) {
      caseName = "FocusQuery_0281";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0282
     * @tc.name: getFocusElement(true) in the promise mode for accessibilityFocus.
     * @tc.desc: getFocusElement(true) in the promise mode for accessibilityFocus.
     */
    it('FocusQuery_0282', 1, async function (done) {
      caseName = "FocusQuery_0282";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0284
     * @tc.name: getFocusElement() then attributeValue("parent") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("parent") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0284', 1, async function (done) {
      caseName = "FocusQuery_0284";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: FocusQuery_0285
     * @tc.name: getFocusElement() then attributeValue("children") in the call back mode for accessibilityFocus.
     * @tc.desc: getFocusElement() then attributeValue("children") in the call back mode for accessibilityFocus.
     */
    it('FocusQuery_0285', 1, async function (done) {
      caseName = "FocusQuery_0285";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
  })
}
