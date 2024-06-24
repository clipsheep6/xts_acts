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
 * 视频页，点击全屏按钮，点击其他区域可以将视频播放或者暂停
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0830
 */
@Entry
@Component
struct VideoOperate20 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State fullScreenFlag: boolean = false;
  @State startStatus: boolean = false;
  @State pauseStatus: boolean = false;
  @State startPauseStatus: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('点击全屏按钮，点击其他区域可以将视频播放或者暂停')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`fullScreenFlag_${this.fullScreenFlag}_${this.startPauseStatus}`)
        .id('Text_VideoOperateVideo_fullScreen')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`startStatus_${this.startStatus}`)
        .id('Text_VideoOperateVideo_start')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`pauseStatus_${this.pauseStatus}`)
        .id('Text_VideoOperateVideo_pause')
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
          .onStart(() => {
            this.startStatus = true;
            this.startPauseStatus = true;
          })
          .onPause(() => {
            this.pauseStatus = true;
            this.startPauseStatus = false;
          })
          .onFullscreenChange((event) => {
            this.fullScreenFlag = event.fullscreen;
          })
          .onClick(() => {
            if (this.startPauseStatus) {
              this.myVideoController.pause();
            }else{
              this.myVideoController.start();
            }
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)
      Row() {
        Button('fullScreen')
          .id('Button_fullScreen')
          .onClick(() => {
            this.myVideoController.requestFullscreen(true);
          });
      }
    }
  }
}