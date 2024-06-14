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

export default function VideoOperate30Modifier() {
  describe('VideoOperate30Modifier', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate30Modifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate30Modifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate30Modifier" == pages.name)) {
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
      console.info("VideoOperate30Modifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0280
     * @tc.name 设置modifier的autoPlay为true，下次设置muted为true
     * @tc.desc 设置modifier的autoPlay为true，下次设置muted为true
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_modifier_autoPlay_muted_test', 0, async (done: Function) => {
      console.info('[Video001_modifier_autoPlay_muted_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 点击静音按钮
      let Button_mutedSet = await dr.findComponent(ON.id("Button_mutedSet"));
      await Button_mutedSet.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 点击静音之后查看autoPlay属性
      let video_autoPlayFlag_startFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_statue"));
      expect(await video_autoPlayFlag_startFlag.getText()).assertContain("true_true");
      // 点击静音之后查看muted属性
      let videoMutedText = await dr.findComponent(ON.id("Text_VideoOperateVideo_muted"));
      expect(await videoMutedText.getText()).assertContain("true");
      console.info('[Video001_modifier_autoPlay_muted_test] END');
      done();
    });
  })
}
