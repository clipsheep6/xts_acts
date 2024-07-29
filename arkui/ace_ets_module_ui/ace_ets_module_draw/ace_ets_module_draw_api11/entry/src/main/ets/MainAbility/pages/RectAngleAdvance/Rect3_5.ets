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
struct Rect3_5Example {
  @State text: string = '';
  private settings: RenderingContextSettings = new RenderingContextSettings(true)
  private context: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings)
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('3')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('testButton');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10)
          .id('button3')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('4')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('canvas');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button4').stateEffect(true).backgroundColor('#ff89bbef')
        Button('5')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('checkboxGroup');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button5').stateEffect(true).backgroundColor('#ff89bbef')
      }
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Button('test button')
        .height(90)
        .width(90)
        .id('testButton')
      Canvas(this.context)
        .width(211)
        .height(140)
        .backgroundColor('#ffff00')
        .onReady(() => {
          this.context.fillRect(0, 30, 100, 100)
        })
        .id('canvas')
      CheckboxGroup({ group: 'checkboxGroup1' })
        .selectedColor('#007DFF')
        .onChange((itemName: CheckboxGroupResult) => {
          console.info('checkbox group content' + JSON.stringify(itemName))
        })
        .width(90)
        .height(60)
        .id( 'checkboxGroup')
    }.height('100%').width('100%')
  }
}