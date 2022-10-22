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

const EXPECT_TIMEOUT = 6000;
const START_TIMEOUT = 5000;
let caseName = '';
let target: boolean = false;
let assist_success: boolean = false;
let assist_undefined: boolean = false;
const logTag = "[xtsLog] "
let isSucceed: boolean = false;
let subScriber = undefined;
let subscriberInfo = {
  events: ["on_assist_change_extra","on_target_change_extra"],
};

const excuteCase = async (caseNamePara) => {
  console.info(logTag+'AccessibleRootElementTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(logTag+caseNamePara + " publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);

  setTimeout(function (){
    commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
  }, 3000);

}

export default function AccessibleRootElementTest() {

  describe('ActsAccessibleRootElementTest', function () {
    beforeAll(async function (done) {
      console.info(logTag+'AccessibleRootElementTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(logTag+'AccessibleRootElementTest beforeAll subscribe data:' + JSON.stringify(data) );
        if (data.data) {
          console.info(logTag+ data.data );
          switch (data.data) {
            case "on_target_change_extra_success":
              target =true;
              break;
            case "on_assist_change_extra_success":
              assist_success =true;
              break;
            case "on_assist_change_extra_undefined":
              assist_undefined =true;
              break;
          }
        }
      });
      config.enableAbility('com.example.myapplicationxtsd/ServiceExtAbilityAllAbility',
        ['retrieve', 'keyEventObserver', 'gesture']).then(() => {
        console.info('ActsAccessibleRootElementTest beforeAll enableAbility success');
        this.isEnable = true;
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info('ActsAccessibleRootElementTest: afterAll');
      commonEvent.unsubscribe(subScriber);

      config.disableAbility("com.example.myapplicationxtsd/ServiceExtAbilityAllAbility").then(() => {
        console.info('ActsAccessibleRootElementTest afterAll disableAbility success');
        this.isEnable = false;
      });
      setTimeout(done(), 3000);
    });
    beforeEach(async function (done) {
      setTimeout(() => {
        isSucceed = false;
        assist_success =false;
        assist_undefined =false;
        target =false;
        done();
      }, 2000);
    });
    /**
     * @tc.number: RootElementGet_0070
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0070', 1, async function (done) {
        caseName = "RootElementGet_0070";
        excuteCase(caseName)
        setTimeout(() => {
          isSucceed = assist_success;
          console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
          expect(isSucceed).assertEqual(true);
          done();
        }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0071
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0071', 1, async function (done) {
      caseName = "RootElementGet_0071";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0080
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0080', 1, async function (done) {
      caseName = "RootElementGet_0080";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0010
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0010', 1, async function (done) {
      console.info(logTag + "[RootElementGet_0010] --- start")
      caseName = "RootElementGet_0010";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0011
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0011', 1, async function (done) {
      caseName = "RootElementGet_0011";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0020
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0020', 1, async function (done) {
      caseName = "RootElementGet_0020";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0092
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0092', 1, async function (done) {
      caseName = "RootElementGet_0092";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0093
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0093', 1, async function (done) {
      caseName = "RootElementGet_0093";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0094
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0094', 1, async function (done) {
      caseName = "RootElementGet_0094";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0095
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0095', 1, async function (done) {
      caseName = "RootElementGet_0095";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0096
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0096', 1, async function (done) {
      caseName = "RootElementGet_0096";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0097
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0097', 1, async function (done) {
      caseName = "RootElementGet_0097";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0110
     * @tc.name: Get root element, then get windowId attribute.
     * @tc.desc: Get root element, then get windowId attribute.
     */
    it('RootElementGet_0110', 1, async function (done) {
      caseName = "RootElementGet_0110";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0111
     * @tc.name: Get root element, then get pageId attribute.
     * @tc.desc: Get root element, then get pageId attribute.
     */
    it('RootElementGet_0111', 1, async function (done) {
      caseName = "RootElementGet_0111";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0113
     * @tc.name: Get root element, then get inspectorKey attribute.
     * @tc.desc: Get root element, then get inspectorKey attribute.
     */
    it('RootElementGet_0113', 1, async function (done) {
      caseName = "RootElementGet_0113";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0114
     * @tc.name: Get root element, then get bundleName attribute.
     * @tc.desc: Get root element, then get bundleName attribute.
     */
    it('RootElementGet_0114', 1, async function (done) {
      caseName = "RootElementGet_0114";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0115
     * @tc.name: Get root element, then get componentType attribute.
     * @tc.desc: Get root element, then get componentType attribute.
     */
    it('RootElementGet_0115', 1, async function (done) {
      caseName = "RootElementGet_0115";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0116
     * @tc.name: Get root element, then get inputType attribute.
     * @tc.desc: Get root element, then get inputType attribute.
     */
    it('RootElementGet_0116', 1, async function (done) {
      caseName = "RootElementGet_0116";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0117
     * @tc.name: Get root element, then get text attribute.
     * @tc.desc: Get root element, then get text attribute.
     */
    it('RootElementGet_0117', 1, async function (done) {
      caseName = "RootElementGet_0117";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0118
     * @tc.name: Get root element, then get hintText attribute.
     * @tc.desc: Get root element, then get hintText attribute.
     */
    it('RootElementGet_0118', 1, async function (done) {
      caseName = "RootElementGet_0118";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0119
     * @tc.name: Get root element, then get description attribute.
     * @tc.desc: Get root element, then get description attribute.
     */
    it('RootElementGet_0119', 1, async function (done) {
      caseName = "RootElementGet_0119";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0120
     * @tc.name: Get root element, then get resourceName attribute.
     * @tc.desc: Get root element, then get resourceName attribute.
     */
    it('RootElementGet_0120', 1, async function (done) {
      caseName = "RootElementGet_0120";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0122
     * @tc.name: Get root element, then get textLengthLimit attribute.
     * @tc.desc: Get root element, then get textLengthLimit attribute.
     */
    it('RootElementGet_0122', 1, async function (done) {
      caseName = "RootElementGet_0122";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0123
     * @tc.name: Get root element, then get rect attribute.
     * @tc.desc: Get root element, then get rect attribute.
     */
    it('RootElementGet_0123', 1, async function (done) {
      caseName = "RootElementGet_0123";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0124
     * @tc.name: Get root element, then get checkable attribute.
     * @tc.desc: Get root element, then get checkable attribute.
     */
    it('RootElementGet_0124', 1, async function (done) {
      caseName = "RootElementGet_0124";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0125
     * @tc.name: Get root element, then get focusable attribute.
     * @tc.desc: Get root element, then get focusable attribute.
     */
    it('RootElementGet_0125', 1, async function (done) {
      caseName = "RootElementGet_0125";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0126
     * @tc.name: Get root element, then get isVisible attribute.
     * @tc.desc: Get root element, then get isVisible attribute.
     */
    it('RootElementGet_0126', 1, async function (done) {
      caseName = "RootElementGet_0126";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0127
     * @tc.name: Get root element, then get accessibilityFocused attribute.
     * @tc.desc: Get root element, then get accessibilityFocused attribute.
     */
    it('RootElementGet_0127', 1, async function (done) {
      caseName = "RootElementGet_0127";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0128
     * @tc.name: Get root element, then get selected attribute.
     * @tc.desc: Get root element, then get selected attribute.
     */
    it('RootElementGet_0128', 1, async function (done) {
      caseName = "RootElementGet_0128";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0129
     * @tc.name: Get root element, then get clickable attribute.
     * @tc.desc: Get root element, then get clickable attribute.
     */
    it('RootElementGet_0129', 1, async function (done) {
      caseName = "RootElementGet_0129";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0130
     * @tc.name: Get root element, then get longClickable attribute.
     * @tc.desc: Get root element, then get longClickable attribute.
     */
    it('RootElementGet_0130', 1, async function (done) {
      caseName = "RootElementGet_0130";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0131
     * @tc.name: Get root element, then get isEnable attribute.
     * @tc.desc: Get root element, then get isEnable attribute.
     */
    it('RootElementGet_0131', 1, async function (done) {
      caseName = "RootElementGet_0131";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0132
     * @tc.name: Get root element, then get isPassword attribute.
     * @tc.desc: Get root element, then get isPassword attribute.
     */
    it('RootElementGet_0132', 1, async function (done) {
      caseName = "RootElementGet_0132";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0133
     * @tc.name: Get root element, then get scrollable attribute.
     * @tc.desc: Get root element, then get scrollable attribute.
     */
    it('RootElementGet_0133', 1, async function (done) {
      caseName = "RootElementGet_0133";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0134
     * @tc.name: Get root element, then get editable attribute.
     * @tc.desc: Get root element, then get editable attribute.
     */
    it('RootElementGet_0134', 1, async function (done) {
      caseName = "RootElementGet_0134";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0136
     * @tc.name: Get root element, then get pluralLineSupported attribute.
     * @tc.desc: Get root element, then get pluralLineSupported attribute.
     */
    it('RootElementGet_0136', 1, async function (done) {
      caseName = "RootElementGet_0136";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0138
     * @tc.name: Get root element, then get pluralLineSupported attribute.
     * @tc.desc: Get root element, then get pluralLineSupported attribute.
     */
    it('RootElementGet_0138', 1, async function (done) {
      caseName = "RootElementGet_0138";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0140
     * @tc.name: Get root element, then get itemCount attribute.
     * @tc.desc: Get root element, then get itemCount attribute.
     */
    it('RootElementGet_0140', 1, async function (done) {
      caseName = "RootElementGet_0140";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0141
     * @tc.name: Get root element, then get currentIndex attribute.
     * @tc.desc: Get root element, then get currentIndex attribute.
     */
    it('RootElementGet_0141', 1, async function (done) {
      caseName = "RootElementGet_0141";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0142
     * @tc.name: Get root element, then get startIndex attribute.
     * @tc.desc: Get root element, then get startIndex attribute.
     */
    it('RootElementGet_0142', 1, async function (done) {
      caseName = "RootElementGet_0142";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0143
     * @tc.name: Get root element, then get endIndex attribute.
     * @tc.desc: Get root element, then get endIndex attribute.
     */
    it('RootElementGet_0143', 1, async function (done) {
      caseName = "RootElementGet_0143";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0149
     * @tc.name: Get root element, then get error attribute.
     * @tc.desc: Get root element, then get error attribute.
     */
    it('RootElementGet_0149', 1, async function (done) {
      caseName = "RootElementGet_0149";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0153
     * @tc.name: Get root element, then get textMoveUnit attribute.
     * @tc.desc: Get root element, then get textMoveUnit attribute.
     */
    it('RootElementGet_0153', 1, async function (done) {
      caseName = "RootElementGet_0153";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0154
     * @tc.name: Get root element, then get children attribute.
     * @tc.desc: Get root element, then get children attribute.
     */
    it('RootElementGet_0154', 1, async function (done) {
      caseName = "RootElementGet_0154";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0155
     * @tc.name: Get root element, then get checked attribute.
     * @tc.desc: Get root element, then get checked attribute.
     */
    it('RootElementGet_0155', 1, async function (done) {
      caseName = "RootElementGet_0155";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0160
     * @tc.name: Get root element, then get isFocused attribute.
     * @tc.desc: Get root element, then get isFocused attribute.
     */
    it('RootElementGet_0160', 1, async function (done) {
      caseName = "RootElementGet_0160";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0161
     * @tc.name: Get root element, then get componentId attribute.
     * @tc.desc: Get root element, then get componentId attribute.
     */
    it('RootElementGet_0161', 1, async function (done) {
      caseName = "RootElementGet_0161";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: RootElementGet_0162
    * @tc.name: Get root element, then get componentId attribute.
    * @tc.desc: Get root element, then get componentId attribute.
    */
    it('RootElementGet_0162', 1, async function (done) {
      caseName = "RootElementGet_0162";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: RootElementGet_0163
    * @tc.name: Get root element, then get valueMax attribute.
    * @tc.desc: Get root element, then get valueMax attribute.
    */
    it('RootElementGet_0163', 1, async function (done) {
      caseName = "RootElementGet_0163";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: RootElementGet_0164
    * @tc.name: Get root element, then get valueMin attribute.
    * @tc.desc: Get root element, then get valueMin attribute.
    */
    it('RootElementGet_0164', 1, async function (done) {
      caseName = "RootElementGet_0164";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
    * @tc.number: RootElementGet_0165
    * @tc.name: Get root element, then get valueNow attribute.
    * @tc.desc: Get root element, then get valueNow attribute.
    */
    it('RootElementGet_0165', 1, async function (done) {
      caseName = "RootElementGet_0165";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })

    /**
     * @tc.number: RootElementGet_0030
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0030', 1, async function (done) {
      caseName = "RootElementGet_0030";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0031
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0031', 1, async function (done) {
      caseName = "RootElementGet_0031";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0040
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0040', 1, async function (done) {
      caseName = "RootElementGet_0040";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
  })
}

