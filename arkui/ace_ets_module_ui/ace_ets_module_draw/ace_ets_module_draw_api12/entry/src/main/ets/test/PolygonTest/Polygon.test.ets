/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/common/Common';
export default function PolygonTest() {
  describe('PolygonTest', () => {
    beforeEach(async (done: Function) => {
      console.info("PolygonTest beforeEach start");
      let options: router.RouterOptions = {
        url: "MainAbility/pages/Polygon/Polygon",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get Polygon state pages: " + JSON.stringify(pages));
        if (!("Polygon" == pages.name)) {
          console.info("get Polygon state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push Polygon success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push Polygon page error: " + err);
        expect().assertFail();
      }
      done();
    });

    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("Polygon after each called");
    });
    /**
     * @tc.number
     * @tc.name      PolygonTest_001
     * @tc.desc      Polygon Width
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Polygon_001', 0, async (done: Function) => {
      console.info('Polygon_001 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Polygon_1');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Polygon_001 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(String(obj.$attrs.width)).assertEqual('100.00vp');
      console.info('Polygon_001 END');
      done();
    });

    /**
     * @tc.number
     * @tc.name      PolygonTest_002
     * @tc.desc      Polygon Height
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Polygon_002', 0, async (done: Function) => {
      console.info('Polygon_002 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Polygon_2');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Polygon_002 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(string(obj.$attrs.height)).assertEqual('100.00vp');
      console.info('Polygon_002 END');
      done();
    });
  })
}

