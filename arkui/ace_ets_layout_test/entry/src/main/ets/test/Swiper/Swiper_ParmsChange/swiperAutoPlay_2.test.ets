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
export default function swiperAutoPlay_2() {
  describe('swiperAutoPlayTest', function () {
    let sliderCount = 0;
    let oldPageTime = 0;
    let timeIntervalCount = 0;
    function timeChangeCallBack(eventData){
      try {
        console.info("swiperAutoPlay_2 page timeChangeCallBack");
        if(eventData != null){
          let timeInterval = 0;
          let time = eventData.data.ACTION
          sliderCount++;
          console.info("timeChangeCallBack:"+ JSON.stringify(eventData));
          if (sliderCount < 2) {
            oldPageTime = time;
          }else{
            timeInterval = (time - oldPageTime) / 1000;
            oldPageTime = time;
          }
          console.info("timeInterval:"+ timeInterval);
          if (Math.round(timeInterval) > 1){ //auto Sliding interval is 1s
            timeIntervalCount++;
            console.info("timeInterval is:"+ Math.round(timeInterval));
          }
        }
      } catch(error) {
        console.error(`timeChangeCallBack failed. Cause:` + JSON.stringify(error));
      }
    }
    beforeEach(async function (done) {
      let options = {
        uri: 'MainAbility/pages/Swiper/Swiper_ParmsChange/swiperAutoPlay_2',
      }
      try {
        CommonFunc.registerEvent(timeChangeCallBack, 10);
        router.clear();
        await CommonFunc.sleep(1000);
        let pages = router.getState();
        console.info("get swiperAutoPlay_2 state success " + JSON.stringify(pages));
        if (!("swiperAutoPlay_2" == pages.name)) {
          console.info("get swiperAutoPlay_2 state success " + JSON.stringify(pages.name));
          let result = await router.push(options)
          console.info("push swiperAutoPlay_2 page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push swiperAutoPlay_2 page error " + JSON.stringify(err));
      }
    });
    afterEach(async function () {
      console.info("swiperAutoPlay_2 after each called");
    });

    /**
     * @tc.number    SUB_ACE_SWIPER_VERTICALCHANGED_0200
     * @tc.name      testSwiperAutoPlaySetting_2
     * @tc.desc      Set swiper's  AutoPlay  value ' false ' and interval values '1000'.
     */
    it('testSwiperAutoPlaySetting_2', 0, async function (done) {
      console.info('new testSwiperAutoPlaySetting_2 START');
      let strJson = getInspectorByKey('autoPlay02');
      let obj = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Swiper');
      expect(obj.$attrs.index).assertEqual('0');
      expect(obj.$attrs.autoPlay).assertEqual('false');
      expect(obj.$attrs.loop).assertEqual('true');
      expect(obj.$attrs.itemSpace).assertEqual('0.00vp');
      expect(obj.$attrs.displayCount).assertEqual(1);
      expect(obj.$attrs.interval).assertEqual('1000');
      let autoPlay02 = CommonFunc.getComponentRect('autoPlay02');
      let autoPlay02_1 = CommonFunc.getComponentRect('autoPlay02_1');
      let driver = await Driver.create();
      await driver.swipe(440,340,10,340)
      let autoPlay02_2 = CommonFunc.getComponentRect('autoPlay02_2');
      await CommonFunc.sleep(1000);
      await driver.swipe(440,340,10,340)
      let autoPlay02_3 = CommonFunc.getComponentRect('autoPlay02_3');
      await CommonFunc.sleep(1000);
      await driver.swipe(440,340,10,340)
      let autoPlay02_4 = CommonFunc.getComponentRect('autoPlay02_4');
      await CommonFunc.sleep(1000);
      await driver.swipe(440,340,10,340)
      let autoPlay02_5 = CommonFunc.getComponentRect('autoPlay02_5');
      await CommonFunc.sleep(1000);
      await driver.swipe(440,340,10,340)
      let autoPlay02_6 = CommonFunc.getComponentRect('autoPlay02_6');
      expect(autoPlay02.right - autoPlay02.left).assertEqual(vp2px(300));
      expect(autoPlay02.bottom - autoPlay02.top).assertEqual(vp2px(300));
      expect(autoPlay02_1.right - autoPlay02_1.left).assertEqual(vp2px(300));
      expect(autoPlay02_1.bottom - autoPlay02_1.top).assertEqual(vp2px(300));
      expect(autoPlay02_2.right - autoPlay02_2.left).assertEqual(vp2px(300));
      expect(autoPlay02_2.bottom - autoPlay02_2.top).assertEqual(vp2px(300));
      expect(autoPlay02_3.right - autoPlay02_3.left).assertEqual(vp2px(300));
      expect(autoPlay02_3.bottom - autoPlay02_3.top).assertEqual(vp2px(300));
      expect(autoPlay02_4.right - autoPlay02_4.left).assertEqual(vp2px(300));
      expect(autoPlay02_4.bottom - autoPlay02_4.top).assertEqual(vp2px(300));
      expect(autoPlay02_5.right - autoPlay02_5.left).assertEqual(vp2px(300));
      expect(autoPlay02_5.bottom - autoPlay02_5.top).assertEqual(vp2px(300));
      expect(autoPlay02_6.right - autoPlay02_6.left).assertEqual(vp2px(300));
      expect(autoPlay02_6.bottom - autoPlay02_6.top).assertEqual(vp2px(300));
      expect(timeIntervalCount).assertEqual(3);
      expect(sliderCount).assertEqual(4);
      console.info('new testSwiperAutoPlaySetting_2 END');
      done();
    });
  })
}