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
import { PatternLockModifier } from "@ohos.arkui.modifier";

class CustomModifier extends PatternLockModifier {
  applyPatternLockAttribute(instance: PatternLockAttribute): void {
    super.applyNormalAttribute?.(instance);
  }

  onChange1() {
    this.sideLength(0)
  }
}

@Entry
@Component
struct PatternLockExample {
  @State customModifier: PatternLockModifier = new CustomModifier()
    .sideLength(0)
    .circleRadius(10)
    .selectedColor("#ff00ff")
    .regularColor("#ff00ff")
    .activeColor("#ff00ff")
    .pathColor("#ff00ff")
    .pathStrokeWidth("12vp")
    .autoReset(true)


  build() {
    Column({ space: 5 }) {
      Button("change value").onClick(() => {
        (this.customModifier as CustomModifier).onChange1();
      }).key("changeButton")

      Column() {
        PatternLock()
          .attributeModifier(this.customModifier as CustomModifier)
          .key('patternLock')
      }
    }
    .margin({ top: 5 })
  }
}