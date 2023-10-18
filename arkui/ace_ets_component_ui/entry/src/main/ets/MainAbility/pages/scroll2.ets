/**
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

import router from '@ohos.router'
import promptAction from '@ohos.promptAction';
@Entry
@Component
struct Index2 {
  scroller: Scroller = new Scroller()
  private arr: number[] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
  @State w: string = "50%"
  @State color: string = '0xFFFFFF'
  @State scrollBar: BarState = BarState.Auto
  @State scrollable: ScrollDirection = ScrollDirection.Horizontal

  build() {
    Stack({
      alignContent: Alignment.TopStart
    }) {
      Scroll(this.scroller) {
        Row({space: 10}) {
          ForEach(this.arr, (item: number) => {
            Text(item.toString())
              .width('100%')
              .height(100)
              .backgroundColor(0xFFFFFF)
              .borderRadius(15)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .margin({ top: 10 })
              .key('scroll1_scrollText'+item)
          }, (item: string) => item)
        }
      }.width('100%')
      .height(100)
      .key('scroll2_ScrollBar')
      .margin(20)
      .scrollable(this.scrollable)
      .scrollBar(this.scrollBar)
      .scrollBarColor(this.color)
      .scrollBarWidth(this.w)

      Button('水平滚动条Bottom')
        .height('5%')
        .id('scroll2_1')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Bottom)
        })
        .margin({ top: 320, left: 20 })

      Button('水平滚动条End')
        .height('5%')
        .id('scroll2_2')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.End)
        })
        .margin({ top: 440, left: 20 })

      Button('滚动条到水平方向"10aa"')
        .height('5%')
        .id('scroll2_3')
        .onClick(() => {
          this.scrollable = ScrollDirection.Horizontal;
          this.scroller.scrollTo({ xOffset: "10aa", yOffset: 0 })
        })
        .margin({ top: 200, left: 20 })

      Button('水平滚动条Top')
        .height('5%')
        .id('scroll2_4')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Top)
        }).margin({ top: 260, left: 20 })

      Button('水平滚动条Start')
        .height('5%')
        .id('scroll2_5')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Start)
        })
        .margin({ top: 380, left: 20 })
    }
    .width('100%').height('100%').backgroundColor(0xDCDCDC)
  }
}