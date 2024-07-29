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
struct Rect21_24Example {
  @State text: string = '';
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('21')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Image');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          })
          .id('button21')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('22')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Line');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button22').stateEffect(true).backgroundColor('#ff89bbef')
        Button('23')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('ListItemGroup');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button23').stateEffect(true).backgroundColor('#ff89bbef')
        Button('24')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('ListItem');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button24').stateEffect(true).backgroundColor('#ff89bbef')
      }.height(10)
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Image($r('app.media.icon'))
        .width(90).height(90).id('Image')
      Line()
        .width(220)
        .height(140)
        .id('Line')
      List() {
        ListItemGroup(){
          ListItem() {
            Text('1')
              .fontSize(16)
              .textAlign(TextAlign.Center)
              .borderRadius(10)
              .backgroundColor(0xFFFFFF)
          }.height(100)
        }.width(160).height(100).id('ListItemGroup')
      }
      List() {
        ListItem() {
          Text('1')
            .fontSize(16)
            .textAlign(TextAlign.Center)
            .borderRadius(10)
            .backgroundColor(0xFFFFFF)
        }.width(200).height(240).id('ListItem')
      }
    }.height('100%').width('100%')
  }
}