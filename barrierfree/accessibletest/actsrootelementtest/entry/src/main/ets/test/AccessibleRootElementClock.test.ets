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
  console.info(logTag+'ActsAccessibleRootElementClockTest excuteCase: ' + caseNamePara);

  function publishCallback(err) {
    console.info(logTag+caseNamePara + " publish call back result:" + JSON.stringify(err));
  }
  var commonEventPublishData = {
    data: caseNamePara
  }
  commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);

  setTimeout(function (){
    commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
  }, 4000);

}

export default function AccessibleRootElementClockTest() {

  describe('ActsAccessibleRootElementClockTest', function () {
    beforeAll(async function (done) {
      console.info(logTag+'ActsAccessibleRootElementClockTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(logTag+'ActsAccessibleRootElementClockTest beforeAll subscribe data:' + JSON.stringify(data) );
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

      globalThis.abilityContext.startAbility({
        bundleName: "ohos.samples.clock",
        abilityName: "ohos.samples.clock.default"
      },(error, data) => {
        console.info(logTag + "startAbility " + JSON.stringify(error) + ", " + JSON.stringify(data));
        setTimeout(() => {
          config.enableAbility('com.example.myapplicationxtsd/ServiceExtAbilityAllAbility',
            ['retrieve', 'keyEventObserver', 'gesture']).then(() => {
            console.info('AccessibleReceiveEventsTest beforeAll enableAbility success ');
          });
        }, 3000);
      })
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info('ActsAccessibleRootElementClockTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.disableAbility("com.example.myapplicationxtsd/ServiceExtAbilityAllAbility").then(() => {
        console.info('ActsAccessibleRootElementClockTest afterAll disableAbility success');
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
     * @tc.number: RootElementGet_0050
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0050', 1, async function (done) {
      caseName = "RootElementGet_0050";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0051
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0051', 1, async function (done) {
      caseName = "RootElementGet_0051";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0060
     * @tc.name: Get target application's window root element.
     * @tc.desc: Get target application's window root element.
     */
    it('RootElementGet_0060', 1, async function (done) {
      caseName = "RootElementGet_0060";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = target && assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0090
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0090', 1, async function (done) {
      caseName = "RootElementGet_0090";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0091
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0091', 1, async function (done) {
      caseName = "RootElementGet_0091";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0100
     * @tc.name: Get system application's window root element.
     * @tc.desc: Get system application's window root element.
     */
    it('RootElementGet_0100', 1, async function (done) {
      caseName = "RootElementGet_0100";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0101
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0101', 1, async function (done) {
      caseName = "RootElementGet_0101";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT)
    })
    /**
     * @tc.number: RootElementGet_0102
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0102', 1, async function (done) {
      caseName = "RootElementGet_0102";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0103
     * @tc.name: Get root element, then get rootElement attribute.
     * @tc.desc: Get root element, then get rootElement attribute.
     */
    it('RootElementGet_0103', 1, async function (done) {
      caseName = "RootElementGet_0103";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_undefined;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0104
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0104', 1, async function (done) {
      caseName = "RootElementGet_0104";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0105
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0105', 1, async function (done) {
      caseName = "RootElementGet_0105";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: RootElementGet_0106
     * @tc.name: Get root element, then get parent attribute.
     * @tc.desc: Get root element, then get parent attribute.
     */
    it('RootElementGet_0106', 1, async function (done) {
      caseName = "RootElementGet_0106";
      excuteCase(caseName)
      setTimeout(() => {
        isSucceed = !assist_success;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
  })
}

