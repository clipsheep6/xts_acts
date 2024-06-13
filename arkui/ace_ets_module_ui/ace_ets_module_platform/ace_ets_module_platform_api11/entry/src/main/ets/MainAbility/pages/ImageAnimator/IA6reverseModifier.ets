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
import { ImageAnimatorModifier } from './IA1durationModifier';

/**
 * 导入ImageAnimatorModifier，封装reverse属性
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0070
 */
@Entry
@Component
struct IA6reverseModifier {
  @State durationModifier: ImageAnimatorModifier = new ImageAnimatorModifier(undefined, FillMode.None);

  build() {
    Column({ space: 2 }) {
      Text('用例01：导入ImageAnimatorModifier，封装reverse属性')
        .id("Text_VideoOperateVideo_title")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`ImageAnimator_reverse_${this.durationModifier.reverse}`)
        .id("ImageAnimator_reverse")
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      ImageAnimator()
        .id('ImageAnimatorComp')
        .width(340)
        .height(240)
        .margin({ top: 100 })
        .attributeModifier(this.durationModifier)
        .onStart(() => {
          console.info('Start')
        })
        .onPause(() => {
          console.info('Pause')
        })
        .onRepeat(() => {
          console.info('Repeat')
        })
        .onCancel(() => {
          console.info('Cancel')
        })
        .onFinish(() => {
          console.info('Finish')
          this.durationModifier.state = AnimationStatus.Stopped
        })

      Row() {
        Button('start')
          .id("Button_start")
          .width(100)
          .padding(5)
          .onClick(() => {
            this.durationModifier.iterations = 1
            this.durationModifier.state = AnimationStatus.Running
          })
          .margin(5)
        Button('pause').width(100).padding(5).onClick(() => {
          this.durationModifier.state = AnimationStatus.Paused
        }).margin(5)
        Button('stop').width(100).padding(5).onClick(() => {
          this.durationModifier.state = AnimationStatus.Stopped
        }).margin(5)
      }

      Row() {
        Button("改变reverse")
          .id("Button_reverseChange")
          .onClick(() => {
            this.durationModifier.reverse = !this.durationModifier.reverse
          });
      }
    }
    .width('100%')
    .height('100%')
  }
}