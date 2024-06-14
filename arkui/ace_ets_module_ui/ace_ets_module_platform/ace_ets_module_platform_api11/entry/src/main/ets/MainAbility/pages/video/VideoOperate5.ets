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


@Entry
@Component
struct VideoOperate5 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  @State eventTime: number = 0
  @State fullscreenFlag: boolean = false

  build() {
    Column({ space: 2 }) {
      Text(`${this.eventTime}`)
        .id('Text_VideoOperateVideo_first')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)

      Text(`${this.fullscreenFlag}`)
        .id('Text_VideoOperateVideo_second')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)

      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .controls(true)
          .responseRegion({ x: 0, y: 0, width: '50%', height: '100%' })
          .onClick(() => {
            this.myVideoController.pause();
          })
          .onUpdate((event) => {
            console.log('当前播放进度：', event.time + 's');
            this.eventTime = event.time;
          })
          .objectFit(ImageFit.Contain)
          .onFullscreenChange((event) => {
            this.fullscreenFlag = event.fullscreen;
          })
      }
      .backgroundColor(Color.Pink)
      .height(400)

      Row() {
        Button('setCurrentTime')
          .id('Button_setCurrentTime')
          .onClick(() => {
            this.myVideoController.setCurrentTime(4);
          });
        Button('fullscreen')
          .id('Button_fullscreen')
          .onClick(() => {
            this.myVideoController.requestFullscreen(true);
          });
      }
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10, right: 10 })
  }
}
