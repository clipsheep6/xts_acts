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
const WAIT_UI_READYMS = 1000;

export default function VideoOperateTest3() {
  describe('VideoOperateTest3', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest3 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate3",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate3" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(WAIT_UI_READYMS);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(WAIT_UI_READYMS);
      console.info("VideoOperateTest3 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0570
     * @tc.name Change the autoplay attribute from false to true during playback
     * @tc.desc Change the autoplay attribute from false to true during playback and video begin play
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_change_autoPlay', 0, async (done: Function) => {
      console.info('[Video001_change_autoPlay] START');
      await Utils.sleep(WAIT_UI_READYMS);
      //点击开始播放
      sendEventByKey('Button_start', 10, '');
      await Utils.sleep(WAIT_UI_READYMS);
      //点击修改autoPlay属性为true，不影响视频播放
      sendEventByKey('Button_autoPlayTrue', 10, '');
      await Utils.sleep(WAIT_UI_READYMS*6);
      let strTextJson = getInspectorByKey('Text_VideoOperateVideo_finishFlag');
      let objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video001_change_autoPlay] component Text Record is: " + JSON.stringify(objText));
      expect(objText.$attrs.content).assertContain('true');
      console.info('[Video001_change_autoPlay] END');
      done();
    });

  })
}
