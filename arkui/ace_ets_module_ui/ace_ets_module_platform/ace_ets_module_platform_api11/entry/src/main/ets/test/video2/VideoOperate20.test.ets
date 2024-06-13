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

export default function VideoOperateTest20() {
  describe('VideoOperateTest20', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest20 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate20",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate20" == pages.name)) {
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
      console.info("VideoOperateTest20 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0830
     * @tc.name 视频页，点击全屏按钮，点击其他区域可以将视频播放或者暂停
     * @tc.desc 视频页，点击全屏按钮，点击其他区域可以将视频播放或者暂停
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_fullScreen_start_pause_test', 0, async (done: Function) => {
      console.info('[Video001_fullScreen_start_pause_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      sendEventByKey('Button_fullScreen', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 1);
      // 第一次点击即开始播放
      sendEventByKey('VideoOperateVideo', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      // 第二次点击即暂停播放
      sendEventByKey('VideoOperateVideo', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 1);
      // 第3次点击即开始播放
      sendEventByKey('VideoOperateVideo', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 4);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let textFullScreen = await dr.findComponent(ON.id("Text_VideoOperateVideo_fullScreen"));
      expect(dr).not().assertNull();
      expect(await textFullScreen.getText()).assertContain("true_true");

      let textStart = await dr.findComponent(ON.id("Text_VideoOperateVideo_start"));
      expect(dr).not().assertNull();
      expect(await textStart.getText()).assertContain("true");

      let textPause = await dr.findComponent(ON.id("Text_VideoOperateVideo_pause"));
      expect(dr).not().assertNull();
      expect(await textPause.getText()).assertContain("true");

      console.info('[Video001_fullScreen_start_pause_test] END');
      done();
    });
  })
}
