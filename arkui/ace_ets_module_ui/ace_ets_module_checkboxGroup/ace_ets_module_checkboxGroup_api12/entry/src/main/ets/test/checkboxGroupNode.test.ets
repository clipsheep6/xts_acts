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
      console.info("checkboxGroupNodeTest beforeEach start");
      let options: router.RouterOptions = {
        url: 'MainAbility/pages/checkboxGroupNode',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get checkboxGroupNode state pages: " + JSON.stringify(pages));
        if (!("checkboxGroupNode" == pages.name)) {
          console.info("get checkboxGroupNode pages.name: " + JSON.stringify(pages.name));
          await router.push(options);
          await CommonFunc.sleep(2000);
        }
      } catch (err) {
        console.error("push checkboxGroupNode page error: " + err);
      }

      await CommonFunc.sleep(1000)
      console.info("checkboxGroupNode beforeEach end");
      done()
    });

    afterEach(async () => {
      await CommonFunc.sleep(1000);
      console.info("checkboxGroupNode after each called");
    })

    /**
     * @tc.number checkboxGroupNode0100
     * @tc.name Test the FontWeight property of the checkbox component
     * @tc.desc set the FontWeight property value is  700
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */

     it('checkboxGroupNode0100', 0, async (done: Function) => {
      let tagName = 'checkboxGroupNode0100';
      console.info('[' + tagName + '] START============================');
      let strJsonNew = getInspectorByKey('key_checkboxGroup_001');
      console.info('[' + tagName + '] Search checkboxShape is: ' + JSON.stringify(JSON.parse(strJsonNew)
        .$attrs
        .checkboxShape));
      expect(JSON.parse(strJsonNew).$attrs.checkboxShape).assertEqual('1');
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  
    /**
     * @tc.number checkboxGroupNode0200
     * @tc.name Test the checkboxUpdateStrategy property of the checkbox component
     * @tc.desc set the checkboxUpdateStrategy property value is checkboxUpdateStrategy.DEFAULT
     * @tc.size MediumTest
     * @tc.type Function
     * @tc.level 0
     */

    it('checkboxGroupNode0200', 0, async (done: Function) => {
      let tagName = 'checkboxGroupNode0200';
      console.info('[' + tagName + '] START============================');
      let strJsonNew = getInspectorByKey('key_checkboxGroup_001');
      console.info('[' + tagName + '] Search selectedColor is: ' + JSON.stringify(JSON.parse(strJsonNew)
        .$attrs
        .selectedColor));
      expect(JSON.parse(strJsonNew).$attrs.selectedColor).assertEqual('#FF00FFFF');
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  })
}