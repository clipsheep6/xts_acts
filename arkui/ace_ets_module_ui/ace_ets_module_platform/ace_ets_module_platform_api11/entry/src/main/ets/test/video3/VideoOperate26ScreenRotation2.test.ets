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

export default function VideoOperate26ScreenRotation2() {
  describe('VideoOperate26ScreenRotation2', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate26ScreenRotation2 beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate26ScreenRotation2",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate26ScreenRotation2" == pages.name)) {
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
      console.info("VideoOperate26ScreenRotation2 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0790
     * @tc.name 转动手机到横屏画面也会随着屏幕选转
     * @tc.desc 转动手机到横屏画面也会随着屏幕选转
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_ScreenRotation2_test', 0, async (done: Function) => {
      console.info('[Video001_ScreenRotation2_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 屏幕旋转到水平方向
      let horVerSwitchButton = await dr.findComponent(ON.id("Button_horVerSwitch"));
      await horVerSwitchButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      // 校验video组件没有崩溃
      let videoComponent = await dr.findComponent(ON.id("VideoOperateVideo"));
      expect(videoComponent).not().assertNull();
      expect(await videoComponent.getType()).assertEqual("Video");
      // 校验video组件也发生了旋转，通过其width和height的大小的比较
      let strVideoJson = getInspectorByKey('VideoOperateVideo');
      let objVideo: Record<string, string> = JSON.parse(strVideoJson);
      console.info("[Video001_ScreenRotation2_test] component Text Record is: " + JSON.stringify(objVideo));
      let width = parseFloat(objVideo.$attrs.width);
      let height = parseFloat(objVideo.$attrs.height);
      let screenRotationFlag:boolean = width > height;
      expect(screenRotationFlag).assertTrue();
      await horVerSwitchButton.click();
      console.info('[Video001_ScreenRotation2_test] END');
      done();
    });
  });
}