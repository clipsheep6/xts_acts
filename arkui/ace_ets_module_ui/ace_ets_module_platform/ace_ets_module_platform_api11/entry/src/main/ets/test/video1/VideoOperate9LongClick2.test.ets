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

export default function VideoOperate9LongClick2() {
  describe('VideoOperate9LongClick2', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperate9LongClick2 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video1/VideoOperate9LongClick2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate9LongClick2" == pages.name)) {
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
      console.info("VideoOperate9LongClick2 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0810
     * @tc.name 播放视频，长按2倍速播放后松手，正常倍速播放
     * @tc.desc 播放视频，长按2倍速播放后松手，正常倍速播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_changeRate_by_longClick2', 0, async (done: Function) => {
      console.info('[Video001_changeRate_by_longClick2] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let video = await dr.findComponent(ON.id('VideoOperateVideo').longClickable(true));
      // 长按视频倍速播放
      await video.longClick();
      await video.longClick();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 5);
      // 检查播放速度是否大于1
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_speedTime_1"));
      expect(await text.getText()).assertContain("isLessThanThreeTenths_true");
      // 检查当前播放速度是否还原为1
      let curRate  = await dr.findComponent(ON.id("Text_VideoOperateVideo_curRate"));
      expect(await curRate.getText()).assertContain("1");
      console.info('[Video001_changeRate_by_longClick2] END');
      done();
    });
  })
}
