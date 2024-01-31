/**
 * Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
class ShapeModifier1 implements AttributeModifier<ShapeAttribute>{
  applyNormalAttribute(instance: ShapeAttribute): void {
    instance.viewPort({ x: 1, y: -2, width: 100, height: 200 })
      .stroke(Color.Pink)
      .fill(0x317AF7)
      .strokeDashOffset(15)
      .strokeDashArray([30])
      .strokeLineJoin(LineJoinStyle.Round)
      .strokeLineCap(LineCapStyle.Round)
      .strokeOpacity(0.5)
      .strokeMiterLimit(5)
      .mesh([10], 1, 1)
      .strokeWidth("20px")
      .fillOpacity(2)
      .antiAlias(true)
  }
}

class ShapeModifier2 implements AttributeModifier<ShapeAttribute>{
  applyNormalAttribute(instance: ShapeAttribute): void {
    instance.width("300px");
    instance.height("100px");
    instance.foregroundColor("#FF123222");
  }
}

@Entry
@Component
struct ShapeExample {
  @State shapeModifier: ShapeModifier1 = new ShapeModifier1()
  @State shapeModifier2: ShapeModifier2 = new ShapeModifier2()
  build() {
    Column({ space: 10 }) {
      Text('basic').fontSize(11).fontColor(0xCCCCCC).width(320)
      Shape() {
        Rect().width(300).height(50)
        Ellipse().width(300).height(50).offset({ x: 0, y: 60 })
        Path().width(300).height(10).commands('M0 0 L900 0').offset({ x: 0, y: 120 })
      }
      .width(350)
      .key("ShapeKey1")
      .attributeModifier(this.shapeModifier)

      Shape() {
        Rect().width(300).height(50)
        Ellipse().width(300).height(50).offset({ x: 0, y: 60 })
        Path().width(300).height(10).commands('M0 0 L900 0').offset({ x: 0, y: 120 })
      }
      .width(350)
      .key("ShapeKey2")
      .attributeModifier(this.shapeModifier2)

    }.width('100%').margin({ top: 15 })
  }
}
