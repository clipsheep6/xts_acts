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
struct Rect25_28Example {
  @State text: string = '';
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('25')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('List');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10)
          .id('button25')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('26')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('MenuItemGroup');
            let str1:string = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
            let str2:string = '{"offsetY":'+modePosition.localOffset.y/1.5+',"offsetX":'+modePosition.localOffset.x/1.5+'}';
            this.text = 'size:'+str1+',localOffset:'+str2;
          }).margin(10).id('button26').stateEffect(true).backgroundColor('#ff89bbef')
        Button('27')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('MenuItem');
            let str1:string = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
            let str2:string = '{"offsetY":'+modePosition.localOffset.y/1.5+',"offsetX":'+modePosition.localOffset.x/1.5+'}';
            this.text = 'size:'+str1+',localOffset:'+str2;
          }).margin(10).id('button27').stateEffect(true).backgroundColor('#ff89bbef')
        Button('28')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Menu');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button28').stateEffect(true).backgroundColor('#ff89bbef')
      }
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)

      List().width(200).height(200).id('List')

      Menu() {
        MenuItem({
          startIcon: $r('app.media.icon'),
          content: 'Menu option',
        }).width(90).height(90).id('MenuItem')
        MenuItemGroup({ header: 'Subtitle' }) {
          MenuItem({
            startIcon: $r('app.media.icon'),
            content: 'Menu option',
          }).height(42)
        }.width(90).height(90).id('MenuItemGroup')
      }
      Menu().width(100).height(100).id('Menu')
    }.height('100%').width('100%')
  }
}