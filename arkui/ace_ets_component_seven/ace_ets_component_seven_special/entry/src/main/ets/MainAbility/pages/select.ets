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

class SelectModifier1 implements AttributeModifier<SelectAttribute> {
  font: Font = { size: 30, weight: 400, family: 'serif', style: FontStyle.Normal }
  fontColor: Color = 0xCCCCCC
  spaceValue: number = 8
  spaceValueString: string = '50.00vp'
  arrowPosition: ArrowPosition = ArrowPosition.END

  applyNormalAttribute(instance: SelectAttribute): void {
    instance.selected(1)
      .value('Test')
      .font(this.font)
      .fontColor(this.fontColor)
      .selectedOptionFont({ size: 40, weight: 500, family: 'serif', style: FontStyle.Normal })
      .selectedOptionFontColor(0x000000)
      .selectedOptionBgColor(0xCCCCCC)
      .optionBgColor(0xFFFFFF)
      .optionFont({ size: 30, weight: 400, family: 'serif', style: FontStyle.Normal })
      .optionFontColor(0x000000)
      .menuAlign(MenuAlignType.START)
      .space(this.spaceValueString)
      .arrowPosition(this.arrowPosition)
    instance.width("600px");
    instance.height("100px");
  }
}

class SelectModifier2 implements AttributeModifier<SelectAttribute> {
  applyNormalAttribute(instance: SelectAttribute): void {
    instance.size({ width: "290px", height: "90px" })
    instance.optionHeight("20px")
    instance.optionWidth("120px")
  }
}

@Entry
@Component
struct SelectExample {
  @State selectModifier1: SelectModifier1 = new SelectModifier1()
  @State selectModifier2: SelectModifier2 = new SelectModifier2()

  build() {
    Column() {
      Select([{ value: 'aaa' },
      { value: 'bbb' },
      { value: 'ccc' },
      { value: 'ddd' }])
        .onSelect((index: number) => {
          console.info("Select:" + index)
        })
        .key('selectTest')
        .margin({ bottom: 40 })
        .attributeModifier(this.selectModifier1)

      Select([{ value: 'aaa1' },
      { value: 'bbb1' },
      { value: 'ccc1' },
      { value: 'ddd1' }])
        .key('selectTest1')
        .attributeModifier(this.selectModifier2)
    }
  }
}