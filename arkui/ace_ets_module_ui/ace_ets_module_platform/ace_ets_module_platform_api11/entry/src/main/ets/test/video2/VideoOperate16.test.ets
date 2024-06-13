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

export default function VideoOperateTest16() {
  describe('VideoOperateTest16', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest16 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate16",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate16" == pages.name)) {
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
      console.info("VideoOperateTest16 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0160
     * @tc.name 点击暂停播放按钮触发暂停事件；视屏暂停，点击开始播放视屏又继续播放
     * @tc.desc 点击暂停播放按钮触发暂停事件；视屏暂停，点击开始播放视屏又继续播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_pause_start_test', 0, async (done: Function) => {
      console.info('[Video001_pause_start_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let startButton = await dr.findComponent(ON.id("Button_start"));
      // 发出开始控制
      await startButton.click();
      // 发出暂停控制
      let pauseButton = await dr.findComponent(ON.id("Button_pause"));
      await pauseButton.click();
      // 发出开始控制
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      let textPause = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(await textPause.getText()).assertContain("true");
      let textStart = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(await textStart.getText()).assertContain("true");
      console.info('[Video001_pause_start_test] END');
      done();
    });
  })
}
