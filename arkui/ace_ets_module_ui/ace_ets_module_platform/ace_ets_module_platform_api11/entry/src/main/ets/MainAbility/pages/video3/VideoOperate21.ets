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

/**
 * 播放进度变化时触发onUpdate事件
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0260
 */
@Entry
@Component
struct VideoOperate21 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();

  @State currentTime: number = 0;
  @State updateFlag: boolean = false;
  updateTimes: number = 0;
  duration: number = 0;

  build() {
    Column({ space: 2 }) {
      Text('用例21全屏状态下长按视屏区域，视屏倍速播放')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`currentTime_${this.currentTime}`)
        .id("Text_VideoOperateVideo_currentTime")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`onUpdate触发标识_${this.updateFlag}`)
        .id("Text_VideoOperateVideo_updateFlag")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .objectFit(ImageFit.Contain)
          .autoPlay(true)
          .onPrepared((event) => {
            this.duration = event.duration;
          })
          .onUpdate((event) => {
            this.currentTime = event.time;
            this.updateTimes++;
            if (this.updateTimes > (this.duration-1)) {
              this.updateFlag = true;
            }
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)
    }
  }
}