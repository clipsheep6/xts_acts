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
export default function swiperAutoPlay_4() {
  describe('swiperAutoPlayTest', function () {
    let autoPlay04_1;
    let autoPlay04_2;
    let autoPlay04_3;
    let autoPlay04_4;
    let autoPlay04_5;
    let autoPlay04_6;
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
              autoPlay04_1 = CommonFunc.getComponentRect('autoPlay04_1');
            }
            if (index == 1) {
              autoPlay04_2 = CommonFunc.getComponentRect('autoPlay04_2');
            }
            if (index == 2) {
              autoPlay04_3 = CommonFunc.getComponentRect('autoPlay04_3');
            }
            if (index == 3) {
              autoPlay04_4 = CommonFunc.getComponentRect('autoPlay04_4');
            }
            if (index == 4) {
              autoPlay04_5 = CommonFunc.getComponentRect('autoPlay04_5');
            }
            if (index == 5) {
              autoPlay04_6 = CommonFunc.getComponentRect('autoPlay04_6');
            }
          }
        }
      } catch(error) {
        console.error(`indexChangeCallBack failed. Cause:` + JSON.stringify(error));
      }
    }
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/Swiper/Swiper_ParmsChange/swiperAutoPlay_4',
      }
      try {
        CommonFunc.registerEvent(timeChangeCallBack, 10);
        CommonFunc.registerEvent(indexChangeCallBack, 11);
        router.clear();
        await CommonFunc.sleep(1000);
        let pages = router.getState();
        console.info("get swiperAutoPlay_4 state success " + JSON.stringify(pages));
        if (!("swiperAutoPlay_4" == pages.name)) {
          console.info("get swiperAutoPlay_4 state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push swiperAutoPlay_4 page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push swiperAutoPlay_4 page error " + JSON.stringify(err));
      }
    });
    afterEach(async function () {
      console.info("swiperAutoPlay_4 after each called");
    });

    /**
     * @tc.number    SUB_ACE_SWIPER_VERTICALCHANGED_0400
     * @tc.name      testSwiperAutoPlaySetting_4
     * @tc.desc      Set swiper's  AutoPlay  value ' false ' and interval values '-1000'.
     */
    it('testSwiperAutoPlaySetting_4', 0, async function (done) {
      console.info('new testSwiperAutoPlaySetting_4 START');
      let strJson = getInspectorByKey('autoPlay04');
      let obj = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Swiper');
      expect(obj.$attrs.autoPlay).assertEqual('true');
      expect(obj.$attrs.loop).assertEqual('true');
      expect(obj.$attrs.itemSpace).assertEqual('0.00vp');
      expect(obj.$attrs.displayCount).assertEqual(1);
      expect(obj.$attrs.interval).assertEqual('3000');
      let autoPlay04 = CommonFunc.getComponentRect('autoPlay04');
      await CommonFunc.sleep(4000);
      console.info("Autoplay page turning , the autoPlay04.left value is " + JSON.stringify(autoPlay04.left));
      expect(autoPlay04.right - autoPlay04.left).assertEqual(vp2px(300));
      expect(autoPlay04.bottom - autoPlay04.top).assertEqual(vp2px(300));
      expect(autoPlay04_1.right - autoPlay04_1.left).assertEqual(vp2px(300));
      expect(autoPlay04_1.bottom - autoPlay04_1.top).assertEqual(vp2px(300));
      expect(autoPlay04_2.right - autoPlay04_2.left).assertEqual(vp2px(300));
      expect(autoPlay04_2.bottom - autoPlay04_2.top).assertEqual(vp2px(300));
      expect(autoPlay04_3.right - autoPlay04_3.left).assertEqual(vp2px(300));
      expect(autoPlay04_3.bottom - autoPlay04_3.top).assertEqual(vp2px(300));
      expect(autoPlay04_4.right - autoPlay04_4.left).assertEqual(vp2px(300));
      expect(autoPlay04_4.bottom - autoPlay04_4.top).assertEqual(vp2px(300));
      expect(autoPlay04_5.right - autoPlay04_5.left).assertEqual(vp2px(300));
      expect(autoPlay04_5.bottom - autoPlay04_5.top).assertEqual(vp2px(300));
      expect(autoPlay04_6.right - autoPlay04_6.left).assertEqual(vp2px(300));
      expect(autoPlay04_6.bottom - autoPlay04_6.top).assertEqual(vp2px(300));
      expect(timeIntervalOverCount).assertEqual(1);
      console.info('new testSwiperAutoPlaySetting_3 END');
      done();
    });
  })
}