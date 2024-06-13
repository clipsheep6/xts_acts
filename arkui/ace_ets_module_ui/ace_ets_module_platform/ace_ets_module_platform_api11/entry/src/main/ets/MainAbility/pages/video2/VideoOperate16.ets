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
 * 点击暂停播放按钮触发暂停事件；视屏暂停，点击开始播放视屏又继续播放
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0160
 */
@Entry
@Component
struct VideoOperate16 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 用于展示需要断言的结果信息
  @State pauseStatus: boolean = false;
  startTimes: number = 0;
  @State startStatue: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('视屏暂停，点击开始播放视屏又继续播放')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`暂停控制成功标识_${this.pauseStatus}`)
        .id("Text_VideoOperateVideo_first")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`开始控制生效标识_${this.startStatue}`)
        .id("Text_VideoOperateVideo_second")
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
          .loop(false)
          .onStart(() => {
            this.startTimes++;
            if (this.startTimes===2) {
              this.startStatue = true;
            }
          })
          .onPause(() => {
            this.pauseStatus = true;
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)

      Row() {
        Button("pause")
          .id("Button_pause")
          .onClick(() => {
            this.myVideoController.pause();
          });
        Button("start")
          .id("Button_start")
          .onClick(() => {
            this.myVideoController.start();
          });
      }
    }
  }
}