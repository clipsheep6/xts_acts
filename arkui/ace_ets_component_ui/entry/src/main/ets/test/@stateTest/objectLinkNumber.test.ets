/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
  Driver,
  Component,
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
import { MessageManager, Callback } from '../../MainAbility/utils/MessageManager';


export default function objectLinkNumber() {
  describe('objectLinkNumber', () => {
    beforeEach(async (done: Function) => {
      console.info("objectLinkNumber beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/@state/objectLinkNumber',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get JSON.parse(strJson)ectLinkNumber state pages: " + JSON.stringify(pages));
        if (!("JSON.parse(strJson)ectLinkNumber" == pages.name)) {
          console.info("get JSON.parse(strJson)ectLinkNumber state pages.name: " + JSON.stringify(pages.name));
          let result = await router.pushUrl(options);
          await CommonFunc.sleep(2000);
          console.info("push JSON.parse(strJson)ectLinkNumber success: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push JSON.parse(strJson)ectLinkNumber page error: " + err);
        expect().assertFail();
      }
      done();
    });
    /* *
    * @tc.number: SUB_ACE_STATUSMANAGER_SUPPORTUUNION_1160
    * @tc.name  : JSON.parse(strJson)ectLinkNumber_0100
    * @tc.desc  : To test that the JSON.parse(strJson)ectLink decorator supports union types.
    * @tc.level : Level 2
    */
    it('JSON.parse(strJson)ectLinkNumber_0100', 0, async (done: Function) => {
      console.info('JSON.parse(strJson)ectLinkNumber_0100 START');
      let driver = await Driver.create()
      await CommonFunc.sleep(1000);
      let button = await driver.findComponent(ON.id('state1'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('JSON.parse(strJson)ectLinkNumber');

      console.info("[JSON.parse(strJson)ectLinkNumber_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[JSON.parse(strJson)ectLinkNumber_0100] title: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .content));
      expect(JSON.parse(strJson).$attrs.content)
        .assertEqual('count type of "[JSON.parse(strJson)ect JSON.parse(strJson)ect]" number is {"a":100}');
      console.info('[JSON.parse(strJson)ectLinkNumber_0100] END');
      done();
    });
    /* *
    * @tc.number: SUB_ACE_STATUSMANAGER_SUPPORTUUNION_1170
    * @tc.name  : JSON.parse(strJson)ectLinkNumber_0200
    * @tc.desc  : To test that the JSON.parse(strJson)ectLink decorator supports union types.
    * @tc.level : Level 2
    */
    it('JSON.parse(strJson)ectLinkNumber_0200', 0, async (done: Function) => {
      console.info('JSON.parse(strJson)ectLinkNumber_0100 START');
      let driver = await Driver.create()
      await CommonFunc.sleep(1000);
      let button = await driver.findComponent(ON.id('state2'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('JSON.parse(strJson)ectLinkNumber');

      console.info("[JSON.parse(strJson)ectLinkNumber_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[JSON.parse(strJson)ectLinkNumber_0100] title: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .content));
      expect(JSON.parse(strJson).$attrs.content)
        .assertEqual('count type of "[JSON.parse(strJson)ect JSON.parse(strJson)ect]" number is {"b":100}');
      console.info('[JSON.parse(strJson)ectLinkNumber_0100] END');
      done();
    });
    /* *
    * @tc.number: SUB_ACE_STATUSMANAGER_SUPPORTUUNION_1180
    * @tc.name  : JSON.parse(strJson)ectLinkNumber_0300
    * @tc.desc  : To test that the JSON.parse(strJson)ectLink decorator supports union types.
    * @tc.level : Level 2
    */
    it('JSON.parse(strJson)ectLinkNumber_0300', 0, async (done: Function) => {
      console.info('JSON.parse(strJson)ectLinkNumber_0100 START');
      let driver = await Driver.create()
      await CommonFunc.sleep(1000);
      let button = await driver.findComponent(ON.id('state3'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('JSON.parse(strJson)ectLinkNumber');

      console.info("[JSON.parse(strJson)ectLinkNumber_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[JSON.parse(strJson)ectLinkNumber_0100] title: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .content));
      expect(JSON.parse(strJson).$attrs.content)
        .assertEqual('count type of "[JSON.parse(strJson)ect Undefined]" number is undefined');
      console.info('[JSON.parse(strJson)ectLinkNumber_0100] END');
      done();
    });
    /* *
    * @tc.number: SUB_ACE_STATUSMANAGER_SUPPORTUUNION_1190
    * @tc.name  : JSON.parse(strJson)ectLinkNumber_0400
    * @tc.desc  : To test that the JSON.parse(strJson)ectLink decorator supports union types.
    * @tc.level : Level 2
    */
    it('JSON.parse(strJson)ectLinkNumber_0400', 0, async (done: Function) => {
      console.info('JSON.parse(strJson)ectLinkNumber_0100 START');
      let driver = await Driver.create()
      await CommonFunc.sleep(1000);
      let button = await driver.findComponent(ON.id('state4'));
      await button.click();
      await CommonFunc.sleep(1000);
      let strJson: string = getInspectorByKey('JSON.parse(strJson)ectLinkNumber');

      console.info("[JSON.parse(strJson)ectLinkNumber_0100] component JSON.parse(strJson) is: " + JSON.stringify(JSON.parse(strJson)));
      console.info("[JSON.parse(strJson)ectLinkNumber_0100] title: " + JSON.stringify(JSON.parse(strJson)
        .$attrs
        .content));
      expect(JSON.parse(strJson).$attrs.content)
        .assertEqual('count type of "[JSON.parse(strJson)ect Null]" number is null');
      console.info('[JSON.parse(strJson)ectLinkNumber_0100] END');
      done();
    });
  })
}

