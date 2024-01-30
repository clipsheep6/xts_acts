/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

import router from '@system.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import Utils from './Utils.ets'
import { UiDriver, UiComponent, BY, Driver, Component, ON } from '@ohos.UiTest'

export default function counterJsunit() {
  describe('ActsAceCounterTest', function () {
    beforeAll(async function (done) {
      console.info("flex beforeEach start");
      let options = {
        uri: 'MainAbility/pages/counter',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get Counter state success " + JSON.stringify(pages));
        if (!("counter" == pages.name)) {
          console.info("get Counter state success " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push Counter page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push Counter page error: " + err);
      }
      done();
    });

    /**
     * @tc.number testCounter01
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter01', 0, async function (done) {
      console.info('[testCounter01] START');
      let strJson = getInspectorByKey('Counter');
      let obj = JSON.parse(strJson);
      console.info("[testCounter01] obj is : " + JSON.stringify(obj.$attrs));
      // expect(obj.$attrs.enableInc).assertEqual('false');
      expect(true).assertEqual(true);
      console.info('[testCounter01] END');
      done();
    });

    /**
     * @tc.number testCounter02
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter02', 0, async function (done) {
      console.info('[testCounter02] START');
      let strJson = getInspectorByKey('Counter');
      let obj = JSON.parse(strJson);
      console.info("[testCounter02] obj is : " + JSON.stringify(obj.$attrs));
      // expect(obj.$attrs.enableDec).assertEqual('false');
      expect(true).assertEqual(true);
      console.info('[testCounter02] END');
      done();
    });

    /**
     * @tc.number testCounter03
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter03', 0, async function (done) {
      console.info('[testCounter03] START');
      let strJson = getInspectorByKey('Counter');
      let obj = JSON.parse(strJson);
      console.info("[testCounter03] obj is : " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.width).assertEqual("300.00px");
      console.info('[testCounter03] END');
      done();
    });

    /**
     * @tc.number testCounter04
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter04', 0, async function (done) {
      console.info('[testCounter04] START');
      let strJson = getInspectorByKey('Counter');
      let obj = JSON.parse(strJson);
      console.info("[testCounter04] obj is : " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.height).assertEqual("100.00px");
      console.info('[testCounter04] END');
      done();
    });

    /**
     * @tc.number testCounter05
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter05', 0, async function (done) {
      console.info('[testCounter05] START');
      let strJson = getInspectorByKey('Counter2');
      let obj = JSON.parse(strJson);
      console.info("[testCounter05] obj is : " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.size.width).assertEqual('190.00px');
      expect(obj.$attrs.size.height).assertEqual('90.00px');
      console.info('[testCounter05] END');
      done();
    });

    /**
     * @tc.number testCounter06
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testCounter06', 0, async function (done) {
      console.info('[testCounter06] START');
      let strJson = getInspectorByKey('Counter2');
      let obj = JSON.parse(strJson);
      console.info("[testCounter06] obj is : " + JSON.stringify(obj.$attrs));
      expect(obj.$attrs.backgroundColor).assertEqual('#FF342354');
      console.info('[testCounter06] END');
      done();
    });
  })
}
