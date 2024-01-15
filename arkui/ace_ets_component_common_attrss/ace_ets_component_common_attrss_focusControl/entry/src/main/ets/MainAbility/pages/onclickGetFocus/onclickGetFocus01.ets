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
/**
 * Test page of common attribute: focusControl
 */
@Entry
@Component
struct onclickGetFocus01 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Button('son')
          .width('90%').height(100)
          .onClick(()=>{
            this.son = 'focus'
          })
      }.width(200).height(200).border({width:1,color:Color.Blue})
      .onClick(()=>{
        this.father = 'focus'
      })
      Text('father'+ this.father).key('onclickGetFocus01Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus01Text_Son')

    }.margin(20)
  }
}