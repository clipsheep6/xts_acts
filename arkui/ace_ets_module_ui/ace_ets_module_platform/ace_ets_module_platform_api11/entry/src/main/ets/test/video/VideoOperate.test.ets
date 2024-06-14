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

export default function VideoOperateTest() {
  describe('VideoOperateTest', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(2000);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("VideoOperateTest after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0560
     * @tc.name 不设置autoPlay属性
     * @tc.desc 测试autoPlay属性设置为false后，组件打开后视屏不自动播放功能
     * @tc.level Level 2
     */
    it('Video001_not_init_autoPlay', 0, async (done: Function) => {
      console.info('[Video001_not_init_autoPlay] START');
      await Utils.sleep(2000);
      let strJson = getInspectorByKey('VideoOperateVideo');
      console.info("[not_init_autoPlay] component strJson:" + strJson);
      let obj: Record<string, string> = JSON.parse(strJson);
      console.info("[not_init_autoPlay] component Record is: " + JSON.stringify(obj));
      expect(obj.$type).assertEqual('Video');
      let strTextJson = getInspectorByKey('Text_VideoOperateVideo_startFlag');
      let objText: Record<string, string> = JSON.parse(strTextJson);
      expect(objText.$attrs.content).assertEqual('false');
      console.info('[not_init_autoPlay] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0610
     * @tc.name 反复点击开关控制栏
     * @tc.desc 每次正常响应，程序不崩溃
     * @tc.level Level 2
     */
    it('Video002_start_pause_100Times', 0, async (done: Function) => {
      console.info('[Video002_start_pause_100Times] START');
      await Utils.sleep(1000);
      // 反复点击开关控制栏100次
      for (let index = 0; index < 20; index++) {
        sendEventByKey('Button_start', 10, '');
        await Utils.sleep(100);
        sendEventByKey('Button_pause', 10, '');
        await Utils.sleep(100);
      }
      let strJson = getInspectorByKey('VideoOperateVideo');
      console.info("[Video002_start_pause_100Times] component strJson:" + strJson);
      let obj: Record<string, string> = JSON.parse(strJson);
      console.info("[Video002_start_pause_100Times] component Record is: " + JSON.stringify(obj));
      expect(obj.$type).assertEqual('Video');
      console.info('[Video002_start_pause_100Times] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0870
     * @tc.name 不设宽高时跟随父容器，固定一个值时，另一个值跟随父容器
     * @tc.desc 3、不设宽高时跟随父容器，固定一个值时，另一个值跟随父容器
     * @tc.level Level 2
     */
    it('Video003_width_height_follow_parent', 0, async (done: Function) => {
      console.info('[Video003_width_height_follow_parent] START');
      await Utils.sleep(1000);
      let strJson = getInspectorByKey('VideoOperateVideo');
      console.info("[Video003_width_height_follow_parent] component strJson:" + strJson);
      let obj: Record<string, string> = JSON.parse(strJson);
      console.info("[Video003_width_height_follow_parent] component Record is: " + JSON.stringify(obj));
      expect(obj.$attrs.width).assertEqual('150.00vp');
      expect(obj.$attrs.height).assertEqual('200.00vp');

      let strJsonVideo2 = getInspectorByKey('VideoOperateVideo2');
      console.info("[Video003_width_height_follow_parent] component VideoOperateVideo2 strJson:" + strJsonVideo2);
      let objVideo2: Record<string, string> = JSON.parse(strJsonVideo2);
      console.info("[Video003_width_height_follow_parent] component VideoOperateVideo2 Record is: " + JSON.stringify(objVideo2));
      expect(objVideo2.$attrs.width).assertEqual('100.00vp');
      expect(objVideo2.$attrs.height).assertEqual('250.00vp');
      console.info('[Video003_width_height_follow_parent] END');
      done();
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0580
     * @tc.name 设置controls属性为true
     * @tc.desc 显示视频播放控制栏
     * @tc.level Level 2
     */
    it('Video004_controls_test', 0, async (done: Function) => {
      console.info('[Video004_controls_test] START');
      await Utils.sleep(1000);
      let dr = await Driver.create();
      await dr.delayMs(Utils.WAIT_UI_READY_MS);
      let video1  = await dr.findComponent(ON.id("VideoOperateVideo"))
      expect(dr).not().assertNull();
      expect(await video1.getId()).assertEqual("VideoOperateVideo");
      let video  = await dr.findComponent(ON.id("VideoOperateVideo2"))
      expect(dr).not().assertNull();
      expect(await video.getId()).assertEqual("VideoOperateVideo2");
      console.info('[Video004_controls_test] END');
      done();
    });
  })
}
