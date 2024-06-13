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
const WAIT_UI_READYMS = 1000;

export default function VideoOperateTest1() {
  describe('VideoOperateTest1', () => {
    beforeEach(async (done: Function) => {
      console.info("VideoOperateTest1 beforeEach start");
      // 确保页面状态正确
      let options: RouterOptions = {
        uri: "MainAbility/pages/video/VideoOperate1",
      }
      try {
        router.clear();
        let pages = router.getState();
        console.info("get video state success " + JSON.stringify(pages));
        if (!("VideoOperate1" == pages.name)) {
          console.info("get video state success " + JSON.stringify(pages.name));
          let result = await router.push(options);
          await Utils.sleep(WAIT_UI_READYMS);
          console.info("push video page success " + JSON.stringify(result));
        }
      } catch (err) {
        console.error("push video page error: " + err);
      }
      done();
    });

    afterEach(async () => {
      await Utils.sleep(1000);
      console.info("VideoOperateTest1 after each called");
    });

    /**
     * @tc.number SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0050
     * @tc.name 设置src的值为Resource类型，将引用方式实时修改为$rawfile，视频仍可正常播放
     * @tc.desc 设置src的值为Resource类型，将引用方式实时修改为$rawfile，视频仍可正常播放
     * @tc.level Level 2
     * @tc.type
     * @tc.size
     */
    it('Video001_resourType_rawfile', 0, async (done: Function) => {
      console.info('[Video001_resourType_rawfile] START');
      await Utils.sleep(WAIT_UI_READYMS*17);
      let strTextJson = getInspectorByKey('Text_VideoOperateVideo_finishFlag');
      let objText: Record<string, string> = JSON.parse(strTextJson);
      console.info("[Video001_resourType_rawfile] component Text Record is: " + JSON.stringify(objText));
      expect(objText.$attrs.content).assertEqual('true');
      console.info('[Video001_resourType_rawfile] END');
      done();
    });

  })
}
