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

class CounterModifier1 implements AttributeModifier<CounterAttribute>{
  applyNormalAttribute(instance: CounterAttribute): void {
    instance.enableInc(true)
    instance.width("300px");
    instance.height("100px");
  }
}

class CounterModifier2 implements AttributeModifier<CounterAttribute>{
  applyNormalAttribute(instance: CounterAttribute): void {
    instance.size({ width: "190px", height: "90px" })
    instance.backgroundColor("#FF342354")
    instance.enableDec(true)
  }
}

@Entry
@Component
struct CounterTest {
  @State CounterModifier1: CounterModifier1 = new CounterModifier1()
  @State CounterModifier2: CounterModifier2 = new CounterModifier2()
  @State incValue: number = 0
  @State decValue: number = 0

  build() {
    Row() {
      Column() {
        Text(this.incValue.toString()).key("incValueTest");
        Text(this.decValue.toString()).key("decValueTest");
        Counter() {
          Text(this.incValue.toString())
        }.key("Counter")
          .margin(100)
          .attributeModifier(this.CounterModifier1)
          .onInc(() => {
            this.incValue++
          })

        Counter() {
          Text(this.decValue.toString())
        }.key("Counter2")
          .margin(100)
          .attributeModifier(this.CounterModifier2)
          .onDec(() => {
            this.decValue--
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
