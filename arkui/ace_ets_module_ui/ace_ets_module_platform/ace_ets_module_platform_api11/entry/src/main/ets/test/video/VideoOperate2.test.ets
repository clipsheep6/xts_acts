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

export default function VideoOperateTest2() {
  describe('VideoOperateTest2', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest2 beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate2" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(Utils.WAIT_UI_READY_MS);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("VideoOperateTest2 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0840
     * @tc.name ResponseRegion Set Left Half Hot Zone，video paused
     * @tc.desc ResponseRegion Set Left Half Hot Zone，video paused
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_responseRegion', 0, async (done: Function) => {
      console.info('[Video001_responseRegion] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let videoComponent = await dr.findComponent(ON.id("VideoOperateVideo"));
      await videoComponent.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 5);
      let text = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(await text.getText()).assertContain("true_true");
      let text2 = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(await text2.getText()).assertContain("false");
      console.info('[Video001_onFullscreenChange] END');
      done();
    });

  })
}
