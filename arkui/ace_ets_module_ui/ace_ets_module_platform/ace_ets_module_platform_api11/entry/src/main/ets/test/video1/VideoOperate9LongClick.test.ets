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

export default function VideoOperate9LongClick() {
  describe('VideoOperate9LongClick', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperate9LongClick beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video1/VideoOperate9LongClick",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate9LongClick" == pages.name)) {
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
      console.info("VideoOperate9LongClick after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0200
     * @tc.name Long press the video area in full screen mode, and the video will play at double speed
     * @tc.desc Long press the video area in full screen mode, and the video will play at double speed
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_changeRate_by_longClick', 0, async (done: Function) => {
      console.info('[Video001_changeRate_by_longClick] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 发送全屏请求
      let Button_fullScreen = await dr.findComponent(ON.id('Button_fullScreen'));
      await Button_fullScreen.click();
      let video = await dr.findComponent(ON.id('VideoOperateVideo'));
      // 长按视频倍速播放
      await video.longClick();
      await video.longClick();
      await video.longClick();
      // 发送退出全屏请求以便拿到Text组件
      await video.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 4);
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_speedTime_1"));
      expect(await text.getText()).assertContain("isLessThanThreeTenths_true");
      console.info('[Video001_changeRate_by_longClick] END');
      done();
    });
  })
}
