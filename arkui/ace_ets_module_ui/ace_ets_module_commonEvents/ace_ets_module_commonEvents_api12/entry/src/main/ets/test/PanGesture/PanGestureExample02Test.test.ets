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
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';

export default function PanGestureExample02Test() {
  describe('PanGestureExample02Test', ()=> {
    beforeEach(async   (done:Function)=> {
      console.info("PanGestureExample02Test beforeEach start");
      let options:router.RouterOptions = {
        url:'MainAbility/pages/PanGesture/PanGestureExample02',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get PanGestureExample02Test state pages:" + JSON.stringify(pages));
        if (!("PanGestureExample02" == pages.name)) {
          console.info("get PanGestureExample02Test pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push PanGestureExample02Test page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push PanGestureExample02Test page error:" + err);
      }
      console.info("PanGestureExample02Test beforeEach end");
      done();
    });

    afterEach(async   () =>{
      await CommonFunc.sleep(2000);
      console.info("PanGestureExample02Test after each called");
    });

    /**
     * @tc.number
     * @tc.name      PanGestureExample02Test_0010
     * @tc.desc      api test TapGesture
     * @tc.level:    Level
     * @tc.type :
     * @tc.size :
     */
    it('PanGestureExample02Test_0010', 0, async   (done:Function)=> {
      console.info('PanGestureExample02Test_0010 START');
      await CommonFunc.sleep(1000);
      let areaObj1 = CommonFunc.getComponentRectOnScreen('PanGestureExample02_Click');
      let areaHeight1 = areaObj1.bottom - areaObj1.top
      let areaWidth1 = areaObj1.right - areaObj1.left
      console.log('PanGestureExample02Test_0010 areaObj1',areaObj1.left,areaObj1.top,areaObj1.right,areaObj1.bottom)
      console.log('PanGestureExample02Test_0010 areaObj1 clicked start',Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.8))
      console.log('PanGestureExample02Test_0010 areaObj1 clicked end',Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.8))

      let driver = Driver.create();
      await CommonFunc.sleep(1000);
      await driver.swipe(Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.2),Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.8))
      await CommonFunc.sleep(3000);
      // 拖动之后重新获取当前区域的位置信息
      let FatherObj = CommonFunc.getComponentRectOnScreen('PanGestureExample02_Father');
      let FatherObjHeight = FatherObj.bottom - FatherObj.top
      let FatherObjWidth = FatherObj.right - FatherObj.left
      console.log('PanGestureExample02Test_0010 FatherObj',FatherObj.left,FatherObj.top,FatherObj.right,FatherObj.bottom)
      await CommonFunc.sleep(1000);
      let areaObj = CommonFunc.getComponentRectOnScreen('PanGestureExample02_Click');
      let areaHeight = areaObj.bottom - areaObj.top
      let areaWidth = areaObj.right - areaObj.left

      console.log('PanGestureExample02Test_0010 areaObj',areaObj.left,areaObj.top,areaObj.right,areaObj.bottom)
      console.log('PanGestureExample02Test_0010 areaObj clicked start',Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.2))
      console.log('PanGestureExample02Test_0010 areaObj clicked end'  ,Math.round(areaObj1.left + areaWidth1/2),Math.round(areaObj1.top + areaHeight1 * 0.8))

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj1 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_repeat')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_repeat')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_repeat')).$attrs.content).assertEqual('repeat:false');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj2 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetX')).$attrs.content)), Math.round(areaObj1.left + areaWidth1/2) - Math.round(areaObj1.left + areaWidth1/2));
      console.log('PanGestureExample02Test_0010 obj2 $attrs offsetX', JSON.parse(getInspectorByKey('PanGestureExample02_offsetX')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetX')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetX')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetX')).$attrs.content))) - (Math.round(areaObj1.left + areaWidth1/2) - Math.round(areaObj1.left + areaWidth1/2)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj3 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetY')).$attrs.content)), Math.round(areaObj1.top + areaHeight1 * 0.8) - Math.round(areaObj1.top + areaHeight1 * 0.2));
      console.log('PanGestureExample02Test_0010 obj3 $attrs offsetY', JSON.parse(getInspectorByKey('PanGestureExample02_offsetY')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetY')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetY')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_offsetY')).$attrs.content))) - (Math.round(areaObj1.top + areaHeight1 * 0.8) - Math.round(areaObj1.top + areaHeight1 * 0.2)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj4 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_angle')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_angle')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_angle')).$attrs.content).assertEqual('angle:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj5 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_scale')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_scale')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_scale')).$attrs.content).assertEqual('scale:1');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj6 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterX')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterX')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterX')).$attrs.content).assertEqual('pinchCenterX:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj7 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterY')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterY')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_pinchCenterY')).$attrs.content).assertEqual('pinchCenterY:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj9 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_id')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_id')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_id')).$attrs.content).assertEqual('fingerList_id:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj10 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalX')).$attrs.content)), Math.round(areaObj1.left + areaWidth1/2));
      console.log('PanGestureExample02Test_0010 obj10 $attrs fingerList_globalX', JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalX')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalX')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalX')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalX')).$attrs.content))) - (Math.round(areaObj1.left + areaWidth1/2)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj11 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalY')).$attrs.content)), Math.round(areaObj1.top + areaHeight1 * 0.8));
      console.log('PanGestureExample02Test_0010 obj11 $attrs fingerList_globalY', JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalY')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalY')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalY')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_globalY')).$attrs.content))) - (Math.round(areaObj1.top + areaHeight1 * 0.8)))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj12 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localX')).$attrs.content)), Math.round(areaObj1.left + areaWidth1/2) - areaObj1.left);
      console.log('PanGestureExample02Test_0010 obj12 $attrs localX', JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localX')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localX')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localX')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localX')).$attrs.content))) - (Math.round(areaObj1.left + areaWidth1/2) - areaObj1.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj13 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localY')).$attrs.content)), Math.round(areaObj1.top + areaHeight1 * 0.8) - areaObj1.top);
      console.log('PanGestureExample02Test_0010 obj13 $attrs localY', JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localY')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localY')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localY')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_fingerList_localY')).$attrs.content))) - (Math.round(areaObj1.top + areaHeight1 * 0.8) - areaObj1.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj16 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_width')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_target_area_width')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_width')).$attrs.content).assertEqual('target_area_width:240');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj17 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_height')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_target_area_height')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_height')).$attrs.content).assertEqual('target_area_height:80');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj18 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_x')).$attrs.content)), areaObj1.left - FatherObj.left);
      console.log('PanGestureExample02Test_0010 obj18 $attrs position_x', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_x')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_x')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_x')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_x')).$attrs.content))) - (areaObj1.left - FatherObj.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj19 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_y')).$attrs.content)), areaObj1.top - FatherObj.top);
      console.log('PanGestureExample02Test_0010 obj19 $attrs position_y', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_y')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_y')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_y')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_position_y')).$attrs.content))) - (areaObj1.top - FatherObj.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj20 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_x')).$attrs.content)), areaObj1.left);
      console.log('PanGestureExample02Test_0010 obj20 $attrs area_globalPosition_x', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_x')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_x')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_x')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_x')).$attrs.content))) - (areaObj1.left))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj21 $attrs content', vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_y')).$attrs.content)), areaObj1.top);
      console.log('PanGestureExample02Test_0010 obj21 $attrs area_globalPosition_y', JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_y')).$attrs.content, Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_y')).$attrs.content), vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_y')).$attrs.content)));
      expect(Math.abs(Math.round((vp2px(Number(JSON.parse(getInspectorByKey('PanGestureExample02_target_area_globalPosition_y')).$attrs.content))) - (areaObj1.top))) <= 1).assertTrue();

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj22 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_source')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_source')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_source')).$attrs.content).assertEqual('source:2');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj23 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_pressure')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_pressure')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_pressure')).$attrs.content).assertEqual('pressure:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj24 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_tiltX')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_tiltX')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_tiltX')).$attrs.content).assertEqual('tiltX:0');

      await CommonFunc.sleep(200);
      console.log('PanGestureExample02Test_0010 obj25 $attrs content', JSON.parse(getInspectorByKey('PanGestureExample02_tiltY')).$attrs.content, JSON.parse(getInspectorByKey('PanGestureExample02_tiltY')));
      expect(JSON.parse(getInspectorByKey('PanGestureExample02_tiltY')).$attrs.content).assertEqual('tiltY:0');

      await CommonFunc.sleep(200);
      let text26 = getInspectorByKey('PanGestureExample02_sourceTool');
      console.log('PanGestureExample02Test_0010 obj26 $attrs content',JSON.parse(text26).$attrs.content,JSON.parse(text26))
      expect(JSON.parse(text26).$attrs.content).assertEqual('sourceTool:FINGER');

      console.info('PanGestureExample02Test_0010 END');
      done();
    });
  })
}
