/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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


import VideoCommonComponent from '../../common/VideoCommonComponent';
import VideoInitDataModel from '../../common/VideoInitDataModel';


/**
 * 点击stop按钮能够停止播放
 * 停止播放，显示当前帧，再次播放时从头开始播放
 */
@Entry
@Component
struct VideoOperate11 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1')
  @State curRate: PlaybackSpeed = PlaybackSpeed.Speed_Forward_1_00_X
  // 用于展示需要断言的结果信息
  @State statueFirst: boolean = false;
  @State statueSecond: boolean = false;

  build() {
    Column({ space: 2 }) {
      VideoCommonComponent({
        videoInitDataModel: new VideoInitDataModel(this.curRate, this.videoSrc, this.previewUri,
          () => {
          }, () => {
          }, () => {
          }, this.onUpdateCallback, '点击stop按钮能够停止播放', 'stopFlag', 'noUse'),
        isOnFullscreenChange: true,
        statueFirst: this.statueFirst,
        statueSecond: this.statueSecond
      })
    }
    .height(400)
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10, right: 10 })
  }

  onUpdateCallback: (time: number) => void = (time) => {
    if (time === 0) {
      this.statueFirst = true;
    }
  }
}
