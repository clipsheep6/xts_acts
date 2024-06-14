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
struct VideoOperate {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 监控暂停开始状态，播放速度数值
  @State startFlag: boolean = false

  build() {
    Column({ space: 2 }) {
      // 不设置autoPlay属性
      Text(`${this.startFlag}`)
        .id('Text_VideoOperateVideo_startFlag')
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
          .height(200)
          .controls(true)
          .onStart(() => {
            this.startFlag = true
          })
      }
      .width(150)
      .height(250)
      .backgroundColor(Color.Pink)

      Row() {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri
        })
          .id('VideoOperateVideo2')
          .width(100)
          .controls(false)
      }
      .width(150)
      .height(250)
      .backgroundColor(Color.Pink)

      Row() {
        Button('start')
          .id('Button_start')
          .onClick(() => {
            this.myVideoController.start();
          });
        Button('pause')
          .id('Button_pause')
          .onClick(() => {
            this.myVideoController.pause();
          });
      }
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 })
  }

}
