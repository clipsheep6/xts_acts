/**
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
struct TimePickerDialogExample {
  @State isUseMilitaryTime: boolean = true

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button('TimePickerDialog')
        .onClick(() => {
          TimePickerDialog.show({
            alignment: DialogAlignment.TopStart,
            offset: { dx: 10, dy: 100 },
            maskRect: { x: 0, y: 90, width: 1000, height: 250  },
            useMilitaryTime: this.isUseMilitaryTime,
            onAccept: (value: TimePickerResult)=> {
              console.info("TimePickerDialog: onAccept()" + JSON.stringify(value))
              this.select = value.index as number
            },
            onCancel:()=> {
              console.info("TimePickerDialog: onCancel()")
            },
            onChange: (value: TimePickerResult)=> {
              console.info("TimePickerDialog: onChange()" + JSON.stringify(value))
            }
          }).key('TimePickerDialog')
        })
    }.width('100%')
  }
}