/**
 * Copyright (c) 2023-2030 iSoftStone Information Technology (Group) Co.,Ltd.
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
import { NavigationView } from '../../view/size/NavigationView';
import attrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

@Entry
@Component
struct PaddingPage_Length {
  @State show: boolean = false
  @State data: string = '<h1 style="text-align: center;">h1标题</h1>' +
  '<h1 style="text-align: center;"><i>h1斜体</i></h1>' ;
  controller: WebController = new WebController()
  @State start: boolean = false
  private selectedTime: Date = new Date('2022-07-22T08:00:00')
  private scroller: Scroller = new Scroller()
  private fromStart: boolean = true
  private step: number = 50
  private loop: number = Infinity
  private src: string = 'Running Marquee starts rolling'
  private value: string[] = ['#', 'A', 'B', 'C', 'D', 'E', 'F', 'G',
    'H', 'I', 'J', 'K', 'L', 'M', 'N',
    'O', 'P', 'Q', 'R', 'S', 'T']
  public valueArr: number[] = [5, 10, 10, 7, 9, 10, 10, 10, 10]
  @State _padding: number|string  = undefined;
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''
  @State parentBackGroundColor: string = router.getParams() ? router.getParams()['view']['parentBackGroundColor'] : 0
  @State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ''

  onPageShow() {
    console.info('padding page show called ')
    attrsManager.registerDataChange(value => this._padding = value.padding)
  }

  @Styles commonStyle(){
    .padding(this._padding)
    .key(this.componentKey)
  }

  build() {
    Row() {
      if (this.targetView == 'AlphabetIndexer') {
        Stack({ alignContent: Alignment.Start }) {
          AlphabetIndexer({ arrayValue: this.value, selected: 0 }).commonStyle()
        }
      } else if (this.targetView == 'Text') {
        Text('1').commonStyle()
      } else if (this.targetView == 'Button') {
        Button('1').commonStyle()
      } else if (this.targetView == 'BlankRow') {
        Row() {
          Blank().color(Color.Red).commonStyle()
        }
      } else if (this.targetView == 'BlankColumn') {
        Column() {
          Blank().color(Color.Orange).commonStyle()
        }
      } else if (this.targetView == 'Checkbox') {
        Checkbox().backgroundColor(Color.Orange).commonStyle()
      } else if (this.targetView == 'CheckboxGroup') {
        CheckboxGroup({ group: 'checkboxGroup' }).commonStyle().backgroundColor(Color.Orange)
      } else if (this.targetView == 'DataPanel') {
        DataPanel({ values: this.valueArr }).commonStyle()
      } else if (this.targetView == 'DatePicker') {
        DatePicker({
          start: new Date('1970-1-1'),
          end: new Date('2100-1-1'),
        }).commonStyle()
      } else if (this.targetView == 'Divider') {
        Divider().strokeWidth(8).color(Color.Red).commonStyle()
      } else if (this.targetView == 'Gauge') {
        Gauge({ value: 105 }).commonStyle().colors([[0x317AF7, 1], [0x5BA854, 1], [0xE08C3A, 1], [0x9C554B, 1]])
      } else if (this.targetView == 'Image') {
        Image($r('app.media.icon')).commonStyle().height(110).backgroundColor(Color.Red)
      }else if (this.targetView == 'ImageAnimator') {
        ImageAnimator()
          .images([
            {
              src: $r('app.media.icon')
            }
          ]).commonStyle()
      } else if (this.targetView == 'LoadingProgress') {
        LoadingProgress().backgroundColor(Color.Red).commonStyle()
      } else if (this.targetView == 'Marquee') {
        Marquee({
          start: this.start = true,
          step: this.step,
          loop: this.loop,
          fromStart: this.fromStart,
          src: this.src
        })
          .commonStyle()
      } else if (this.targetView == 'Navigation') {
        NavigationView().padding(this._padding)
          .key(this.componentKey)
      } else if (this.targetView == 'Progress') {
        Progress({ value: 10, type: ProgressType.Eclipse }).commonStyle()
      } else if (this.targetView == 'QRCode') {
        QRCode(this.src).commonStyle()
          .backgroundColor(Color.Red)
      } else if (this.targetView == 'Radio') {
        Radio({ value: 'Radio1', group: 'radioGroup' }).checked(true)
          .height(50)
          .commonStyle()
          .backgroundColor(Color.Red)
      } else if (this.targetView == 'Rating') {
        Rating({ rating: 3.5 })
          .commonStyle()
      } else if (this.targetView == 'RichText') {
        RichText(this.data)
          .commonStyle()
      } else if (this.targetView == 'ScrollBar') {
        ScrollBar({ scroller: this.scroller, state: BarState.On }) {
          Text()
            .width(10)
            .height(50)
            .backgroundColor('#C0C0C0')
        }
        .commonStyle()
      } else if (this.targetView == 'Search') {
        Search()
          .commonStyle()
          .height(200)
      } else if (this.targetView == 'Select') {
        Select([{ value: 'aaa' },
          { value: 'bbb' }])
          .commonStyle()
      } else if (this.targetView == 'Slider') {
        Slider({
          value: this.step,
        }).showTips(true).commonStyle()
      } else if (this.targetView == 'TextArea') {
        TextArea({
          placeholder: 'The text area can hold an unlimited amount of text. input your word...'
        }).placeholderFont({ size: 16, weight: 400 }).commonStyle()
      } else if (this.targetView == 'TextClock') {
        TextClock({ timeZoneOffset: -8}).format('hms').commonStyle()
      } else if (this.targetView == 'TextInput') {
        TextInput({ placeholder: 'input your word...'}).commonStyle().height(40)
      } else if (this.targetView == 'TextPicker') {
        TextPicker({ range: this.value }).commonStyle()
      } else if (this.targetView == 'TextTimer') {
        TextTimer({ isCountDown: true, count: 30000}).format('mm:ss.SS').commonStyle()
      } else if (this.targetView == 'TimePicker') {
        TimePicker({
          selected: this.selectedTime,
        }).useMilitaryTime(true).commonStyle()
      } else if (this.targetView == 'Toggle') {
        Toggle({ type: ToggleType.Switch, isOn: false })
          .commonStyle()
      } else if (this.targetView == 'Web') {
        Web({ src: 'www.example.com', controller: this.controller })
          .commonStyle()
      } else if (this.targetView == 'Circle') {
        Circle()
          .commonStyle()
      } else if (this.targetView == 'Ellipse') {
        Ellipse()
          .commonStyle()
      } else if (this.targetView == 'Line') {
        Line()
          .startPoint([0, 0])
          .endPoint([50, 100])
          .commonStyle()
          .height(150)
      } else if (this.targetView == 'Polyline') {
        Polyline()
          .commonStyle()
          .height(200)
          .points([[20, 0], [0, 100], [100, 90]])
      } else if (this.targetView == 'Polygon') {
        Polygon()
          .commonStyle()
          .height(100)
          .points([[0, 0], [0, 100], [100, 100], [100, 0]])
      } else if (this.targetView == 'Path') {
        Path()
          .commonStyle()
          .height('120px')
      } else if (this.targetView == 'Rect') {
        Rect()
          .commonStyle()
          .height(20)
      } else if (this.targetView == 'Shape') {
        Shape() {
          Rect().width(100).height(50)
        }
        .commonStyle()
      }
    }.backgroundColor(this.parentBackGroundColor)
  }
}