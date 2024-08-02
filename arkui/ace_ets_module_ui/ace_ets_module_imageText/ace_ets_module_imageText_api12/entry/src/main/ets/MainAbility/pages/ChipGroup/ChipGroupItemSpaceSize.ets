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
import { ChipGroup,ChipGroupSpaceOptions } from '@ohos.arkui.advanced.ChipGroup';
import componentUtils from '@ohos.arkui.componentUtils'


@Entry
@Component
struct ChipGroupItemSpaceSize {
  @State chipGroupItemSize: ChipGroupSpaceOptions = { itemSpace: 5};
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }){
      ChipGroup({
        items: [
          {
            label: { text: '操作块1' },
            allowClose: false,
          },
          {
            label: { text: '操作块2' },
            allowClose: false,
          }
        ],
        chipGroupSpace: this.chipGroupItemSize
      })

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('-5')
          .onClick(() => {
            this.chipGroupItemSize = { itemSpace: -5}
          })
          .id('-5')
        Button('0')
          .onClick(() => {
            this.chipGroupItemSize = { itemSpace: 0}
          })
          .id('0')
        Button('10')
          .onClick(() => {
            this.chipGroupItemSize = { itemSpace: 10}
          })
          .id('10')
      }.height('10%')

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('Outliers')
          .onClick(() => {
            this.chipGroupItemSize = { itemSpace: 'abc'}
          })
          .id('Outliers')

        Button('empty')
          .onClick(() => {
            this.chipGroupItemSize = {}
          })
          .id('empty')

        Button('undefined')
          .onClick(() => {
            this.chipGroupItemSize = { itemSpace: undefined}
          })
          .id('undefined')
      }.height('10%')

    }.width('100%')
    .height('100%')
  }
}