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
export default function imageJsunit() {
  describe('imageJsunit', function () {
    beforeEach(async function (done) {
      console.info("image beforeEach start");
      let options = {
        uri: 'MainAbility/pages/image',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get image state pages: " + JSON.stringify(pages));
        if (!("image" == pages.name)) {
          console.info("get image state pages.name: " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push image page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push image page error: " + err);
      }
      done();
    });

    /**
     * @tc.number ArkUI_Stage_image01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_image01', 0, async function (done) {
      console.info('[ArkUI_Stage_image01] START');
      let strJson = getInspectorByKey('imagetest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_image01] obj is: " + JSON.stringify(obj.$attrs));
      let border = JSON.parse(obj.$attrs.border);
      expect(border.color.left).assertEqual("#FF654321");
      expect(border.width.left).assertEqual("3.00px");
      console.info('[ArkUI_Stage_image01] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_image02
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_image02', 0, async function (done) {
      console.info('[ArkUI_Stage_image01] START');
      let strJson = getInspectorByKey('imagetest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_image02] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.borderRadius.topLeft).assertEqual("11.00px");
      expect(obj.$attrs.borderRadius.topRight).assertEqual("12.00px");
      expect(obj.$attrs.borderRadius.bottomLeft).assertEqual("13.00px");
      expect(obj.$attrs.borderRadius.bottomRight).assertEqual("14.00px");
      console.info('[ArkUI_Stage_image02] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_image03
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_image03', 0, async function (done) {
      console.info('[ArkUI_Stage_image03] START');
      let strJson = getInspectorByKey('imagetest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_image03] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.draggable).assertEqual("true");
      console.info('[ArkUI_Stage_image03] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_image04
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_image04', 0, async function (done) {
      console.info('[ArkUI_Stage_image04] START');
      let strJson = getInspectorByKey('imagetest');
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Stage_image04] obj is: " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.opacity).assertEqual(0.5);
      console.info('[ArkUI_Stage_image04] END');
      done();
    });

    /**
     * @tc.number ArkUI_Stage_image01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('ArkUI_Stage_image05', 0, async function (done) {
      console.info('ArkUI_Stage_image05 START Test transition');
      let indexEvent = {
        eventId: 233,
        priority: events_emitter.EventPriority.LOW
      }
      await Utils.sleep(1000);
      let callback = (indexEvent) => {
        console.info("ArkUI_Stage_image05 get state result is: " + JSON.stringify(indexEvent));
        expect(indexEvent.data.btn1).assertEqual(false);
      }
      try {
        events_emitter.on(indexEvent, callback);
      } catch (err) {
        console.info("ArkUI_Stage_image05 on events_emitter err : " + JSON.stringify(err));
      }
      console.info("ArkUI_Stage_image05 click result is: " + JSON.stringify(sendEventByKey('Imagetest', 10, "")));
      await Utils.sleep(3000);
      console.info('ArkUI_Stage_image05 END');
      done();
    });
  })
}
