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
struct Index {
  @State message: string = 'Hello World'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        Button('set_ui_callback')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_UI_Callback()
          })
        Button('set_ui_promise')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_UI_Promise()
          })
        Button('cancel_ui_callback')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.cancelApplicationAutoStartup_UI_Callback()
          })
        Button('cancel_ui_promise')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.cancelApplicationAutoStartup_UI_Promise()
          })
        Button('set_service_callback')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_Service_Callback()
          })
        Button('set_service_promise')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_Service_Promise()
          })
        Button('cancel_service_callback')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.cancelApplicationAutoStartup_Service_Callback()
          })
        Button('cancel_service_promise')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.cancelApplicationAutoStartup_Service_Promise()
          })
        Button('set_ui_callback2')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_UI_Callback2()
          })
        Button('set_service_callback2')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_Service_Callback2()
          })
        Button('query_promise')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.setApplicationAutoStartup_Service_Callback2()
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}