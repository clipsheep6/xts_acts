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

export default function navDestinationJsunit() {
  describe('ActsAceNavDestinationTest', function () {
    beforeEach(async function (done) {
      console.info("NavDestination beforeEach start");
      let options = {
        uri: 'MainAbility/pages/navDestination',
      }
      let result;
      try {
        router.clear();
        let pages = router.getState();
        console.info("get NavDestination state success " + JSON.stringify(pages));
        if (!("navDestination" == pages.name)) {
          console.info("get NavDestination state success " + JSON.stringify(pages.name));
          result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push NavDestination page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push NavDestination page error: " + err);
      }
      done();
    });

    /**
     * @tc.number testNavDestination
     * @tc.name   Test the properties of components
     * @tc.desc   Set attribute values
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testNavDestination', 0, async function (done) {
      console.info('[testNavDestination] START');
      let driver = Driver.create();
      let navDestinationText = await driver.findComponent(ON.id('NavDestinationText'));
      let rect = await navDestinationText.getBounds();
      console.info("[testNavDestination] obj rect is : " + JSON.stringify(rect));
      let NavDestination1 = await driver.findComponent(ON.id('NavDestination1'));
      let rectContent = await NavDestination1.getBounds();
      console.info("[testNavDestination] obj rectContent is : " + JSON.stringify(rectContent));
      expect(rect.top).assertEqual(rectContent.top);
      console.info('[testNavDestination] END');
      done();
    });
  })
}
