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
import { describe, beforeEach, afterEach, it, expect, beforeAll, afterAll } from "@ohos/hypium";
import Utils from '../../MainAbility/common/Utils';

export default function VideoOperateTest4() {
  describe('VideoOperateTest4', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest4 beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate4",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate4" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(Utils.WAIT_UI_READY_MS*7);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterAll(async () => {
      await Utils.sleep(1000);
      console.info("VideoOperateTest4 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0550
     * @tc.name 设置autoPlay为false
     * @tc.desc 组件打开后视屏不自动播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_change_autoPlay_loop', 0, async (done: Function) => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS*7);
      console.info('[Video001_change_autoPlay_loop] START');
      const strTextJson = getInspectorByKey('Text_startFlag');
      console.info("[Video001_change_autoPlay_loop]1 component strTextJson:" + strTextJson);
      const objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video001_change_autoPlay_loop]1 component strTextJson Record is: " + JSON.stringify(objText));
      expect(objText.$attrs.content).assertContain('autoPlay___11_false');
      console.info('[Video001_change_autoPlay_loop] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0540
     * @tc.name 设置autoPlay为true；
     * @tc.desc 组件打开后视屏自动播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video002_change_autoPlay_loop', 0, async (done: Function) => {
      console.info('[Video002_change_autoPlay_loop] START');
      const strTextJson = getInspectorByKey('Text_startFlag');
      console.info("[Video002_change_autoPlay_loop] component strTextJson:" + strTextJson);
      const objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video002_change_autoPlay_loop] component strTextJson Record is: " + JSON.stringify(objText));
      expect(objText.$attrs.content).assertContain('___12_true');
      console.info('[Video002_change_autoPlay_loop] END');
      done();
    });

  })
}
