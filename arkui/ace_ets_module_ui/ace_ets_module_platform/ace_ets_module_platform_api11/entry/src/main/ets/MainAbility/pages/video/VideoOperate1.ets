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
struct VideoOperate1 {
  // Video构造入参
  @State videoSrc: Resource = $rawfile('sucai1.mp4')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 监控热区点击事件
  @State responseRegionFlag: boolean = false
  // 用来显示的属性
  @State finishFlag: boolean = false

  build() {
    Column({ space: 2 }) {
      Text(`${this.finishFlag}`)
        .id('Text_VideoOperateVideo_finishFlag')
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)
      Text(`${this.responseRegionFlag}`)
        .id('Text_VideoOperateVideo_first')
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
          .onPause(() => {
            this.responseRegionFlag = true
          })
          .onFinish(()=>{
            this.finishFlag = true
          })
          .responseRegion({ x: 0, y: 0, width: '50%', height: '100%' })
          .onClick(() => {
            this.myVideoController.pause();
          })
          .autoPlay(true)
      }
      .backgroundColor(Color.Pink)
      .height(500)
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 })
  }
}
