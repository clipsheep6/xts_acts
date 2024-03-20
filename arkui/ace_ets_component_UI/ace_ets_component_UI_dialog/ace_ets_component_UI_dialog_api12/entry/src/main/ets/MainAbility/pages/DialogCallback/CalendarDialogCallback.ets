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
struct CalendarPickerDialogExampleA {
  private selectedDate: Date = new Date()
  private order: string = ''

  build() {
    Column() {
      Button("CalendarPickerDialog按esc弹窗逐层退出").key('Calendar_dialog_A')
        .margin(20)
        .onClick(() => {
          console.info("CalendarDialog.show")
          CalendarPickerDialog.show({
            selected: this.selectedDate,
            onAccept: (value) => {
              console.info("calendar onAccept:" + JSON.stringify(value))
            },
            onCancel: () => {
              console.info("calendar onCancel")
            },
            onChange: (value) => {
            },
            onWillAppear: () => {
              this.order += 1
              console.info("CalendarPickerDialog: onWillAppear()")
            },
            onDidAppear: () => {

              this.order += 2
              console.info("CalendarPickerDialog: onDidAppear()")
            },
            onWillDisappear: () => {
              this.order += 3
              console.info("CalendarPickerDialog: onWillDisappear()")
            },
            onDidDisappear: () => {

              let event = {
                eventId: 50004,
                priority: events_emitter.EventPriority.LOW
              }
              this.order += 4
              var eventData = {
                data: {
                  "action": this.order
                }
              }
              events_emitter.emit(event, eventData)
              console.info("CalendarPickerDialog: onDidDisappear()")
            },
          })
        })


    }.width('100%').margin({ top: 200 })
  }
}