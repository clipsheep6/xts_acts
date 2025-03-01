/**
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
import router from '@ohos.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import Utils from '../../MainAbility/common/Common';
import { Driver, ON } from '@ohos.UiTest';


export default function ObserverApi() {
  describe('ObserverApi', () => {
    beforeEach(async (done: Function) => {
      console.info("flex beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/AttrApi/ObserverApi',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get ObserverApi state success " + JSON.stringify(pages));
        if (!("ObserverApi" == pages.name)) {
          console.info("get ObserverApi state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push ObserverApi page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push ObserverApi page error: " + err);
      }
      done()
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("ObserverApi after each called");
    });

    /*
     * @tc.number      ObserverApi_001
     * @tc.name        ObserverApi_001
     * @tc.desc        Navigation RouterPageState test
     * @tc.level       Level 2
     */
    it('ObserverApi_001', 0, async (done: Function) => {
      console.info('[ObserverApi_001] START');
      await Utils.sleep(1000);

      let driver = Driver.create();
      await Utils.sleep(1000);
      let btn1 = await driver.findComponent(ON.id('ObserverApi_ObserverOn'));
      await btn1.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_001] btn1")

      let btn2 = await driver.findComponent(ON.id('ObserverApi_pushToPageTwo'));
      await btn2.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_001] btn2")

      let btn3 = await driver.findComponent(ON.id('ObserverApi2_getText'));
      await btn3.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_001] btn3")

      let strJson = getInspectorByKey('ObserverApi2_text');
      await Utils.sleep(1000);
      console.info("[ObserverApi_001] obj is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.content).assertEqual('HideAppearShow');

      let btn4 = await driver.findComponent(ON.id('ObserverApi2_backToPageOne'));
      await btn4.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_001] btn4")

      let btn5 = await driver.findComponent(ON.id('ObserverApi_getText1'));
      await btn5.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_001] btn5")

      let strJson2 = getInspectorByKey('ObserverApi_text1');
      await Utils.sleep(1000);
      console.info("[ObserverApi_001] obj2 is: " + JSON.stringify(JSON.parse(strJson2)));
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('Disappear');

      let btn6 = await driver.findComponent(ON.id('ObserverApi_ObserverOff'));
      await btn6.click()
      await Utils.sleep(2000);

      console.info('[ObserverApi_001] END');
      done();

    });


    /*
     * @tc.number      ObserverApi_002
     * @tc.name        ObserverApi_002
     * @tc.desc        Navigation RouterPageState2 test
     * @tc.level       Level 2
     */
    it('ObserverApi_002', 0, async (done: Function) => {
      console.info('[ObserverApi_002] START');
      await Utils.sleep(1000);

      let driver = Driver.create();
      await Utils.sleep(1000);
      let btn1 = await driver.findComponent(ON.id('ObserverApi_ObserverOn'));
      await btn1.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_002] btn1")

      let btn2 = await driver.findComponent(ON.id('ObserverApi_pushToPageTwo'));
      await btn2.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_002] btn2")

      await driver.pressBack()
      await Utils.sleep(2000);
      console.info("[ObserverApi_002] btn3")

      let btn4 = await driver.findComponent(ON.id('ObserverApi_getText2'));
      await btn4.click()
      await Utils.sleep(2000);
      console.info("[ObserverApi_002] btn4")

      let strJson = getInspectorByKey('ObserverApi_text2');
      await Utils.sleep(1000);
      console.info("[ObserverApi_001] obj is: " + JSON.stringify(JSON.parse(strJson)));
      expect(JSON.parse(strJson).$attrs.content).assertEqual('Back');

      let btn5 = await driver.findComponent(ON.id('ObserverApi_ObserverOff'));
      await btn5.click()
      await Utils.sleep(2000);

      console.info('[ObserverApi_002] END');
      done();
    });
  })
}



