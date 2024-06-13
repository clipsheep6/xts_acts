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
struct VideoOperate3 {
  @State videoSrc: Resource = $r('app.media.sucai1Media')
  @State previewUri: Resource = $r('app.media.img2')
  myVideoController: VideoController = new VideoController();
  // 【】用例_测试步骤：1、添加video组件；2、在播放过程中把autoplay属性false修改成true 用例_预期结果：视频开始播放
  @State autoPlayStatus: boolean = false;
  // 用来显示的属性
  @State finishFlag: boolean = false

  build() {
    Column({ space: 2 }) {
      Text(`播放结束标识：${this.finishFlag}`)
        .id("Text_VideoOperateVideo_finishFlag")
        .backgroundColor(Color.Pink)
        .fontSize(30)
        .width('70%')
        .textAlign(TextAlign.Center)
      Text(`${this.autoPlayStatus}`)
        .id("Text_VideoOperateVideo_autoPlayStatus")
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
          .height(450)
          .autoPlay(this.autoPlayStatus)
          .onStart(() => {
            this.finishFlag = false
          })
          .onPause(() => {
            this.finishFlag = false
          })
          .onFinish(()=>{
            this.finishFlag = true
          })
      }
      .width(300)
      .height(500)
      .backgroundColor(Color.Pink)

      Row() {
        Button("start")
          .id("Button_start")
          .onClick(() => {
            this.myVideoController.start();
          });
        Button("autoPlayTrue")
          .id("Button_autoPlayTrue")
          .onClick(() => {
            this.autoPlayStatus = true;
          });
      }
    }
    .alignItems(HorizontalAlign.Start)
    .justifyContent(FlexAlign.Center)
    .margin({ top: 10, left: 10 })

  }

}