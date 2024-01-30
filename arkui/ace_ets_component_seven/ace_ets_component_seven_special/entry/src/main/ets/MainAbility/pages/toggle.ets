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

class ToggleModifier1 implements AttributeModifier<ToggleAttribute> {
  applyNormalAttribute(instance: ToggleAttribute): void {
    instance.selectedColor("#FF0000FF");
    instance.switchPointColor('#FF008000');
    instance.width("300px");
    instance.height("100px");
  }
}

class ToggleModifier2 implements AttributeModifier<ToggleAttribute> {
  applyNormalAttribute(instance: ToggleAttribute): void {
    instance.responseRegion({ x: 40, y: 60, width: '80%', height: '70%' });
    instance.size({ width: "190px", height: "90px" })
    instance.padding({ top: "20px", right: "30px", left: "40px", bottom: "50px" })
    instance.backgroundColor("#FF342354")
  }
}

class ToggleModifier3 implements AttributeModifier<ToggleAttribute> {
  applyNormalAttribute(instance: ToggleAttribute): void {
    instance.hoverEffect(HoverEffect.Scale)
  }
}
@Entry
@Component
struct ToggleTest {
  @State toggleModifier: ToggleModifier1 = new ToggleModifier1()
  @State toggleModifier2: ToggleModifier2 = new ToggleModifier2()
  @State toggleModifier3: ToggleModifier3 = new ToggleModifier3()

  build() {
    Column({ space: 5 }) {
      Toggle({ type: ToggleType.Switch, isOn: false })
        .key("toggleCheckbox")
        .attributeModifier(this.toggleModifier)

      Toggle({ type: ToggleType.Switch, isOn: false })
        .key("toggleTest")
        .attributeModifier(this.toggleModifier2)

      Toggle({ type: ToggleType.Switch, isOn: false })
        .key("toggleTest1")
        .attributeModifier(this.toggleModifier3)
    }
    .width('100%')
    .height('100%')
  }
}