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
@Entry
@Component
struct onclickGetFocus08 {
  @State numbers: String[] = ['0', '1', '2', '3', '4']
  scroller: Scroller = new Scroller()
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column(){
      Grid() {
        ForEach(this.numbers, (day: string) => {
          ForEach(this.numbers, (day: string) => {
            GridItem() {
              Text(day)
                .fontSize(16)
                .backgroundColor(0xF9CF93)
                .width('100%')
                .height(50)
                .textAlign(TextAlign.Center)
                .clip(false)
            }
            .onClick(()=>{
              this.father = 'focus'
            })
          }, (day: string) => day)
        }, (day: string) => day)

      }
      .clip(false)
      .rowsGap(10)
      .width('90%')
      .backgroundColor(0xFAEEE0)
      .height(300)
      .margin(20)

      Text('father'+ this.father).key('onclickGetFocus08Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus08Text_Son')
    }
  }
}