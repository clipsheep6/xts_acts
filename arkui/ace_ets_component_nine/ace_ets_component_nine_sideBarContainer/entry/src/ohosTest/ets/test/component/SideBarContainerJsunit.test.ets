
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
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "@ohos/hypium"
import router from '@system.router';
import events_emitter from '@ohos.events.emitter'
import Utils from '../Utils';

interface optionsObj {
  uri: string;
}

export default function SideBarContainerJsunit() {
  describe('sideBarContainerTest', () => {
    beforeEach(async (done: Function) => {
      console.info("sideBarContainer beforeEach start");
      let options: optionsObj = {
        uri: 'MainAbility/pages/component/sideBarContainerPage',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get sideBarContainer state pages: " + JSON.stringify(pages));
        if (!("sideBarContainerPage" == pages.name)) {
          console.info("get sideBarContainer pages.name: " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push sideBarContainer page result: " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push sideBarContainer page error: " + err);
      }
      done()
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("sideBarContainer after each called");
    })
    /**
     * @tc.number test sideBarContainershowSideBar
     * @tc.name   Test the show property of the sideBarContainer component
     * @tc.desc   set the sideBarContainer property value is boolean
     * @tc.size   MediumTest
     * @tc.type   Function
     * @tc.level  0
     */
    it('testContainerShow01', 0, async (done: Function) => {
      let tagName = 'testContainerShow01';
      console.info('[' + tagName + '] START============================');
      await Utils.sleep(1000)
      let strJson = getInspectorByKey('sidebarkey');
      console.info('[' + tagName + '] component obj is: ' + strJson);
      let obj: ESObject = JSON.parse(strJson);
      expect(obj.$type).assertEqual('SideBarContainer');
      console.info('[' + tagName + '] END ===========================');
      done();
    });
  })
}
