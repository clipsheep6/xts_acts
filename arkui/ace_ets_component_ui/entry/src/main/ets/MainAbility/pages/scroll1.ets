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

import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct Index2 {
  messageManager:MessageManager = new MessageManager()
  scroller: Scroller = new Scroller()
  private arr: number[] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12]
  @State w: string = "50%"
  @State array: string[] = ["50%" , '2000' , '1000', '10', "-3"]
  @State arrayIndex: number = 0
  @State color: string = '0xFFFFFF'
  @State scrollBar: BarState = BarState.Auto
  @State scrollable: ScrollDirection = ScrollDirection.Vertical
  onPageShow() {
    console.info('blankParentWidth onPageShow')
    globalThis.value = {
      name:'messageManager',message:this.messageManager
    }
    let callback:Callback = (message:any) => {
      console.error('message = ' + message.name + "--" + message.value)
      if (message.name == 'arrayIndex') {
        this.arrayIndex = message.value
      }

    }
    this.messageManager.registerCallback(callback)
  }

  build() {

    Stack({
      alignContent: Alignment.TopStart
    }) {
      Scroll(this.scroller) {
        Column() {
          ForEach(this.arr, (item: number) => {
            Text(item.toString())
              .width('90%')
              .height(100)
              .backgroundColor(0xFFFFFF)
              .borderRadius(15)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .key('scrollText'+item)
          }, (item: string) => item)
        }.width('100%').key('columnKey')
      }
      .width('90%')
      .height(100)
      .key('ScrollBar')
      .margin(20)
      .scrollable(this.scrollable)
      .scrollBar(this.scrollBar)
      .scrollBarColor(this.color)
      .scrollBarWidth(this.array[this.arrayIndex])

    Button('滚动方向为纵向')
      .height('5%')
      .id('scroll1_1')
      .onClick(() => {
        this.scrollBar = BarState.Auto;
      })
      .margin({ top: 160, left: 20 })

    Button('滚动条没有参数animation')
      .height('5%')
      .id('scroll1_2')
      .onClick(() => {
        this.scrollBar = BarState.Auto;
        this.scroller.scrollTo({ xOffset: 0, yOffset: 50 })
      })
      .margin({ top: 210, left: 20 })


      Button('滚动条有参数animation')
        .height('5%')
        .id('scroll1_3')
        .onClick(() => {
          this.scrollBar = BarState.Auto;
          this.scroller.scrollTo({ xOffset: 50, yOffset: 0,  animation: { duration: 1500, curve: Curve.Ease }  })
        })
        .margin({ top: 260, left: 20 })


      Button('滚动到垂直方向’10aa')
        .height('5%')
        .id('scroll1_4')
        .onClick(() => {
          this.scroller.scrollTo({ xOffset: 0, yOffset: "10aa" })
        })
        .margin({ top: 310, left: 20 })

      Button('竖直滚动条Top')
        .height('5%')
        .id('scroll1_5')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Top)
        })
        .margin({ top: 360, left: 20 })

      Button('竖直滚动条Bottom')
        .height('5%')
        .id('scroll1_6')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Bottom)
        })
        .margin({ top: 410, left: 20 })

      Button('竖直滚动条Start')
        .height('5%')
        .id('scroll1_7')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.Start)
        })
        .margin({ top: 460, left: 20 })

      Button('竖直滚动条End')
        .height('5%')
        .id('scroll1_8')
        .onClick(() => {
          this.scroller.scrollEdge(Edge.End)
        })
        .margin({ top: 510, left: 20 })

      Button('scrollBarColor设置异常值为undefined')
        .height('5%')
        .id('scroll1_9')
        .onClick(() => {
          this.color = undefined;
        })
        .margin({ top: 560, left: 20 })

  }
  .width('100%').height('100%').backgroundColor(0xDCDCDC)
}
}