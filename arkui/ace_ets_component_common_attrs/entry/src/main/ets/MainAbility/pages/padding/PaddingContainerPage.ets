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
@Entry
@Component
struct paddingPage {
  @State show: boolean = false
  @State data: string = '<h1 style="text-align: center;">h1标题</h1>' +
  '<h1 style="text-align: center;"><i>h1斜体</i></h1>' ;
  controller: WebController = new WebController()
  @State start: boolean = false
  private scroller: Scroller = new Scroller()
  private step: number = 50
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
      if (this.targetView == 'Badge') {
        Badge({
          count: this.step,
          style: { color: 0xFFFFFF, fontSize: 16, badgeSize: 20, badgeColor: Color.Red }
        }) {
          Button('message')
            .backgroundColor(0x317aff)
        }.commonStyle()
      } else if (this.targetView == 'Column') {
        Column() {
          Button('message')
            .backgroundColor(0x317aff)
        }.commonStyle()
      } else if (this.targetView == 'Counter') {
        Counter() {
          Text('1')
        }.commonStyle()
      } else if (this.targetView == 'GridRow') {
        GridRow(){       }.commonStyle()
      } else if (this.targetView == 'Grid') {
        Grid(this.scroller) {
          ForEach(this.valueArr, (day: string) => {
            GridItem() {
              Text(day)
                .backgroundColor(0xF9CF93)
                .textAlign(TextAlign.Center)
            }
          }, day => day)
        }.commonStyle()
      } else if (this.targetView == 'List') {
        List() {
          ListItem() {
            Button('message')
              .backgroundColor(0x317aff)
          }
        }.commonStyle().width(0).height(0)
      } else if (this.targetView == 'ListItem') {
        List() {
          ListItem() {
            Button('message')
              .backgroundColor(0x317aff)
          }
          .commonStyle()
        }.width(0).height(0)
      }  else if (this.targetView == 'Panel') {
        Panel(this.show = true) { // 展示日程
          Text('Text')
        }
        .commonStyle()
      } else if (this.targetView == 'Refresh') {
        Refresh({ refreshing: false }) {
        }
        .commonStyle()
      }  else if (this.targetView == 'Row') {
        Row() {
          Button('message')
            .backgroundColor(0x317aff)
        }.commonStyle()
      } else if (this.targetView == 'Scroll') {
        Scroll() {
          Button('message')
            .backgroundColor(0x317aff)
        }
        .commonStyle()
      } else if (this.targetView == 'SideBarContainer') {
        SideBarContainer(SideBarContainerType.Embed) {
          Column(){
            Button('message')
              .backgroundColor(0x317aff)
          }
        }.commonStyle()
      } else if (this.targetView == 'Stack') {
        Stack() {
          Button('message')
            .backgroundColor(0x317aff)
        }.commonStyle()
      } else if (this.targetView == 'Swiper') {
        Swiper() {
          Button('message')
            .backgroundColor(0x317aff)
        }
        .commonStyle()
      } else if (this.targetView == 'Tabs') {
        Tabs() {
          TabContent() {
            Button('message')
              .backgroundColor(0x317aff)
          }
        }.commonStyle()
      }else if(this.targetView == 'TabContent'){
        Tabs() {
          TabContent() {
            Button('message')
              .backgroundColor(0x317aff)
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
    }.backgroundColor(this.parentBackGroundColor)
  }
}