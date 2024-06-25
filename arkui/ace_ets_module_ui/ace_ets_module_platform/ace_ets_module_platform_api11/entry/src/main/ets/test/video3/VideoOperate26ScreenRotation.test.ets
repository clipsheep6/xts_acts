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
import { describe, it, expect, beforeAll, afterAll } from "@ohos/hypium";
import Utils from '../../MainAbility/common/Utils';
import { Driver, ON } from '@ohos.UiTest';

export default function VideoOperate26ScreenRotation() {
  describe('VideoOperate26ScreenRotation', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate26ScreenRotation beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate26ScreenRotation",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate26ScreenRotation" == pages.name)) {
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

    afterAll(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("VideoOperate26ScreenRotation after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0810
     * @tc.name Frequent horizontal and vertical screen switching viewing experience
     * @tc.desc Frequent horizontal and vertical screen switching viewing experience
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_ScreenRotation_test', 0, async (done: Function) => {
      console.info('[Video001_ScreenRotation_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 横竖屏切换4次
      let horVerSwitchButton = await dr.findComponent(ON.id("Button_horVerSwitch"));
      await horVerSwitchButton.click();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      await horVerSwitchButton.click();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      await horVerSwitchButton.click();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      await horVerSwitchButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let videoComponent = await dr.findComponent(ON.id("VideoOperateVideo"));
      expect(videoComponent).not().assertNull();
      expect(await videoComponent.getType()).assertEqual("Video");
      let videoFinishFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_finishFlag"));
      expect(await videoFinishFlag.getText()).assertContain("true");
      console.info('[Video001_ScreenRotation_test] END');
      done();
    });
  });
}