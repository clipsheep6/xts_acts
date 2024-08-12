/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
@Entry
@Component
struct search_gesture {
  @State changeValue: string = '这是预置文本'
  @State caretIndexText: string = ''
  @State caretXText: string = ''
  @State caretYText: string = ''
  @State positionInfo: CaretOffset = { index: 0, x: 0, y: 0 }
  controller: SearchController = new SearchController()
  aboutToAppear(): void {
    console.info('zzyy it is going to show SearchGesture page Component')
  }
  aboutToDisappear(): void {
    console.info('zzyy it is going to hide SearchGesture page Component')
  }
  onPageShow(): void {
    console.info('zzyy it is going to show SearchGesture page')
  }

  build() {
    Column() {
      Search({ value: this.changeValue, placeholder: 'Type to search...', controller: this.controller })
        .searchButton('SEARCH')
        .width('95%')
        .height(40)
        .backgroundColor('#F5F5F5')
        .placeholderColor(Color.Grey)
        .placeholderFont({ size: 14, weight: 400 })
        .textFont({ size: 14, weight: 400 })
        .onChange((value: string) => {
          this.changeValue = value
        })
        .margin(20)
        .key('SearchGesture')
      Row(){
        Button('Caret:11')
          .key('SearchCaret11')
          .onClick(() => {
            this.controller.caretPosition(11)
            this.positionInfo = this.controller.getCaretOffset()
            this.caretIndexText = this.positionInfo.index +  ''
            this.caretXText = this.positionInfo.x.toFixed(2) + ''
            this.caretYText = this.positionInfo.y.toFixed(2) + ''
          })
      }
      Column(){
        Text(this.caretIndexText).key('SearchCaretIndexText')
        //caretX and caretY unit is PX
        Text(this.caretXText).key('SearchCaretXText')
        Text(this.caretYText).key('SearchCaretYText')
      }.margin(15)
    }.width('100%')
  }
}