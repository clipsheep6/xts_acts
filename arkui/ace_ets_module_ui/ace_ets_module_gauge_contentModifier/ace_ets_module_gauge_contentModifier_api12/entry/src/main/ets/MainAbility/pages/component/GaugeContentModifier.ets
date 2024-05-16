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

@Builder
function buildGaugeContentModifier(config: GaugeConfiguration) {
  Column() {
    Text(`value:${(config.contentModifier as MyGaugeContentModifier).value}`).id('GaugeContentModifier01')
    Text(`min:${(config.contentModifier as MyGaugeContentModifier).min}`).id('GaugeContentModifier02')
    Text(`max:${(config.contentModifier as MyGaugeContentModifier).max}`).id('GaugeContentModifier03')
    Text(`startAngle:${(config.contentModifier as MyGaugeContentModifier).startAngle}`).id('GaugeContentModifier04')
    Text(`endAngle:${(config.contentModifier as MyGaugeContentModifier).endAngle}`).id('GaugeContentModifier05')
    Text(`colors:${(config.contentModifier as MyGaugeContentModifier).colors}`).id('GaugeContentModifier06')
    Text(`strokeWidth:${(config.contentModifier as MyGaugeContentModifier).strokeWidth}`).id('GaugeContentModifier07')
    Text(`width:${(config.contentModifier as MyGaugeContentModifier).width}`).id('GaugeContentModifier08')
    Text(`height:${(config.contentModifier as MyGaugeContentModifier).height}`).id('GaugeContentModifier09')
    Text(`size_width:${(config.contentModifier as MyGaugeContentModifier).size_width}`).id('GaugeContentModifier10')
    Text(`size_height:${(config.contentModifier as MyGaugeContentModifier).size_height}`).id('GaugeContentModifier11')
    Text(`padding:${(config.contentModifier as MyGaugeContentModifier).padding}`).id('GaugeContentModifier12')
    Text(`margin:${(config.contentModifier as MyGaugeContentModifier).margin}`).id('GaugeContentModifier13')
    Text(`layoutWeight:${(config.contentModifier as MyGaugeContentModifier).layoutWeight}`).id('GaugeContentModifier14')
    Text(`constraintSize_minWidth:${(config.contentModifier as MyGaugeContentModifier).constraintSize_minWidth}`).id('GaugeContentModifier15')
    Text(`constraintSize_maxWidth:${(config.contentModifier as MyGaugeContentModifier).constraintSize_maxWidth}`).id('GaugeContentModifier16')
    Text(`constraintSize_minHeight:${(config.contentModifier as MyGaugeContentModifier).constraintSize_minHeight}`).id('GaugeContentModifier17')
    Text(`constraintSize_maxHeight:${(config.contentModifier as MyGaugeContentModifier).constraintSize_maxHeight}`).id('GaugeContentModifier18')
  }.width('100%').margin({top:0})
}

class MyGaugeContentModifier implements ContentModifier<GaugeConfiguration> {
  value: number
  min: number
  max: number
  startAngle: number
  endAngle: number
  colors: ResourceColor | LinearGradient | Array<[ResourceColor | LinearGradient, number]>
  strokeWidth: Length
  width: Length
  height: Length
  size_width: Length
  size_height: Length
  padding: Padding | Length
  margin: Margin | Length
  layoutWeight: number | string
  constraintSize_minWidth: Length
  constraintSize_maxWidth: Length
  constraintSize_minHeight: Length
  constraintSize_maxHeight: Length

  constructor(value: number, min: number, max: number, startAngle: number, endAngle: number, colors: ResourceColor | LinearGradient | Array<[ResourceColor | LinearGradient, number]>, strokeWidth: Length, width: Length, height: Length, size_width: Length,
              size_height: Length, padding: Padding | Length, margin: Margin | Length, layoutWeight: number | string, constraintSize_minWidth: Length, constraintSize_maxWidth: Length, constraintSize_minHeight: Length, constraintSize_maxHeight: Length) {
    this.value = value
    this.min = min
    this.max = max
    this.startAngle = startAngle
    this.endAngle = endAngle
    this.colors = colors
    this.strokeWidth = strokeWidth
    this.width = width
    this.height = height
    this.size_width = size_width
    this.size_height = size_height
    this.padding = padding
    this.margin = margin
    this.layoutWeight = layoutWeight
    this.constraintSize_minWidth = constraintSize_minWidth
    this.constraintSize_maxWidth = constraintSize_maxWidth
    this.constraintSize_minHeight = constraintSize_minHeight
    this.constraintSize_maxHeight = constraintSize_maxHeight
  }

  applyContent(): WrappedBuilder<[GaugeConfiguration]> {
    return wrapBuilder(buildGaugeContentModifier)
  }
}


@Entry
@Component
struct GaugeContentModifier {
  private scroller: Scroller = new Scroller()
  build() {
    Scroll(this.scroller) {
      Column(){
        Flex() {
          Column({ space: 20 }) {
            Gauge({
              value: 0,
              min: 0,
              max: 0
            })
              .contentModifier(new MyGaugeContentModifier(60, 0, 100, 20, 180, '#ff000000', 20, 100, 100, 100, 100, 20, 10, 5, 1, 100, 1, 100))
          }.width('100%')
        }.align(Alignment.Top)
      }
    }
    .scrollable(ScrollDirection.Vertical) // 滚动方向纵向
    .scrollBar(BarState.On) // 滚动条常驻显示
    .scrollBarColor(Color.Gray) // 滚动条颜色
    .scrollBarWidth(10) // 滚动条宽度
    .friction(0.6)
    .edgeEffect(EdgeEffect.Fade)
  }
}