// @ts-nocheck
/**
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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

import router from '@system.router';
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from "hypium/index"
import Utils from './Utils.ets'

export default function onFrameJsunit() {
  describe('onFrameTest', function () {
    beforeEach(async function (done) {
      console.info("flex beforeEach start");
      let options = {
        uri: 'pages/onFrame',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get onFrame state success " + JSON.stringify(pages));
        if (!("onFrame" == pages.name)) {
          console.info("get onFrame state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push onFrame page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push onFrame page error: " + err);
      }
      done()
    });

    afterEach(async function () {
      await Utils.sleep(1000);
      console.info("onFrame after each called");
    });

    /*
     * @tc.number       SUB_ACE_BASIC_ETS_API_0010
     * @tc.name         testOnFrame001
     * @tc.desic         aceonFrameEtsTest
     */
    it('testOnFrame001', 0, async function (done) {
      console.info('onFrame testOnFrame001 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('button1');
      console.info("[testOnFrame001] component strJson:" + strJson);
      let obj = JSON.parse(strJson);
      expect(obj.$type).assertEqual('Button');
      expect(obj.$attrs.width).assertEqual(90);
      done();
    });
  })
}
