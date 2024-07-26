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
import { ChipGroup, ChipGroupSpaceOptions} from '@ohos.arkui.advanced.ChipGroup';
import componentUtils from '@ohos.arkui.componentUtils'


@Entry
@Component
struct ChipGroupEndSpace {
  @State chipGroupItemSize: ChipGroupSpaceOptions = { endSpace: 5};
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }){
      ChipGroup({
        items: [
          {
            label: { text: "操作块1" },
            allowClose: false,
          },
          {
            label: { text: "操作块2" },
            allowClose: false,
          }
        ],
        chipGroupSpace: this.chipGroupItemSize
      })

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('-5')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: -5}
          })
          .id('-5')

        Button('0')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: 0}
          })
          .id('0')

        Button('10')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: 10}
          })
          .id('10')

      }.height('10%')

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('Outliers')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: 'abc'}
          })
          .id('Outliers')

        Button('empty')
          .onClick(() => {
            this.chipGroupItemSize = {}
          })
          .id('empty')

        Button('undefined')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: undefined}
          })
          .id('undefined')

        Button('null')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: null}
          })
          .id('null')

      }.height('10%')

      // sys_resource
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('sys_legit')
          .onClick(() => {
            // "8.0vp"
            this.chipGroupItemSize = { endSpace: $r('sys.float.ohos_id_elements_margin_horizontal_m')}
          })
          .id('sys_legit')

        Button('sys_illegal')
          .onClick(() => {
            this.chipGroupItemSize = {endSpace: $r('sys.string.ohos_lab_set_time')}
          })
          .id('sys_illegal')
      }.height('10%')

      // app resource
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('app_legit')
          .onClick(() => {
            this.chipGroupItemSize = { endSpace: $r("app.string.legit_size")}
          })
          .id('app_legit')

        Button('app_illegal')
          .onClick(() => {
            this.chipGroupItemSize = {endSpace: $r("app.string.illegal_size")}
          })
          .id('app_illegal')

      }.height('10%')

    }.width('100%')
    .height('100%')
  }
}