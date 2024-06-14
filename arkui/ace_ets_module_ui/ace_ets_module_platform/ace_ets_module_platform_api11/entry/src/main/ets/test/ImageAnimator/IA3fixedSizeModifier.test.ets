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

export default function IA3fixedSizeModifier() {
  describe('IA3fixedSizeModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA3fixedSizeModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA3fixedSizeModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA3fixedSizeModifier" == pages.name)) {
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
      console.info("IA3fixedSizeModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0040
     * @tc.name Import ImageAnimatorModifier and encapsulate the fixedSize attribute
     * @tc.desc Import ImageAnimatorModifier and encapsulate the fixedSize attribute
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_fixedSizeModifier_test', 0, async (done: Function) => {
      console.info('[Video001_fixedSizeModifier_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let strJsonImage = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_fixedSizeModifier_test] component strJsonImage:" + strJsonImage);
      // 对fixedSize的属性取反
      let fixedSizeChangeButton = await dr.findComponent(ON.id("Button_fixedSizeChange"));
      await fixedSizeChangeButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let strJsonImage2 = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_fixedSizeModifier_test] component strJsonImage2:" + strJsonImage2);
      const objJsonImage2: Record<string, string> = JSON.parse(strJsonImage2);
      expect(objJsonImage2.$attrs.fixedSize).assertEqual('false');
      console.info('[Video001_fixedSizeModifier_test] END');
      done();
    });
  })
}
