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

export default function VideoOperate29Modifier() {
  describe('VideoOperate29Modifier', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate29Modifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate29Modifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate29Modifier" == pages.name)) {
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
      console.info("VideoOperate29Modifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0260
     * @tc.name 导入VideoModifier，封装muted属性
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_modifier_autoPlay_true_test', 0, async (done: Function) => {
      console.info('[Video001_modifier_autoPlay_true_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let Text_VideoOperateVideo_muted1 = await dr.findComponent(ON.id("Text_VideoOperateVideo_muted"));
      expect(await Text_VideoOperateVideo_muted1.getText()).assertContain("false");
      // 点击静音按钮
      let Button_mutedSet = await dr.findComponent(ON.id("Button_mutedSet"));
      await Button_mutedSet.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let Text_VideoOperateVideo_muted2 = await dr.findComponent(ON.id("Text_VideoOperateVideo_muted"));
      expect(await Text_VideoOperateVideo_muted2.getText()).assertContain("true");
      console.info('[Video001_modifier_autoPlay_true_test] END');
      done();
    });
  })
}
