import { AlphabetIndexerView } from '../../view/align/AlphabetIndexerView';
import { RemoteWindowView } from '../../view/align/RemoteWindowView';
import { WaterFlowView } from '../../view/align/WaterFlowView';
import { TabsView } from '../../view/align/TabsView';
import { NavigationView } from '../../view/align/NavigationView';
import AttrsManager from '../../common/AttrsManager';
import router from '@ohos.router'

/**
 * Test page of common attribute: direction
 */
@Entry
@Component
struct DirectionPage {
  @State _direction: Direction = Direction.Ltr;
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State parentComponentKey: string = router.getParams() ? router.getParams()['view']['parentComponentKey'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''
  @State referenceComponentKey: string =
    router.getParams() ? router.getParams()['view']['referenceComponentKey'] : ''

  onPageShow() {
    console.info('[DirectionPage] page show called ')

    //Register data change call back.
    AttrsManager.registerDataChange(value => this._direction = value)
  }

  /**
   * Set common style.
   */
  @Styles commonStyle(){
    .key(this.componentKey)
  }

  build() {
    Stack() {
      Row() {
        //Set view by page config.
        if (this.targetView == 'AlphabetIndexer') {
          AlphabetIndexerView({ componentKey: this.componentKey })
        } else if (this.targetView == 'Blank') {
          Blank().commonStyle()
        } else if (this.targetView == 'Button') {
          Button('button1').commonStyle()
        } else if (this.targetView == 'Checkbox') {
          Checkbox({ name: 'checkbox1', group: 'checkboxGroup' }).commonStyle()
        } else if (this.targetView == 'CheckboxGroup') {
          CheckboxGroup({ group: 'checkboxGroup' }).commonStyle()
        } else if (this.targetView == 'DataPanel') {
          DataPanel({ values: [25], max: 100, type: DataPanelType.Circle }).commonStyle()
        } else if (this.targetView == 'DatePicker') {
          DatePicker({ start: new Date('1970-1-1'), end: new Date('2100-1-1'), selected: new Date() })
            .width('50%')
            .commonStyle()
        } else if (this.targetView == 'Divider') {
          Divider().strokeWidth(8).height('50%').vertical(true).commonStyle()
        } else if (this.targetView == 'Gauge') {
          Gauge({ value: 75 })
            .colors([[Color.White, 1], [Color.Black, 1]])
            .width('50%')
            .height('50%')
            .backgroundColor(Color.Orange)
            .commonStyle()
        } else if (this.targetView == 'Image') {
          Image($r('app.media.icon')).width('50%').height('50%').commonStyle()
        } else if (this.targetView == 'ImageAnimator') {
          ImageAnimator().images([{ src: $r('app.media.icon') }]).width('50%').height('50%').commonStyle()
        } else if (this.targetView == 'LoadingProgress') {
          LoadingProgress()
            .color(Color.Blue)
            .backgroundColor(Color.Orange)
            .width('50%')
            .height('50%')
            .commonStyle()
        } else if (this.targetView == 'Marquee') {
          Marquee({ start: true, step: 50, src: 'Running Marquee starts rolling' })
            .fontWeight(700).fontColor(Color.White).fontSize(48).commonStyle()
        } else if (this.targetView == 'Menu') {
          Menu() {
            MenuItem({ startIcon: $r('app.media.icon'), content: 'Menu' })
          }.backgroundColor(Color.Yellow).commonStyle()
        } else if (this.targetView == 'Navigation') {
          NavigationView({ componentKey: this.componentKey }).width('50%').height('50%')
        } else if (this.targetView == 'Progress') {
          Progress({ value: 50, type: ProgressType.Linear }).commonStyle()
        } else if (this.targetView == 'QRCode') {
          QRCode('QRCode').color(0xF7CE00).width(200).height(200).commonStyle()
        } else if (this.targetView == 'Radio') {
          Radio({ value: 'Radio1', group: 'radioGroup' }).commonStyle()
        } else if (this.targetView == 'Rating') {
          Rating({ rating: 4 }).stars(5).commonStyle()
        } else if (this.targetView == 'RemoteWindow') {
          RemoteWindowView({ componentKey: this.componentKey }).width('50%').height('50%')
        } else if (this.targetView == 'Search') {
          Search({ placeholder: 'Type to search...' })
            .backgroundColor(Color.White)
            .searchButton('SEARCH')
            .commonStyle()
        } else if (this.targetView == 'Select') {
          Select([{ value: 'aaa', icon: '/common/public_icon.svg' },
            { value: 'bbb', icon: '/common/public_icon.svg' }]).commonStyle()
        } else if (this.targetView == 'Slider') {
          Slider({ value: 50, style: SliderStyle.OutSet, direction: Axis.Vertical })
            .blockColor('#191970')
            .trackColor('#ADD8E6')
            .selectedColor('#4169E1')
            .height('50%')
            .commonStyle()
        } else if (this.targetView == 'Text') {
          Text('text').fontColor(Color.White).fontSize(30).commonStyle()
        } else if (this.targetView == 'TextArea') {
          TextArea({ placeholder: 'TextArea', }).backgroundColor(Color.White).width('50%').commonStyle()
        } else if (this.targetView == 'TextClock') {
          TextClock({ timeZoneOffset: -8 }).format('hms').commonStyle()
        } else if (this.targetView == 'TextInput') {
          TextInput({ placeholder: 'TextInput' }).backgroundColor(Color.White).width('50%').commonStyle()
        } else if (this.targetView == 'TextPicker') {
          TextPicker({ range: ['apple1', 'orange2', 'peach3'], selected: 1 }).commonStyle()
        } else if (this.targetView == 'TimePicker') {
          TimePicker().commonStyle()
        } else if (this.targetView == 'Toggle') {
          Toggle({ type: ToggleType.Switch }).commonStyle()
        } else if (this.targetView == 'Badge') {
          Badge({
            value: '',
            style: { badgeSize: 6, badgeColor: Color.Red }
          }) {
            Button('BadgeContent')
          }.commonStyle()
        } else if (this.targetView == 'Column') {
          Column().height('50%').width('50%').backgroundColor(Color.Green).commonStyle()
        } else if (this.targetView == 'Counter') {
          Counter() {
            Text('1')
          }.commonStyle()
        } else if (this.targetView == 'GridRow') {
          GridRow({
            columns: 5,
            gutter: { x: 5, y: 10 },
            breakpoints: { value: ['400vp', '600vp', '800vp'], reference: BreakpointsReference.WindowSize },
            direction: GridRowDirection.Row
          }) {
            ForEach([Color.Red, Color.Orange, Color.Yellow, Color.Green,
            Color.Pink, Color.Grey, Color.Blue, Color.Brown], (color) => {
              GridCol({ span: { xs: 1, sm: 2, md: 3, lg: 4 } }) {
                Row().width('100%').height('20vp')
              }.borderColor(color).borderWidth(2)
            })
          }.width('50%').height('50%').commonStyle()
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
          .width('50%')
          .height('50%')
          .columnsTemplate('1fr 1fr 1fr 1fr 1fr')
          .rowsTemplate('1fr 1fr 1fr 1fr 1fr')
          .commonStyle()
        } else if (this.targetView == 'List') {
          List({ space: 20, initialIndex: 0 }) {
            ForEach([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], (item) => {
              ListItem() {
                Text('' + item)
                  .width('100%')
                  .textAlign(TextAlign.Center)
                  .backgroundColor(Color.White)
              }
            }, item => item)
          }
          .width('50%')
          .height('50%')
          .listDirection(Axis.Vertical)
          .commonStyle()
        } else if (this.targetView == 'Panel') {
          Panel(true) {
            Column() {
              Text('Panel')
            }
          }
          .mode(PanelMode.Half)
          .commonStyle()
        } else if (this.targetView == 'Refresh') {
          Refresh({ refreshing: true }) {
            Text('Refresh').fontSize(30)
          }
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
          }
          .scrollBar(BarState.On)
          .width('50%').height('50%')
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
          }.width('50%').height('50%').commonStyle()
        } else if (this.targetView == 'Stack') {
          Stack() {
            Text('Stack').fontColor(Color.White)
          }.backgroundColor(Color.Orange).width('50%').height('50%').commonStyle()
        } else if (this.targetView == 'Swiper') {
          Swiper() {
            ForEach([1, 2, 3], (item: string) => {
              Text('Swiper' + item).width('90%').height(160)
            }, item => item)
          }
          .indicator(true)
          .backgroundColor(Color.White)
          .commonStyle()
        } else if (this.targetView == 'Tabs') {
          TabsView({ componentKey: this.componentKey }).width('50%').height('50%')
        } else if (this.targetView == 'WaterFlow') {
          WaterFlowView({ componentKey: this.componentKey }).width('50%').height('50%')
        } else if (this.targetView == 'Circle') {
          Circle({ width: 150, height: 150 }).commonStyle()
        } else if (this.targetView == 'Ellipse') {
          Ellipse({ width: 150, height: 80 }).commonStyle()
        } else if (this.targetView == 'Line') {
          Line()
            .width(200)
            .height(150)
            .startPoint([0, 0])
            .endPoint([50, 100])
            .stroke(Color.Black)
            .backgroundColor(Color.Orange)
            .commonStyle()
        } else if (this.targetView == 'Polyline') {
          Polyline({ width: 100, height: 100 })
            .points([[0, 0], [20, 60], [100, 100]])
            .fillOpacity(0)
            .stroke(Color.Blue)
            .strokeWidth(3)
            .backgroundColor(Color.Orange)
            .commonStyle()
        } else if (this.targetView == 'Polygon') {
          Polygon()
            .width(100)
            .height(100)
            .points([[50, 0], [0, 50], [20, 100], [80, 100], [100, 50]])
            .fill(Color.Red)
            .fillOpacity(0.6)
            .backgroundColor(Color.Orange)
            .commonStyle()
        } else if (this.targetView == 'Path') {
          Path()
            .width('210px')
            .height('310px')
            .commands('M0 100 A30 20 20 0 0 200 100 Z')
            .fillOpacity(0)
            .stroke(Color.Black)
            .backgroundColor(Color.Orange)
            .strokeWidth(3)
            .commonStyle()
        } else if (this.targetView == 'Rect') {
          Rect({ width: '90%', height: 80 })
            .radius(20)
            .fill(Color.Pink)
            .stroke(Color.Transparent)
            .backgroundColor(Color.Orange)
            .commonStyle()
        } else if (this.targetView == 'Shape') {
          Shape() {
            Path().width(200).height(60).commands('M0 0 L400 0 L400 150 Z')
          }
          .width(300)
          .height(200)
          .viewPort({ x: -20, y: -5, width: 310, height: 90 })
          .fill(0x317AF7)
          .stroke(0xEE8443)
          .strokeWidth(10)
          .strokeLineJoin(LineJoinStyle.Miter)
          .backgroundColor(Color.Orange)
          .strokeMiterLimit(5)
          .commonStyle()
        }

        Button('ReferenceComponent').key(this.referenceComponentKey)
      }
      .width('80%')
      .height('80%')
      .direction(this._direction)
      .key(this.parentComponentKey)
      .backgroundColor(Color.Green)
    }
    .width('100%')
    .height('100%')
    .backgroundColor(Color.Yellow)
  }
}