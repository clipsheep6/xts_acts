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
import { TextModifier } from "@ohos.arkui.modifier";

class CustomModifier extends TextModifier {
  applyNormalAttribute(instance: TextAttribute): void {
    super.applyNormalAttribute?.(instance);
  }

  onChange1() {
    this.wordBreak(WordBreak.BREAK_ALL)
  }
}

@Entry
@Component
struct TextExample {
  private arr: number[] = [0, 1, 2, 3, 4, 5, 6, 7]
  @State CustomModifier1: TextModifier = new CustomModifier()
    .textAlign(TextAlign.Center)
    .font({ size: 12, weight: FontWeight.Normal })
  @State CustomModifier2: TextModifier = new CustomModifier()
    .lineHeight(20)
    .fontColor(Color.Black)
  @State CustomModifier3: TextModifier = new CustomModifier()
    .textOverflow({ overflow: TextOverflow.None })
    .fontSize(10)
  @State CustomModifier4: TextModifier = new CustomModifier()
    .maxLines(10)
  @State CustomModifier5: TextModifier = new CustomModifier()
    .decoration({ type: TextDecorationType.None, color: Color.Black })
    .minFontSize(5)
  @State CustomModifier6: TextModifier = new CustomModifier()
    .letterSpacing(10)
    .maxFontSize(30)
  @State CustomModifier7: TextModifier = new CustomModifier()
    .baselineOffset(100)
    .textCase(TextCase.Normal)
    .fontStyle(FontStyle.Normal)
  @State CustomModifier8: TextModifier = new CustomModifier()
    .textShadow({
      radius: 10,
      type: ShadowType.COLOR,
      color: Color.Blue,
      offsetX: 50,
      offsetY: 35,
      fill: true,
    })
    .copyOption(CopyOptions.None)
    .fontWeight(FontWeight.Lighter)
  @State CustomModifier9: TextModifier = new CustomModifier()
    .heightAdaptivePolicy(TextHeightAdaptivePolicy.MAX_LINES_FIRST)
    .fontFamily('HarmonyOS Sans')
  @State CustomModifier10: TextModifier = new CustomModifier()
    .draggable(true)
    .textIndent(1)
    .fontFamily('HarmonyOS Sans')
  @State CustomModifier11: TextModifier = new CustomModifier()
    .wordBreak(WordBreak.NORMAL)

  build() {
    Column({ space: 5 }) {
      Button("change value").onClick(() => {
        (this.CustomModifier11 as CustomModifier).onChange1();
      }).key("changeButton")

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier1 as CustomModifier)
        .key('text1')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier2 as CustomModifier)
        .key('text2')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier3 as CustomModifier)
        .key('text3')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier4 as CustomModifier)
        .key('text4')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier5 as CustomModifier)
        .key('text5')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier6 as CustomModifier)
        .key('text6')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier7 as CustomModifier)
        .key('text7')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier8 as CustomModifier)
        .key('text8')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier9 as CustomModifier)
        .key('text9')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier10 as CustomModifier)
        .key('text10')

      Text('This is the text content with textAlign set to Center.')
        .attributeModifier(this.CustomModifier11 as CustomModifier)
        .key('text11')
    }
    .margin({ top: 5 })
  }
}