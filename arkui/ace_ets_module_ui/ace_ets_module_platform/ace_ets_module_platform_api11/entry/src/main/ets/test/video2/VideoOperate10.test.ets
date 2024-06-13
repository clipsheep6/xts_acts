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
import { describe, beforeEach, afterEach, it, expect } from "@ohos/hypium"
import Utils from '../../MainAbility/common/Utils'
import { Driver, ON } from '@ohos.UiTest';

export default function VideoOperateTest10() {
  describe('VideoOperateTest10', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest10 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate10",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate10" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(Utils.WAIT_UI_READY_MS*2);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("VideoOperateTest10 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0780
     * @tc.name 在全屏播放与非全屏播放状态之间切换时触发onFullscreenChange事件
     * @tc.desc 全屏和半屏切换正常
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_onFullscreenChange', 0, async (done: Function) => {
      console.info('[Video001_onFullscreenChange] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 点击全屏
      let Button_first  = await dr.findComponent(ON.id("Button_first"));
      await Button_first.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 退出全屏
      let videoComp  = await dr.findComponent(ON.id("VideoOperateVideo"));
      await videoComp.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 全屏标识true
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(await text.getText()).assertContain("true");
      // 退出的话全屏标识为false
      let textSecond  = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(await textSecond.getText()).assertContain("false");
      console.info('[Video001_onFullscreenChange] END');
      done();
    });

  })
}
