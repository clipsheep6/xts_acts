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
 * 点击start按钮能够开始播放
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0330
 */
@Entry
@Component
struct VideoOperate15 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 用于展示需要断言的结果信息
  @State statueFirst: boolean = false;
  @State statueFinish: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('点击start按钮能够开始播放')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`开始播放标识_${this.statueFirst}_${this.statueFinish}`)
        .id('Text_VideoOperateVideo_first')
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
          .onStart(()=>{
            this.statueFirst = true;
          })
          .onFinish(()=>{
            this.statueFinish = true;
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)

      Row() {
        Button('start')
          .id('Button_start')
          .onClick(() => {
            console.log('VideoOperate15 开始播放');
            this.myVideoController.start();
          });
      }
    }
  }
}