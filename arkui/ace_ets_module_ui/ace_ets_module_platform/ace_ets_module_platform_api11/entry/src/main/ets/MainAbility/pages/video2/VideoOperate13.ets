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
 * 支持同时控制多个Video组件
 */
@Entry
@Component
struct VideoOperate13 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  @State pauseFlag1: boolean = false
  @State pauseFlag2: boolean = false
  @State pauseFlag3: boolean = false

  @State finishFlag1: boolean = false
  @State finishFlag2: boolean = false
  @State finishFlag3: boolean = false

  build() {
    Column({ space: 2 }) {
      Text(`pauseFlag_${this.pauseFlag1}_${this.pauseFlag2}_${this.pauseFlag3}`)
        .id('Text_VideoOperateVideo_first')
        .backgroundColor(Color.Pink)
        .width('100%')
      Text(`finishFlag_${this.finishFlag1}_${this.finishFlag2}_${this.finishFlag3}`)
        .id('Text_VideoOperateVideo_second')
        .backgroundColor(Color.Pink)
        .width('100%')
      Row({ space: 5 }) {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo11')
          .autoPlay(true)
          .width('40%')
          .onPause(() => {
            this.pauseFlag1 = true
          })
          .onFinish(()=>{
            this.finishFlag1 = true;
          })

        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo21')
          .width('40%')
          .autoPlay(true)
          .loop(false)
          .onPause(() => {
            this.pauseFlag2 = true
          })
          .onFinish(()=>{
            this.finishFlag2 = true;
          })
      }
      .width('100%')
      .height(250)
      .backgroundColor(Color.Pink)

      Row({ space: 5 }) {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo22')
          .width('40%')
          .autoPlay(true)
          .loop(true)
          .onPause(() => {
            this.pauseFlag3 = true
          })
          .onFinish(()=>{
            this.finishFlag3 = true;
          })
      }
      .width('100%')
      .height(300)
      .backgroundColor(Color.Pink)

      Row() {
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
