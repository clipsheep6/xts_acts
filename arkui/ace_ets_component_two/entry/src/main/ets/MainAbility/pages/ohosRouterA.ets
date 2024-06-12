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

import router from '@ohos.router';
import RouterParamData from '../utils/RouterParamData';

@Entry
@Component
struct OhosRouterA {
  routerParamData: RouterParamData = {
    data: 'B Page'
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('A Page')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
      Button('Push')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
      Button('back')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
      Button('clear')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
      Button('getLength')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
      Button('enableAlertBeforeBackPage')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
      Button('disableAlertBeforeBackPage')
        .key('pushButtonA')
        .backgroundColor('#FF0B8FE2')
        .fontSize(20)
        .margin({ top: 20 })
        .onClick(() => {
          router.pushUrl({
            url: 'pages/ohosRouterB',
            params: this.routerParamData
          });
        });
    }
    .width('100%')
    .height('100%')
  }
}