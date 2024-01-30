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

class StackModifier1 implements AttributeModifier<StackAttribute> {
  applyNormalAttribute(instance: StackAttribute): void {
    instance.align(Alignment.BottomStart)
  }
}

@Entry
@Component
struct StackModifier7Example {
  @State StackModifier1: StackModifier1 = new StackModifier1()

  build() {
    Column() {
      Stack() {
        Text('First child, show in bottom').width('90%').height('100%').backgroundColor(0xffe5ff).align(Alignment.Top)
        Text('Second child, show in top').width('70%').height('60%').backgroundColor(0xef33ff).align(Alignment.Top)
      }.width('100%').height(150).margin({ top: 5 })
      .key("Stacktest")
      .attributeModifier(this.StackModifier1)
    }
    .width('100%')
    .height('100%')
  }
}
