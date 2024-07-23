/*
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import CommonFunc from '../../MainAbility/utils/Common';
import {
  UiComponent,
  UiDriver,
  Component,
  Driver,
  UiWindow,
  ON,
  BY,
  MatchPattern,
  DisplayRotation,
  ResizeDirection,
  WindowMode,
  PointerMatrix
} from '@ohos.UiTest';

export default function SwipeGestureExample03Test() {
  describe('SwipeGestureExample03Test', () => {
    beforeEach(async (done: Function) => {
      console.info("SwipeGestureExample03Test beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/SwipeGesture/SwipeGestureExample03',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get SwipeGestureExample03Test state pages:" + JSON.stringify(pages));
        if (!("SwipeGestureExample03" == pages.name)) {
          console.info("get SwipeGestureExample03Test pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push SwipeGestureExample03Test page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push SwipeGestureExample03Test page error:" + err);
      }
      console.info("SwipeGestureExample03Test beforeEach end");
      done();
    });

    afterEach(async () => {
      await CommonFunc.sleep(2000);
      console.info("SwipeGestureExample03Test after each called");
    });

    /**
     * @tc.number
     * @tc.name SwipeGestureExample03Test_0010
     * @tc.desc api test TapGesture
     * @tc.level: Level
     * @tc.type :
     * @tc.size :
     */
    it('SwipeGestureExample03Test_0010', 0, async (done: Function) => {
      console.info('SwipeGestureExample03Test_0010 START');
      await CommonFunc.sleep(1000);
      let areaObj1 = CommonFunc.getComponentRectOnScreen('SwipeGestureExample03_Click');
      let areaHeight1 = areaObj1.bottom - areaObj1.top
      let areaWidth1 = areaObj1.right - areaObj1.left
      console.log('SwipeGestureExample03Test_0010 areaObj1 start', areaObj1.left, areaObj1.top, areaObj1.right, areaObj1.bottom)
      console.log('SwipeGestureExample03Test_0010 areaObj1 clicked finger[0] start', Math.round(areaObj1.left + areaWidth1 * 0.2), Math.round(areaObj1.top + areaHeight1 / 2))
      console.log('SwipeGestureExample03Test_0010 areaObj1 clicked finger[0] end', Math.round(areaObj1.left + areaWidth1 * 0.7), Math.round(areaObj1.top + areaHeight1 / 2))
      console.log('SwipeGestureExample03Test_0010 areaObj1 clicked finger[1] start', Math.round(areaObj1.left + areaWidth1 * 0.3), Math.round(areaObj1.top + areaHeight1 / 2))
      console.log('SwipeGestureExample03Test_0010 areaObj1 clicked finger[1] end', Math.round(areaObj1.left + areaWidth1 * 0.8), Math.round(areaObj1.top + areaHeight1 / 2))
      let driver: Driver = Driver.create();
      let speed = Math.floor(areaWidth1 * 0.5 / 0.016 / 1000) * 1000
      await CommonFunc.sleep(1000);
      let pointers: PointerMatrix = PointerMatrix.create(2, 2);
      pointers.setPoint(0, 0, {
        x: Math.round(areaObj1.left + areaWidth1 * 0.2), y: Math.round(areaObj1.top + areaHeight1 / 2)
      });
      pointers.setPoint(0, 1, {
        x: Math.round(areaObj1.left + areaWidth1 * 0.7), y: Math.round(areaObj1.top + areaHeight1 / 2)
      });
      pointers.setPoint(1, 0, {
        x: Math.round(areaObj1.left + areaWidth1 * 0.3), y: Math.round(areaObj1.top + areaHeight1 / 2)
      });
      pointers.setPoint(1, 1, {
        x: Math.round(areaObj1.left + areaWidth1 * 0.8), y: Math.round(areaObj1.top + areaHeight1 / 2)
      });
      await driver.injectMultiPointerAction(pointers, speed);
      await CommonFunc.sleep(4000);

      // 拖动之后重新获取当前区域的位置信息
      let FatherObj = CommonFunc.getComponentRectOnScreen('SwipeGestureExample03_Father');
      let FatherObjHeight = FatherObj.bottom - FatherObj.top
      let FatherObjWidth = FatherObj.right - FatherObj.left
      console.log('SwipeGestureExample03Test_0010 FatherObj', FatherObj.left, FatherObj.top, FatherObj.right, FatherObj.bottom)
      await CommonFunc.sleep(1000);
      let areaObj = CommonFunc.getComponentRectOnScreen('SwipeGestureExample03_Click');
      let areaHeight = areaObj.bottom - areaObj.top
      let areaWidth = areaObj.right - areaObj.left
      console.log('SwipeGestureExample03Test_0010 areaObj', areaObj.left, areaObj.top, areaObj.right, areaObj.bottom)

      let text1 = getInspectorByKey('SwipeGestureExample03_repeat');
      console.log('SwipeGestureExample03Test_0010 obj1 $attrs content', JSON.parse(text1)
        .$attrs
        .content, JSON.parse(text1))
      expect(JSON.parse(text1).$attrs.content).assertEqual('repeat:false');

      await CommonFunc.sleep(200);
      let text2 = getInspectorByKey('SwipeGestureExample03_offsetX');
      console.log('SwipeGestureExample03Test_0010 obj2 $attrs content', JSON.parse(text2).$attrs.content)
      expect(JSON.parse(text2).$attrs.content).assertEqual('0');

      await CommonFunc.sleep(200);
      let text3 = getInspectorByKey('SwipeGestureExample03_offsetY');
      console.log('SwipeGestureExample03Test_0010 obj3 $attrs content', JSON.parse(text3).$attrs.content)
      expect(JSON.parse(text3).$attrs.content).assertEqual('0');

      await CommonFunc.sleep(200);
      let text4 = getInspectorByKey('SwipeGestureExample03_angle');
      console.log('SwipeGestureExample03Test_0010 obj4 $attrs content', JSON.parse(text4)
        .$attrs
        .content, JSON.parse(text4))
      expect(JSON.parse(text4).$attrs.content).assertEqual('angle:0');

      await CommonFunc.sleep(200);
      let text5 = getInspectorByKey('SwipeGestureExample03_scale');
      console.log('SwipeGestureExample03Test_0010 obj5 $attrs content', JSON.parse(text5)
        .$attrs
        .content, JSON.parse(text5))
      expect(JSON.parse(text5).$attrs.content).assertEqual('scale:1');

      await CommonFunc.sleep(200);
      let text6 = getInspectorByKey('SwipeGestureExample03_pinchCenterX');
      console.log('SwipeGestureExample03Test_0010 obj6 $attrs content', JSON.parse(text6)
        .$attrs
        .content, JSON.parse(text6))
      expect(JSON.parse(text6).$attrs.content).assertEqual('pinchCenterX:0');

      await CommonFunc.sleep(200);
      let text7 = getInspectorByKey('SwipeGestureExample03_pinchCenterY');
      console.log('SwipeGestureExample03Test_0010 obj7 $attrs content', JSON.parse(text7)
        .$attrs
        .content, JSON.parse(text7))
      expect(JSON.parse(text7).$attrs.content).assertEqual('pinchCenterY:0');

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text9 = getInspectorByKey('SwipeGestureExample03_fingerList_id');
      console.log('SwipeGestureExample03Test_0010 obj9 $attrs content', JSON.parse(text9)
        .$attrs
        .content, JSON.parse(text9))
      expect(JSON.parse(text9).$attrs.content).assertEqual('fingerList_id:0');

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text10 = getInspectorByKey('SwipeGestureExample03_fingerList_globalX');
      console.log('SwipeGestureExample03Test_0010 obj10 $attrs content', vp2px(Number(JSON.parse(text10)
        .$attrs
        .content)), Math.round(areaObj1.left + areaWidth1 * 0.7))
      console.log('SwipeGestureExample03Test_0010 obj10 $attrs fingerList_globalX', JSON.parse(text10)
        .$attrs
        .content, Number(JSON.parse(text10).$attrs.content), vp2px(Number(JSON.parse(text10).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text10)
        .$attrs
        .content))) - (Math.round(areaObj1.left + areaWidth1 * 0.7)))) <= 1).assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text11 = getInspectorByKey('SwipeGestureExample03_fingerList_globalY');
      console.log('SwipeGestureExample03Test_0010 obj11 $attrs content', vp2px(Number(JSON.parse(text11)
        .$attrs
        .content)), Math.round(areaObj1.top + areaHeight1 / 2))
      console.log('SwipeGestureExample03Test_0010 obj11 $attrs fingerList_globalY', JSON.parse(text11)
        .$attrs
        .content, Number(JSON.parse(text11).$attrs.content), vp2px(Number(JSON.parse(text11).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text11)
        .$attrs
        .content))) - (Math.round(areaObj1.top + areaHeight1 / 2)))) <= 1).assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text12 = getInspectorByKey('SwipeGestureExample03_fingerList_localX');
      console.log('SwipeGestureExample03Test_0010 obj12 $attrs content', vp2px(Number(JSON.parse(text12)
        .$attrs
        .content)), Math.round(areaObj1.left + areaWidth1 * 0.7) - areaObj1.left)
      console.log('SwipeGestureExample03Test_0010 obj12 $attrs localX', JSON.parse(text12)
        .$attrs
        .content, Number(JSON.parse(text12).$attrs.content), vp2px(Number(JSON.parse(text12).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text12)
        .$attrs
        .content))) - (Math.round(areaObj1.left + areaWidth1 * 0.7) - areaObj1.left))) <= 1).assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text13 = getInspectorByKey('SwipeGestureExample03_fingerList_localY');
      console.log('SwipeGestureExample03Test_0010 obj13 $attrs content', vp2px(Number(JSON.parse(text13)
        .$attrs
        .content)), Math.round(areaObj1.top + areaHeight1 / 2) - areaObj1.top)
      console.log('SwipeGestureExample03Test_0010 obj13 $attrs localY', JSON.parse(text13)
        .$attrs
        .content, Number(JSON.parse(text13).$attrs.content), vp2px(Number(JSON.parse(text13).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text13)
        .$attrs
        .content))) - (Math.round(areaObj1.top + areaHeight1 / 2) - areaObj1.top))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text9f = getInspectorByKey('SwipeGestureExample03_fingerList1_id');
      console.log('SwipeGestureExample03Test_0010 obj9f $attrs content', JSON.parse(text9f)
        .$attrs
        .content, JSON.parse(text9f))
      expect(JSON.parse(text9f).$attrs.content).assertEqual('fingerList1_id:1');

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text10f = getInspectorByKey('SwipeGestureExample03_fingerList1_globalX');
      console.log('SwipeGestureExample03Test_0010 obj10f $attrs content', vp2px(Number(JSON.parse(text10f)
        .$attrs
        .content)), Math.round(areaObj1.left + areaWidth1 * 0.8))
      console.log('SwipeGestureExample03Test_0010 obj10f $attrs fingerList1_globalX', JSON.parse(text10f)
        .$attrs
        .content, Number(JSON.parse(text10f).$attrs.content), vp2px(Number(JSON.parse(text10f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text10f)
        .$attrs
        .content))) - (Math.round(areaObj1.left + areaWidth1 * 0.8)))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text11f = getInspectorByKey('SwipeGestureExample03_fingerList1_globalY');
      console.log('SwipeGestureExample03Test_0010 obj11f $attrs content', vp2px(Number(JSON.parse(text11f)
        .$attrs
        .content)), Math.round(areaObj1.top + areaHeight1 / 2))
      console.log('SwipeGestureExample03Test_0010 obj11f $attrs fingerList1_globalY', JSON.parse(text11f)
        .$attrs
        .content, Number(JSON.parse(text11f).$attrs.content), vp2px(Number(JSON.parse(text11f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text11f)
        .$attrs
        .content))) - (Math.round(areaObj1.top + areaHeight1 / 2)))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text12f = getInspectorByKey('SwipeGestureExample03_fingerList1_localX');
      console.log('SwipeGestureExample03Test_0010 obj12f $attrs content', vp2px(Number(JSON.parse(text12f)
        .$attrs
        .content)), Math.round(areaObj1.left + areaWidth1 * 0.8) - areaObj1.left)
      console.log('SwipeGestureExample03Test_0010 obj12f $attrs localX', JSON.parse(text12f)
        .$attrs
        .content, Number(JSON.parse(text12f).$attrs.content), vp2px(Number(JSON.parse(text12f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text12f)
        .$attrs
        .content))) - (Math.round(areaObj1.left + areaWidth1 * 0.8) - areaObj1.left))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text13f = getInspectorByKey('SwipeGestureExample03_fingerList1_localY');
      console.log('SwipeGestureExample03Test_0010 obj13f $attrs content', vp2px(Number(JSON.parse(text13f)
        .$attrs
        .content)), Math.round(areaObj1.top + areaHeight1 / 2) - areaObj1.top)
      console.log('SwipeGestureExample03Test_0010 obj13f $attrs localY', JSON.parse(text13f)
        .$attrs
        .content, Number(JSON.parse(text13f).$attrs.content), vp2px(Number(JSON.parse(text13f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text13f)
        .$attrs
        .content))) - (Math.round(areaObj1.top + areaHeight1 / 2) - areaObj1.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text16 = getInspectorByKey('SwipeGestureExample03_target_area_width');
      console.log('SwipeGestureExample03Test_0010 obj16 $attrs content', JSON.parse(text16)
        .$attrs
        .content, JSON.parse(text16))
      expect(JSON.parse(text16).$attrs.content).assertEqual('target_area_width:160');

      await CommonFunc.sleep(200);
      let text17 = getInspectorByKey('SwipeGestureExample03_target_area_height');
      console.log('SwipeGestureExample03Test_0010 obj17 $attrs content', JSON.parse(text17)
        .$attrs
        .content, JSON.parse(text17))
      expect(JSON.parse(text17).$attrs.content).assertEqual('target_area_height:80');

      await CommonFunc.sleep(200);
      let text18 = getInspectorByKey('SwipeGestureExample03_target_area_position_x');
      console.log('SwipeGestureExample03Test_0010 obj18 $attrs content', vp2px(Number(JSON.parse(text18)
        .$attrs
        .content)), areaObj1.left - FatherObj.left)
      console.log('SwipeGestureExample03Test_0010 obj18 $attrs position_x', JSON.parse(text18)
        .$attrs
        .content, Number(JSON.parse(text18).$attrs.content), vp2px(Number(JSON.parse(text18).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text18)
        .$attrs
        .content))) - (areaObj1.left - FatherObj.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text19 = getInspectorByKey('SwipeGestureExample03_target_area_position_y');
      console.log('SwipeGestureExample03Test_0010 obj19 $attrs content', vp2px(Number(JSON.parse(text19)
        .$attrs
        .content)), areaObj1.top - FatherObj.top)
      console.log('SwipeGestureExample03Test_0010 obj19 $attrs position_y', JSON.parse(text19)
        .$attrs
        .content, Number(JSON.parse(text19).$attrs.content), vp2px(Number(JSON.parse(text19).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text19)
        .$attrs
        .content))) - (areaObj1.top - FatherObj.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text20 = getInspectorByKey('SwipeGestureExample03_target_area_globalPosition_x');
      console.log('SwipeGestureExample03Test_0010 obj20 $attrs content', vp2px(Number(JSON.parse(text20)
        .$attrs
        .content)), areaObj1.left)
      console.log('SwipeGestureExample03Test_0010 obj20 $attrs area_globalPosition_x', JSON.parse(text20)
        .$attrs
        .content, Number(JSON.parse(text20).$attrs.content), vp2px(Number(JSON.parse(text20).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text20).$attrs.content))) - (areaObj1.left))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text21 = getInspectorByKey('SwipeGestureExample03_target_area_globalPosition_y');
      console.log('SwipeGestureExample03Test_0010 obj21 $attrs content', vp2px(Number(JSON.parse(text21)
        .$attrs
        .content)), areaObj1.top)
      console.log('SwipeGestureExample03Test_0010 obj21 $attrs area_globalPosition_y', JSON.parse(text21)
        .$attrs
        .content, Number(JSON.parse(text21).$attrs.content), vp2px(Number(JSON.parse(text21).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text21).$attrs.content))) - (areaObj1.top))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text22 = getInspectorByKey('SwipeGestureExample03_source');
      console.log('SwipeGestureExample03Test_0010 obj22 $attrs content', JSON.parse(text22)
        .$attrs
        .content, JSON.parse(text22))
      expect(JSON.parse(text22).$attrs.content).assertEqual('source:2');

      await CommonFunc.sleep(200);
      let text23 = getInspectorByKey('SwipeGestureExample03_pressure');
      console.log('SwipeGestureExample03Test_0010 obj23 $attrs content', JSON.parse(text23)
        .$attrs
        .content, JSON.parse(text23))
      expect(JSON.parse(text23).$attrs.content).assertEqual('pressure:0');

      await CommonFunc.sleep(200);
      let text24 = getInspectorByKey('SwipeGestureExample03_tiltX');
      console.log('SwipeGestureExample03Test_0010 obj24 $attrs content', JSON.parse(text24)
        .$attrs
        .content, JSON.parse(text24))
      expect(JSON.parse(text24).$attrs.content).assertEqual('tiltX:0');

      await CommonFunc.sleep(200);
      let text25 = getInspectorByKey('SwipeGestureExample03_tiltY');
      console.log('SwipeGestureExample03Test_0010 obj25 $attrs content', JSON.parse(text25)
        .$attrs
        .content, JSON.parse(text25))
      expect(JSON.parse(text25).$attrs.content).assertEqual('tiltY:0');

      await CommonFunc.sleep(200);
      let text26 = getInspectorByKey('SwipeGestureExample03_sourceTool');
      console.log('SwipeGestureExample03Test_0010 obj26 $attrs content', JSON.parse(text26)
        .$attrs
        .content, JSON.parse(text26))
      expect(JSON.parse(text26).$attrs.content).assertEqual('sourceTool:FINGER');

      console.info('SwipeGestureExample03Test_0010 END');
      done();
    });
  })
}
