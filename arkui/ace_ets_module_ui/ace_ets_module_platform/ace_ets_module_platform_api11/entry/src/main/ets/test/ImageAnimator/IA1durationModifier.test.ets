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

export default function IA1durationModifier() {
  describe('IA1durationModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA1durationModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA1durationModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA1durationModifier" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("IA1durationModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0020
     * @tc.name Import ImageAnimatorModifier and encapsulate the duration attribute
     * @tc.desc Import ImageAnimatorModifier and encapsulate the duration attribute
     * @tc.level Level 2
     * @tc.size   : MEDIUM
     * @tc.type   : Function
     */
    it('Video001_durationModifier_test', 0, async (done: Function) => {
      console.info('[Video001_durationModifier_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();

      let durationChangeButton = await dr.findComponent(ON.id("Button_durationChange"));
      await durationChangeButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      await durationChangeButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      await durationChangeButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      console.info('[Video001_durationModifier_test] END');
      done();
    });
  })
}
