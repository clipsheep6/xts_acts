/*
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
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

import router from '@ohos.router';
import { describe, beforeAll, beforeEach, afterEach, afterAll, it, expect } from "@ohos/hypium"
import Utils from '../../MainAbility/common/Utils'

export default function Polygon002Test() {
  describe('Polygon002Test', () => {
    beforeAll(async () => {
      console.info("flex beforeEach start");
      let options:router.RouterOptions = {
        url: 'MainAbility/pages/polygon/polygon002',
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get path state success " + JSON.stringify(pages));
        if (!("path2" == pages.name)) {
          console.info("get path state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push path page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push path page error: " + err);
      }
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("Polygon002 after each called");
    });

    /*
     * @tc.number       SUB_ACE_UI_ATTRIBUTES_POSITION_SIZE_DRAWAREA_0340
     * @tc.name         testPolygon0020001
     * @tc.desic         acePolygon002EtsTest0001
     */
    it('testPolygon0020001', 0, async () => {
      console.info('Polygon002 testPolygon0020001 START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('polygon002');
      console.info("[testPolygon0020001] component width strJson:" + strJson);
      expect(JSON.parse(strJson).$type).assertEqual('Polygon');
      expect(JSON.parse(strJson).$attrs.width).assertEqual("210.00vp");
      expect(JSON.parse(strJson).$attrs.height).assertEqual("140.00vp");
      console.info("[testPolygon0020001] width value :" + JSON.parse(strJson).$attrs.width);
    });
  })
}