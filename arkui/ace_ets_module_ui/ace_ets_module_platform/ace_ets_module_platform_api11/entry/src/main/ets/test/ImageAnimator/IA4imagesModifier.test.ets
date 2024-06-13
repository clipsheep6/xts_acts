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

export default function IA4imagesModifier() {
  describe('IA4imagesModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA4imagesModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA4imagesModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA4imagesModifier" == pages.name)) {
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
      console.info("IA4imagesModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0050
     * @tc.name 导入ImageAnimatorModifier，封装images属性
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_imagesModifier_test', 0, async (done: Function) => {
      console.info('[Video001_imagesModifier_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 4);
      let imageAnimatorComp = await dr.findComponent(ON.id("ImageAnimatorComp"));
      expect(dr).not().assertNull();
      expect(await imageAnimatorComp.getId()).assertEqual("ImageAnimatorComp");
      console.info('[Video001_imagesModifier_test] END');
      done();
    });
  })
}
