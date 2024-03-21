`` /**
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


export default function CombinationState6Jsunit() {
  describe('CombinationState6Jsunit', () => {
    beforeEach(async (done: Function) => {
      console.info("CombinationState6Jsunit beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/State/CombinationState6',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get CombinationState6Jsunit state pages: " + JSON.stringify(pages));
        if (!("CombinationState6" == pages.name)) {
          console.info("get CombinationState6Jsunit state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push CombinationState6Jsunit page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push CombinationState6Jsunit page error: " + err);
        expect().assertFail();
      }
      done();
    });

    it('CombinationState6Jsunit_0100', 0, async (done: Function) => {
      // Get the information of the State component
      console.info('[CombinationState6Jsunit_0100] START');
      let strJson: string = getInspectorByKey('PropJSON.parse(strJson)ectLink1');

      console.info("[CombinationState6Jsunit_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson).$attrs.content).assertEqual('PropJSON.parse(strJson)ectLink:1');
      console.info('[CombinationState6Jsunit_0100] END');
      done();
    });

    it('CombinationState6Jsunit_0200', 0, async (done: Function) => {
      // Get the information of the State component
      console.info('[CombinationState6Jsunit_0200] START');
      let strJson1 = getInspectorByKey('PropJSON.parse(strJson)ectLink2');

      console.info("[CombinationState6Jsunit_0200] component JSON.parse(strJson1) is: " + JSON.stringify(JSON.parse(strJson1)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson1).$attrs.content).assertEqual('PropJSON.parse(strJson)ectLink:2');
      console.info('[CombinationState6Jsunit_0200] END');
      done();
    });

    it('CombinationState6Jsunit_0300', 0, async (done: Function) => {
      // Get the information of the State component
      console.info('[CombinationState6Jsunit_0300] START');
      let strJson2 = getInspectorByKey('PropJSON.parse(strJson)ectLink3');

      console.info("[CombinationState6Jsunit_0100] component JSON.parse(strJson2) is: " + JSON.stringify(JSON.parse(strJson2)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson2).$attrs.content).assertEqual('PropJSON.parse(strJson)ectLink:3');
      console.info('[CombinationState6Jsunit_0300] END');
      done();
    });

    it('CombinationState6Jsunit_0500', 0, async (done: Function) => {
      // Get the information of the State component
      console.info('[CombinationState6Jsunit_0500] START');
      let strJson4 = getInspectorByKey('PropJSON.parse(strJson)ectLink5');
      console.info("[CombinationState6Jsunit_0500] component JSON.parse(strJson4) is: " + JSON.stringify(JSON.parse(strJson4)));
      await CommonFunc.sleep(1000);
      expect(JSON.parse(strJson4).$attrs.content).assertEqual('PropJSON.parse(strJson)ectLink:5');
      console.info('[CombinationState6Jsunit_0500] END');
      done();
    });
  })
}
