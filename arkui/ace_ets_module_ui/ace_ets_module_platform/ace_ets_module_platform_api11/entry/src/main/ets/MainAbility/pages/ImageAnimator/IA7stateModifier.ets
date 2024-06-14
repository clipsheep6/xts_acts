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
 * 导入ImageAnimatorModifier，封装state属性
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0080
 */
@Entry
@Component
struct IA7stateModifier {
  @State durationModifier: ImageAnimatorModifier = new ImageAnimatorModifier();
  stateIndex: number = 0;

  build() {
    Column({ space: 2 }) {
      Text('用例01：导入ImageAnimatorModifier，封装state属性')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`ImageAnimator_state_${this.durationModifier.state}`)
        .id('ImageAnimator_state')
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
          console.info('--------------Finish')
          this.durationModifier.state = AnimationStatus.Stopped
        })

      Row() {
        Button('改变state')
          .id('Button_stateChange')
          .onClick(() => {
            if (this.stateIndex == 3) {
              this.stateIndex = 0;
            } else {
              this.stateIndex++;
            }
            // 点击index++/--按钮，切换state（Initial、Running、Paused、Stopped）
            if (this.stateIndex == 0) {
              this.durationModifier.state = AnimationStatus.Initial
            }
            if (this.stateIndex == 1) {
              this.durationModifier.state = AnimationStatus.Running
            }
            if (this.stateIndex == 2) {
              this.durationModifier.state = AnimationStatus.Paused
            }
            if (this.stateIndex == 3) {
              this.durationModifier.state = AnimationStatus.Stopped
            }
          });
      }
    }
    .width('100%')
    .height('100%')
  }
}