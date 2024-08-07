/**
 * Copyright (c) 2024 Shenzhen Kaihong Digital Industry Development Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import componentUtils from '@ohos.arkui.componentUtils';
@Entry
@Component
struct owntextarea {
  controller: TextAreaController = new TextAreaController()
  @State text:string='0'
  build() {
    Column() {
      TextArea({
        placeholder: '请输入',
        controller: this.controller
      })
        .placeholderFont({ size: 16, weight: 400 })
        .width(150)
        .height(120)
        .margin(20)
        .fontSize(16)
        .fontColor('#182431')
        .backgroundColor('#FFFFFF')
        .id("textarea001")
      Row() {
        Button('获取属性')
          .id('textareabutton')
          .onClick(() => {
            let modePosition: componentUtils.ComponentInfo = componentUtils.getRectangleById("textarea001");
            this.text = '{width:' + modePosition.size.width / 1.5 + ',height:' + modePosition.size.height / 1.5 + '}'
          }).width(50).height(20)
      }
      Row() {
        Text(this.text)
          .id('gettextarea001')
      }
    }.width('100%')
    .margin({ top: 5 })
  }

}

