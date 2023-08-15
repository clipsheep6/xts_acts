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
export default function swiperAutoPlay_1() {
  describe('swiperAutoPlayTest', function () {
    let autoPlay01_1;
    let autoPlay01_2;
    let autoPlay01_3;
    let autoPlay01_4;
    let autoPlay01_5;
    let autoPlay01_6;
    let count = 0;
    let timeIntervalOverCount = 0;
    let oldPageTime = 0
    function timeChangeCallBack(eventData){
      try {
        console.info("swiperAutoPlay_1 page timeChangeCallBack");
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
          if (Math.round(timeInterval) != 1){ //Sliding interval is 1s
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
        console.info("swiperAutoPlay_1 page valueChangeCallBack");
        if (eventData != null) {
          console.info("valueChangeCallBack:" + JSON.stringify(eventData));
          if (eventData.data.ACTION != null) {
            let index = eventData.data.ACTION;
            console.info("swiperAutoPlay_1 page index=" + index);
            if (index == 0) {
              autoPlay01_1 = CommonFunc.getComponentRect('autoPlay01_1');
            }
            if (index == 1) {
              autoPlay01_2 = CommonFunc.getComponentRect('autoPlay01_2');
            }
            if (index == 2) {
              autoPlay01_3 = CommonFunc.getComponentRect('autoPlay01_3');
            }
            if (index == 3) {
              autoPlay01_4 = CommonFunc.getComponentRect('autoPlay01_4');
            }
            if (index == 4) {
              autoPlay01_5 = CommonFunc.getComponentRect('autoPlay01_5');
            }
            if (index == 5) {
              autoPlay01_6 = CommonFunc.getComponentRect('autoPlay01_6');
            }
          }
        }
      } catch(error) {
        console.error(`indexChangeCallBack failed. Cause:` + JSON.stringify(error));
      }
    }
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/Swiper/Swiper_ParmsChange/swiperAutoPlay_1',
      }
      try {
        CommonFunc.registerEvent(timeChangeCallBack, 10);
        CommonFunc.registerEvent(indexChangeCallBack, 11);
        router.clear();
        await CommonFunc.sleep(1000);
        let pages = router.getState();
        console.info("get swiperAutoPlay_1 state success " + JSON.stringify(pages));
        if (!("swiperAutoPlay_1" == pages.name)) {
          console.info("get swiperAutoPlay_1 state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push swiperAutoPlay_1 page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push swiperAutoPlay_1 page error " + JSON.stringify(err));
      }
    });
    afterEach(async function () {
      console.info("swiperAutoPlay_1 after each called");
    });

    /**
     * @tc.number    SUB_ACE_SWIPER_AUTOPLAYCHANGED_0100
     * @tc.name      testSwiperAutoPlaySetting_1
     * @tc.desc      Set swiper's  AutoPlay  value ' true ' and interval values '1000'.
     */
    it('testSwiperAutoPlaySetting_1', 0, async function (done) {
      console.info('new testSwiperAutoPlaySetting_1 START');
      let strJson = getInspectorByKey('autoPlay01');
      let obj = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Swiper');
      expect(obj.$attrs.autoPlay).assertEqual('true');
      expect(obj.$attrs.loop).assertEqual('true');
      expect(obj.$attrs.itemSpace).assertEqual('0.00vp');
      expect(obj.$attrs.displayCount).assertEqual(1);
      expect(obj.$attrs.interval).assertEqual('1000');
      let autoPlay01 = CommonFunc.getComponentRect('autoPlay01');
      await CommonFunc.sleep(4000);
      console.info("Autoplay page turning , the autoPlay01.left value is " + JSON.stringify(autoPlay01.left));
      expect(autoPlay01.right - autoPlay01.left).assertEqual(vp2px(300));
      expect(autoPlay01.bottom - autoPlay01.top).assertEqual(vp2px(300));
      expect(autoPlay01_1.right - autoPlay01_1.left).assertEqual(vp2px(300));
      expect(autoPlay01_1.bottom - autoPlay01_1.top).assertEqual(vp2px(300));
      expect(autoPlay01_2.right - autoPlay01_2.left).assertEqual(vp2px(300));
      expect(autoPlay01_2.bottom - autoPlay01_2.top).assertEqual(vp2px(300));
      expect(autoPlay01_3.right - autoPlay01_3.left).assertEqual(vp2px(300));
      expect(autoPlay01_3.bottom - autoPlay01_3.top).assertEqual(vp2px(300));
      expect(autoPlay01_4.right - autoPlay01_4.left).assertEqual(vp2px(300));
      expect(autoPlay01_4.bottom - autoPlay01_4.top).assertEqual(vp2px(300));
      expect(autoPlay01_5.right - autoPlay01_5.left).assertEqual(vp2px(300));
      expect(autoPlay01_5.bottom - autoPlay01_5.top).assertEqual(vp2px(300));
      expect(autoPlay01_6.right - autoPlay01_6.left).assertEqual(vp2px(300));
      expect(autoPlay01_6.bottom - autoPlay01_6.top).assertEqual(vp2px(300));
      expect(timeIntervalOverCount).assertEqual(1);
      console.info('new testSwiperAutoPlaySetting_1 END');
      done();
    });
  })
}