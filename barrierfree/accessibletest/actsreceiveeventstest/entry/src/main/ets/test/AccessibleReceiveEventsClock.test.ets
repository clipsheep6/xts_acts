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
import config from '@ohos.accessibility.config';
import accessibility from '@ohos.accessibility'
import abilityDelegatorRegistry from '@ohos.application.abilityDelegatorRegistry';

const delegator = abilityDelegatorRegistry.getAbilityDelegator();
const bundleName = abilityDelegatorRegistry.getArguments().bundleName;

async function startAbility(bundleName: string, abilityName: string) {
    await delegator.executeShellCommand(`aa start -b ${bundleName} -a ${abilityName}`).then(result => {
        console.info(`ActsAccessibleRootElementClockTest, start abilityFinished: ${result}`)
    }).catch(err => {
        console.error(`ActsAccessibleRootElementClockTest, start abilityFailed: ${err}`)
    })
}

const START_TIMEOUT = 5000;
let caseName = '';
let target: boolean = false;
let target_b: boolean = false;
let assist_click: boolean = false;
let assist_select: boolean = false;
const logTag = "[xtsLog] "
let isSucceed: boolean = false;
let subScriber = undefined;
let subscriberInfo = {
  events: ["on_assist_change_extra","on_target_change_extra"],
};
const EXPECT_TIMEOUT = 7000;

export default function AccessibleReceiveEventsClockTest() {

  describe('ActsAccessibleReceiveEventsTest', function () {
    beforeAll(async function (done) {
      console.info(logTag+'AccessibleReceiveEventsTest: beforeAll');
      subScriber = await commonEvent.createSubscriber(subscriberInfo);
      commonEvent.subscribe(subScriber, (err, data) => {
        console.info(logTag+'AccessibleReceiveEventsTest beforeAll subscribe data:' + JSON.stringify(data) );
        if (data.data) {
          console.info(logTag+ data.data );
          switch (data.data) {
            case "on_target_change_extra_success":
              target =true;
              break;
            case "on_target_change_b_extra_success":
              target_b =true;
              break;
            case "on_assist_change_extra_click":
              assist_click =true;
              break;
            case "on_assist_change_extra_select":
              assist_select =true;
              break;
            default:
              break;
          }
        }
      });
      config.enableAbility('com.example.myapplicationxtsd/ServiceExtReceiveAbility',
        ['retrieve', 'keyEventObserver', 'gesture']).then(() => {
        console.info('AccessibleReceiveEventsTest beforeAll enableAbility success' );
      });
      setTimeout(done(), START_TIMEOUT);
    });

    afterAll(async function (done) {
      console.info('AccessibleReceiveEventsTest: afterAll');
      commonEvent.unsubscribe(subScriber);
      config.disableAbility("com.example.myapplicationxtsd/ServiceExtReceiveAbility").then(() => {
        console.info('AccessibleReceiveEventsTest afterAll disableAbility success');
      });
      done();
    });
    beforeEach(async function (done) {
      setTimeout(() => {
        isSucceed = false;
        target_b = false;
        assist_click = false;
        assist_select = false;
        target =false;
        done();
      }, 2000);
    });
    afterEach(async function (done) {
      setTimeout(() => {
        done();
      }, 2000);
    });
    /**
     * @tc.number: ReceiveEventsFilter_0290
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0290', 3, async function (done) {
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0290";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
        setTimeout(function (){
          commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
        }, 1000);
      }, 2000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target && target_b && assist_click && assist_select;
        console.info(logTag + caseName + ' target : ' + target  + ' target_b : ' + target_b + ' assist_click : ' + assist_click + ' assist_select :' + assist_select);
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0300
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0300', 3, async function (done) {
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0300";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
        setTimeout(function (){
          commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
        }, 1000);
      }, 2000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target && target_b && assist_click;
        console.info(logTag + ' target : ' + target  + ' target_b : ' + target_b + ' assist_click : ' + assist_click);
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
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0320";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
      }, 1000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target_b && !assist_click && !assist_select;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0610
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0610', 3, async function (done) {
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0610";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
        setTimeout(function (){
          commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
        }, 1000);
      }, 2000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target && target_b && assist_click && assist_select;
        console.info(logTag + caseName + ' target : ' + target  + ' target_b : ' + target_b + ' assist_click : ' + assist_click + ' assist_select :' + assist_select);
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
    /**
     * @tc.number: ReceiveEventsFilter_0620
     * @tc.name: When the filter event type is set, only the corresponding event can be received.
     * @tc.desc: When the filter event type is set, only the corresponding event can be received.
     */
    it('ReceiveEventsFilter_0620', 3, async function (done) {
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0620";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change", commonEventPublishData, publishCallback);
        setTimeout(function (){
          commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
        }, 1000);
      }, 2000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target && target_b && assist_click;
        console.info(logTag + ' target : ' + target  + ' target_b : ' + target_b + ' assist_click : ' + assist_click);
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
    it('ReceiveEventsFilter_0640', 1, async function (done) {
      await startAbility('com.example.myapplicationevent', 'com.example.myapplicationevent.MainAbility');
      caseName = "ReceiveEventsFilter_0640";
      var commonEventPublishData = {
        data: caseName
      }
      function publishCallback(err) {
        console.info(logTag+caseName + " publish call back result:" + JSON.stringify(err));
      }
      commonEvent.publish("on_assist_change", commonEventPublishData, publishCallback);
      setTimeout(function (){
        commonEvent.publish("on_target_change_b", commonEventPublishData, publishCallback);
      }, 2000);
      await startAbility('com.example.myapplicationxtsd', 'com.example.myapplicationxtsd.MainAbility');
      setTimeout(() => {
        isSucceed = target_b && !assist_click && !assist_select;
        console.info(logTag + caseName + ' isSucceed : ' + isSucceed);
        expect(isSucceed).assertEqual(true);
        done();
      }, EXPECT_TIMEOUT);
    })
  })
}

