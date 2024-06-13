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
struct VideoOperate4Loop {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 监控VideoOperateVideo21的状态
  @State finishFlag_VideoOperateVideo21: boolean = false;
  @State finishFlag_VideoOperateVideo22: boolean = true;

  build() {
    Column({ space: 2 }) {
      //not_loop___21_true___22_false
      Text(`not_loop___21_${this.finishFlag_VideoOperateVideo21}___22_${this.finishFlag_VideoOperateVideo22}`)
        .id("Text_finishFlag")
        .backgroundColor(Color.Pink)
        .width('100%')
      Row({ space: 5 }) {
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri
        })
          .id('VideoOperateVideo21')
          .width('40%')
          .autoPlay(true)
          .loop(false)
          .onStart(()=>{
            this.finishFlag_VideoOperateVideo21 = false;
          })
          .onFinish(()=>{
            this.finishFlag_VideoOperateVideo21 = true;
          })
        Video({
          src: this.videoSrc,
          previewUri: this.previewUri
        })
          .id('VideoOperateVideo22')
          .width('40%')
          .autoPlay(true)
          .loop(true)
          .onStart(()=>{
            this.finishFlag_VideoOperateVideo22 = false;
          })
          .onFinish(()=>{
            this.finishFlag_VideoOperateVideo22 = true;
          })
      }
      .width('100%')
      .height(300)
      .backgroundColor(Color.Pink)
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 })
  }

}
