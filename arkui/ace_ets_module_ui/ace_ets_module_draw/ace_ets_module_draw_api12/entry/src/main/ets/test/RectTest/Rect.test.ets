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
export default function PolylineTest() {
  describe('RectTest', () => {
    beforeEach(async (done: Function) => {
      console.info("RectTest beforeEach start");
      let options: router.RouterOptions = {
        url: "MainAbility/pages/Rect/Rect",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get Rect state pages: " + JSON.stringify(pages));
        if (!("Rect" == pages.name)) {
          console.info("get Rect state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push Rect success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push Rect page error: " + err);
        expect().assertFail();
      }
      done();
    });

    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("Rect after each called");
    });
    /**
     * @tc.number
     * @tc.name      RectTest_001
     * @tc.desc      api
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Rect_001', 0, async (done: Function) => {
      console.info('Rect_001 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Rect_1');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Rect_001 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.width).assertEqual(100);
      console.info('Rect_001 END');
      done();
    });

    /**
     * @tc.number
     * @tc.name      RectTest_002
     * @tc.desc      api
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Rect_002', 0, async (done: Function) => {
      console.info('Rect_002 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Rect_1');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Rect_002 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.height).assertEqual(100);
      console.info('Rect_002 END');
      done();
    });

    /**
     * @tc.number
     * @tc.name      RectTest_003
     * @tc.desc      api
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Rect_003', 0, async (done: Function) => {
      console.info('Rect_003 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Rect_1');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Rect_003 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.radius).assertEqual(10);
      console.info('Rect_003 END');
      done();
    });

    /**
     * @tc.number
     * @tc.name      RectTest_004
     * @tc.desc      api
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Rect_004', 0, async (done: Function) => {
      console.info('Rect_004 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Rect_2');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Rect_004 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.radiusWidth).assertEqual(18);
      console.info('Rect_004 END');
      done();
    });

    /**
     * @tc.number
     * @tc.name      RectTest_005
     * @tc.desc      api
     * @tc.level:
     * @tc.type :
     * @tc.size :
     */
    it('Rect_005', 0, async (done: Function) => {
      console.info('Rect_005 START');
      await CommonFunc.sleep(1000);
      let strJson = getInspectorByKey('Rect_2');
      await CommonFunc.sleep(200);
      let obj: ESObject = JSON.parse(strJson);
      console.info("Rect_005 component obj is: " + JSON.stringify(obj));
      await CommonFunc.sleep(1000);
      expect(obj.$attrs.radiusHeight).assertEqual(15);
      console.info('Rect_005 END');
      done();
    });
  })
}

