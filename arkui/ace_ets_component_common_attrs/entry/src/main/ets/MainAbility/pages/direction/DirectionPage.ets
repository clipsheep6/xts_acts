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
 * Test page of common attribute: direction
 */
@Entry
@Component
struct DirectionPage {
  @State _direction: Direction = Direction.Auto;
  @State targetView: string = router.getParams() ? router.getParams()['view']['targetView'] : ''
  @State componentKey: string = router.getParams() ? router.getParams()['view']['componentKey'] : ''

  onPageShow() {
    console.info('[DirectionPage] page show called ')

    //Register data change call back.
    attrsManager.registerDataChange(value => this._direction = value)
  }

  /**
   * Set common style.
   */
  @Styles commonStyle(){
    .direction(this._direction)
    .key(this.componentKey)
    .width('100%')
    .backgroundColor(Color.Green)
  }

  build() {
    Row() {
      if (this.targetView == 'Badge') {
        Badge({
          value: '',
          style: { badgeSize: 6, badgeColor: Color.Red }
        }) {
          Button('BadgeContent')
        }.commonStyle()
      } else if (this.targetView == 'Column') {
        Column() {
          Button('ColumnButton')
        }.commonStyle()
      } else if (this.targetView == 'ColumnSplit') {
        ColumnSplit() {
          Button('ColumnSplit')
        }.commonStyle()
      } else if (this.targetView == 'Counter') {
        Counter() {
          Text('1')
        }.commonStyle()
      } else if (this.targetView == 'Flex') {
        Flex() {
          Button('Flex')
        }.commonStyle()
      } else if (this.targetView == 'FlowItem') {
        WaterFlow() {
          FlowItem() {
            Button('FlowItem')
          }
        }.commonStyle()
      } else if (this.targetView == 'GridCol') {
        GridRow({ columns: 1, }) {
          GridCol({ span: 1 }) {
            Button('GridCol')
          }.commonStyle()
        }.width('100%')
        .height('70%')
      } else if (this.targetView == 'GridRow') {
        GridRow({ columns: 1, }) {
          GridCol({ span: 1 }) {
            Button('GridRow')
          }
        }.commonStyle()
      } else if (this.targetView == 'Grid') {
        Grid() {
          ForEach(['0', '1', '2', '3', '4'], () => {
            ForEach(['0', '1', '2', '3', '4'], (day: string) => {
              GridItem() {
                Button('GridItem' + day)
              }
            })
          })
        }
        .columnsTemplate('1fr 1fr 1fr 1fr 1fr')
        .rowsTemplate('1fr 1fr 1fr 1fr 1fr')
        .commonStyle()
      } else if (this.targetView == 'GridItem') {
        Grid() {
          GridItem() {
            Text('GridItem1').focusable(true)
          }.commonStyle()
        }
        .width('100%')
        .height('70%')
        .columnsTemplate('1fr 1fr 1fr 1fr 1fr')
        .rowsTemplate('1fr 1fr 1fr 1fr 1fr')
        .backgroundColor(Color.Black)
      } else if (this.targetView == 'List') {
        List({ space: 20, initialIndex: 0 }) {
          ForEach([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], (item) => {
            ListItem() {
              Button('ListItem' + item)
            }
          }, item => item)
        }
        .width('100%')
        .height('100%')
        .commonStyle()
      } else if (this.targetView == 'ListItem') {
        List({ space: 20, initialIndex: 0 }) {
          ListItem() {
            Button('ListItem')
          }.commonStyle()
        }.width('100%')
        .height('100%')
      } else if (this.targetView == 'ListItemGroup') {
        List({ space: 0, initialIndex: 0 }) {
          ListItemGroup() {
            ListItem() {
              Button('ListItemGroup')
            }
          }
          .commonStyle()
        }
        .width('100%')
        .height('70%')
      } else if (this.targetView == 'Navigator') {
        Navigator({ target: '' }) {
          Text('Navigator Go to index page')
            .width('100%').textAlign(TextAlign.Center)
        }.commonStyle()
      } else if (this.targetView == 'Panel') {
        Panel(true) {
          Button('Panel')
        }.commonStyle()
      } else if (this.targetView == 'Refresh') {
        Refresh({ refreshing: true }) {
          Text('Refresh').fontSize(30)
        }.commonStyle()
      } else if (this.targetView == 'RelativeContainer') {
        RelativeContainer() {
          Row()
            .width(100)
            .height(100)
            .backgroundColor('#FF3333')
            .alignRules({
              top: { anchor: '__container__', align: VerticalAlign.Top },
              left: { anchor: '__container__', align: HorizontalAlign.Start }
            })
            .id('EnabledPageRelativeContainerRow')
        }.commonStyle()
      } else if (this.targetView == 'Row') {
        Row() {
          Button('RowButton')
        }.commonStyle()
      } else if (this.targetView == 'RowSplit') {
        RowSplit() {
          Button('RowSplit')
        }.commonStyle()
      } else if (this.targetView == 'Scroll') {
        Scroll() {
          Column() {
            ForEach([0, 1, 2, 3, 4, 5, 6, 7, 8, 9], (item) => {
              Button('Scroll item' + item)
            }, item => item)
          }.width('100%')
        }
        .scrollBar(BarState.On)
        .commonStyle()
      } else if (this.targetView == 'SideBarContainer') {
        SideBarContainer(SideBarContainerType.Embed) {
          Column() {
            Button('SideBarContainer')
          }.width('100%')
          .justifyContent(FlexAlign.SpaceEvenly)

          Column() {
            Button('SideBarContainer content')
          }
        }.commonStyle()
      } else if (this.targetView == 'Stack') {
        Stack() {
          Button('Stack')
        }.commonStyle()
      } else if (this.targetView == 'Swiper') {
        Swiper() {
          ForEach([1, 2, 3], (item: string) => {
            Text('Swiper' + item).width('90%').height(160)
          }, item => item)
        }
        .indicator(true)
        .commonStyle()
      } else if (this.targetView == 'Tabs') {
        Tabs() {
          TabContent() {
            Button('TabContent')
          }.tabBar('Tabs1')
        }.commonStyle()
      } else if (this.targetView == 'TabContent') {
        Tabs() {
          TabContent() {
            Button('TabContent Test')
          }.tabBar('Tabs1').commonStyle()
        }.width('100%')
        .height('70%')
      } else if (this.targetView == 'WaterFlow') {
        WaterFlow() {
          FlowItem() {
            Button('WaterFlow')
          }
        }.commonStyle()
      }
    }.width('100%').height('100%').backgroundColor(Color.Pink)
  }
}