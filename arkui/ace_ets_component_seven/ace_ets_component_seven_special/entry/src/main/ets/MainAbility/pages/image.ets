/**
 * Copyright (c) 2023 Huawei Device Co., Ltd.
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
import events_emitter from '@ohos.events.emitter'
class ImageModifier71 implements AttributeModifier<ImageAttribute> {
  applyNormalAttribute(instance: ImageAttribute): void {
    instance.border({ width: '3px', color: '#FF654321' })
    instance.borderRadius({ "topLeft": "11px", "topRight": "12px", "bottomLeft": "13px", "bottomRight": "14px" })
    instance.draggable(true)
    instance.opacity(0.5)
  }
}

class ImageModifier72 implements AttributeModifier<ImageAttribute> {
  applyNormalAttribute(instance: ImageAttribute): void {
    instance.transition(TransitionEffect.OPACITY.animation({ duration: 2000, curve: Curve.Ease }))
  }
}

@Entry
@Component
struct ImageModifier75Example {
  @State imageModifier1: ImageModifier71 = new ImageModifier71()
  @State imageModifier2: ImageModifier72 = new ImageModifier72()
  @State btn1: boolean = false

  build() {
    Column() {
      Image($r('app.media.icon'))
        .key("imagetest")
        .attributeModifier(this.imageModifier1)
        .onClick(() => {
          var backData = {
            data: {
              "btn1": this.btn1,
            }
          }
          var backEvent = {
            eventId: 233,
            priority: events_emitter.EventPriority.LOW
          }
          console.info("transitionTest_0200 start to emit action state")
          events_emitter.emit(backEvent, backData)
          this.btn1 = !this.btn1
        })
      if (this.btn1) {
        Image($r('app.media.icon'))
          .key("Imagetest2")
          .attributeModifier(this.imageModifier2)
      }
    }
    .width('100%')
      .height('50%')
  }
}
