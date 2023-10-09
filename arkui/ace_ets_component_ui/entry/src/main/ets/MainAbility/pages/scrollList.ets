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
  @State scrollable: ScrollDirection = ScrollDirection.Horizontal
  private scrollerForScroll: Scroller = new Scroller()
  private scrollerForList: Scroller = new Scroller()
  private listPosition: number = 0
  @State direc:number  = Axis.Horizontal
  build() {
    Stack({
      alignContent: Alignment.TopStart
    }) {
      Column() {
        Scroll(this.scrollerForScroll) {
          Column() {
            List({ space: 20, scroller: this.scrollerForList }) {
              ForEach(this.arr, (item: number) => {
                ListItem() {
                  Text(item.toString())
                    .width("90%")
                    .height("100%")
                    .borderRadius(15)
                    .fontSize(16)
                    .textAlign(TextAlign.Center)
                    .backgroundColor(Color.White)
                    .key('scrollListText')
                }.width("100%").height(100)
              }, (item: string) => item)
            }
            .width("100%")
            .height("50%")
            .edgeEffect(EdgeEffect.None)
            // .friction(0.6)
            .listDirection(this.direc)
            .key('list')
            .onReachStart(() => {
              this.listPosition = 0
            })
            .onReachEnd(() => {
              this.listPosition = 2
            })
            // .onScrollFrameBegin((offset: number) => {
            //   if ((this.listPosition == 0 && offset <= 0) || (this.listPosition == 2 && offset >= 0)) {
            //     this.scrollerForScroll.scrollBy(0, offset)
            //     return { offsetRemain: 0 }
            //   }
            //   this.listPosition = 1
            //   return { offsetRemain: offset };
            // })
          }.width("90%").height(200)
        }.key('scroll').margin(20)
        .scrollable(ScrollDirection.Horizontal).width("100%")
      }.width('100%').height('100%').backgroundColor(0xDCDCDC).padding(20)

        Button("scrollToIndex -3")
          .height('5%')
          .id('scrollList1')
          .onClick(() => {
            this.direc = Axis.Vertical
            this.scrollerForList.scrollToIndex(-3);
          })
          .margin({ top: 180, left: 20 })

       Button("scrollTo 50%")
         .height('5%')
         .id('scrollList2')
         .onClick(() => {
          this.direc = Axis.Vertical
          this.scroller.scrollTo({ xOffset: "50%", yOffset: 0 })
        })
        .margin({ top: 230, left: 20 })


      Button("scrollToIndex 3000")
        .height('5%')
        .id('scrollList3')
        .onClick(() => {
          // this.direc = Axis.Vertical
          this.scrollerForList.scrollToIndex(3000);
        })
        .margin({ top: 280, left: 20 })

      Button("scrollToIndex undefined")
        .height('5%')
        .id('scrollList4')
        .onClick(() => {
          // this.direc = Axis.Vertical
          this.scrollerForList.scrollToIndex(undefined);
        })
        .margin({ top: 330, left: 20 })

      Button("scrollToIndex null")
        .height('5%')
        .id('scrollList5')
        .onClick(() => {
          // this.direc = Axis.Vertical
          this.scrollerForList.scrollToIndex(null);
        })
        .margin({ top: 380, left: 20 })

      }.width('100%').height('100%').backgroundColor(0xDCDCDC)
    }
}