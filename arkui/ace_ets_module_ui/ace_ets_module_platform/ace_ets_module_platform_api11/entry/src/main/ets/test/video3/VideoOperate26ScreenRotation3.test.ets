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

export default function VideoOperate26ScreenRotation3() {
  describe('VideoOperate26ScreenRotation3', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate26ScreenRotation3 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate26ScreenRotation3",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate26ScreenRotation3" == pages.name)) {
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
      console.info("VideoOperate26ScreenRotation3 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0800
     * @tc.name The position of the progress bar's focus remains unchanged
     * after switching between horizontal and vertical screens
     * @tc.desc The position of the progress bar's focus remains unchanged
     * after switching between horizontal and vertical screens
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_ScreenRotation3_test', 0, async (done: Function) => {
      console.info('[Video001_ScreenRotation3_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 暂停播放记录currentTime
      let Button_pause = await dr.findComponent(ON.id("Button_pause"));
      await Button_pause.click();
      let videoCurrentTime1 = await dr.findComponent(ON.id("Text_VideoOperateVideo_currentTime"));
      const firstTimeValue: number = Number(await videoCurrentTime1.getText());
      // 屏幕旋转到水平方向
      let horVerSwitchButton = await dr.findComponent(ON.id("Button_horVerSwitch"));
      await horVerSwitchButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      // 再次拿到currentTime并比较旋转前后的值
      let videoCurrentTime2 = await dr.findComponent(ON.id("Text_VideoOperateVideo_currentTime"));
      const secondTimeValue: number = Number(await videoCurrentTime2.getText());
      expect(firstTimeValue === secondTimeValue).assertTrue();
      await horVerSwitchButton.click();
      console.info('[Video001_ScreenRotation3_test] END');
      done();
    });
  });
}