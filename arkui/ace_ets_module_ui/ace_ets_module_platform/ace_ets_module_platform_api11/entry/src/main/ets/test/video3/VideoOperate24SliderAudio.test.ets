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
import { KeyCode } from '@ohos.multimodalInput.keyCode';
import { IntentionCode } from '@ohos.multimodalInput.intentionCode';


export default function VideoOperate24SliderAudio() {
  describe('VideoOperate24SliderAudio', () => {
    beforeAll(async (done: Function) => {
      console.info("VideoOperate24SliderAudio beforeAll start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video3/VideoOperate24SliderAudio",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate24SliderAudio" == pages.name)) {
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
      console.info("VideoOperate24SliderAudio after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0070
     * @tc.name 设置src的值为Resource类型，用$r方式加载一个非视频文件
     * @tc.desc 设置src的值为Resource类型，用$r方式加载一个非视频文件
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video003_slider_audio_test', 0, async (done: Function) => {
      console.info('[Video003_slider_audio_test] START');
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
      // 【发送向右方向键】
      const resultRight1 = sendKeyEvent(keyEventRight);
      expect(resultRight1).assertTrue();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      const resultRight2 = sendKeyEvent(keyEventRight);
      expect(resultRight2).assertTrue();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 检查是否产生滑动
      let seekedTimeGtZero = await dr.findComponent(ON.id("Text_VideoOperateVideo_seekedTimeGtZero"));
      expect(await seekedTimeGtZero.getText()).assertContain("true");
      // 点击暂停播放视频
      let pauseButton = await dr.findComponent(ON.id("Button_pause"));
      await pauseButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 点击开始播放视频
      let startButton = await dr.findComponent(ON.id("Button_start"));
      await startButton.click();
      await Utils.sleep(Utils.WAIT_UI_READY_MS);
      // 检查暂停开始标识
      let startFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_startFlag"));
      expect(await startFlag.getText()).assertContain("true_true");

      let threeEventFlag = await dr.findComponent(ON.id("Text_VideoOperateVideo_threeEventFlag"));
      expect(await threeEventFlag.getText()).assertContain("true_true_true");
      console.info('[Video003_slider_audio_test] END');
      done();
    });
  })
}
