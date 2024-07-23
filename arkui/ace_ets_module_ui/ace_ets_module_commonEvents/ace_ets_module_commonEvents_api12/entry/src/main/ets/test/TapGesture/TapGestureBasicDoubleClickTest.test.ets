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

export default function TapGestureBasicDoubleClickTest() {
  describe('TapGestureBasicDoubleClickTest', () => {
    beforeEach(async (done: Function) => {
      console.info("TapGestureBasicDoubleClickTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/TapGesture/TapGestureBasicDoubleClick',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get TapGestureBasicDoubleClickTest state pages:" + JSON.stringify(pages));
        if (!("TapGestureBasicDoubleClick" == pages.name)) {
          console.info("get TapGestureBasicDoubleClickTest pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push TapGestureBasicDoubleClickTest page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push TapGestureBasicDoubleClickTest page error:" + err);
      }
      console.info("TapGestureBasicDoubleClickTest beforeEach end");
      done();
    });
    afterEach(async () => {
      await CommonFunc.sleep(2000);
      console.info("TapGestureBasicDoubleClickTest after each called");
    });

    /**
     * @tc.number
     * @tc.name TapGestureBasicDoubleClickTest_0010
     * @tc.desc api test TapGesture
     * @tc.level: Level
     * @tc.type :
     * @tc.size :
     */
    it('TapGestureBasicDoubleClickTest_0010', 0, async (done: Function) => {
      console.info('TapGestureBasicDoubleClickTest_0010 START');
      await CommonFunc.sleep(1000);
      let FatherObj = CommonFunc.getComponentRectOnScreen('TapGestureBasicDoubleClick_Father');
      let FatherObjHeight = FatherObj.bottom - FatherObj.top
      let FatherObjWidth = FatherObj.right - FatherObj.left
      console.log('TapGestureBasicDoubleClickTest_0010 FatherObj', FatherObj.left, FatherObj.top, FatherObj.right, FatherObj.bottom)
      await CommonFunc.sleep(1000);
      let areaObj = CommonFunc.getComponentRectOnScreen('TapGestureBasicDoubleClick_Click');
      let areaHeight = areaObj.bottom - areaObj.top
      let areaWidth = areaObj.right - areaObj.left
      console.log('TapGestureBasicDoubleClickTest_0010 areaObj', areaObj.left, areaObj.top, areaObj.right, areaObj.bottom)
      console.log('TapGestureBasicDoubleClickTest_0010 areaObj clicked', Math.round(areaObj.left + areaWidth / 2), Math.round(areaObj.top + areaHeight / 2))

      let driver = Driver.create();
      await CommonFunc.sleep(1000);
      await driver.doubleClick(Math.round(areaObj.left + areaWidth / 2), Math.round(areaObj.top + areaHeight / 2));
      await CommonFunc.sleep(3000);
      let text1 = getInspectorByKey('TapGestureBasicDoubleClick_repeat');
      console.log('TapGestureBasicDoubleClickTest_0010 obj1 $attrs content', JSON.parse(text1)
        .$attrs
        .content, JSON.parse(text1))
      expect(JSON.parse(text1).$attrs.content).assertEqual('repeat:false');

      await CommonFunc.sleep(200);
      let text2 = getInspectorByKey('TapGestureBasicDoubleClick_offsetX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj2 $attrs content', JSON.parse(text2)
        .$attrs
        .content, JSON.parse(text2))
      expect(JSON.parse(text2).$attrs.content).assertEqual('offsetX:0');

      await CommonFunc.sleep(200);
      let text3 = getInspectorByKey('TapGestureBasicDoubleClick_offsetY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj3 $attrs content', JSON.parse(text3)
        .$attrs
        .content, JSON.parse(text3))
      expect(JSON.parse(text3).$attrs.content).assertEqual('offsetY:0');

      await CommonFunc.sleep(200);
      let text4 = getInspectorByKey('TapGestureBasicDoubleClick_angle');
      console.log('TapGestureBasicDoubleClickTest_0010 obj4 $attrs content', JSON.parse(text4)
        .$attrs
        .content, JSON.parse(text4))
      expect(JSON.parse(text4).$attrs.content).assertEqual('angle:0');

      await CommonFunc.sleep(200);
      let text5 = getInspectorByKey('TapGestureBasicDoubleClick_scale');
      console.log('TapGestureBasicDoubleClickTest_0010 obj5 $attrs content', JSON.parse(text5)
        .$attrs
        .content, JSON.parse(text5))
      expect(JSON.parse(text5).$attrs.content).assertEqual('scale:1');

      await CommonFunc.sleep(200);
      let text6 = getInspectorByKey('TapGestureBasicDoubleClick_pinchCenterX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj6 $attrs content', JSON.parse(text6)
        .$attrs
        .content, JSON.parse(text6))
      expect(JSON.parse(text6).$attrs.content).assertEqual('pinchCenterX:0');

      await CommonFunc.sleep(200);
      let text7 = getInspectorByKey('TapGestureBasicDoubleClick_pinchCenterY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj7 $attrs content', JSON.parse(text7)
        .$attrs
        .content, JSON.parse(text7))
      expect(JSON.parse(text7).$attrs.content).assertEqual('pinchCenterY:0');

      await CommonFunc.sleep(200);
      let text8 = getInspectorByKey('TapGestureBasicDoubleClick_speed');
      console.log('TapGestureBasicDoubleClickTest_0010 obj8 $attrs content', JSON.parse(text8)
        .$attrs
        .content, JSON.parse(text8))
      expect(JSON.parse(text8).$attrs.content).assertEqual('speed:0');

      await CommonFunc.sleep(200);
      let text9 = getInspectorByKey('TapGestureBasicDoubleClick_fingerList_id');
      console.log('TapGestureBasicDoubleClickTest_0010 obj9 $attrs content', JSON.parse(text9)
        .$attrs
        .content, JSON.parse(text9))
      expect(JSON.parse(text9).$attrs.content).assertEqual('fingerList_id:0');

      await CommonFunc.sleep(200);
      let text10 = getInspectorByKey('TapGestureBasicDoubleClick_fingerList_globalX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj10 $attrs content', JSON.parse(text10)
        .$attrs
        .content, JSON.parse(text10))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text10)
        .$attrs
        .content))) - (Math.round(areaObj.left + areaWidth / 2)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text11 = getInspectorByKey('TapGestureBasicDoubleClick_fingerList_globalY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj11 $attrs content', JSON.parse(text11)
        .$attrs
        .content, JSON.parse(text11))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text11)
        .$attrs
        .content))) - (Math.round(areaObj.top + areaHeight / 2)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text12 = getInspectorByKey('TapGestureBasicDoubleClick_fingerList_localX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj12 $attrs content', JSON.parse(text12)
        .$attrs
        .content, JSON.parse(text12))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text12)
        .$attrs
        .content))) - (Math.round(areaObj.left + areaWidth / 2) - areaObj.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text13 = getInspectorByKey('TapGestureBasicDoubleClick_fingerList_localY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj13 $attrs content', JSON.parse(text13)
        .$attrs
        .content, JSON.parse(text13))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text13)
        .$attrs
        .content))) - (Math.round(areaObj.top + areaHeight / 2) - areaObj.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text16 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_width');
      console.log('TapGestureBasicDoubleClickTest_0010 obj16 $attrs content', JSON.parse(text16)
        .$attrs
        .content, JSON.parse(text16))
      expect(JSON.parse(text16).$attrs.content).assertEqual('target_area_width:240');

      await CommonFunc.sleep(200);
      let text17 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_height');
      console.log('TapGestureBasicDoubleClickTest_0010 obj17 $attrs content', JSON.parse(text17)
        .$attrs
        .content, JSON.parse(text17))
      expect(JSON.parse(text17).$attrs.content).assertEqual('target_area_height:80');

      await CommonFunc.sleep(200);
      let text18 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_position_x');
      console.log('TapGestureBasicDoubleClickTest_0010 obj18 $attrs content', JSON.parse(text18)
        .$attrs
        .content, JSON.parse(text18))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text18)
        .$attrs
        .content))) - (areaObj.left - FatherObj.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text19 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_position_y');
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text19)
        .$attrs
        .content))) - (areaObj.top - FatherObj.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      let text20 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_globalPosition_x');
      console.log('TapGestureBasicDoubleClickTest_0010 obj20 $attrs content', JSON.parse(text20)
        .$attrs
        .content, JSON.parse(text20))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text20).$attrs.content))) - (areaObj.left))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text21 = getInspectorByKey('TapGestureBasicDoubleClick_target_area_globalPosition_y');
      console.log('TapGestureBasicDoubleClickTest_0010 obj21 $attrs content', JSON.parse(text21)
        .$attrs
        .content, JSON.parse(text21))
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(text21).$attrs.content))) - (areaObj.top))) <= 1)
        .assertTrue();

      await CommonFunc.sleep(200);
      let text22 = getInspectorByKey('TapGestureBasicDoubleClick_source');
      console.log('TapGestureBasicDoubleClickTest_0010 obj22 $attrs content', JSON.parse(text22)
        .$attrs
        .content, JSON.parse(text22))
      expect(JSON.parse(text22).$attrs.content).assertEqual('source:2');

      await CommonFunc.sleep(200);
      let text23 = getInspectorByKey('TapGestureBasicDoubleClick_pressure');
      console.log('TapGestureBasicDoubleClickTest_0010 obj23 $attrs content', JSON.parse(text23)
        .$attrs
        .content, JSON.parse(text23))
      expect(JSON.parse(text23).$attrs.content).assertEqual('pressure:0');

      await CommonFunc.sleep(200);
      let text24 = getInspectorByKey('TapGestureBasicDoubleClick_tiltX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj24 $attrs content', JSON.parse(text24)
        .$attrs
        .content, JSON.parse(text24))
      expect(JSON.parse(text24).$attrs.content).assertEqual('tiltX:0');

      await CommonFunc.sleep(200);
      let text25 = getInspectorByKey('TapGestureBasicDoubleClick_tiltY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj25 $attrs content', JSON.parse(text25)
        .$attrs
        .content, JSON.parse(text25))
      expect(JSON.parse(text25).$attrs.content).assertEqual('tiltY:0');

      await CommonFunc.sleep(200);
      let text26 = getInspectorByKey('TapGestureBasicDoubleClick_sourceTool');
      console.log('TapGestureBasicDoubleClickTest_0010 obj26 $attrs content', JSON.parse(text26)
        .$attrs
        .content, JSON.parse(text26))
      expect(JSON.parse(text26).$attrs.content).assertEqual('sourceTool:FINGER');

      await CommonFunc.sleep(200);
      let text27 = getInspectorByKey('TapGestureBasicDoubleClick_velocityX');
      console.log('TapGestureBasicDoubleClickTest_0010 obj27 $attrs content', JSON.parse(text27)
        .$attrs
        .content, JSON.parse(text27))
      expect(JSON.parse(text27).$attrs.content).assertEqual('velocityX:0');

      await CommonFunc.sleep(200);
      let text28 = getInspectorByKey('TapGestureBasicDoubleClick_velocityY');
      console.log('TapGestureBasicDoubleClickTest_0010 obj28 $attrs content', JSON.parse(text28)
        .$attrs
        .content, JSON.parse(text28))
      expect(JSON.parse(text28).$attrs.content).assertEqual('velocityY:0');

      await CommonFunc.sleep(200);
      let text29 = getInspectorByKey('TapGestureBasicDoubleClick_velocity');
      console.log('TapGestureBasicDoubleClickTest_0010 obj29 $attrs content', JSON.parse(text29)
        .$attrs
        .content, JSON.parse(text29))
      expect(JSON.parse(text29).$attrs.content).assertEqual('velocity:0');

      console.info('TapGestureBasicDoubleClickTest_0010 END');
      done();
    });
  })
}
