/**
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import VideoInitDataModel from './VideoInitDataModel';

@Component
export default struct VideoCommonComponent {
  // 定义从使用端传递过来的初始化信息
  @Prop videoInitDataModel: VideoInitDataModel;
  @Prop isOnFullscreenChange: boolean = false;
  // 默认属性配置
  myVideoController: VideoController = new VideoController();
  // 这里定义用于标题和状态的展示，从使用端传递过来
  @Prop testCaseTitle: string = '';
  @Prop statueFirstTitle: string = '';
  @Prop statueSecondTitle: string = '';
  // 用于展示需要断言的结果信息
  @Prop statueFirst: boolean;
  @Prop statueSecond: boolean;
  // 用于内部功能使用的私有属性
  duration: number = 0;
  firstTimeFlag: boolean = true;

  build() {
    Column({ space: 2 }) {
      Text(`${this.videoInitDataModel.testCaseTitle}`)
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`${this.videoInitDataModel.statueFirstTitle}_${this.statueFirst}`)
        .id("Text_VideoOperateVideo_first")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`${this.videoInitDataModel.statueSecondTitle}_${this.statueSecond}`)
        .id("Text_VideoOperateVideo_second")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Row() {
        Video({
          src: this.videoInitDataModel.videoSrc,
          previewUri: this.videoInitDataModel.previewUri,
          currentProgressRate: this.videoInitDataModel.currentProgressRate,
          controller: this.myVideoController
        })
          .id('VideoOperateVideo')
          .controls(true)
          .autoPlay(true)
          .objectFit(ImageFit.Contain)
          .onPrepared((event) => {
            this.duration = event.duration;
          })
          .onStart(this.videoInitDataModel.onStartCallback)
          .onFinish(this.videoInitDataModel.onFinishCallback)
          .onFullscreenChange((event) => {
            this.videoInitDataModel.onFullscreenChangeCallback(event.fullscreen, this.firstTimeFlag);
          })
          .onClick(() => {
            // 来自全屏用例的点击
            if (this.isOnFullscreenChange) {
              // 退出全屏了
              this.firstTimeFlag = false;
              this.myVideoController.exitFullscreen();
            }
          })
          .onUpdate((event) => {
            this.videoInitDataModel.onUpdateCallback(event.time);
          })
      }
      .backgroundColor(Color.Pink)

      Row() {
        Button("Button_first")
          .id("Button_first")
          .onClick(() => {
            this.myVideoController.requestFullscreen(true);
          });
        Button("Button_second")
          .id("Button_second")
          .onClick(() => {
            console.log("----------------onFullscreenChangeCallback exitFullscreen ");
            this.myVideoController.exitFullscreen();
          });
        Button("Button_start")
          .id("Button_start")
          .onClick(() => {
            console.log("----------------start ");
            this.myVideoController.start();
          });
        Button("Button_stop")
          .id("Button_stop")
          .onClick(() => {
            console.log("----------------stop ");
            this.myVideoController.stop();
          });
      }
    }
  }
}