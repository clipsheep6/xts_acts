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
import {UiComponent, Driver, Component, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';
import {MessageManager,Callback} from '../../MainAbility/utils/MessageManager';
export default function SwiperDirection() {
  describe('SwiperDirection', () => {
    beforeEach(async (done: Function) => {
      console.info("SwiperDirection beforeEach start");
      let options: router.RouterOptions = {
        url: "MainAbility/pages/Swiper/SwiperDirection",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get SwiperDirection state pages:" + JSON.stringify(pages));
        if (!("SwiperDirection" == pages.name)) {
          console.info("get SwiperDirection pages.name:" + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push SwiperDirection page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push SwiperDirection page error:" + err);
      }
      console.info("SwiperDirection beforeEach end");
      done();
    });
    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("SwiperDirection after each called");
    });

    /**
     * @tc.number Swiper direction
     * @tc.name testSwiperDirection_0001
     * @tc.desc Test Swiper page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testSwiperDirection_0001', 0, async (done: Function) => {
      console.info('testSwiperDirection_0001 auto START');
      let driver = Driver.create();
      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testSwiperDirection_0001] click Auto');
      const lable = await driver.findComponent(ON.id('Swiper'));
      const point1 = await lable.getBoundsCenter();
      const rect1 = await lable.getBounds();
      console.info('[testSwiperDirection_0001]', ' lable2 rect:' + JSON.stringify(point1));
      console.info('[testSwiperDirection_0001]', ' lable2 rect:' + JSON.stringify(rect1));
      //从左往右滑动swiper--auto
      await driver.fling({x: 60, y: point1.y},{x: 720, y: point1.y},5,600);
      await CommonFunc.sleep(1000);
      //判断’第1页‘在页面上显示
      const elementText1 = await driver.findComponent(ON.text('第1页'));
      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testSwiperDirection_0001]', 'click Rtl');
      await CommonFunc.sleep(1000);
      //从左往右滑动swiper--rtl
      await driver.fling({x: 60, y: point1.y},{x: 720, y: point1.y},5,600);
      await CommonFunc.sleep(1000);
      //判断’第3页‘在页面上显示
      const elementText2 = await driver.findComponent(ON.text('第3页'));
      expect(elementText1 != null).assertTrue();
      expect(elementText2 != null).assertTrue();
      console.info('testSwiperDirection_0001 ', 'END');
      done();
    });
    /**
     * @tc.number Swiper direction
     * @tc.name testSwiperDirection_0002
     * @tc.desc Test Swiper page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testtestSwiperDirection_0002', 0, async  (done :Function )=>{
      console.info('testSwiperDirection_0002 auto START');
      let driver = Driver.create();
      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testSwiperDirection_0002] click Auto');
      let buttonShowNext = await driver.findComponent(ON.id('showNext'));
      await buttonShowNext.click();
      await CommonFunc.sleep(1000);
      console.info('[testSwiperDirection_0002] click showNext');
      const elementText1 = await driver.findComponent(ON.text('第3页'));
      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testSwiperDirection_0002]', 'click Rtl');
      await CommonFunc.sleep(1000);
      let buttonShowPrevious = await driver.findComponent(ON.id('showPrevious'));
      await buttonShowPrevious.click();
      await CommonFunc.sleep(1000);
      console.info('[testSwiperDirection_0002] click showPrevious');
      let elementText2 = await driver.findComponent(ON.text('第1页'));
      expect(elementText1 != null).assertTrue();
      expect(elementText2 != null).assertTrue();
      console.info('SwiperDirection_0100 ', 'END');
      done();
    });
  })
}
