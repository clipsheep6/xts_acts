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
 * 导入ImageAnimatorModifier，封装duration属性
 * SUB_ACE_UI_COMPONENT_MEDIA_MODIFIER_0020
 */
@Entry
@Component
struct IA1durationModifier {
  @State durationModifier: ImageAnimatorModifier =
    new ImageAnimatorModifier(0, undefined, undefined, undefined, undefined, undefined, undefined);

  build() {
    Column({ space: 2 }) {
      Text('用例01：导入ImageAnimatorModifier，封装duration属性')
        .id('Text_VideoOperateVideo_title')
        .backgroundColor(Color.Pink)
        .fontSize(18)
        .textAlign(TextAlign.Center)
      Text(`ImageAnimator_duration_${this.durationModifier.duration}`)
        .id('ImageAnimator_duration')
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
          .id('Button_start')
          .width(100)
          .padding(5)
          .onClick(() => {
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
        Button('改变duration')
          .id('Button_durationChange')
          .onClick(() => {
            if (this.durationModifier.duration === 2000) {
              this.durationModifier.duration = 0;
            } else {
              this.durationModifier.duration = this.durationModifier.duration + 1000;
            }
          });
      }
    }
    .width('100%')
    .height('100%')
  }
}

/**
 * 导入ImageAnimatorModifier，封装duration属性
 * 导入ImageAnimatorModifier，封装fillMode属性
 * 导入ImageAnimatorModifier，封装fixedSize属性
 * 导入ImageAnimatorModifier，封装images属性
 * 导入ImageAnimatorModifier，封装iterations属性
 * 导入ImageAnimatorModifier，封装reverse属性
 * 导入ImageAnimatorModifier，封装state属性
 */
export class ImageAnimatorModifier implements AttributeModifier<ImageAnimatorAttribute> {
  public duration: number = 1000;
  public fillMode: FillMode = FillMode.Forwards;
  public fixedSize: boolean = true;
  public iterations: number = -1;
  public reverse: boolean = false;
  public state: AnimationStatus = AnimationStatus.Initial;
  public images: Array<ImageFrameInfo> = [
    {
      src: $r('app.media.sky')
    },
    {
      src: $r('app.media.cloud')
    }
  ]

  constructor(duration?: number, fillMode?: number, fixedSize?: boolean, iterations?: number,
              reverse?: boolean, state?: AnimationStatus, images?: Array<ImageFrameInfo>) {
    // 只有当传入的参数不为undefined时，才进行赋值
    if (duration !== undefined){
      this.duration = duration;
    }
    if (fillMode !== undefined){
      this.fillMode = fillMode;
    }
    if (fixedSize !== undefined){
      this.fixedSize = fixedSize;
    }
    if (iterations !== undefined){
      this.iterations = iterations;
    }
    if (reverse !== undefined){
      this.reverse = reverse;
    }
    if (state !== undefined){
      this.state = state;
    }
    if (images !== undefined){
      this.images = images;
    }
  }

  applyNormalAttribute(instance: ImageAnimatorAttribute): void {
    instance.images(this.images)
    instance.duration(this.duration)
    instance.fillMode(this.fillMode)
    instance.fixedSize(this.fixedSize)
    instance.iterations(this.iterations)
    instance.reverse(this.reverse)
    instance.state(this.state)
  }
}