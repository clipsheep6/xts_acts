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
 * 频繁横竖屏切换查看体验，组件不会奔溃，切换后显示正常
 * SUB_ACE_UI_COMPONENT_MEDIA_VIDEO_FEATURE_0810
 */
import window from '@ohos.window';
import common from '@ohos.app.ability.common';

@Entry
@Component
struct VideoOperate26ScreenRotation {
  // Video构造入参
  @State videoSrc: Resource = $r('app.media.sucai1Media');
  @State previewUri: Resource = $r('app.media.img1');
  myVideoController: VideoController = new VideoController();
  @State finishFlag: boolean = false;
  @State isFullScreen: boolean = false

  build() {
    Column({ space: 2 }) {
      Text('用例26频繁横竖屏切换查看体验')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`视频播放完成标识_${this.finishFlag}`)
        .id("Text_VideoOperateVideo_finishFlag")
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
          .onFinish(()=>{
            this.finishFlag = true;
          })
      }
      .height('80%')
      .backgroundColor(Color.Pink)
      Row() {
        Button("横竖屏切换")
          .id("Button_horVerSwitch")
          .onClick(() => {
            this.horVerSwitch()
          })
      }
    }
    .width('100%')
    .height('100%')
    .justifyContent(FlexAlign.Center)
  }
  // 横竖屏切换
  horVerSwitch() {
    let context = getContext(this) as common.UIAbilityContext;
    // 使用getLastWindow获取当前窗口
    window.getLastWindow(context).then((lastWindow) => {
      // 使用setPreferredOrientation实现横竖屏切换
      lastWindow.setPreferredOrientation(this.isFullScreen ? window.Orientation.PORTRAIT : window.Orientation.LANDSCAPE)
      this.isFullScreen = !this.isFullScreen
    })
  }
}