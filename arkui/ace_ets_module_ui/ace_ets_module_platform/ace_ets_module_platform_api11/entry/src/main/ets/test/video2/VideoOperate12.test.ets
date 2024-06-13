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

export default function VideoOperateTest12() {
  describe('VideoOperateTest12', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest12 beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate12",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate12" == pages.name)) {
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
      console.info("VideoOperateTest12 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0800
     * @tc.name 预览图路径错误/不设置，不影响视频正常播放
     * @tc.desc 3、仍保留之前的图源，Video播放前黑屏
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_previewUri_error', 0, async (done: Function) => {
      console.info('[Video001_previewUri_error] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 6);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let text = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(dr).not().assertNull();
      expect(await text.getText()).assertContain("true");

      let text2  = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(dr).not().assertNull();
      expect(await text2.getText()).assertContain("true");
      console.info('[Video001_onFullscreenChange] END');
      done();
    });
  })
}
