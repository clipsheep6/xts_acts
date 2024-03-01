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
import { CommonModifier } from "@ohos.arkui.modifier";
import matrix4 from '@ohos.matrix4'
import UTD from '@ohos.data.uniformTypeDescriptor';

class CustomModifier<CommonAttribute> extends CommonModifier<CommonAttribute> {
  applyNormalAttribute(instance: CommonAttribute): void {
    super.applyNormalAttribute?.(instance);
  }
}

@Entry
@Component
struct Common1Example {

  @State customModifier: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .outlineRadius({ topLeft: 10, topRight: "10vp", bottomLeft: "20vp", bottomRight: 13 })
    .outlineStyle(OutlineStyle.SOLID)
    .outlineWidth(2)
    .outlineColor("#FFFFC0CB")
    .align(Alignment.TopStart)
    .direction(Direction.Ltr)
    .backdropBlur(20)
    .invert(0.5)
    .blur(15)
    .zIndex(2)
    .displayPriority(2)
    .alignSelf(ItemAlign.Start)
    .flexBasis(20)
    .flexGrow(3)
    .flexShrink(4)
    .transform(matrix4.identity()
      .translate({ x: 1, y: 1 })
      .scale({ x: 1, y: 1 })
      .rotate({ x: 0, y: 0, z: 1, angle: 5 }))
    .rotate({ x: 0, y: 0, z: 1, centerX: 0, centerY: 0, centerZ: 0, perspective: 0, angle: 10 })
    .translate({ x: 30, y: 10 })
  // .scale({x: 1,y: 1,z: 1,centerX:'120px',centerY:'100px'})


  @State customModifier1: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .outline({ width: 10 })
    .useShadowBatching(true)
    .obscured([1])
    .shadow({ radius: 10 })
    .renderFit(RenderFit.CENTER)
    .clip(false)
    .radialGradient({
      center: [10, 20],
      radius: 15, colors:
        [[0xff0000, 0.0], [0x0000ff, 1], [0xffff00, 2.0]],
      repeating: true
    })
    .sweepGradient({
      center: [50, 50],
      start: 100,
      end: 359,
      colors: [[0xff0000, 0.0], [0x0000ff, 0.3], [0xffff00, 1.0]]
    })
    .aspectRatio(2)
    .offset({ x: '10px', y: '20px' })
    .markAnchor({ x: '15px', y: '25px' })
    .position({ x: '20px', y: '30px' })
    .gridOffset(2)
    .gridSpan(3)
    .renderGroup(true)
    .hueRotate(1)
    .sepia(1)

  //image
  @State customModifier2: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .mask(new Rect({ height: '280px' }).fill(Color.Gray))
    .overlay(
      "Winter",
      {
        align: Alignment.Bottom,
        offset: { x: 15, y: 15 }
      }
    )
    .draggable(true)
    .enabled(false)
    .backgroundEffect({
      radius: 0,
      saturation: 20,
      brightness: 200,
      color: "#FF008000",
      adaptiveColor: AdaptiveColor.DEFAULT,
      blurOptions: { grayscale: [1, 1] }
    })


  @State customModifier3: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .id("testid")

  @State customModifier4: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .key("testkey")

  @State customModifier5: CommonModifier < CommonAttribute > = new CustomModifier < CommonAttribute > ()
    .clickEffect({ level: ClickEffectLevel.HEAVY, scale: 1 })

  @State buttonTypeValue: ButtonType = ButtonType.Normal;

  build() {
    Column(){

      Text("Modifier自定义")
        .attributeModifier(this.customModifier as CustomModifier<CommonAttribute>)
        .key("common1")

      Text("Modifier1自定义")
        .attributeModifier(this.customModifier1 as CustomModifier<CommonAttribute>)
        .key("common2")

      Image($r('app.media.icon'))
        .attributeModifier(this.customModifier2 as CustomModifier<CommonAttribute>)
        .key("common3")

      Button('testid', { type: this.buttonTypeValue, stateEffect: true })
        .attributeModifier(this.customModifier3 as CustomModifier<CommonAttribute>)

      Button('testkey', { type: this.buttonTypeValue, stateEffect: true })
        .attributeModifier(this.customModifier4 as CustomModifier<CommonAttribute>)

      Button('testbutton', { type: this.buttonTypeValue, stateEffect: true })
        .attributeModifier(this.customModifier5 as CustomModifier<CommonAttribute>)
        .id("testbutton")

    }
  }
}
