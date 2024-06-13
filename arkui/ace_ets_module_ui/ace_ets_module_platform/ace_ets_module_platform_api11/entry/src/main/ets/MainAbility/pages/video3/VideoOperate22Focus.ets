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
 * 接入键盘后tab走焦，video组件支持获焦；焦点传递给滑动条，鼠标可以自由滑动
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0830
 */
@Entry
@Component
struct VideoOperate22Focus {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();

  @State currentTime: number = 0;
  @State textFocusStatus:boolean = false;
  @State focusFlag: string = '';

  build() {
    Column({ space: 2 }) {
      Text('用例22接入键盘后tab走焦，video组件支持获焦')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`Text_onFocus触发标识_${this.textFocusStatus}`)
        .id("Text_VideoOperateVideo_textFocusStatus")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`onFocus触发标识_${this.focusFlag}`)
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
            this.focusFlag = '焦点事件onFocus已触发true'
          })
          .onBlur(() => {
            this.focusFlag = '焦点事件onBlur已触发true'
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)
    }
  }
}