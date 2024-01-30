/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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

import { describe, beforeEach, afterEach, it, expect } from '@ohos/hypium'
import events_emitter from '@ohos.events.emitter';
import Utils from './Utils';
import router from '@system.router';
export default function videoJsunit() {
  describe('videoJsunit', function () {
    beforeEach(async function (done) {
      console.info("video beforeEach start");
      let options = {
        uri: 'MainAbility/pages/video',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state pages: " + JSON.stringify(pages));
        if (!("video" == pages.name)) {
          console.info("get video state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push video page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    /**
     * @tc.number ArkUI_Stage_video04
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_video04', 0, async function (done) {
      console.info('[ArkUI_Stage_video04] START');
      let strJson = getInspectorByKey('videotest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_video04] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.opacity).assertEqual(0.5);
      console.info('[ArkUI_Stage_video04] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_video01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_video05', 0, async function (done) {
      console.info('ArkUI_Stage_video05 START test transition');
      let indexEvent = {
        eventId: 233,
        priority: events_emitter.EventPriority.LOW
      }
      await Utils.sleep(1000);
      let callback = (indexEvent) => {
        console.info("ArkUI_Stage_video05 get state result is: " + JSON.stringify(indexEvent));
        expect(indexEvent.data.btn1).assertEqual(false);
      }
      try {
        events_emitter.on(indexEvent, callback);
      } catch (err) {
        console.info("ArkUI_Stage_video05 on events_emitter err : " + JSON.stringify(err));
      }
      console.info("ArkUI_Stage_video05 click result is: " + JSON.stringify(sendEventByKey('testbuttion', 10, "")));
      await Utils.sleep(3000);
      console.info('ArkUI_Stage_video05 END');
      done();
    });
  })
}
