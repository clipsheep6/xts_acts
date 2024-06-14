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
 * ImageAnimator iterations设置10验证
 * SUB_ACE_UI_COMPONENT_MEDIA_STYLE_0890
 */
@Entry
@Component
struct IA9iterations1P10 {
  @State state: AnimationStatus = AnimationStatus.Initial;
  @State duration: number = 100;
  @State iterations: number = 10;
  @State repeatFlag: boolean = false;
  @State repeatTime: number = 1;
  build() {
    Column({ space: 2 }) {
      Text('用例01：ImageAnimator iterations设置10验证')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`state_${this.state}`)
        .id("ImageAnimator_state")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`repeatFlag_${this.repeatFlag}_${this.repeatTime}`)
        .id("ImageAnimator_repeatFlag")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      ImageAnimator()
        .id('ImageAnimatorComp')
        .width(340)
        .height(240)
        .margin({ top: 100 })
        .images([
          {
            src: $r('app.media.sky')
          },
          {
            src: $r('app.media.cloud')
          }
        ])
        .duration(this.duration)
        .state(this.state)
        .iterations(this.iterations)
        .onRepeat(() => {
          this.repeatTime++;
          if (this.repeatTime == 10) {
            this.repeatFlag = true
          }
        })
      Row() {
        Button('start')
          .id('Button_start')
          .width(100)
          .padding(5)
          .onClick(() => {
            this.state = AnimationStatus.Running
          })
          .margin(5)
      }
    }
    .width('100%')
    .height('100%')
  }
}
