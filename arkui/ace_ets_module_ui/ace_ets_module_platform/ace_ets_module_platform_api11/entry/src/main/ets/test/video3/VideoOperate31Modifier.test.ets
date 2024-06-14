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
import { describe, afterEach, it, expect, beforeAll } from "@ohos/hypium";
import Utils from '../../MainAbility/common/Utils';
import { Driver, ON } from '@ohos.UiTest';

export default function VideoOperate31Modifier() {
  describe('VideoOperate31Modifier', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate31Modifier beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate31Modifier",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate31Modifier" == pages.name)) {
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

    afterEach(async () => {
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      console.info("VideoOperate31Modifier after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0330
     * @tc.name 设置同一个modifier给两个Video组件
     * @tc.desc 设置同一个modifier给两个Video组件
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_modifier_autoPlay_muted_test', 0, async (done: Function) => {
      console.info('[Video001_modifier_autoPlay_muted_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let Text_VideoOperateVideo1_statue = await dr.findComponent(ON.id("Text_VideoOperateVideo1_statue"));
      expect(await Text_VideoOperateVideo1_statue.getText()).assertContain("true");
      let Text_VideoOperateVideo2_statue = await dr.findComponent(ON.id("Text_VideoOperateVideo2_statue"));
      expect(await Text_VideoOperateVideo2_statue.getText()).assertContain("true");
      let Text_VideoOperateVideo_muted = await dr.findComponent(ON.id("Text_VideoOperateVideo_muted"));
      expect(await Text_VideoOperateVideo_muted.getText()).assertContain("true_false");
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      console.info('[Video001_modifier_autoPlay_muted_test] END');
      done();
    });
  })
}
