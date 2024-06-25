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

export default function IA7stateModifier() {
  describe('IA7stateModifier', () => {
    beforeAll(async (done: Function) => {
      console.info("IA7stateModifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/ImageAnimator/IA7stateModifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("IA7stateModifier" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("IA7stateModifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0080
     * @tc.name Import ImageAnimatorModifier and encapsulate state properties
     * @tc.desc Import ImageAnimatorModifier and encapsulate state properties
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_stateModifier_test', 0, async (done: Function) => {
      // 未点击前显示初始状态
      console.info('[Video001_stateModifier_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let stateChange = await dr.findComponent(ON.id("Button_stateChange"));
      // 第一次点击开始播放
      await stateChange.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      // 第二次点击图片暂停
      await stateChange.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      // 第三次点击图片停止，回到第一张图片
      await stateChange.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      // 第四次点击图片回到初始状态
      await stateChange.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      let strJsonImage = getInspectorByKey('ImageAnimatorComp');
      console.info("[Video001_stateModifier_test] component strJsonImage:" + strJsonImage);
      // const objJsonImage: Record<string, string> = JSON.parse(strJsonImage);
      // expect(objJsonImage.$attrs.state).assertContain('Initial');
      let ImageAnimator_state = await dr.findComponent(ON.id("ImageAnimator_state"));
      expect(await ImageAnimator_state.getText()).assertContain('0');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info('[Video001_stateModifier_test] END');
      done();
    });
  })
}
