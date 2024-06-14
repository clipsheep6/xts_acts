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

export default function IA5iterationsModifier() {
  describe('IA5iterationsModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA5iterationsModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA5iterationsModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA5iterationsModifier" == pages.name)) {
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
      console.info("IA5iterationsModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0040
     * @tc.name Import ImageAnimatorModifier and encapsulate the iterations attribute
     * @tc.desc Import ImageAnimatorModifier and encapsulate the iterations attribute
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_iterationsModifier_test', 0, async (done: Function) => {
      console.info('[Video001_iterationsModifier_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2); // 初始值-1开始展示效果，即无限循环
      // 对iterations的属性++
      let iterationsChangeButton = await dr.findComponent(ON.id("Button_iterationsChange"));
      await iterationsChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS); // 变成0，不播放

      await iterationsChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2); // 变成1，播放一次

      await iterationsChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3); // 变成3，播放三次

      await iterationsChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS); // 变成初始值-1，即无限循环
      console.info('[Video001_iterationsModifier_test] END');
      done();
    });
  })
}
