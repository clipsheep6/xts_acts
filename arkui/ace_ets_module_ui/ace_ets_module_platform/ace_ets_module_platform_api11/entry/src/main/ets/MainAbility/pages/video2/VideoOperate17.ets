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
 * 纯音频文件支持静音
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0380
 */
@Entry
@Component
struct VideoOperate17 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.01')
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  @State mutedStatue: boolean = false;
  @State startStatus: boolean = false;
  @State currentTimeUpdateFlag: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('纯音频文件支持静音')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`mutedStatue_${this.mutedStatue}`)
        .id('Text_VideoOperateVideo_first')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`startStatus_${this.startStatus}`)
        .id('Text_VideoOperateVideo_start')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`currentTimeUpdateFlag_${this.currentTimeUpdateFlag}`)
        .id('Text_VideoOperateVideo_currentTimeUpdateFlag')
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
          .muted(this.mutedStatue)
          .onStart(()=>{
            this.startStatus = true;
          })
          .onUpdate((event)=>{
            if (event.time > 5) {
              this.currentTimeUpdateFlag = true;
            }
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)
      Row() {
        Button('muted')
          .id('Button_muted')
          .onClick(() => {
            this.mutedStatue = !this.mutedStatue;
          });
      }
    }
  }
}