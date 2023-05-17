/*
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
import attrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

/**
 * Test page of common attribute:alignRules
 */

@Entry
@Component
struct AlignRules {
  @State show: boolean = false
  @State _alignRules: Object = {center: {anchor: '__container__', align: VerticalAlign.Center},
    middle: {anchor: '__container__', align: HorizontalAlign.Center}};
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''
  @State parentWidth: number = router.getParams() ? router.getParams()['view']['parentWidth'] : 0
  @State parentHeight: number = router.getParams() ? router.getParams()['view']['parentHeight'] : 0
  @State subassemblyWidth: number = router.getParams() ? router.getParams()['view']['subassemblyWidth'] : 0
  @State subassemblyHeight: number = router.getParams() ? router.getParams()['view']['subassemblyHeight'] : 0
  @State subassemblyCenter: any = router.getParams() ? router.getParams()['view']['subassemblyCenter'] : ''
  @State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ''
  @State referenceComponentKey: string = router.getParams() ? router.getParams()['view']['referenceComponentKey'] : ''

  onPageShow() {
    console.info('[ButtonDimensionsOne] page show called ')

    //Register data change call back.
    attrsManager.registerDataChange(value => this._alignRules = value)
  }
  /**
   * Set common style.
   *
   */
  @Styles commonStyle(){
    .alignRules(this._alignRules)
    .key(this.componentKey)
  }

  build() {
    RelativeContainer() {
      if (this.targetView == 'Button') {
        Button('button1')
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Radio') {
        Radio({ value: 'Radio1', group: 'radioGroup' })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Select') {
        Select([{ value: 'aaa', icon: '/common/public_icon.svg' },
          { value: 'bbb', icon: '/common/public_icon.svg' }])
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Checkbox') {
        Checkbox({ name: 'checkbox1' })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'CheckboxGroup') {
        CheckboxGroup()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'DataPanel') {
        DataPanel({ values: [25] })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'DatePicker') {
        DatePicker({})
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Divider') {
        Divider()
          .strokeWidth(10)
          .color(Color.Black)
          .vertical(false)
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Gauge') {
        Gauge({ value: 0 })
          .colors([[0x317AF7, 1], [0x9C554B, 1]])
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'LoadingProgress') {
        LoadingProgress()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Marquee') {
        Marquee({ start: true, src: 'Marquee' })
          .backgroundColor(Color.Blue)
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Navigation') {
        Navigation()
          .backgroundColor(Color.Blue)
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Image') {
        Image($r('app.media.icon'))
          .backgroundColor(Color.Blue)
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'ImageAnimator') {
        ImageAnimator()
          .backgroundColor(Color.Blue)
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'AlphabetIndexer') {
        AlphabetIndexer({ arrayValue: ['A', 'B', 'C', 'D'], selected: 0 })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      }  else if (this.targetView == 'Progress') {
        Progress({ value: 10, type: ProgressType.Ring })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'QRCode') {
        QRCode('Hello Harmony')
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Rating') {
        Rating({ rating: 3.5 })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Search') {
        Search()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Slider') {
        Slider()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Text') {
        Text('Text')
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'TextArea') {
        TextArea()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'TextClock') {
        TextClock()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'TextInput') {
        TextInput()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'TextPicker') {
        TextPicker({ range: ['apple1', 'orange2', 'peach3', 'grape4'] })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'TimePicker') {
        TimePicker()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Toggle') {
        Toggle({ type: ToggleType.Switch })
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Badge') {
        Badge({ value: '', style: { badgeSize: 6, badgeColor: Color.Red } })
        {
          Button('BadgeContent')
        }
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Column') {
        Column()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Counter') {
        Counter()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Flex') {
        Flex()
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Grid') {
        Grid() {
          ForEach(['0', '1', '2', '3', '4'], () => {
            ForEach(['0', '1', '2', '3', '4'], (day: string) => {
              GridItem() {
                Text(day).backgroundColor(Color.White)
                  .width('100%').height('100%').textAlign(TextAlign.Center)
              }
            })
          })
        }
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'GridRow') {
        GridRow({
          columns: 5,
          gutter: { x: 5, y: 10 },
          breakpoints: { value: ['400vp', '600vp', '800vp'], reference: BreakpointsReference.WindowSize },
          direction: GridRowDirection.Row
        }) {
          ForEach([Color.Red, Color.Orange, Color.Yellow, Color.Green, Color.Pink, Color.Grey, Color.Blue, Color.Brown],
            (color) => {
            GridCol({ span: { xs: 1, sm: 2, md: 3, lg: 4 } }) {
              Row().width('100%').height('20vp')
            }.borderColor(color).borderWidth(2)
          })
        }
          .id('subassembly')
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'List') {
        List()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'RelativeContainer') {
        RelativeContainer()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Row') {
        Row()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Scroll') {
        Scroll() {
          Column() {
            ForEach([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], (item) => {
              Text('Scroll' + item.toString())
                .width('90%')
                .height(150)
                .backgroundColor(Color.White)
                .textAlign(TextAlign.Center)
            }, item => item)
          }.width('100%')
        }.scrollBar(BarState.On)
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'SideBarContainer') {
        SideBarContainer(SideBarContainerType.Embed) {
          Column() {
            ForEach([1, 2, 3], (item) => {
              Column({ space: 5 }) {
                Image($r('app.media.icon')).width(64).height(64)
                Text('Index0' + item).fontSize(25)
              }
            })
          }.width('100%')
          .justifyContent(FlexAlign.SpaceEvenly)
          .backgroundColor(Color.Green)

          Column() {
            Text('SideBarContainer content').fontSize(25)
          }.backgroundColor(Color.Orange)
        }
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Stack') {
        Stack()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Swiper') {
        Swiper()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Tabs') {
        Tabs()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'WaterFlow') {
        WaterFlow()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Circle') {
        Circle()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Ellipse') {
        Ellipse()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Line') {
        Line()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Polyline') {
        Polyline()
          .points([[50, 10], [50, 50], [90, 90]])
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Polygon') {
        Polygon()
          .points([[50, 10], [50, 50], [90, 90]])
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Path') {
        Path()
          .commands('M100 0 L200 240 L0 240 Z')
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Rect') {
        Rect()
          .id('subassembly')
          .backgroundColor(Color.Blue)
          .width(this.subassemblyWidth)
          .height(this.subassemblyHeight)
          .commonStyle()
      } else if (this.targetView == 'Shape') {
        Shape() {
          Rect().width('100%').height('100%').id('Rect')
        }
        .id('subassembly')
        .backgroundColor(Color.Blue)
        .width(this.subassemblyWidth)
        .height(this.subassemblyHeight)
        .commonStyle()
      }else if (this.targetView == 'Panel') {
        Panel(this.show = true) {
          Column() {
          }
        }
        .id('subassembly')
        .width(this.subassemblyWidth)
        .height(this.subassemblyHeight)
        .alignRules(this.subassemblyCenter)
        .commonStyle()
      }else if (this.targetView == 'Refresh') {
        Refresh({ refreshing: false }) {
          Text('Pull Down and refresh:0 ')
        }
        .id('subassembly')
        .width(this.subassemblyWidth)
        .height(this.subassemblyHeight)
        .alignRules(this.subassemblyCenter)
        .commonStyle()
      }
      Button('button')
        .width(this.subassemblyWidth)
        .height(this.subassemblyHeight)
        .alignRules(this.subassemblyCenter)
        .id(this.referenceComponentKey)
    }.key(this.parentComponentKey).width(this.parentWidth).height(this.parentHeight).backgroundColor(Color.Pink)
  }
}