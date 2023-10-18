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
  @State scrollBar: BarState = BarState.Auto
  @State scrollable: ScrollDirection = ScrollDirection.Vertical
  private scrollerForList: Scroller = new Scroller()

  build() {
    Stack({alignContent: Alignment.TopStart}) {
      Scroll(this.scroller) {
        Column() {
          Grid(this.scrollerForList) {
            ForEach(this.arr, (item: number) => {
              GridItem() {
                Text(item.toString())
                  .width('90%')
                  .height(100)
                  .backgroundColor(0xFFFFFF)
                  .borderRadius(15)
                  .fontSize(16)
                  .textAlign(TextAlign.Center)
                  .key('GridText')
              }.width("100%")
              // .height('70%')
            }, (item: string) => item)
          }.columnsTemplate('1fr')
        }.width('90%').height(100)
      }.key('scroll')
      .scrollable(this.scrollable)
      .scrollBar(this.scrollBar)
      .scrollBarColor('undefined')
      .scrollBarWidth(this.w)
      .margin(20)
      .edgeEffect(EdgeEffect.Spring)
      .onScroll((x0ffset: number, y0ffset: number) => {
        console.info(x0ffset + ' ' + y0ffset)
      })
      .onScrollEdge((side: Edge) => {
        console.info('To the edge')
      })
      .onScrollEdge(() => {
        console.info('Scroll Stop')
      })

      Button('滚动方向为纵向 scrollToIndex_-3')
        .height('5%')
        .id('Grid1')
        .onClick(() => {
          this.scrollerForList.scrollToIndex(-3);
        })
        .margin({top: 210,left: 20})

      Button('滚动方向为纵向 scrollToIndex_3000')
        .height('5%')
        .id('Grid2')
        .onClick(() => {
          this.scrollerForList.scrollToIndex(3000);
        })
        .margin({top: 270,left: 20})

      Button('滚动方向为纵向 scrollToIndex_undefined')
        .height('5%')
        .id('Grid3')
        .onClick(() => {
          // @ts-ignore
          this.scrollerForList.scrollToIndex(undefined);
        })
        .margin({top: 330,left: 20})

      Button('滚动方向为纵向 scrollToIndex_null')
        .height('5%')
        .id('Grid4')
        .onClick(() => {
          this.scrollerForList.scrollToIndex(null);
        })
        .margin({top: 390,left: 20})
    }.backgroundColor(0xDCDCDC).width('100%').height('100%')
  }

}