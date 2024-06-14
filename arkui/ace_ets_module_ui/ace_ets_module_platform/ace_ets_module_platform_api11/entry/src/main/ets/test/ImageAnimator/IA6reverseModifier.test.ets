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

export default function IA6reverseModifier() {
  describe('IA6reverseModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA6reverseModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA6reverseModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA6reverseModifier" == pages.name)) {
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
      console.info("IA6reverseModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0070
     * @tc.name Import ImageAnimatorModifier and encapsulate the reverse attribute
     * @tc.desc Import ImageAnimatorModifier and encapsulate the reverse attribute
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_reverseModifier_test', 0, async (done: Function) => {
      console.info('[Video001_reverseModifier_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      // 改变reverse取反
      let reverseChangeButton = await dr.findComponent(ON.id("Button_reverseChange"));
      await reverseChangeButton.click();
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      let strJsonImage = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_reverseModifier_test] component strJsonImage:" + strJsonImage);
      // const objJsonImage: Record<string, string> = JSON.parse(strJsonImage);
      // expect(objJsonImage.$attrs.reverse).assertContain('true');
      let ImageAnimator_reverse = await dr.findComponent(ON.id("ImageAnimator_reverse"));
      expect(await ImageAnimator_reverse.getText()).assertContain('true');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info('[Video001_reverseModifier_test] END');
      done();
    });
  })
}
