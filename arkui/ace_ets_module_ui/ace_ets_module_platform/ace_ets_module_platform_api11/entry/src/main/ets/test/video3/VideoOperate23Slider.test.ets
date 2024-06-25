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
import { KeyCode } from '@ohos.multimodalInput.keyCode';
import { IntentionCode } from '@ohos.multimodalInput.intentionCode';


export default function VideoOperate23Slider() {
  describe('VideoOperate23Slider', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate23Slider beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate23Slider",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate23Slider" == pages.name)) {
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
      console.info("VideoOperate23Slider after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0750
     * @tc.name After the operation progress bar is completed, report the playback time information
     * @tc.desc After the operation progress bar is completed, report the playback time information
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_slider_seeking_test', 0, async (done: Function) => {
      console.info('[Video001_slider_seeking_test] START');
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 1);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      // 定义tab键keyEvent
      const keyEvent: KeyEvent = {
        type: KeyType.Down,
        keyCode: KeyCode.KEYCODE_TAB,
        keyText: 'TAB',
        keySource: KeySource.Keyboard,
        deviceId: 1,
        metaKey: 0,
        timestamp: Date.now(),
        stopPropagation: () => {
        },
        intentionCode: IntentionCode.INTENTION_UNKNOWN
      };
      // 【tab键走焦】
      const result = sendKeyEvent(keyEvent);
      expect(result).assertTrue();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 1);
      let textUpdateFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_focusFlag"));
      expect(await textUpdateFlag.getText()).assertContain("true");
      // 定义向右方向键keyEvent
      const keyEventRight: KeyEvent = {
        type: KeyType.Down,
        keyCode: KeyCode.KEYCODE_DPAD_RIGHT,
        keyText: 'TAB',
        keySource: KeySource.Keyboard,
        deviceId: 1,
        metaKey: 0,
        timestamp: Date.now(),
        stopPropagation: () => {
        },
        intentionCode: IntentionCode.INTENTION_UNKNOWN
      };
      // 【发送向右方向键】三次
      const resultRight1 = sendKeyEvent(keyEventRight);
      expect(resultRight1).assertTrue();
      const resultRight2 = sendKeyEvent(keyEventRight);
      expect(resultRight2).assertTrue();
      const resultRight3 = sendKeyEvent(keyEventRight);
      expect(resultRight3).assertTrue();
      // 检查是否产生滑动
      let seekingTimeGtZero = await dr.findComponent(ON.id("Text_VideoOperateVideo_seekingTimeGtZero"));
      expect(await seekingTimeGtZero.getText()).assertContain("true");
      console.info('[Video001_slider_seeking_test] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0760
     * @tc.name After the operation progress bar is completed, report the playback time information
     * @tc.desc After the operation progress bar is completed, report the playback time information
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video001_slider_seeked_test', 0, async (done: Function) => {
      console.info('[Video001_slider_seeked_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let seekingTimeGtZero = await dr.findComponent(ON.id("Text_VideoOperateVideo_seekingTimeGtZero"));
      expect(await seekingTimeGtZero.getText()).assertContain("true");
      console.info('[Video001_slider_seeked_test] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0490
     * @tc.name Drag the progress bar multiple times to different positions
     * @tc.desc Drag the progress bar multiple times to different positions
     * @tc.level Level 2
     * @tc.type   : Function
     * @tc.size   : MEDIUM
     */
    it('Video003_slider_all_test', 0, async (done: Function) => {
      console.info('[Video003_slider_all_test] START');
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let seekedTimeGtZero = await dr.findComponent(ON.id("Text_VideoOperateVideo_seekedTimeGtZero"));
      expect(await seekedTimeGtZero.getText()).assertContain("true");
      // 点击开始播放视频
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS * 2);
      let startFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_startFlag"));
      expect(await startFlag.getText()).assertContain("true");

      let threeEventFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_threeEventFlag"));
      expect(await threeEventFlag.getText()).assertContain("true_true_true");
      console.info('[Video003_slider_all_test] END');
      done();
    });
  })
}
