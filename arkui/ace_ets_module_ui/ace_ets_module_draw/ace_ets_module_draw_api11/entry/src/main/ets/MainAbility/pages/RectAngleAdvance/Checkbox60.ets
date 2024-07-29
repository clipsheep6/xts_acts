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
import componentUtils from '@ohos.arkui.componentUtils'

@Entry
@Component
struct CheckboxExample1 {
  @State text: string = '';
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button('getRectangleById')
        .onClick(() => {
          let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('checkbox');
          this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
        }).margin(10).id('button')
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Checkbox({ name: 'checkbox1'})
        .selectedColor('#007DFF')
        .onChange((value: boolean) => {
          console.info('Checkbox1 change is' + value)
        })
        .width(90)
        .height(60)
        .id('checkbox')
    }.height('100%').width('100%')
  }
}