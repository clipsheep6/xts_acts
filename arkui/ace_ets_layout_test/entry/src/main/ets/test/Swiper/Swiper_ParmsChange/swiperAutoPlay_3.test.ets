/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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

import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium";
import router from '@system.router';
import CommonFunc from "../../../MainAbility/common/Common";
import { UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix, UiDirection, MouseButton } from '@ohos.UiTest';
export default function swiperAutoPlay_3() {
  describe('swiperAutoPlayTest', function () {
    let autoPlay03_1;
    let autoPlay03_2;
    let autoPlay03_3;
    let autoPlay03_4;
    let autoPlay03_5;
    let autoPlay03_6;
    let count = 0;
    let timeIntervalOverCount = 0;
    let oldPageTime = 0
    function timeChangeCallBack(eventData){
      try {
        console.info("swiperAutoPlay_3 page timeChangeCallBack");
        if(eventData != null){
          let timeInterval = 0;
          let time = eventData.data.ACTION
          count++
          console.info("timeChangeCallBack:"+ JSON.stringify(eventData));
          if (count < 2) {
            oldPageTime = time;
          }else{
            timeInterval = (time - oldPageTime) / 1000;
            oldPageTime = time;
          }
          console.info("timeInterval:"+ timeInterval);
          if (Math.round(timeInterval) != 3){ //Sliding interval is 3s
            timeIntervalOverCount++;
            console.info("timeInterval is:"+ Math.round(timeInterval));
          }
        }
      } catch(error) {
        console.error(`timeChangeCallBack failed. Cause:` + JSON.stringify(error));
      }
    }
    function indexChangeCallBack(eventData){
      try {
        console.info("swiperAutoPlay_3 page indexChangeCallBack");
        if (eventData != null) {
          console.info("valueChangeCallBack:" + JSON.stringify(eventData));
          if (eventData.data.ACTION != null) {
            let index = eventData.data.ACTION;
            console.info("swiperAutoPlay_3 page index=" + index);
            if (index == 0) {
              autoPlay03_1 = CommonFunc.getComponentRect('autoPlay03_1');
            }
            if (index == 1) {
              autoPlay03_2 = CommonFunc.getComponentRect('autoPlay03_2');
            }
            if (index == 2) {
              autoPlay03_3 = CommonFunc.getComponentRect('autoPlay03_3');
            }
            if (index == 3) {
              autoPlay03_4 = CommonFunc.getComponentRect('autoPlay03_4');
            }
            if (index == 4) {
              autoPlay03_5 = CommonFunc.getComponentRect('autoPlay03_5');
            }
            if (index == 5) {
              autoPlay03_6 = CommonFunc.getComponentRect('autoPlay03_6');
            }
          }
        }
      } catch(error) {
        console.error(`indexChangeCallBack failed. Cause:` + JSON.stringify(error));
      }
    }
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/Swiper/Swiper_ParmsChange/swiperAutoPlay_3',
      }
      try {
        CommonFunc.registerEvent(timeChangeCallBack, 10);
        CommonFunc.registerEvent(indexChangeCallBack, 11);
        router.clear();
        await CommonFunc.sleep(1000);
        let pages = router.getState();
        console.info("get swiperAutoPlay_3 state success " + JSON.stringify(pages));
        if (!("swiperAutoPlay_3" == pages.name)) {
          console.info("get swiperAutoPlay_3 state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push swiperAutoPlay_3 page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push swiperAutoPlay_3 page error " + JSON.stringify(err));
      }
    });
    afterEach(async function () {
      console.info("swiperAutoPlay_3 after each called");
    });

    /**
     * @tc.number    SUB_ACE_SWIPER_VERTICALCHANGED_0300
     * @tc.name      testSwiperAutoPlaySetting_3
     * @tc.desc      Set swiper's  AutoPlay  value ' true '.
     */
    it('testSwiperAutoPlaySetting_3', 0, async function (done) {
      console.info('new testSwiperAutoPlaySetting_3 START');
      let strJson = getInspectorByKey('autoPlay03');
      let obj = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Swiper');
      expect(obj.$attrs.autoPlay).assertEqual('true');
      expect(obj.$attrs.loop).assertEqual('true');
      expect(obj.$attrs.itemSpace).assertEqual('0.00vp');
      expect(obj.$attrs.displayCount).assertEqual(1);
      expect(obj.$attrs.interval).assertEqual('3000');
      let autoPlay03 = CommonFunc.getComponentRect('autoPlay03');
      await CommonFunc.sleep(4000);
      console.info("Autoplay page turning , the autoPlay03.left value is " + JSON.stringify(autoPlay03.left));
      expect(autoPlay03.right - autoPlay03.left).assertEqual(vp2px(300));
      expect(autoPlay03.bottom - autoPlay03.top).assertEqual(vp2px(300));
      expect(autoPlay03_1.right - autoPlay03_1.left).assertEqual(vp2px(300));
      expect(autoPlay03_1.bottom - autoPlay03_1.top).assertEqual(vp2px(300));
      expect(autoPlay03_2.right - autoPlay03_2.left).assertEqual(vp2px(300));
      expect(autoPlay03_2.bottom - autoPlay03_2.top).assertEqual(vp2px(300));
      expect(autoPlay03_3.right - autoPlay03_3.left).assertEqual(vp2px(300));
      expect(autoPlay03_3.bottom - autoPlay03_3.top).assertEqual(vp2px(300));
      expect(autoPlay03_4.right - autoPlay03_4.left).assertEqual(vp2px(300));
      expect(autoPlay03_4.bottom - autoPlay03_4.top).assertEqual(vp2px(300));
      expect(autoPlay03_5.right - autoPlay03_5.left).assertEqual(vp2px(300));
      expect(autoPlay03_5.bottom - autoPlay03_5.top).assertEqual(vp2px(300));
      expect(autoPlay03_6.right - autoPlay03_6.left).assertEqual(vp2px(300));
      expect(autoPlay03_6.bottom - autoPlay03_6.top).assertEqual(vp2px(300));
      expect(timeIntervalOverCount).assertEqual(1);
      console.info('new testSwiperAutoPlaySetting_3 END');
      done();
    });
  })
}