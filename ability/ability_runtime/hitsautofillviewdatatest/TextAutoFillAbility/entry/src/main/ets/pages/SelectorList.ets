/*
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

import autoFillManager from '@ohos.app.ability.autoFillManager';

let storage = LocalStorage.getShared();
let fillCallback = storage.get<autoFillManager.FillRequestCallback>('fillCallback')
let viewData: autoFillManager.ViewData | undefined = storage.get<autoFillManager.ViewData>('viewData');

function successFunc(data: autoFillManager.ViewData, target: string) {
  console.info(`data.pageNodeInfos.length`, data.pageNodeInfos.length)
  data.pageNodeInfos[0].value = target;
  if (fillCallback) {
    let response: autoFillManager.FillResponse = { viewData: data };
    fillCallback.onSuccess(response);
  }
}

@Entry
@Component
struct SelectorList {
  @State message: string = 'Hello World'
  @State backGroundColor: string = '#ffa5a3a3'

  build() {
    Row() {
      Column() {
        List({ space: 10, initialIndex: 0 }) {
          ListItem() {
            Text('15501212262')
              .width('100%')
              .height(40)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(5)
              .id('item1')
          }
          .onClick(() => {
            if (viewData != undefined) {
              successFunc(viewData, '15501212262')
            }
          })

          ListItem() {
            Text('13352589963')
              .width('100%')
              .height(40)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(5)
          }
          .onClick(() => {
            if (viewData != undefined) {
              successFunc(viewData, '13352589963')
            }
          })

          ListItem() {
            Text('13115584211')
              .width('100%')
              .height(40)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(5)
          }
          .onClick(() => {
            if (viewData != undefined) {
              successFunc(viewData, '13115584211')
            }
          })

          ListItem() {
            Text('18845809376')
              .width('100%')
              .height(40)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(5)
          }
          .onClick(() => {
            if (viewData != undefined) {
              successFunc(viewData, '18845809376')
            }
          })

          ListItem() {
            Text('18899635824')
              .width('100%')
              .height(40)
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(5)
          }
          .onClick(() => {
            if (viewData != undefined) {
              successFunc(viewData, '18899635824')
            }
          })
        }
        .listDirection(Axis.Vertical)
        .scrollBar(BarState.Off)
        .friction(0.6)
        .divider({ strokeWidth: 1, color: '#fff5eeee', startMargin: 20, endMargin: 20 })
        .edgeEffect(EdgeEffect.Spring)
        .onScrollIndex((firstIndex: number, lastIndex: number, centerIndex: number) => {
          console.info('first' + firstIndex)
          console.info('last' + lastIndex)
          console.info('center' + centerIndex)
        })
        .onScroll((scrollOffset: number, scrollState: ScrollState) => {
          console.info(`onScroll scrollState = ScrollState` + scrollState + `, scrollOffset = ` + scrollOffset)
        })
      }
      .width('100%')
      .shadow(ShadowStyle.OUTER_FLOATING_SM)
    }
    .height('100%')
    .shadow(ShadowStyle.OUTER_FLOATING_SM)
  }
}
