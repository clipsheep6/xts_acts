/**
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
import events_emitter from '@ohos.events.emitter';
@Entry
@Component
struct TextPickerDialogExampleA {
  private select: number | number[] = 2
  private fruits: string[] = ['apple1', 'orange2', 'peach3', 'grape4', 'banana5']
  private order: string = ''

  build() {
    Row() {
      Column() {
        Button("TextPickerDialog按esc弹窗逐层退出").key('TextPicker_dialog_B')
          .margin(20)
          .onClick(() => {
            TextPickerDialog.show({
              range: this.fruits,
              onWillAppear: () => {
                this.order += 1
                console.info("TextPickerDialog: onWillAppear()")
              },
              onDidAppear: () => {
                this.order += 2
                console.info("TextPickerDialog: onDidAppear()")
              },
              onWillDisappear: () => {
                this.order += 3
                console.info("TextPickerDialog: onWillDisappear()")
              },
              onDidDisappear: () => {
                this.order += 4
                var eventData = {
                  data: {
                    "action": this.order
                  }
                }
                let event = {
                  eventId: 50004,
                  priority: events_emitter.EventPriority.LOW
                }
                events_emitter.emit(event, eventData)
                console.info("TextPickerDialog: onDidDisappear()")
              },
            })
          })
      }.width('100%')
    }.height('100%')
  }
}