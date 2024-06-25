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

export default function VideoOperateTest8E2() {
  describe('VideoOperateTest8E2', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest8E2 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video1/VideoOperate8E2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate8E2" == pages.name)) {
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
      console.info("VideoOperateTest8E2 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0490
     * @tc.name Set the playback speed of the video to Speed-Forward_2_00_X
     * @tc.desc Set the playback speed of the video to Speed-Forward_2_00_X
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_currentProgressRate_E2', 0, async (done: Function) => {
      console.info('[Video001_currentProgressRate_E2] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS*6);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_speedTime_2"));
      expect(dr).not().assertNull();
      expect(await text.getId()).assertEqual("Text_VideoOperateVideo_speedTime_2");
      expect(await text.getText()).assertContain("isLessThanThreeTenths_true");
      console.info('[Video001_currentProgressRate_E2] END');
      done();
    });
  })
}
