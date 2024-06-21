/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License")
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
import { storage } from '../../entryability/EntryAbility'
import { redCustomTheme } from '../../themes/CustomTheme'
import { CustomTheme } from '@ohos.arkui.theme'

export const sliderThemeProperty: string = `SliderThemeProperty`

export class SliderKeys {
  static readonly sliderOutSetSystem = `Slider_Out_Set_System`
  static readonly sliderInSetSystem = `Slider_In_Set_System`
  static readonly sliderOutSetStepsSystem = `Slider_Out_Set_Steps_System`
  static readonly sliderInSetStepsSystem = `Slider_In_Set_Steps_System`
  static readonly sliderOutSetWithTheme = `Slider_Out_Set_WithTheme`
  static readonly sliderInSetWithTheme = `Slider_In_Set_WithTheme`
  static readonly sliderOutSetStepsWithTheme = `Slider_Out_Set_Steps_WithTheme`
  static readonly sliderInSetStepsWithTheme = `Slider_In_Set_Steps_WithTheme`
}
@Entry(storage)
@Component
struct SliderThemePage {
  @LocalStorageLink(sliderThemeProperty) localTheme: CustomTheme | undefined = redCustomTheme
  count = 0

  @State v1: number = 50
  @State v2: number = 50
  @State v3: number = 50
  @State v4: number = 50
  @State v5: number = 50
  @State v6: number = 50
  @State v7: number = 50
  @State v8: number = 50

  build() {
    Row() {
      Scroll() {
        Column({ space: '8vp' }) {
          Text('Slider, OutSet, SystemTheme')
          Slider({ value: this.v1 }).onChange((value) => {
            this.v1 = value
          })
            .key(SliderKeys.sliderOutSetSystem)

          Text('Slider, InSet, SystemTheme')
          Slider({ value: this.v2, style: SliderStyle.InSet }).onChange((value) => {
            this.v2 = value
          })
            .key(SliderKeys.sliderInSetSystem)

          Text('Slider, OutSet, SystemTheme, Steps on')
          Slider({ value: this.v3, step: 5 }).showSteps(true).onChange((value) => {
            this.v3 = value
          })
            .key(SliderKeys.sliderOutSetStepsSystem)

          Text('Slider, InSet, SystemTheme, Steps on')
          Slider({ value: this.v4, step: 5, style: SliderStyle.InSet }).showSteps(true).onChange((value) => {
            this.v4 = value
          })
            .key(SliderKeys.sliderInSetStepsSystem)

          WithTheme({ theme: this.localTheme }) {
            Column({ space: '8vp' }) {
              Text('Slider, OutSet, CustomTheme')
              Slider({ value: this.v5 }).onChange((value) => {
                this.v5 = value
              })
                .key(SliderKeys.sliderOutSetWithTheme)

              Text('Slider, InSet, CustomTheme')
              Slider({ value: this.v6, style: SliderStyle.InSet }).onChange((value) => {
                this.v6 = value
              })
                .key(SliderKeys.sliderInSetWithTheme)

              Text('Slider, InSet, CustomTheme, Steps on')
              Slider({ value: this.v7, step: 5 }).showSteps(true).onChange((value) => {
                this.v7 = value
              })
                .key(SliderKeys.sliderOutSetStepsWithTheme)

              Text('Slider, InSet, CustomTheme, Steps on')
              Slider({ value: this.v8, step: 5, style: SliderStyle.InSet }).showSteps(true).onChange((value) => {
                this.v8 = value
              })
                .key(SliderKeys.sliderInSetStepsWithTheme)
            }
            .width('100%')
          }
        }
        .width('100%')
      }
    }
    .height('100%')
  }
}