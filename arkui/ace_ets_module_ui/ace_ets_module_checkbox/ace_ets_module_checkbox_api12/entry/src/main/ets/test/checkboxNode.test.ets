// /**
//  * Copyright (c) 2024 Huawei Device Co., Ltd.
//  * Licensed under the Apache License, Version 2.0 (the "License");
//  * you may not use this file except in compliance with the License.
//  * You may obtain a copy of the License at
//  *
//  *     http://www.apache.org/licenses/LICENSE-2.0
//  *
//  * Unless required by applicable law or agreed to in writing, software
//  * distributed under the License is distributed on an "AS IS" BASIS,
//  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  * See the License for the specific language governing permissions and
//  * limitations under the License.
//  */

import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import router from '@ohos.router';
import events_emitter from '@ohos.events.emitter'
import CommonFunc from '../MainAbility/utils/Common';

export default function abilityTest() {
  describe('ActsAbilityTest', () => {
    beforeEach(async (done: Function) => {
      console.info("checkboxNodeTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/checkboxNode',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get checkboxNode state pages: " + JSON.stringify(pages));
        if (!("checkboxNode" == pages.name)) {
          console.info("get checkboxNode pages.name: " + JSON.stringify(pages.name));
          await router.push(options);
          await CommonFunc.sleep(2000);
        }
      } catch (err) {
        console.error("push checkboxNode page error: " + err);
      }

      await CommonFunc.sleep(1000)
      console.info("checkboxNode beforeEach end");
      done()
    });

    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("checkboxNode after each called");
    })

    /**
     * @tc.number checkboxNode0100
     * @tc.name Test the FontWeight property of the checkbox component
     * @tc.desc set the FontWeight property value is  700
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */

    it('checkboxNode0100', 0, async (done: Function) => {
      let tagName = 'checkboxNode0100';
      console.info('[' + tagName + '] START============================');
      let strJsonNew = getInspectorByKey('key_checkbox_001');
        console.info('[' + tagName + '] Search select is: ' + JSON.stringify(JSON.parse(strJsonNew)
          .$attrs
          .select));
        expect(JSON.parse(strJsonNew).$attrs.select).assertEqual('true');
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  
    /**
     * @tc.number checkboxNode0200
     * @tc.name Test the checkboxUpdateStrategy property of the checkbox component
     * @tc.desc set the checkboxUpdateStrategy property value is checkboxUpdateStrategy.DEFAULT
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */

    it('checkboxNode0200', 0, async (done: Function) => {
      let tagName = 'checkboxNode0200';
      console.info('[' + tagName + '] START============================');
      let strJsonNew = getInspectorByKey('key_checkbox_001');
        console.info('[' + tagName + '] Search selectedColor is: ' + JSON.stringify(JSON.parse(strJsonNew)
          .$attrs
          .selectedColor));
        expect(JSON.parse(strJsonNew).$attrs.selectedColor).assertEqual('#FF00FFFF');
      console.info('[' + tagName + '] END ===========================');
      done();
    });

    /**
     * @tc.number checkboxNode0300
     * @tc.name Test the checkboxUpdateStrategy property of the checkbox component
     * @tc.desc set the checkboxUpdateStrategy property value is checkboxUpdateStrategy.DEFAULT
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */

   it('checkboxNode0300', 0, async (done: Function) => {
      let tagName = 'checkboxNode0300';
      console.info('[' + tagName + '] START============================');
      let strJsonNew = getInspectorByKey('key_checkbox_001');
      console.info('[' + tagName + '] Search shape is: ' + JSON.stringify(JSON.parse(strJsonNew)
        .$attrs
        .shape));
      expect(JSON.parse(strJsonNew).$attrs.shape).assertEqual('1');
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  })
}