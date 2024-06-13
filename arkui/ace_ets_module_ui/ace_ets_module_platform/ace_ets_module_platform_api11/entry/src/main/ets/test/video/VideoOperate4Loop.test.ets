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

export default function VideoOperateTest4Loop() {
  describe('VideoOperateTest4Loop', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest4Loop beforeEach start");
      // 确保页面状态正确
      let options:RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate4Loop",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate4Loop" == pages.name)) {
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
      console.info("VideoOperateTest4Loop after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0630
     * @tc.name 设置loop属性为false
     * @tc.desc 组件打开后视屏不循环播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_change_loop', 0, async (done: Function) => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS*7);
      console.info('[Video001_change_loop] START');
      const strTextFinishJson = getInspectorByKey('Text_finishFlag');
      console.info("[Video001_change_loop] component strTextFinishJson:" + strTextFinishJson);
      const objTextFinish: Record<string, string> = JSON.parse(strTextFinishJson);
      console.info("[Video001_change_loop] component strTextFinishJson Record is: " + JSON.stringify(objTextFinish));
      expect(objTextFinish.$attrs.content).assertContain('not_loop___21_true');
      console.info('[Video001_change_loop] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0620
     * @tc.name 设置loop属性为true；
     * @tc.desc 组件打开后单视频循环播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video002_change_loop', 0, async (done: Function) => {
      console.info('[Video002_change_loop] START');
      const strTextFinishJson = getInspectorByKey('Text_finishFlag');
      console.info("[Video002_change_loop] component strTextFinishJson:" + strTextFinishJson);
      const objTextFinish: Record<string, string> = JSON.parse(strTextFinishJson);
      console.info("[Video002_change_loop] component strTextFinishJson Record is: " + JSON.stringify(objTextFinish));
      expect(objTextFinish.$attrs.content).assertContain('___22_false');
      console.info('[Video002_change_loop] END');
      done();
    });
  })
}
