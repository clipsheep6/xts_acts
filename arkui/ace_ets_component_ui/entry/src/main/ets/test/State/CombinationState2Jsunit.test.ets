/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import {
  UiComponent,
  UiDriver,
  Component,
  Driver,
  UiWindow,
  ON,
  BY,
  MatchPattern,
  DisplayRotation,
  ResizeDirection,
  WindowMode,
  PointerMatrix
} from '@ohos.UiTest';
import CommonFunc from '../../MainAbility/utils/Common';


export default function CombinationState2Jsunit() {
  describe('CombinationState2Jsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("CombinationState2Jsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/State/CombinationState2',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CombinationState2Jsunit state pages: " + JSON.stringify(pages));
        if (!("CombinationState2" == pages.name)) {
          console.info("get CombinationState2Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push CombinationState2Jsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CombinationState2Jsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('CombinationState2Jsunit_0100', 0, async (done: Function) => {
      // Get the information of the State component
      console.info('[CombinationState2Jsunit_0100] START');
      let strJson: string = getInspectorByKey('PropLink1');

      console.info("[CombinationState2Jsunit_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('PropLink:1');
      console.info('[CombinationState2Jsunit_0100] END');
      done();
    });

    it('CombinationState2Jsunit_0200', 0, async (done: Function) => {
      // Get the information of the State component
      let strJson1 = getInspectorByKey('PropLink47');

      console.info("[CombinationState2Jsunit_0200] component JSON.parse(strJson1) is: " + JSON.stringify(JSON.parse(strJson1)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson1).$attrs.content).assertEqual('PropLink:47');
      console.info('[CombinationState2Jsunit_0200] END');
      done();
    });

    it('CombinationState2Jsunit_0300', 0, async (done: Function) => {
      // Get the information of the State component
      let strJson2 = getInspectorByKey('ChildLink47');

      console.info("[CombinationState2Jsunit_0300] component JSON.parse(strJson2) is: " + JSON.stringify(JSON.parse(strJson2)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('ChildLink: 47');
      console.info('[CombinationState2Jsunit_0300] END');
      done();
    });

    it('CombinationState2Jsunit_0400', 0, async (done: Function) => {
      // Get the information of the State component
      let strJson3 = getInspectorByKey('PropLink7');

      console.info("[CombinationState2Jsunit_0400] component JSON.parse(strJson3) is: " + JSON.stringify(JSON.parse(strJson3)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson3).$attrs.content).assertEqual('PropLink:7');
      console.info('[CombinationState2Jsunit_0400] END');
      done();
    });

    it('CombinationState2Jsunit_0500', 0, async (done: Function) => {
      // Get the information of the State component
      let strJson4 = getInspectorByKey('ChildLink7');

      console.info("[CombinationState2Jsunit_0500] component JSON.parse(strJson4) is: " + JSON.stringify(JSON.parse(strJson4)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson4).$attrs.content).assertEqual('ChildLink: 7');
      console.info('[CombinationState2Jsunit_0500] END');
      done();
    });

    it('CombinationState2Jsunit_0600', 0, async (done: Function) => {
      // Click and get the value of State component
      console.info('[CombinationState2Jsunit_0600] START');
      let driver = await UiDriver.create()
      let qrComponent = await driver.findComponent(BY.key('PropLink1'));
      await qrComponent.click();
      await CommonFunc.sleep(1000);

      let strJson: string = getInspectorByKey('PropLink2');

      console.info("[CombinationState2Jsunit_0200] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('PropLink:2');
      console.info('[CombinationState2Jsunit_0600] END');
      done();
    });

    it('CombinationState2Jsunit_0700', 0, async (done: Function) => {
      // Click and get the value of State component
      console.info('[CombinationState2Jsunit_0700] START');
      let driver = await UiDriver.create()
      let qrComponent = await driver.findComponent(BY.key('PropLink47'));
      await qrComponent.click();
      await CommonFunc.sleep(1000);

      let strJson: string = getInspectorByKey('PropLink48');

      console.info("[CombinationState2Jsunit_0700] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('PropLink:48');
      console.info('[CombinationState2Jsunit_0700] END');
      done();
    });

    it('CombinationState2Jsunit_0800', 0, async (done: Function) => {
      // Click and get the value of State component
      console.info('[CombinationState2Jsunit_0800] START');
      let driver = await UiDriver.create()
      let qrComponent = await driver.findComponent(BY.key('PropLink7'));
      await qrComponent.click();
      await CommonFunc.sleep(1000);

      let strJson: string = getInspectorByKey('PropLink8');

      console.info("[CombinationState2Jsunit_0800] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('PropLink:8');
      console.info('[CombinationState2Jsunit_0800] END');
      done();
    });
  })
}
