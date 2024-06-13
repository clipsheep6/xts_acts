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
 * 不设置controls属性，使用默认值；不显示视频播放控制栏
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_INTERFACE_0160
 */
@Entry
@Component
struct VideoOperate14 {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1')
  myVideoController: VideoController = new VideoController();
  // 用于展示需要断言的结果信息
  @State statueFirst: boolean = false;
  @State pauseStatus: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('不设置controls属性测试')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`不显示视频播放控制栏_${this.statueFirst}`)
        .id("Text_VideoOperateVideo_first")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`暂停控制成功标识_${this.pauseStatus}`)
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
          .onPause(()=>{
            this.statueFirst = true;
            this.pauseStatus = true;
          })
          .onFinish(()=>{
            this.statueFirst = false;
            this.pauseStatus = false;
          })
      }
      .height(400)
      .backgroundColor(Color.Pink)

      Row() {
        Button("pause")
          .id("Button_pause")
          .onClick(() => {
            this.myVideoController.pause();
          });
      }
    }
  }
}