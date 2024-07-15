/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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
struct Index {
  @State inputTxt: string = '';
  build() {
    Column() {
      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text("请填写密码")
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
      }
      .margin({ top: 10 })

      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text('密码')
          .margin(10)
          .fontSize(18)
          .width('22%')
          .textAlign(TextAlign.Start)
          .fontColor(Color.Red)

        TextInput({ placeholder: '请填写密码', text: this.inputTxt })
          .id('autofill')
          .contentType(ContentType.PASSWORD)
          .fontSize(16)
          .enableAutoFill(true)
      }
      .height(88)
      .width('100%')
      .backgroundColor('#fff')
      .borderRadius(16)
    }
    .height('100%')
  }
}