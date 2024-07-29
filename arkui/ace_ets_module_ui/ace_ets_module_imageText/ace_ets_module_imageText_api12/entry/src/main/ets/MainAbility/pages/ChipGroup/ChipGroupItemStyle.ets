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
import { ChipGroup } from '@ohos.arkui.advanced.ChipGroup';
import componentUtils from '@ohos.arkui.componentUtils'


@Entry
@Component
struct ChipGroupItemStyleExample {
  @State _size: SizeOptions = { width: 100, height: 100 };
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
        itemStyle: {
          size:this._size,
        }
      }).id('ChipGroup')
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('w100 h100')
          .onClick(() => {
            this._size = { width: 100, height: 100 }
          })
          .id('w100_h100')

      }.height('10%')

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('w100px h100')
          .onClick(() => {
            this._size = { width: '100px', height: 100 }
          })
          .id('w100px_h100')

        Button('w100 h100px')
          .onClick(() => {
            this._size = { width: 100, height:'100px' }
          })
          .id('w100_h100px')

        Button('w100 h100vp')
          .onClick(() => {
            this._size = { width: 100, height: '100vp' }
          })
          .id('w100_h100vp')

        Button('w100vp h100')
          .onClick(() => {
            this._size = { width:'100vp', height: 100 }
          })
          .id('w100vp_h100')

      }.height('10%')

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('w100fp h100')
          .onClick(() => {
            this._size = { width:'100fp' , height: 100 }
          })
          .id('w100fp_h100')

        Button('w100 h100fp')
          .onClick(() => {
            this._size = { width: 100, height: '100fp'}
          })
          .id('w100_h100fp')

        Button('w100 h100lpx')
          .onClick(() => {
            this._size = { width: 100, height:'100lpx' }
          })
          .id('w100_h100lpx')

        Button('w100lpx h100')
          .onClick(() => {
            this._size = { width:'100lpx', height: 100 }
          })
          .id('w100lpx_h100')

      }.height('10%')
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('w illegal')
          .onClick(() => {
            this._size = { width:$r('app.string.illegal_size'), height: 100 }
          })
          .id('w_illegal')

        Button('h illegal')
          .onClick(() => {
            this._size = { width: 100, height:$r('app.string.illegal_size') }
          })
          .id('h_illegal')

      }.height('10%')

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('w undefined')
          .onClick(() => {
            this._size = { width:undefined, height: 100 }
          })
          .id('w_undefined')

        Button('h undefined')
          .onClick(() => {
            this._size = { width: 100, height:undefined }
          })
          .id('h_undefined')

        Button('h null')
          .onClick(() => {
            this._size = { width: 100, height: null }
          })
          .id('h_null')

        Button('w null')
          .onClick(() => {
            this._size = { width: null, height: 100 }
          })
          .id('w_null')

      }.height('10%')
    }.width('100%')
    .height('100%')
  }
}