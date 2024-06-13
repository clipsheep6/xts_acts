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

export default function VideoOperateTest17() {
  describe('VideoOperateTest17', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest17 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate17",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate17" == pages.name)) {
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
      console.info("VideoOperateTest17 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0380
     * @tc.name 纯音频文件支持静音
     * @tc.desc 纯音频文件支持静音
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_audio_muted_test', 0, async (done: Function) => {
      console.info('[Video001_audio_muted_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      // 发出静音控制
      sendEventByKey('Button_muted', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let textPause = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(dr).not().assertNull();
      expect(await textPause.getText()).assertContain("true");
      console.info('[Video001_audio_muted_test] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0210
     * @tc.name 加载音频文件，视频黑屏，但会播放声音
     * @tc.desc 加载音频文件，视频黑屏，但会播放声音
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video002_audio_play_test', 0, async (done: Function) => {
      console.info('[Video002_audio_play_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 1);
      // 取消静音
      sendEventByKey('Button_muted', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);

      let textStart = await dr.findComponent(ON.id("Text_VideoOperateVideo_start"));
      expect(dr).not().assertNull();
      expect(await textStart.getText()).assertContain("true");

      let textUpdate = await dr.findComponent(ON.id("Text_VideoOperateVideo_currentTimeUpdateFlag"));
      expect(dr).not().assertNull();
      expect(await textUpdate.getText()).assertContain("true");
      console.info('[Video002_audio_play_test] END');
      done();
    });
  })
}
