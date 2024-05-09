/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import router from '@system.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import Utils from './Utils.ets'
import events_emitter from '@ohos.events.emitter';

export default function refreshDragJsunit() {
  describe('refreshDragTest', function () {
    beforeEach(async function (done) {
      console.info("flex beforeEach start");
      let options = {
        uri: 'MainAbility/pages/refresh',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get refresh state success " + JSON.stringify(pages));
        if (!("refresh" == pages.name)) {
          console.info("get refresh state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push refresh page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push refresh page error: " + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("refreshDrag after each called");
    });

    /**
      * @tc.number: SUB_ACE_BASIC_TEST_REFRESH_0100
      * @tc.name: Test the refresh of components
      * @tc.desc: Set refreshOffset
      * @tc.size: MediumTest
      * @tc.type: Function
      * @tc.level: Level 0
      */
    it('ArkUI_Refresh_0100', 0, async function (done) {
      console.info('ArkUI_Refresh_0100 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('Refresh');
      console.info("[ArkUI_Refresh_0100] component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Refresh_0100] refreshOffset value :" + obj.$attrs.refreshOffset);
      expect(obj.$attrs.refreshOffset).assertEqual('2.00vp');
      done();
    });

    /**
      * @tc.number: SUB_ACE_BASIC_TEST_REFRESH_0200
      * @tc.name: Test the refresh of components
      * @tc.desc: Set pullToRefresh
      * @tc.size: MediumTest
      * @tc.type: Function
      * @tc.level: Level 0
      */
    it('ArkUI_Refresh_0200', 0, async function (done) {
      console.info('ArkUI_Refresh_0200 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('Refresh');
      console.info("[ArkUI_Refresh_0200] component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      console.info("[ArkUI_Refresh_0200] pullToRefresh value :" + obj.$attrs.pullToRefresh);
      expect(obj.$attrs.pullToRefresh).assertEqual(true);
      done();
    });
  })
}
