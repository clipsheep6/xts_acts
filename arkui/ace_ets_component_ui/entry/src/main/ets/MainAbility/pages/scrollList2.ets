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
  @State direct: number  = Axis.Vertical
  private scrollerForScroll: Scroller = new Scroller()
  private scrollerForList: Scroller = new Scroller()
  private listPosition: number = 0


  build() {
    Stack({
      alignContent: Alignment.TopStart
    }) {
      Column() {
        Scroll(this.scrollerForScroll) {
          Row(){
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
                    .key('scrolllist2_text')
                }.width("100%").height(100)
              }, (item: string) => item)
            }
            .key('scroll_list')
            .listDirection(this.direct)
            .width("100%")
            // .height("50%")
            .edgeEffect(EdgeEffect.None)
            .friction(0.6)
            .onReachStart(() => {
              this.listPosition = 0
            })
            .onReachEnd(() => {
              this.listPosition = 2
            })
            .onScrollFrameBegin((offset: number) => {
              if ((this.listPosition == 0 && offset <= 0) || (this.listPosition == 2 && offset >= 0)) {
                this.scrollerForScroll.scrollBy(0, offset)
                return { offsetRemain: 0 }
              }
              this.listPosition = 1
              return { offsetRemain: offset };
            })
          }.width("90%").height(150)
        }.margin(20)
        .width("100%")
      }.width('100%').backgroundColor(0xDCDCDC).padding(20)


      Button("scrollTo2")
        .height('5%')
        .id('button_scrollTo')
        .onClick(() => {
          this.direct = Axis.Horizontal
          this.scroller.scrollTo({ xOffset: "10aa", yOffset: 0 })
        })
        .margin({ top: 200, left: 20 })

    }.width('100%').height('100%').backgroundColor(0xDCDCDC)
  }
}