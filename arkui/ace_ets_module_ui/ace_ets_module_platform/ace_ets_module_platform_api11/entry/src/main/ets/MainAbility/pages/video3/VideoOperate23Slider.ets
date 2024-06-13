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
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0760
 * 操作进度条完成后，上报播放时间信息
 */
@Entry
@Component
struct VideoOperate23Slider {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State textFocusStatus: boolean = false;
  @State videoFocusFlag: string = '';
  // 操作进度条过程时上报时间信息
  @State seekingTimeGtZero: boolean = false;
  @State seekingTime: number = 0;
  // 操作进度条完成后，上报播放时间信息
  @State seekedTimeGtZero: boolean = false;
  @State currentTime: number = 0;
  // 视频可正常跳转、播放，事件正常上报
  @State startFlag: boolean = false;
  @State seekedFlag: boolean = false;
  @State seekingFlag: boolean = false;
  @State updateFlag: boolean = false;

  build() {
    Column({ space: 2 }) {
      Text('用例23操作进度条完成后，上报播放时间信息')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`Text组件onFocus触发标识_${this.textFocusStatus}`)
        .id("Text_VideoOperateVideo_textFocusStatus")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`Video组件onFocus触发标识_${this.videoFocusFlag}`)
        .id("Text_VideoOperateVideo_focusFlag")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
        .focusable(true)
        .defaultFocus(true)
        .tabIndex(0)
        .onFocus(() => {
          this.textFocusStatus = true;
        })
        .onBlur(() => {
          this.textFocusStatus = false;
        })
      Text(`滑动中上报时间标识_${this.seekingTimeGtZero}_${this.seekingTime}`)
        .id("Text_VideoOperateVideo_seekingTimeGtZero")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`滑动结束上报时间标识_${this.seekedTimeGtZero}_${this.currentTime}`)
        .id("Text_VideoOperateVideo_seekingTimeGtZero")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`视频可正常跳转标识_${this.seekedTimeGtZero}`)
        .id("Text_VideoOperateVideo_seekedTimeGtZero")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`视频可正常播放标识_${this.startFlag}`)
        .id("Text_VideoOperateVideo_startFlag")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`事件可正常上报标识_${this.seekingFlag}_${this.seekedFlag}_${this.updateFlag}`)
        .id("Text_VideoOperateVideo_threeEventFlag")
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
          .focusable(true)
          .tabIndex(1)
          .onFocus(() => {
            this.videoFocusFlag = 'onFocus已触发true'
          })
          .onBlur(() => {
            this.videoFocusFlag = 'onBlur已触发true'
          })
          .onSeeking((event) => {
            this.seekingTime = event.time;
            this.seekingFlag = true;
            if (event.time > 1) {
              this.seekingTimeGtZero = true;
            }
          })
          .onSeeked((event) => {
            this.currentTime = event.time;
            this.seekedFlag = true;
            if (event.time > 1) {
              this.seekedTimeGtZero = true;
            }
          })
          .onUpdate((event) => {
            if (event.time > 1) {
              this.updateFlag = true;
            }
          })
          .onStart(() => {
            this.startFlag = true;
          })
      }
      .height('70%')
      .backgroundColor(Color.Pink)

      Row() {
        Button("start")
          .id("Button_start")
          .onClick(() => {
            this.myVideoController.start();
          });
      }
    }
  }
}