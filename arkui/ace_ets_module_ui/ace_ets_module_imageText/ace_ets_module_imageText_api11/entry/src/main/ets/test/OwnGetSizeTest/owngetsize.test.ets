/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import Utils from '../Utils';
import {UiComponent, UiDriver, Component, Driver, UiWindow, ON, BY, MatchPattern, DisplayRotation, ResizeDirection, WindowMode, PointerMatrix} from '@ohos.UiTest';
interface UrlObject {
  url: string;
}
export default function owngetsize() {
  describe('owngetsize', () => {
    const routerPush = async (target:string) => {
      let options:UrlObject  = {
        url: `MainAbility/pages/OwnGetSize/${target}`,
      }
      await Utils.sleep(1000);
      try {
        router.clear();
        let pages = router.getState();
        console.info(`get ${target} state pages:` + JSON.stringify(pages));
        console.info(`get ${target} pages.name:` + JSON.stringify(pages.name));
        if (!(target == pages.name)) {
          router.pushUrl(options);
          await Utils.sleep(1000);
          let pages = router.getState();
          expect(pages.name).assertContain(target)
        }
      } catch (err) {
        console.error(`push ${target} page error:` + err);
      }
    }
    /*
   * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0520
   * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0520
   * @tc.desc    get swiper size
   */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0520', 0, async (done:Function) => {
      await routerPush('swiper')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('swiperbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('getswipersize001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:250,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0520] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0530
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0530
  * @tc.desc     get tabcontent size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0530', 0, async (done:Function) => {
      await routerPush('tabcontentgetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('tabcontentrbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettabcontentsize001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:230,height:140}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0530] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0540
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0540
  * @tc.desc    get tab size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0540', 0, async (done:Function) => {
      await routerPush('owntabgetsize001')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('tabbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettabsize001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:240,height:140}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0540] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0550
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0550
  * @tc.desc    get TextArea size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0550', 0, async (done:Function) => {
      await routerPush('textareagetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('textareabutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettextarea001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:150,height:120}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0550] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0560a
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0560a
  * @tc.desc    get TextClock size
  */
     it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0560a', 0, async (done:Function) => {
      await routerPush('textclockgetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('textclockbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettextclock001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:145,height:110}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0560a] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0570
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0570
  * @tc.desc     get TextInput size
  */
      it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0570', 0, async (done:Function) => {
      await routerPush('textinputgetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('textinputbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettextinput001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:135,height:110}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0570] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0580
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0580
  * @tc.desc    get TextPicker size
  */
     it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0580', 0, async (done:Function) => {
      await routerPush('textpickergetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('textpickerbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettextpicker001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:130,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0580] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0590
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0590
  * @tc.desc     get Text size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0590', 0, async (done:Function) => {
      await routerPush('textgetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('textbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettextsize001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:155,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0590] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0600
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0600
  * @tc.desc     get TimePicker size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0600', 0, async (done:Function) => {
      await routerPush('timepickergetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('timepickerbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettimepicker001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:125,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0600] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0610
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0610
  * @tc.desc    get Toggle size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0610', 0, async (done:Function) => {
      await routerPush('togglegetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('togglebutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('gettoggle001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:120,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0610] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0620
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0620
  * @tc.desc     get Video size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0620', 0, async (done:Function) => {
      await routerPush('videogetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('videobutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('getvideo001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:100,height:100}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0620] END');
  done();
    });

    /*
  * @tc.number  SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0630
  * @tc.name    SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0630
  * @tc.desc     get WaterFlow size
  */
    it('SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0630', 0, async (done:Function) => {
      await routerPush('waterflowgetsize')
       let driver:Driver = Driver.create();
  let button: Component = await driver.findComponent(ON.id('waterflowbutton'));
  await button.click();
  await Utils.sleep(2000);
  let text :Component= await driver.findComponent(ON.id('getwaterflow001'))
  let size=await text.getText();
  expect(size).assertEqual('{width:220,height:140}');
  console.info('[SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0630] END');
  done();
    });
  }
  )
}


