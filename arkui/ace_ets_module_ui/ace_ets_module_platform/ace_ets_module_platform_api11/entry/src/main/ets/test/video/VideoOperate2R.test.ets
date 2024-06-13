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

export default function VideoOperateTest2R() {
  describe('VideoOperateTest2R', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest2R beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate2R",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate2R" == pages.name)) {
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
      console.info("VideoOperateTest2R after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0850
     * @tc.name 点击右半边热区视屏不暂停
     * @tc.desc 点击右半边热区视屏不暂停
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_responseRegion_rightClick', 0, async (done: Function) => {
      console.info('[Video001_responseRegion_rightClick] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let videoComponent = await dr.findComponent(ON.id("VideoOperateVideo"));
      await videoComponent.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let text = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(await text.getText()).assertContain("false_false");
      let text2 = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(await text2.getText()).assertContain("true");
      console.info('[Video001_responseRegion_rightClick] END');
      done();
    });

  })
}
