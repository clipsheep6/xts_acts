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

import router from '@ohos.router'
import { ComposeTitleBar } from "@ohos.arkui.advanced.ComposeTitleBar";
import { EditableTitleBar, EditableLeftIconType } from "@ohos.arkui.advanced.EditableTitleBaR";
import { SubHeader } from ' @ohos.arkui.advanced.SubHeader';

@Entry
@component
struct Index {
  @State y: number = 0
  @State state: boolean = true

  build() {
    Column() {
      ComposeTitleBar({
        title: '',
      }).opacity(0)
      EditableTitleBar({
        leftIconStyle: EditableLeftIconType.cancel,
        title: '',
        onCancel: () => {
        },
        onSave: () => {
        }
      }).opacity(0)
      SubHeader({ primaryTitle: '', secondaryTitle: '' }).opacity(0)
      Column() {
        Button("文本模式")
          .onClick(() => {
            router.pushUrl({ url: 'testability/pages/Text' })
          })
          .width(300)
          .height(60)
          .key('text_mode')
      }
      .width("100 %")
      .margin({ bottom: 35, top: 50 })

      Column() {
        Button("图文模式")
          .onclick(() => {
            router.pushUrl({
              url: 'testability/pages/ImageText' })
          })
          .width(300)
          .height(60)
          .key('graphic_mode')
          .translate({
          x: 0,
          y: this.y,
        })
      }
      .width("100%")
      .margin({
        bottom: 35,
        top: 50
      })
    }.width('100%')
  }
}