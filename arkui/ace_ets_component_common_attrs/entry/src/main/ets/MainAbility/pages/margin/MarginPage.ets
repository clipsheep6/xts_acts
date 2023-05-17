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

import AttrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

@Entry
@Component
struct MarginPage {
  @State show: boolean = false
  @State data: string = '<h1 style="text-align: center;">h1标题</h1>' +
  '<h1 style="text-align: center;"><i>h1斜体</i></h1>' ;
  controller: WebController = new WebController()
  @State start: boolean = false
  private selectedTime: Date = new Date('2022-07-22T08:00:00')
  private scroller: Scroller = new Scroller()
  private fromStart: boolean = true
  textTimerController: TextTimerController = new TextTimerController()
  private step: number = 50
  controllers: TextClockController = new TextClockController()
  private loop: number = Infinity
  private src: string = 'Running Marquee starts rolling'
  private value: string[] = ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G']
  public valueArr: number[] = [5, 10, 10, 7, 9, 10, 10, 10, 10]
  @State _width: number = 100
  controllerss: SearchController = new SearchController()
  @State _margin: Margin = undefined;
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State targetGroupView: string = router.getParams() ? router.getParams()['view']['targetGroupView'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''
  @State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ''
  @State childWidth: number = router.getParams() ? router.getParams()['view']['childWidth'] : 0
  @State childHeight: number = router.getParams() ? router.getParams()['view']['childHeight'] : 0
  @State parentWidth: number = router.getParams() ? router.getParams()['view']['parentWidth'] : 0
  @State parentHeight: number = router.getParams() ? router.getParams()['view']['parentHeight'] : 0
  @State buttonComponentKey: string = router.getParams() ? router.getParams()['view']['buttonComponentKey'] : ''

  onPageShow() {
    console.info('Margin page show called ')
    AttrsManager.registerDataChange(value => this._margin = value)
  }

  @Styles commonStyle(){
    .margin(this._margin)
    .width(this.childWidth)
    .height(this.childHeight)
    .key(this.componentKey)
  }

  build() {
    Row() {
      if (this.targetView == 'ListItem') {
        List({ space: 0, initialIndex: 0 }) {
          ListItem() {
            Text('item1')
              .width('100%')
              .textAlign(TextAlign.Center)
              .backgroundColor(Color.White)
          }
          .margin(this._margin)
          .key(this.componentKey)

          ListItem() {
            Text('referenceComponent')
              .width('100%')
              .textAlign(TextAlign.Center)
              .backgroundColor(Color.White)
          }
          .key(this.buttonComponentKey)
        }
        .width(this.parentWidth)
        .height(this.parentHeight)
        .listDirection(Axis.Vertical)
        .key(this.parentComponentKey)
      } else if (this.targetView == 'TabContent') {
        Tabs() {
          TabContent() {
            Text('TabContent Test').width('100%').height('100%').backgroundColor(Color.White)
          }
          .tabBar('Tabs1')
          .margin(this._margin)
          .key(this.componentKey)
          TabContent() {
            Text('TabContent Test').width('100%').height('100%').backgroundColor(Color.White)
          }
          .tabBar('Tabs2')
          .key(this.buttonComponentKey)
        }
        .width(this.parentWidth)
        .height(this.parentHeight)
        .key(this.parentComponentKey)
      } else {
        Row() {
          if (this.targetView == 'Button') {
            Button('button1').commonStyle()
          } else if (this.targetView == 'Text') {
            Text('text1').commonStyle()
          } else if (this.targetView == 'AlphabetIndexer') {
            AlphabetIndexer({ arrayValue: this.value, selected: 0 }).commonStyle()
          } else if (this.targetView == 'Blank') {
            Blank().backgroundColor(Color.Yellow).commonStyle()
          } else if (this.targetView == 'Checkbox') {
            Checkbox({ name: 'checkbox1', group: 'checkboxGroup' }).commonStyle()
          } else if (this.targetView == 'CheckboxGroup') {
            CheckboxGroup({ group: 'checkboxGroup' }).commonStyle()
          } else if (this.targetView == 'DataPanel') {
            DataPanel({ values: this.valueArr }).commonStyle()
          } else if (this.targetView == 'DatePicker') {
            DatePicker({
              start: new Date('1970-1-1'),
              end: new Date('2100-1-1'),
            }).commonStyle()
          } else if (this.targetView == 'Divider') {
            Divider().commonStyle()
          } else if (this.targetView == 'Gauge') {
            Gauge({ value: 105 })
              .commonStyle()
              .colors([[0x317AF7, 1], [0x5BA854, 1], [0xE08C3A, 1], [0x9C554B, 1]])
          } else if (this.targetView == 'Image') {
            Image($r('app.media.icon'))
              .commonStyle()
          } else if (this.targetView == 'ImageAnimator') {
            ImageAnimator()
              .images([
                {
                  src: $r('app.media.icon')
                }
              ])
              .commonStyle()
          } else if (this.targetView == 'LoadingProgress') {
            LoadingProgress()
              .commonStyle()
          } else if (this.targetView == 'Marquee') {
            Marquee({
              start: this.start = true,
              step: this.step,
              loop: this.loop,
              fromStart: this.fromStart,
              src: this.src
            }).commonStyle()
          } else if (this.targetView == 'Navigation') {
            Navigation().commonStyle()
          } else if (this.targetView == 'Progress') {
            Progress({ value: 10, type: ProgressType.Eclipse }).commonStyle()
          } else if (this.targetView == 'QRCode') {
            QRCode(this.src).commonStyle()
          } else if (this.targetView == 'Radio') {
            Radio({ value: 'Radio1', group: 'radioGroup' }).commonStyle()
          } else if (this.targetView == 'Rating') {
            Rating({ rating: 3.5, indicator: false }).commonStyle()
          } else if (this.targetView == 'RichText') {
            RichText(this.data).commonStyle()
          } else if (this.targetView == 'ScrollBar') {
            ScrollBar({ scroller: this.scroller, state: BarState.On }) {
              Text()
                .width(20)
                .height(100)
                .borderRadius(10)
                .backgroundColor('#C0C0C0')
            }.commonStyle()
          } else if (this.targetView == 'Search') {
            Search().commonStyle()
          } else if (this.targetView == 'Select') {
            Select([{ value: 'aaa' },
              { value: 'bbb' }]).commonStyle()
          } else if (this.targetView == 'Slider') {
            Slider({
              value: this.step,
              min: 0,
              max: 100,
              style: SliderStyle.OutSet
            }).showTips(true).commonStyle()
          } else if (this.targetView == 'TextArea') {
            TextArea({
              placeholder: 'The text area can hold an unlimited amount of text. input your word...',
              controller: this.controllerss
            }).commonStyle()
          } else if (this.targetView == 'TextClock') {
            TextClock({ timeZoneOffset: -8, controller: this.controllers }).format('hms').commonStyle()
          } else if (this.targetView == 'TextInput') {
            TextInput({ placeholder: 'input your word...', controller: this.controllerss }).commonStyle()
          } else if (this.targetView == 'TextPicker') {
            TextPicker({ range: this.value }).commonStyle()
          } else if (this.targetView == 'TextTimer') {
            TextTimer({ isCountDown: true, count: 30000, controller: this.textTimerController })
              .format('mm:ss.SS')
              .fontColor(Color.Black)
              .commonStyle()
          } else if (this.targetView == 'TimePicker') {
            TimePicker({
              selected: this.selectedTime,
            }).commonStyle()
          } else if (this.targetView == 'Toggle') {
            Toggle({ type: ToggleType.Switch, isOn: false }).commonStyle()
          } else if (this.targetView == 'Web') {
            Web({ src: 'www.example.com', controller: this.controller }).commonStyle()
          } else if (this.targetView == 'Circle') {
            Circle().commonStyle()
          } else if (this.targetView == 'Ellipse') {
            Ellipse().commonStyle()
          } else if (this.targetView == 'Line') {
            Line()
              .commonStyle()
              .startPoint([0, 0])
              .endPoint([50, 100])
              .backgroundColor(Color.Black)
          } else if (this.targetView == 'Polyline') {
            Polyline().commonStyle()
          } else if (this.targetView == 'Polygon') {
            Polygon().commonStyle()
          } else if (this.targetView == 'Path') {
            Path().commonStyle()
          } else if (this.targetView == 'Rect') {
            Rect().commonStyle()
          } else if (this.targetView == 'Shape') {
            Shape() {
              Rect().width(100).height(50)
            }.commonStyle()
          } else if (this.targetView == 'Badge') {
            Badge({
              count: this.step,
              style: { color: 0xFFFFFF, fontSize: 16, badgeSize: 20, badgeColor: Color.Red }
            }) {
              Button('message')
                .width(100).height(50).backgroundColor(0x317aff)
            }.commonStyle()
          } else if (this.targetView == 'Column') {
            Column() {
              Column().width('100%').height(30).backgroundColor(0xAFEEEE)
            }.commonStyle()
          } else if (this.targetView == 'ColumnSplit') {
            ColumnSplit() {
              Text('1').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
              Text('2').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
            }.commonStyle()
          } else if (this.targetView == 'Counter') {
            Counter() {
            }.commonStyle()
          } else if (this.targetView == 'Flex') {
            Flex() {
              Text('1').width('20%').height(50).backgroundColor(0xF5DEB3)
            }.commonStyle()
          } else if (this.targetView == 'GridRow') {
            GridRow().commonStyle()
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
            .columnsTemplate('1fr 1fr 1fr 1fr 1fr')
            .rowsTemplate('1fr 1fr 1fr 1fr 1fr')
            .commonStyle()
            .backgroundColor(0xFAEEE0)
          } else if (this.targetView == 'GridItem') {
            Grid() {
              GridItem() {
                Text('4')
                  .backgroundColor(0xFAEEE0)
                  .width('100%')
                  .height('100%')
                  .textAlign(TextAlign.Center)
              }.rowStart(1).rowEnd(4).commonStyle()
            }
          } else if (this.targetView == 'List') {
            List() {
            }.commonStyle()
          } else if (this.targetView == 'ListItemGroup') {
            //          ListItemGroupTwo().width(this._width)
            //            .key(this.componentKey)
          } else if (this.targetView == 'Panel') {
            Panel(true) { // 展示日程
              Text('Text')
            }
            .backgroundColor(Color.Yellow)
            .commonStyle()
          } else if (this.targetView == 'Refresh') {
            Refresh({ refreshing: false }) {
              Text('123')
            }.commonStyle()
          } else if (this.targetView == 'RelativeContainer') {
            RelativeContainer().commonStyle()
          } else if (this.targetView == 'Row') {
            Row().commonStyle()
          } else if (this.targetView == 'RowSplit') {
            RowSplit() {
              Text('Text')
            }.commonStyle()
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
            }
            .scrollBar(BarState.On)
            .commonStyle()
          } else if (this.targetView == 'SideBarContainer') {
            SideBarContainer(SideBarContainerType.Embed) {
              Column() {
                ForEach([1, 2, 3], (item) => {
                  Column({ space: 5 }) {
                    Image($r('app.media.icon')).width(50).height(50)
                    Text('Index0' + item).fontSize(25)
                  }
                })
              }.width('100%')
              .justifyContent(FlexAlign.SpaceEvenly)
              .backgroundColor(Color.Green)

              Column() {
                Text('SideBarContainer content').fontSize(25)
              }.backgroundColor(Color.Orange)
            }.commonStyle()
          } else if (this.targetView == 'Stack') {
            Stack() {
            }.commonStyle()
          } else if (this.targetView == 'Swiper') {
            Swiper() {
              ForEach([1, 2, 3], (item: string) => {
                Text('Swiper' + item).width('90%').height(50)
              }, item => item)
            }
            .indicator(true)
            .backgroundColor(Color.White)
            .commonStyle()
          } else if (this.targetView == 'Tabs') {
            Tabs() {
              TabContent() {
                Column().width('100%').height('100%').backgroundColor('#00CB87')
              }
            }.commonStyle()
          } else if (this.targetView == 'WaterFlow') {
            WaterFlow() {
              ForEach([1, 2, 3, 4, 5, 6, 7, 8, 9], (item: number) => {
                FlowItem() {
                  Column() {
                    Text('WaterFlow' + item).fontSize(12).height('16')
                    Image($r('app.media.icon'))
                      .width(50)
                      .height(50)
                      .objectFit(ImageFit.Fill)
                  }
                }
              }, item => item)
            }.commonStyle()
          }
          Button('button')
            .width(this.childWidth)
            .height(this.childHeight)
            .key(this.buttonComponentKey)
        }.backgroundColor(Color.Yellow)
        .key(this.parentComponentKey)
      }
    }.backgroundColor(Color.Red)
  }
}