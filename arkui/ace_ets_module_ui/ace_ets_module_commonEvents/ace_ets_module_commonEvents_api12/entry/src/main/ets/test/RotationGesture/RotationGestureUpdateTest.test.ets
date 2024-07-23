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

export default function RotationGestureUpdateTest() {
  describe('RotationGestureUpdateTest', () => {
    beforeEach(async (done: Function) => {
      console.info("RotationGestureUpdateTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/RotationGesture/RotationGestureUpdate',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get RotationGestureUpdateTest state pages:" + JSON.stringify(pages));
        if (!("RotationGestureUpdate" == pages.name)) {
          console.info("get RotationGestureUpdateTest pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push RotationGestureUpdateTest page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push RotationGestureUpdateTest page error:" + err);
      }
      console.info("RotationGestureUpdateTest beforeEach end");
      done();
    });

    afterEach(async () => {
      await CommonFunc.sleep(2000);
      console.info("RotationGestureUpdateTest after each called");
    });

    /**
     * @tc.number
     * @tc.name RotationGestureUpdateTest_0010
     * @tc.desc api test RotationGesture
     * @tc.level: Level
     * @tc.type :
     * @tc.size :
     */
    it('RotationGestureUpdateTest_0010', 0, async (done: Function) => {
      console.info('RotationGestureUpdateTest_0010 START');
      await CommonFunc.sleep(1000);
      let areaObj1 = CommonFunc.getComponentRectOnScreen('RotationGestureUpdate_Click');
      let areaHeight1 = areaObj1.bottom - areaObj1.top
      let areaWidth1 = areaObj1.right - areaObj1.left
      console.log('RotationGestureUpdateTest_0010 areaObj1 start', areaObj1.left, areaObj1.top, areaObj1.right, areaObj1.bottom)
      console.log('RotationGestureUpdateTest_0010 areaObj1 clicked finger[0] start', Math.round(areaObj1.left), Math.round(areaObj1.top))
      console.log('RotationGestureUpdateTest_0010 areaObj1 clicked finger[0] end', Math.round(areaObj1.right), Math.round(areaObj1.top))
      console.log('RotationGestureUpdateTest_0010 areaObj1 clicked finger[1] start', Math.round(areaObj1.right), Math.round(areaObj1.bottom))
      console.log('RotationGestureUpdateTest_0010 areaObj1 clicked finger[1] end', Math.round(areaObj1.left), Math.round(areaObj1.bottom))
      let driver: Driver = Driver.create();
      await CommonFunc.sleep(1000);
      let pointers: PointerMatrix = PointerMatrix.create(2, 2);
      pointers.setPoint(0, 0, {
        x: Math.round(areaObj1.left), y: Math.round(areaObj1.top)
      });
      pointers.setPoint(0, 1, {
        x: Math.round(areaObj1.right), y: Math.round(areaObj1.top)
      });
      pointers.setPoint(1, 0, {
        x: Math.round(areaObj1.right), y: Math.round(areaObj1.bottom)
      });
      pointers.setPoint(1, 1, {
        x: Math.round(areaObj1.left), y: Math.round(areaObj1.bottom)
      });
      await driver.injectMultiPointerAction(pointers);
      await CommonFunc.sleep(4000);
      // 拖动之后重新获取当前区域的位置信息
      let FatherObj = CommonFunc.getComponentRectOnScreen('RotationGestureUpdate_Father');
      let FatherObjHeight = FatherObj.bottom - FatherObj.top
      let FatherObjWidth = FatherObj.right - FatherObj.left
      console.log('RotationGestureUpdateTest_0010 FatherObj', FatherObj.left, FatherObj.top, FatherObj.right, FatherObj.bottom)
      await CommonFunc.sleep(1000);
      let areaObj = CommonFunc.getComponentRectOnScreen('RotationGestureUpdate_Click');
      let areaHeight = areaObj.bottom - areaObj.top
      let areaWidth = areaObj.right - areaObj.left
      console.log('RotationGestureUpdateTest_0010 areaObj', areaObj.left, areaObj.top, areaObj.right, areaObj.bottom)

      let text1 = getInspectorByKey('RotationGestureUpdate_repeat');
      console.log('RotationGestureUpdateTest_0010 obj1 $attrs content', JSON.parse(text1)
        .$attrs
        .content, JSON.parse(text1))
      expect(JSON.parse(text1).$attrs.content).assertEqual('repeat:false');

      await CommonFunc.sleep(200);
      let text2 = getInspectorByKey('RotationGestureUpdate_offsetX');
      console.log('RotationGestureUpdateTest_0010 obj2 $attrs content', JSON.parse(text2)
        .$attrs
        .content, JSON.parse(text2))
      expect(JSON.parse(text2).$attrs.content).assertEqual('offsetX:0');

      await CommonFunc.sleep(200);
      let text3 = getInspectorByKey('RotationGestureUpdate_offsetY');
      console.log('RotationGestureUpdateTest_0010 obj3 $attrs content', JSON.parse(text3)
        .$attrs
        .content, JSON.parse(text3))
      expect(JSON.parse(text3).$attrs.content).assertEqual('offsetY:0');

      await CommonFunc.sleep(200);
      let text4 = getInspectorByKey('RotationGestureUpdate_angle');
      console.log('RotationGestureUpdateTest_0010 obj4 $attrs content', JSON.parse(text4)
        .$attrs
        .content, JSON.parse(text4))
      expect(JSON.parse(text4).$attrs.content).assertEqual('angle:90');

      await CommonFunc.sleep(200);
      let text5 = getInspectorByKey('RotationGestureUpdate_scale');
      console.log('RotationGestureUpdateTest_0010 obj5 $attrs content', JSON.parse(text5)
        .$attrs
        .content, JSON.parse(text5))
      expect(JSON.parse(text5).$attrs.content).assertEqual('scale:1');

      await CommonFunc.sleep(200);
      let text6 = getInspectorByKey('RotationGestureUpdate_pinchCenterX');
      console.log('RotationGestureUpdateTest_0010 obj6 $attrs content', JSON.parse(text6)
        .$attrs
        .content, JSON.parse(text6))
      expect(JSON.parse(text6).$attrs.content).assertEqual('pinchCenterX:0');

      await CommonFunc.sleep(200);
      let text7 = getInspectorByKey('RotationGestureUpdate_pinchCenterY');
      console.log('RotationGestureUpdateTest_0010 obj7 $attrs content', JSON.parse(text7)
        .$attrs
        .content, JSON.parse(text7))
      expect(JSON.parse(text7).$attrs.content).assertEqual('pinchCenterY:0');

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text9 = getInspectorByKey('RotationGestureUpdate_fingerList_id');
      console.log('RotationGestureUpdateTest_0010 obj9 $attrs content', JSON.parse(text9)
        .$attrs
        .content, JSON.parse(text9))
      expect(JSON.parse(text9).$attrs.content).assertEqual('fingerList_id:0');

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text10 = getInspectorByKey('RotationGestureUpdate_fingerList_globalX');
      console.log('RotatioroundnGestureBasicTest_0010 obj10 $attrs content', vp2px(Number(JSON.parse(text10)
        .$attrs
        .content)), Math.round(areaObj1.right))
      console.log('RotationGestureUpdateTest_0010 obj10 $attrs fingerList_globalX', JSON.parse(text10)
        .$attrs
        .content, Number(JSON.parse(text10).$attrs.content), vp2px(Number(JSON.parse(text10).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text10)
        .$attrs
        .content))) - (Math.round(areaObj1.right)))) <= 1).assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text11 = getInspectorByKey('RotationGestureUpdate_fingerList_globalY');
      console.log('RotationGestureUpdateTest_0010 obj11 $attrs content', vp2px(Number(JSON.parse(text11)
        .$attrs
        .content)), Math.round(areaObj1.top))
      console.log('RotationGestureUpdateTest_0010 obj11 $attrs fingerList_globalY', JSON.parse(text11)
        .$attrs
        .content, Number(JSON.parse(text11).$attrs.content), vp2px(Number(JSON.parse(text11).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text11).$attrs.content))) - (Math.round(areaObj1.top)))) <= 1)
        .assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text12 = getInspectorByKey('RotationGestureUpdate_fingerList_localX');
      console.log('RotationGestureUpdateTest_0010 obj12 $attrs content', vp2px(Number(JSON.parse(text12)
        .$attrs
        .content)), Math.round(areaObj1.right) - areaObj1.left)
      console.log('RotationGestureUpdateTest_0010 obj12 $attrs localX', JSON.parse(text12)
        .$attrs
        .content, Number(JSON.parse(text12).$attrs.content), vp2px(Number(JSON.parse(text12).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text12)
        .$attrs
        .content))) - (Math.round(areaObj1.right) - areaObj1.left))) <= 1).assertTrue();

      // fingerList[0]
      await CommonFunc.sleep(200);
      let text13 = getInspectorByKey('RotationGestureUpdate_fingerList_localY');
      console.log('RotationGestureUpdateTest_0010 obj13 $attrs content', vp2px(Number(JSON.parse(text13)
        .$attrs
        .content)), Math.round(areaObj1.top) - areaObj1.top)
      console.log('RotationGestureUpdateTest_0010 obj13 $attrs localY', JSON.parse(text13)
        .$attrs
        .content, Number(JSON.parse(text13).$attrs.content), vp2px(Number(JSON.parse(text13).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text13)
        .$attrs
        .content))) - (Math.round(areaObj1.top) - areaObj1.top))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text9f = getInspectorByKey('RotationGestureUpdate_fingerList1_id');
      console.log('RotationGestureUpdateTest_0010 obj9f $attrs content', JSON.parse(text9f)
        .$attrs
        .content, JSON.parse(text9f))
      expect(JSON.parse(text9f).$attrs.content).assertEqual('fingerList1_id:1');

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text10f = getInspectorByKey('RotationGestureUpdate_fingerList1_globalX');
      console.log('RotationGestureUpdateTest_0010 obj10f $attrs content', vp2px(Number(JSON.parse(text10f)
        .$attrs
        .content)), Math.round(areaObj1.left))
      console.log('RotationGestureUpdateTest_0010 obj10f $attrs fingerList1_globalX', JSON.parse(text10f)
        .$attrs
        .content, Number(JSON.parse(text10f).$attrs.content), vp2px(Number(JSON.parse(text10f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text10f).$attrs.content))) - Math.round(areaObj1.left))) <= 1)
        .assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text11f = getInspectorByKey('RotationGestureUpdate_fingerList1_globalY');
      console.log('RotationGestureUpdateTest_0010 obj11f $attrs content', vp2px(Number(JSON.parse(text11f)
        .$attrs
        .content)), Math.round(areaObj1.bottom))
      console.log('RotationGestureUpdateTest_0010 obj11f $attrs fingerList1_globalY', JSON.parse(text11f)
        .$attrs
        .content, Number(JSON.parse(text11f).$attrs.content), vp2px(Number(JSON.parse(text11f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text11f)
        .$attrs
        .content))) - Math.round(areaObj1.bottom))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text12f = getInspectorByKey('RotationGestureUpdate_fingerList1_localX');
      console.log('RotationGestureUpdateTest_0010 obj12f $attrs content', vp2px(Number(JSON.parse(text12f)
        .$attrs
        .content)), Math.round(areaObj1.left) - areaObj1.left)
      console.log('RotationGestureUpdateTest_0010 obj12f $attrs localX', JSON.parse(text12f)
        .$attrs
        .content, Number(JSON.parse(text12f).$attrs.content), vp2px(Number(JSON.parse(text12f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text12f)
        .$attrs
        .content))) - (Math.round(areaObj1.left) - areaObj1.left))) <= 1).assertTrue();

      // fingerList[1]
      await CommonFunc.sleep(200);
      let text13f = getInspectorByKey('RotationGestureUpdate_fingerList1_localY');
      console.log('RotationGestureUpdateTest_0010 obj13f $attrs content', vp2px(Number(JSON.parse(text13f)
        .$attrs
        .content)), Math.round(areaObj1.bottom) - areaObj1.top)
      console.log('RotationGestureUpdateTest_0010 obj13f $attrs localY', JSON.parse(text13f)
        .$attrs
        .content, Number(JSON.parse(text13f).$attrs.content), vp2px(Number(JSON.parse(text13f).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text13f)
        .$attrs
        .content))) - (Math.round(areaObj1.bottom) - areaObj1.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text16 = getInspectorByKey('RotationGestureUpdate_target_area_width');
      console.log('RotationGestureUpdateTest_0010 obj16 $attrs content', JSON.parse(text16)
        .$attrs
        .content, JSON.parse(text16))
      expect(JSON.parse(text16).$attrs.content).assertEqual('target_area_width:160');

      await CommonFunc.sleep(200);
      let text17 = getInspectorByKey('RotationGestureUpdate_target_area_height');
      console.log('RotationGestureUpdateTest_0010 obj17 $attrs content', JSON.parse(text17)
        .$attrs
        .content, JSON.parse(text17))
      expect(JSON.parse(text17).$attrs.content).assertEqual('target_area_height:160');

      await CommonFunc.sleep(200);
      let text18 = getInspectorByKey('RotationGestureUpdate_target_area_position_x');
      console.log('RotationGestureUpdateTest_0010 obj18 $attrs content', vp2px(Number(JSON.parse(text18)
        .$attrs
        .content)), areaObj1.left - FatherObj.left)
      console.log('RotationGestureUpdateTest_0010 obj18 $attrs position_x', JSON.parse(text18)
        .$attrs
        .content, Number(JSON.parse(text18).$attrs.content), vp2px(Number(JSON.parse(text18).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text18)
        .$attrs
        .content))) - (areaObj1.left - FatherObj.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text19 = getInspectorByKey('RotationGestureUpdate_target_area_position_y');
      console.log('RotationGestureUpdateTest_0010 obj19 $attrs content', vp2px(Number(JSON.parse(text19)
        .$attrs
        .content)), areaObj1.top - FatherObj.top)
      console.log('RotationGestureUpdateTest_0010 obj19 $attrs position_y', JSON.parse(text19)
        .$attrs
        .content, Number(JSON.parse(text19).$attrs.content), vp2px(Number(JSON.parse(text19).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text19)
        .$attrs
        .content))) - (areaObj1.top - FatherObj.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text20 = getInspectorByKey('RotationGestureUpdate_target_area_globalPosition_x');
      console.log('RotationGestureUpdateTest_0010 obj20 $attrs content', vp2px(Number(JSON.parse(text20)
        .$attrs
        .content)), areaObj1.left)
      console.log('RotationGestureUpdateTest_0010 obj20 $attrs area_globalPosition_x', JSON.parse(text20)
        .$attrs
        .content, Number(JSON.parse(text20).$attrs.content), vp2px(Number(JSON.parse(text20).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text20).$attrs.content))) - (areaObj1.left))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text21 = getInspectorByKey('RotationGestureUpdate_target_area_globalPosition_y');
      console.log('RotationGestureUpdateTest_0010 obj21 $attrs content', vp2px(Number(JSON.parse(text21)
        .$attrs
        .content)), areaObj1.top)
      console.log('RotationGestureUpdateTest_0010 obj21 $attrs area_globalPosition_y', JSON.parse(text21)
        .$attrs
        .content, Number(JSON.parse(text21).$attrs.content), vp2px(Number(JSON.parse(text21).$attrs.content)))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text21).$attrs.content))) - (areaObj1.top))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text22 = getInspectorByKey('RotationGestureUpdate_source');
      console.log('RotationGestureUpdateTest_0010 obj22 $attrs content', JSON.parse(text22)
        .$attrs
        .content, JSON.parse(text22))
      expect(JSON.parse(text22).$attrs.content).assertEqual('source:2');

      await CommonFunc.sleep(200);
      let text23 = getInspectorByKey('RotationGestureUpdate_pressure');
      console.log('RotationGestureUpdateTest_0010 obj23 $attrs content', JSON.parse(text23)
        .$attrs
        .content, JSON.parse(text23))
      expect(JSON.parse(text23).$attrs.content).assertEqual('pressure:0');

      await CommonFunc.sleep(200);
      let text24 = getInspectorByKey('RotationGestureUpdate_tiltX');
      console.log('RotationGestureUpdateTest_0010 obj24 $attrs content', JSON.parse(text24)
        .$attrs
        .content, JSON.parse(text24))
      expect(JSON.parse(text24).$attrs.content).assertEqual('tiltX:0');

      await CommonFunc.sleep(200);
      let text25 = getInspectorByKey('RotationGestureUpdate_tiltY');
      console.log('RotationGestureUpdateTest_0010 obj25 $attrs content', JSON.parse(text25)
        .$attrs
        .content, JSON.parse(text25))
      expect(JSON.parse(text25).$attrs.content).assertEqual('tiltY:0');

      await CommonFunc.sleep(200);
      let text26 = getInspectorByKey('RotationGestureUpdate_sourceTool');
      console.log('RotationGestureUpdateTest_0010 obj26 $attrs content', JSON.parse(text26)
        .$attrs
        .content, JSON.parse(text26))
      expect(JSON.parse(text26).$attrs.content).assertEqual('sourceTool:FINGER');

      console.info('RotationGestureUpdateTest_0010 END');
      done();
    });
  })
}
