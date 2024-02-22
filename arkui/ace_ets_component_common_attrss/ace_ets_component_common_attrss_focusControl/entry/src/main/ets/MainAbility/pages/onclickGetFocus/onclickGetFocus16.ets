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
struct onclickGetFocus16 {
  @State father: string = 'start'
  @State son: string = 'start'
  public valueArr: number[] = [10, 10, 10, 10, 10, 10, 10, 10, 10]

  build() {
    Column() {
      Column(){
        DataPanel({ values: [25], max: 100, type: DataPanelType.Circle }).width(168).height(168)
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('80%')
          .height('80%')
          .strokeWidth(18)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus16Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus16Text_Son')

    }.margin(20)
  }
}