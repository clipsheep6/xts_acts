import { NavigationView } from '../../view/size/NavigationView';
import attrsManager from '../../common/AttrsManager';
import router from '@ohos.router'
import { ListItemGroupTwo } from '../../view/size/ListItemGroupTwo';
import { SwiperExample } from '../../view/size/SwiperTwo';
import { SideBarContainers } from '../../view/size/SideBarContainer';
@Entry
@Component
struct paddingPage {
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
  @State _padding:Padding  = { left: 0, right: 0,top:0,bottom:0 };
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
        } else if (this.targetView == 'Badge') {
          Badge({
            count: this.step,
            style: { color: 0xFFFFFF, fontSize: 16, badgeSize: 20, badgeColor: Color.Red }
          }) {
            Button('message')
              .width(100).height(50).backgroundColor(0x317aff)
          }.commonStyle().height(50)
        } else if (this.targetView == 'Column') {
          Column() {
            Column().width('100%').height(30).backgroundColor(0xAFEEEE)
          }.commonStyle()
        } else if (this.targetView == 'ColumnSplit') {
          ColumnSplit() {
            Text('1').width('100%').height(50).backgroundColor(0xF5DEB3).textAlign(TextAlign.Center)
          }
          .commonStyle()
        } else if (this.targetView == 'Counter') {
          Counter() {
          }.commonStyle()
        } else if (this.targetView == 'Flex') {
          Flex() {
            Text('1').width('20%').height(50).backgroundColor(0xF5DEB3)
          }.commonStyle()
        } else if (this.targetView == 'GridRow') {
          GridRow().commonStyle().height(200)
        } else if (this.targetView == 'Grid') {
          Grid(this.scroller) {
            ForEach(this.valueArr, (day: string) => {
              GridItem() {
                Text(day)
              }
            }, day => day)
          }.columnsTemplate('1fr 1fr 1fr 1fr 1fr').commonStyle().height(300)
        } else if (this.targetView == 'List') {
          List() {
          }.commonStyle().width(200).height(200)
        } else if (this.targetView == 'ListItem') {
          List() {
            ListItem() {
            }
            .commonStyle()
          }      .width(200)
          .height(200)
        } else if (this.targetView == 'ListItemGroup') {
          ListItemGroupTwo().padding(this._padding)
            .key(this.componentKey)
        } else if (this.targetView == 'Panel') {
          Panel(this.show = true) { // 展示日程
            Column() {
            }
          }
          .commonStyle()
        } else if (this.targetView == 'Refresh') {
          Refresh({ refreshing: false }) {
            Text('Pull Down and refresh:0 ')
          }
          .commonStyle()
        }  else if (this.targetView == 'Row') {
          Row() {
            Row().width('30%').height(50).backgroundColor(0xAFEEEE)
          }.commonStyle().height(107)
        } else if (this.targetView == 'RowSplit') {
          RowSplit() {
            Text('1').width('20%').height(100).backgroundColor(0xF5DEB3)
          }
          .commonStyle().height(100)
        } else if (this.targetView == 'Scroll') {
          Scroll() {
            List() {
              ForEach(this.valueArr, (item) => {
                ListItem() {
                  Text('ListItem' + item)
                }.width('100%').height(100)
              }, item => item)
            }      .width(200)
            .height(200)
          }
          .commonStyle().height(200)
        } else if (this.targetView == 'SideBarContainer') {
          SideBarContainers().padding(this._padding)
            .key(this.componentKey)
        } else if (this.targetView == 'Stack') {
          Stack() {
          }.commonStyle().height(150)
        } else if (this.targetView == 'Swiper') {
          SwiperExample().padding(this._padding)
            .key(this.componentKey)
        } else if (this.targetView == 'Tabs') {
          Tabs() {
            TabContent() {
              Column().width('100%').height('100%').backgroundColor('#00CB87')
            }
          }.commonStyle()
        } else if (this.targetView == 'TabContent') {
          Tabs() {
            TabContent() {
              Column().width('100%').height('100%').backgroundColor('#00CB87')
            }.commonStyle()
          }
        } else if (this.targetView == 'WaterFlow') {
          WaterFlow().commonStyle().height(100)
        }
      }.backgroundColor(this.parentBackGroundColor)
    }
}