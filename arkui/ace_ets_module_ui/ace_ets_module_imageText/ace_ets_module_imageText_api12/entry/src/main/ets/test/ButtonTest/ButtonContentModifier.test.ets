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
import router from '@ohos.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import CommonFunc from '../../MainAbility/utils/Common';
import Utils from '../../MainAbility/common/Utils';
import { Component, Driver, ON , DisplayRotation} from '@ohos.UiTest';

export default function ButtonContentModifier() {
  async function routerPush(target) {
    let options:router.RouterOptions = {
      url: `MainAbility/pages/Button/ButtonContentModifier/${target}`,
    }
    try {
      router.clear();
      let pages = router.getState();
      console.info(`get ${target} state pages:` + JSON.stringify(pages));
      console.info(`get ${target} pages.name:` + JSON.stringify(pages.name));
      if (!(target == pages.name)) {
        let result = router.pushUrl(options);
        console.info(`router options url is ${options.url}`);
        await CommonFunc.sleep(1000);
        console.info(`push ${target} page result:` + JSON.stringify(result));
        let pages = router.getState();
        console.info(`push page name is ${pages.name}`);
        expect(pages.name).assertEqual(target)
      }
    } catch (err) {
      console.error(`push ${target} page error:` + err);
    }
  }
  describe('ButtonContentModifier', () => {

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("ButtonLabel after each called");
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0010
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0010
     * @tc.desc    set button label to null
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0010', 0, async (done:Function) => {
      await routerPush('ButtonLabel');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0010 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('null'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let label = await text.getText();
      expect(label).assertEqual("");
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0020
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0020
     * @tc.desc    set button label to undefined
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0020', 0, async (done:Function) => {
      await routerPush('ButtonLabel');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0020 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('undefined'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let label = await text.getText();
      expect(label).assertEqual("");
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0030
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0030
     * @tc.desc    set button label to abc
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0030', 0, async (done:Function) => {
      await routerPush('ButtonLabel');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0030 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('abc'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let label = await text.getText();
      expect(label).assertEqual("abc");
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0040
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0040
     * @tc.desc    set button label to ""
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0040', 0, async (done:Function) => {
      await routerPush('ButtonLabel');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0040 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('empty'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let label = await text.getText();
      expect(label).assertEqual("");
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0050
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0050
     * @tc.desc    set button label to longStr
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0050', 0, async (done:Function) => {
      await routerPush('ButtonLabel');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0050 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let beginButton: Component = await driver.findComponent(ON.id('begin'));
      beginButton.click();
      await Utils.sleep(2000);
      let button: Component = await driver.findComponent(ON.id('longStr'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('text'));
      let label = await text.getText();
      let str:string = "";
      let n:number;
      for(n=2000;n>0;n--){
        str = str+"123";
      }
      expect(label).assertEqual(str);
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0070
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0070
     * @tc.desc    set button enable to false
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0070', 0, async (done:Function) => {
      await routerPush('ButtonAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0070 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let Disabled: Component = await driver.findComponent(ON.id('buttonDisabled'));
      await Disabled.click();
      let circle: Component = await driver.findComponent(ON.id('circle'));
      await circle.click();
      let text: Component = await driver.findComponent(ON.id('message'));
      let position=await text.getText();
      let Enabled: Component = await driver.findComponent(ON.id('buttonEnabled'));
      await Enabled.click();
      expect(position).assertEqual('');
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0080
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0080
     * @tc.desc    Add the triggerClick to get the click coordinates from the callback
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0080', 0, async (done:Function) => {
      await routerPush('ButtonAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0080 START');
      await Utils.sleep(30000);
      let driver: Driver = Driver.create();
      let circle: Component = await driver.findComponent(ON.id('circle'));
      let point = await circle.getBoundsCenter();
      await driver.click(point.x,point.y);
      let text1: Component = await driver.findComponent(ON.id('buttonPosition'));
      let text2: Component = await driver.findComponent(ON.id('circlePosition'));
      let position1=await text1.getText();
      let position2=await text2.getText();
      expect(position1).assertEqual(position2);
      done();
    });

    /*
     * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0110
     * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0110
     * @tc.desc     don't add the triggerClick, button can't be clicked
     */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0110', 0, async (done:Function) => {
      routerPush('ButtonTriggerClick011');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0110 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let circle: Component = await driver.findComponent(ON.id('circle'));
      await circle.click();
      let text: Component = await driver.findComponent(ON.id('message'));
      let message=await text.getText();
      expect(message).assertEqual('');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0120
    * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0120
    * @tc.desc    set contentModifier to undefined
    */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0120', 0, async (done:Function) => {
      routerPush('ButtonAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0120 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('undefined'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('message'));
      let message=await text.getText();
      expect(message).assertEqual('undefined button click');
      done();
    });

    /*
    * @tc.number  SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0130
    * @tc.name    SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0130
    * @tc.desc    set contentModifier to null
    */
    it('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0130', 0, async (done:Function) => {
      routerPush('ButtonAttrs');
      console.info('SUB_ACE_UI_COMPONENT_BUTTON_BUTTON_CUSTOMIZING_0130 START');
      await Utils.sleep(2000);
      let driver: Driver = Driver.create();
      let button: Component = await driver.findComponent(ON.id('null'));
      await button.click();
      let text: Component = await driver.findComponent(ON.id('message'));
      let message=await text.getText();
      expect(message).assertEqual('null button click');
      done();
    });
  })
}