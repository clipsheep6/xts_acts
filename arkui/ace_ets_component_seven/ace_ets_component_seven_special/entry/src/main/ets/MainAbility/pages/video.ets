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
class VideoModifier72 implements AttributeModifier<VideoAttribute> {
  applyNormalAttribute(instance: VideoAttribute): void {
    instance.transition(TransitionEffect.OPACITY.animation({ duration: 2000, curve: Curve.Ease }))
    instance.opacity(0.5)
  }
}

class VideoModifier71 implements AttributeModifier<VideoAttribute> {
  applyNormalAttribute(instance: VideoAttribute): void {
    instance.opacity(0.5)
  }
}

@Entry
@Component
struct VideoModifier75Example {
  @State VideoModifier1: VideoModifier71 = new VideoModifier71()
  @State VideoModifier2: VideoModifier72 = new VideoModifier72()
  @State btn1: boolean = false

  build() {
    Column() {
      Button("testbuttion")
        .key("testbuttion")
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

      Video({ src: $rawfile('test.mp4') })
        .key("videotest")
        .attributeModifier(this.VideoModifier1)

      if (this.btn1) {
        Video({ src: $rawfile('test.mp4') })
          .key("videotest2")
          .attributeModifier(this.VideoModifier2)
      }
    }
    .width('100%')
      .height('50%')
  }
}
