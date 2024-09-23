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
import CommonFunc from '../../MainAbility/common/Common';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import { Component, Driver, UiWindow, ON, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';

export default function RelativeContainerDirection() {
  describe('RelativeContainerDirection', () => {
    beforeEach(async (done: Function) => {
      console.info('RelativeContainerDirection beforeEach start');
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/RelativeContainer/RelativeContainerDirection',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info('get RelativeContainerDirection state pages:' + JSON.stringify(pages));
        if (!('RelativeContainerDirection' == pages.name)) {
          console.info('get RelativeContainerDirection pages.name:' + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info('push RelativeContainerDirection page result:' + JSON.stringify(result));
        }
      } catch (err) {
        console.error('push RelativeContainerDirection page error:' + err);
      }
      console.info('RelativeContainerDirection beforeEach end');
      done();
    });
    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info('RelativeContainerDirection after each called');
    });
     /**
     * @tc.number RelativeContainer direction
     * @tc.name testRelativeContainerDirection_0001
     * @tc.desc Test RelativeContainer page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testRelativeContainerDirection_0001', 0, async (done: Function) => {
      console.info('testRelativeContainerDirection_0001 START');
      let driver =  Driver.create();

      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testRelativeContainerDirection_0001] click Auto');

      const lable = await driver.findComponent(ON.id('row1'));
      const rect1 = await lable.getBounds();
      console.info('[testRelativeContainerDirection_0001]', ' lable rect1:' + JSON.stringify(rect1));

      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testRelativeContainerDirection_0001]', 'click Rtl');
      await CommonFunc.sleep(1000);

      let lable2 = await driver.findComponent(ON.id('row1'));
      const rect2 = await lable2.getBounds();
      console.info('[testRelativeContainerDirection_0001]', ' lable2 rect:' + JSON.stringify(rect2));
      await CommonFunc.sleep(1000);

      expect(rect1.left == rect2.left).assertFalse();
      console.info('testRelativeContainerDirection_0001 END');
      done();
    });
    /**
     * @tc.number RelativeContainer direction
     * @tc.name testRelativeContainerDirection_0002
     * @tc.desc Test RelativeContainer page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testRelativeContainerDirection_0002', 0, async (done: Function) => {
      console.info('testRelativeContainerDirection_0002 START');
      let driver =  Driver.create()
      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testRelativeContainerDirection_0002] click Auto');

      const lable = await driver.findComponent(ON.id('row2'));
      const rect1 = await lable.getBounds();
      console.info('[testRelativeContainerDirection_0002]', ' lable rect1:' + JSON.stringify(rect1));

      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testRelativeContainerDirection_0002]', 'click Rtl');
      await CommonFunc.sleep(1000);

      let lable2 = await driver.findComponent(ON.id('row2'));
      const rect2 = await lable2.getBounds();
      console.info('[testRelativeContainerDirection_0002]', ' lable2 rect:' + JSON.stringify(rect2));

      expect(rect1.left == rect2.left).assertFalse();
      console.info('testRelativeContainerDirection_0002 END');
      done();
    });
    /**
     * @tc.number RelativeContainer direction
     * @tc.name testRelativeContainerDirection_0003
     * @tc.desc Test RelativeContainer page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testRelativeContainerDirection_0003', 0, async (done: Function) => {
      console.info('testRelativeContainerDirection_0003 START');
      let driver =  Driver.create()
      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testRelativeContainerDirection_0003] click Auto');

      const lable = await driver.findComponent(ON.id('row3'));
      const rect1 = await lable.getBounds();
      console.info('[testRelativeContainerDirection_0003]', ' lable rect1:' + JSON.stringify(rect1));

      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testRelativeContainerDirection_0003]', 'click Rtl');
      await CommonFunc.sleep(1000);

      let lable2 = await driver.findComponent(ON.id('row3'));
      const rect2 = await lable2.getBounds();
      console.info('[testRelativeContainerDirection_0003]', ' lable2 rect:' + JSON.stringify(rect2));

      expect(rect1.left == rect2.left).assertFalse();
      console.info('testRelativeContainerDirection_0003 END');
      done();
    });
    /**
     * @tc.number RelativeContainer direction
     * @tc.name testRelativeContainerDirection_0004
     * @tc.desc Test RelativeContainer page
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */
    it('testRelativeContainerDirection_0004', 0, async (done: Function) => {
      console.info('testRelativeContainerDirection_0004 START');
      let driver =  Driver.create()
      let buttonAuto = await driver.findComponent(ON.id('Auto'));
      await buttonAuto.click();
      await CommonFunc.sleep(1000);
      console.info('[testRelativeContainerDirection_0004] click Auto');

      const lable = await driver.findComponent(ON.id('row4'));
      const rect1 = await lable.getBounds();
      console.info('[testRelativeContainerDirection_0004]', ' lable rect1:' + JSON.stringify(rect1));

      let buttonRtl = await driver.findComponent(ON.id('Rtl'));
      await buttonRtl.click();
      console.info('[testRelativeContainerDirection_0004]', 'click Rtl');
      await CommonFunc.sleep(1000);

      let lable2 = await driver.findComponent(ON.id('row4'));
      const rect2 = await lable2.getBounds();
      console.info('[testRelativeContainerDirection_0004]', ' lable2 rect:' + JSON.stringify(rect2));

      expect(rect1.left == rect2.left).assertFalse();
      console.info('testRelativeContainerDirection_0004 END');
      done();
    });
  })
}
