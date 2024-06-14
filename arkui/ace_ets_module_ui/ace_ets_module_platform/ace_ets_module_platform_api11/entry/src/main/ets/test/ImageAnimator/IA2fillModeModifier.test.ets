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

export default function IA2fillModeModifier() {
  describe('IA2fillModeModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA2fillModeModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA2fillModeModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA2fillModeModifier" == pages.name)) {
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
      console.info("IA2fillModeModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0030
     * @tc.name 导入ImageAnimatorModifier，封装fillMode属性
     * @tc.desc 导入ImageAnimatorModifier，封装fillMode属性
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_fillModeModifier_test', 0, async (done: Function) => {
      console.info('[Video001_fillModeModifier_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let strJsonImage = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_fillModeModifier_test] component strJsonImage:" + strJsonImage);
      let durationChangeButton = await dr.findComponent(ON.id("Button_fillModeChange"));
      await durationChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let strJsonImage2 = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_fillModeModifier_test] component strJsonImage2:" + strJsonImage2);
      console.info('[Video001_fillModeModifier_test] END');
      done();
    });
  })
}
