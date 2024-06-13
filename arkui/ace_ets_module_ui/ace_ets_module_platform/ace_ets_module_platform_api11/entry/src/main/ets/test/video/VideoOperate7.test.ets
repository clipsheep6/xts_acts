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
const WAIT_UI_READYMS = 1000;

export default function VideoOperateTest7() {
  describe('VideoOperateTest7', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest7 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate7",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate7" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("VideoOperateTest7 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0490
     * @tc.name 多次拖动进度条至不同位置
     * @tc.desc 视频可正常跳转、播放，事件正常上报
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_slider_change', 0, async (done: Function) => {
      console.info('[Video001_slider_change] START');
      await Utils.sleep(WAIT_UI_READYMS*8);
      let strTextJson = getInspectorByKey('Text_VideoOperateVideo_third');
      console.info("[Video001_slider_change] component strTextJson:" + strTextJson);
      let objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video001_slider_change] component Record is: " + JSON.stringify(objText));

      let dr = await Driver.create();
      await dr.delayMs(WAIT_UI_READYMS);
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_third"))
      expect(dr).not().assertNull();
      expect(await text.getId()).assertEqual("Text_VideoOperateVideo_third");
      expect(await text.getText()).assertEqual('true');
      console.info('[Video001_slider_change] END');
      done();
    });
  })
}
