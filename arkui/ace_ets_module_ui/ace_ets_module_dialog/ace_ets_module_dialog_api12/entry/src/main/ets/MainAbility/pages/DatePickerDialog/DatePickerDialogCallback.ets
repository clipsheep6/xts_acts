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
struct DatePickerDialogExampleA {
  selectedDate: Date = new Date("2010-1-1")
    private order: string = ''

  build() {
    Column() {
      Button("DatePickerDialog按esc弹窗逐层退出").key('DatePicker_dialog_B')
        .margin(20)
        .onClick(() => {
          DatePickerDialog.show({
            start: new Date("2000-1-1"),
            end: new Date("2100-12-31"),
            selected: this.selectedDate,
            lunar: true,
            disappearTextStyle: { color: Color.Pink, font: { size: '22fp', weight: FontWeight.Bold } },
            textStyle: { color: '#ff00ff00', font: { size: '18fp', weight: FontWeight.Normal } },
            selectedTextStyle: { color: '#ff182431', font: { size: '14fp', weight: FontWeight.Regular } },
            onWillAppear: () => {
              this.order += 1
              console.info("DatePickerDialog onWillAppear()")
            },
            onDidAppear: () => {
              this.order += 2
              console.info("DatePickerDialog:onDidAppear()")
            },
            onWillDisappear: () => {
              this.order += 3
              console.info("DatePickerDialog onWillDisappear()")
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
              console.info("DatePickerDialog:onDidDisappear()")
            },
          })
        })
    }.width('100%').margin({ top: 200 })
  }
}