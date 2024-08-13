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
import componentUtils from '@ohos.arkui.componentUtils';
@Entry
@Component
struct tabcontent001 {
  private controller: TabsController = new TabsController()
  @State text: string = '0'

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Tabs({ controller: this.controller }) {
        TabContent() {
          Text('首页')
            .width('100%')
            .height('100%')
            .fontSize(50)
            .textAlign(TextAlign.Center)
            .fontColor(Color.White)
            .backgroundColor(Color.Pink)
        }.tabBar('首页')

        TabContent() {
          Text('消息')
            .width('100%')
            .height('100%')
            .fontSize(50)
            .textAlign(TextAlign.Center)
            .fontColor(Color.White)
            .backgroundColor(Color.Blue)
        }.tabBar('消息')

        TabContent() {
          Text('我的')
            .width('100%')
            .height('100%')
            .fontSize(50)
            .textAlign(TextAlign.Center)
            .fontColor(Color.White)
            .backgroundColor(Color.Red)
        }.tabBar('我的')
      }
      .width(230)
      .height(140)
      .id('tabcontent001')
      .scrollable(false)
      .barHeight(0)
      .animationDuration(0)

      Row() {
        Button('获取属性')
          .id('tabcontentrbutton')
          .onClick(() => {
            let modePosition: componentUtils.ComponentInfo = componentUtils.getRectangleById('tabcontent001');
            this.text = '{width:' + modePosition.size.width / 1.5 + ',height:' + modePosition.size.height / 1.5 + '}'
          }).width(50).height(20)
      }
      Row() {
        Text(this.text)
          .id('gettabcontentsize001')
      }
    }
  }
}
