/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import router, { RouterOptions } from '@system.router';
import { describe, afterEach, it, expect, beforeAll } from "@ohos/hypium";
import Utils from '../../MainAbility/common/Utils';
import { Driver, ON } from '@ohos.UiTest';

export default function IA9iterations1P10() {
  describe('IA9iterations1P10', () => {
    beforeAll(async (done: Function) => {
      console.info("IA9iterations1P10 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA9iterations1P10",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA9iterations1P10" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(Utils.WAIT_UI_READY_MS);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("IA9iterations1P10 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0900
     * @tc.name ImageAnimator iterations默认值验证
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_iterationsP10_test', 0, async (done: Function) => {
      console.info('[Video001_iterationsP10_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let state = await dr.findComponent(ON.id("Button_start"));
      await state.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let repeatFlagText = await dr.findComponent(ON.id("ImageAnimator_repeatFlag"));
      expect(await repeatFlagText.getText()).assertContain('true');
      console.info('[Video001_iterationsP10_test] END');
      done();
    });
  })
}
