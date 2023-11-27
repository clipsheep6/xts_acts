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

let renderMode: string = AppStorage.get<string>('renderMode') || '';

@Entry
@Component
struct CreateFormAbility {
  build() {
    Row() {
      Column() {
        if (renderMode === 'SINGLE_COLOR') {
          FormComponent({
            id: 0,
            name: 'widget',
            bundle: 'com.example.formmonochromemodeprovider',
            ability: 'EntryFormAbility',
            module: 'entry',
            dimension: FormDimension.Dimension_1_2,
            renderingMode: FormRenderingMode.SINGLE_COLOR,
            want: {
              parameters: {
                renderingType: 'SINGLE_COLOR'
              }
            }
          })
            .visibility(Visibility.Visible)
            .width(200)
            .height(400)
        }
        if (renderMode === 'FULL_COLOR') {
          FormComponent({
            id: 0,
            name: 'widget',
            bundle: 'com.example.formmonochromemodeprovider',
            ability: 'EntryFormAbility',
            module: 'entry',
            dimension: FormDimension.Dimension_1_2,
            renderingMode: FormRenderingMode.FULL_COLOR,
            want: {
              parameters: {
                renderingType: 'FULL_COLOR'
              }
            }
          })
            .visibility(Visibility.Visible)
            .width(200)
            .height(400)
        }
        if (renderMode === 'DEFAULT') {
          FormComponent({
            id: 0,
            name: 'widget',
            bundle: 'com.example.formmonochromemodeprovider',
            ability: 'EntryFormAbility',
            module: 'entry',
            dimension: FormDimension.Dimension_1_2,
            want: {
              parameters: {
                renderingType: 'DEFAULT'
              }
            }
          })
            .visibility(Visibility.Visible)
            .width(200)
            .height(400)
        }
      }
      .width('100%')
    }
    .height('100%')
  }
}