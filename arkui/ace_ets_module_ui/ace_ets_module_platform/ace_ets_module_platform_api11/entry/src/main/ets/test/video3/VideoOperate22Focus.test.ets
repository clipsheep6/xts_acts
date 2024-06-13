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
import {KeyCode} from '@ohos.multimodalInput.keyCode';
import { IntentionCode } from '@ohos.multimodalInput.intentionCode';


export default function VideoOperate22Focus() {
  describe('VideoOperate22Focus', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate22Focus beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate22Focus",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate22Focus" == pages.name)) {
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
      console.info("VideoOperate22Focus after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0830
     * @tc.name 接入键盘后tab走焦，video组件支持获焦；焦点传递给滑动条，鼠标可以自由滑动
     * @tc.desc 接入键盘后tab走焦，video组件支持获焦；焦点传递给滑动条，鼠标可以自由滑动
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_focus_test', 0, async (done: Function) => {
      console.info('[Video001_focus_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);

      const keyEvent: KeyEvent = {
        type: KeyType.Down,
        keyCode: KeyCode.KEYCODE_TAB,
        keyText: 'TAB',
        keySource: KeySource.Keyboard,
        deviceId: 1,
        metaKey: 0,
        timestamp: Date.now(),
        stopPropagation: () => {},
        intentionCode: IntentionCode.INTENTION_UNKNOWN
      };
      // 【tab键走焦】
      const result = sendKeyEvent(keyEvent);
      expect(result).assertTrue();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 3);

      let textUpdateFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_focusFlag"));
      expect(await textUpdateFlag.getText()).assertContain("true");

      let videoFocused = await dr.findComponent(ON.id("VideoOperateVideo").focused(true));
      expect(await videoFocused.getType()).assertContain("Video");
      console.info('[Video001_focus_test] END');
      done();
    });
  })
}
