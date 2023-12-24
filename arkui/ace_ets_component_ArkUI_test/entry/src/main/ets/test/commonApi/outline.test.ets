/**
 * Copyright (c) 2023 iSoftStone Information Technology (Group) Co.,Ltd.
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
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from '@ohos/hypium';
import router from '@ohos.router';
import CommonFunc from '../../MainAbility/common/Common';
export default function outline() {
  describe('outline', function () {
    beforeEach(async function (done) {
      console.info("outline beforeEach start");
      let options = {
        url: 'MainAbility/pages/commonApi/outline',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get outline state pages:" + JSON.stringify(pages));
        if (!("outline" == pages.name)) {
          console.info("get WaterFlow_WaterFlow pages.name:" + JSON.stringify(pages.name));
          let result = await router.push(options);
          await CommonFunc.sleep(2000);
          console.info("push outline page result:" + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push outline page error:" + err);
      }
      console.info("outline beforeEach end");
      done();
    });
    afterEach(async function () {
      await CommonFunc.sleep(1000);
      console.info("outline after each called");
    });
    /**
     * @tc.number    SUB_ACE_COMMONMETHOD_OUTLINE_0100
     * @tc.name      outline
     * @tc.desc      set api
     */
    it('outline_0100', 0, async function (done) {
      console.info('[outline_0100] START');
      await CommonFunc.sleep(2000);
      let text1 = getInspectorByKey('outline_1');
      let Obj1 = JSON.parse(text1);
      expect(Obj1.$type).assertEqual('Text');
      console.info('[outline_0100] END');
      done();
    });

  })
}
