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
struct Rect6_10Example {
  @State text: string = '';
  @State value: number = 0;
  private settings: RenderingContextSettings = new RenderingContextSettings(true)
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('6')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('checkbox6');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10)
          .id('button6')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('7')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('circle');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button7').stateEffect(true).backgroundColor('#ff89bbef')
        Button('8')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('column');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button8').stateEffect(true).backgroundColor('#ff89bbef')
        Button('9')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('counter');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button9').stateEffect(true).backgroundColor('#ff89bbef')
      }
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Checkbox({ name: 'checkbox6'})
        .selectedColor('#007DFF')
        .onChange((value: boolean) => {
          console.info('Checkbox1 change is' + value)
        })
        .width(90)
        .height(60)
        .id('checkbox6')
      Circle({ width: 310, height: 100 }).id('circle')
      Column().width(160).height(100).id('column')
      Counter() {
        Text(this.value.toString())
      }.margin(100)
      .onInc(() => {
        this.value++
      })
      .onDec(() => {
        this.value--
      })
      .width(150)
      .height(100)
      .id('counter')
    }.height('100%').width('100%')
  }
}