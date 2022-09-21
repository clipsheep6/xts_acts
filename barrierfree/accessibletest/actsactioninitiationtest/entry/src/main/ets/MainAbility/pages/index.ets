/*
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
import file from '@system.file'

@Entry
@Component
struct Index {
  @State message: string = 'ActionInitiationTest'
  @State outSetValue: number = 40
  @State inSetValue: number = 40
  scroller: Scroller = new Scroller()
  private arr: string[] = ["列表文本1", "列表文本2", "列表文本3", "列表文本4", "列表文本5", "列表文本6", "列表文本7", "列表文本8", "列表文本9", "列表文本10"]

  aboutToAppear() {
    console.info("start run aboutToAppear")
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.Start }) {
      Button('Test1')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
        .margin(5)
        .gesture(LongPressGesture({ repeat: false })
          .onAction((event: GestureEvent) => {
            console.info('LongPressGesture onAction')
          })
          .onActionEnd(() => {
            console.info('LongPressGesture onActionEnd')
          })
        )
        .onClick(() => {
          console.info('LongPressGesture onClick')
        })
      TextInput({ placeholder: 'Test212345678', text: 'Test2' })
        .type(InputType.Normal)
        .enterKeyType(EnterKeyType.Next)
        .fontSize(15)
        .fontWeight(FontWeight.Bold)
        .margin(5)
      Select([{ value: 'Test3' }, { value: 'Test3-1' }, { value: 'Test3-2' }])
        .margin(5).value('Test3')
      Scroll(this.scroller) {
        Column() {
          ForEach(this.arr, (item) => {
            Text(item)
              .width('100%')
              .height('80px')
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(10)
              .backgroundColor(0xFFFFFF)
          }, item => item)
        }.width('100%')
      }
      .scrollable(ScrollDirection.Vertical)
      .scrollBar(BarState.On)
      .scrollBarColor(Color.Gray)
      .scrollBarWidth(30)
      .onScroll((xOffset: number, yOffset: number) => {
        console.info(xOffset + ' ' + yOffset)
      })
      .onScrollEdge((side: Edge) => {
        console.info('To the edge')
      })
      .onScrollEnd(() => {
        console.info('Scroll Stop')
      })
      .height('300px')
    }.height('100%').width('100%')
  }
}