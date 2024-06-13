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
struct VideoOperate4 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 监控暂停开始状态，播放速度数值
  @State startFlag_VideoOperateVideo11: boolean = false;
  @State startFlag_VideoOperateVideo12: boolean = false;

  build() {
    Column({ space: 2 }) {
      //autoPlay___11_false___12_true
      Text(`autoPlay___11_${this.startFlag_VideoOperateVideo11}___12_${this.startFlag_VideoOperateVideo12}`)
        .id("Text_startFlag")
        .backgroundColor(Color.Pink)
        .width('100%')
      Row({ space: 5 }) {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo11')
          .autoPlay(false)
          .width('40%')
          .onStart(() => {
            this.startFlag_VideoOperateVideo11 = true
          })

        Video({
          src: this.videoSrc,
          previewUri: this.previewUri,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo12')
          .autoPlay(true)
          .width('40%')
          .onStart(() => {
            this.startFlag_VideoOperateVideo12 = true
          })
      }
      .width('100%')
      .height(250)
      .backgroundColor(Color.Pink)
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 })
  }

}
