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

export default function VideoOperateTest14() {
  describe('VideoOperateTest14', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperateTest14 beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video2/VideoOperate14",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate14" == pages.name)) {
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
      console.info("VideoOperateTest14 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0310
     * @tc.name 点击pause按钮暂停播放，点击pause按钮后暂停播放
     * @tc.desc 点击pause按钮暂停播放，点击pause按钮后暂停播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_pause_test', 0, async (done: Function) => {
      console.info('[Video001_pause_test] START');
      // 发出暂停控制
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let Button_pause = await dr.findComponent(ON.id("Button_pause"));
      await Button_pause.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      let textPause = await dr.findComponent(ON.id("Text_VideoOperateVideo_second"));
      expect(dr).not().assertNull();
      expect(await textPause.getText()).assertContain("true");
      console.info('[Video001_pause_test] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0160
     * @tc.name 不设置controls属性，使用默认值；显示视频播放控制栏
     * @tc.desc 不设置controls属性，使用默认值；显示视频播放控制栏
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video002_not_set_controls_test', 0, async (done: Function) => {
      console.info('[Video002_not_set_controls_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let text = await dr.findComponent(ON.id("Text_VideoOperateVideo_first"));
      expect(dr).not().assertNull();
      expect(await text.getText()).assertContain("true");
      console.info('[Video002_not_set_controls_test] END');
      done();
    });
  })
}
