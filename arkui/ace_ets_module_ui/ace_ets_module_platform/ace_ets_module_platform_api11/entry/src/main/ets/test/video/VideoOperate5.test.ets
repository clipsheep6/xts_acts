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

export default function VideoOperateTest5() {
  describe('VideoOperateTest5', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest5 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate5",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate5" == pages.name)) {
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
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("VideoOperateTest5 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0560
     * @tc.name Set setCurrentTime to 4
     * @tc.desc Set setCurrentTime to 4
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_setCurrentTime', 0, async (done: Function) => {
      console.info('[Video001_setCurrentTime] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 模拟点击进行setCurrentTime设置
      sendEventByKey('Button_setCurrentTime', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let strTextJson = getInspectorByKey('Text_VideoOperateVideo_first');
      console.info("[Video001_setCurrentTime] component strTextJson:" + strTextJson);
      let objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video001_setCurrentTime] component Record is: " + JSON.stringify(objText));
      expect(objText.$attrs.content).assertEqual('4');
      console.info('[Video001_setCurrentTime] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0440
     * @tc.name Click requestFullscreen to request full screen playback
     * @tc.desc Click requestFullscreen to request full screen playback
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video002_requestFullscreen', 0, async (done: Function) => {
      console.info('[Video002_requestFullscreen] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 模拟点击进行fullscreen设置
      sendEventByKey('Button_fullscreen', 10, '');
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let text  = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"))
      expect(dr).not().assertNull();
      expect(await text.getText() === 'true').assertTrue();
      console.info('[Video002_requestFullscreen] END');
      done();
    });
  })
}
