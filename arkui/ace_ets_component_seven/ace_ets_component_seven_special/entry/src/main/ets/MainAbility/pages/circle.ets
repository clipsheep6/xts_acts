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

class CircleModifier1 implements AttributeModifier<CircleAttribute> {
  applyNormalAttribute(instance: CircleAttribute): void {
    instance.height("120px")
    instance.width("130px")
  }
}

@Entry
@Component
struct CircleModifier7Example {
  @State CircleModifier1: CircleModifier1 = new CircleModifier1()

  build() {
    Column() {
      Circle()
      .key("Circletest")
      .attributeModifier(this.CircleModifier1)
    }
    .width('100%')
    .height('100%')
  }
}
