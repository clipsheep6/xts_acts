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
import componentUtils from '@ohos.arkui.componentUtils'
@Entry
@Component
struct NavRouterExample {
  @State isActiveWLAN: boolean = false
  @State isActiveBluetooth: boolean = false
  @State text: string = '';
  build() {
    Column() {
      Navigation() {
        NavRouter() {
          Row() {
            Text(`蓝牙`)
              .textAlign(TextAlign.Center)
          }.width('20%')
          NavDestination() {
            Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
              Text('未找到可用蓝牙').fontSize(10).padding({ left: 15 })
              Button('29')
                .onClick(() => {
                  let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('NavDestination');
                  this.text = '{"offsetY":'+modePosition.localOffset.y/1.5+',"offsetX":'+modePosition.localOffset.x/1.5+'}';
                }).margin(10).id('button29')
              Text(this.text)
                .borderWidth(2)
                .id('text')
                .fontSize(20)
            }
          }.hideTitleBar(false).backgroundColor('#0c182431').id('NavDestination')
        }.backgroundColor(this.isActiveBluetooth ? '#ccc' : '#fff')
        .onStateChange((isActivated: boolean) => {
          this.isActiveBluetooth = isActivated
        })
        .id('blueTooth')
      }
      .title('设置')
      .titleMode(NavigationTitleMode.Free)
      .mode(NavigationMode.Auto)
      .hideTitleBar(false)
      .hideToolBar(true)
    }.height('100%')
  }
}
