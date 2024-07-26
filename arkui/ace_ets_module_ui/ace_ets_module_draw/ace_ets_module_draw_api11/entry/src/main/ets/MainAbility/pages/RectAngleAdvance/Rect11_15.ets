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
struct Rect11_15Example {
  @State text: string = '';
  @State value: number = 0;
  private settings: RenderingContextSettings = new RenderingContextSettings(true)
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('11')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('DatePicker');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10)
          .id('button11')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('12')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Divider');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button12').stateEffect(true).backgroundColor('#ff89bbef')
        Button('13')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Ellipse');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button13').stateEffect(true).backgroundColor('#ff89bbef')
        Button('14')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('FormComponent');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button14').stateEffect(true).backgroundColor('#ff89bbef')
        Button('15')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('FormLink');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).margin(10).id('button15').stateEffect(true).backgroundColor('#ff89bbef')
      }
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        DatePicker({
          start: new Date('1970-1-1'),
          end: new Date('2100-1-1')
        })
          .width(120)
          .height(100)
          .id('DatePicker')
        FormLink({
          action: "router",
        }) {
          Button("router")
        }
        .width(200)
        .height(100)
        .id('FormLink')
      }

      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Divider().strokeWidth(8).color('#ff2977c6').width(130).height(100).id('Divider')
        Ellipse({ width: 230, height: 140 }).id('Ellipse')
      }
      FormComponent({
        id:0,
        name:"Form1",
        bundle:"com.arkui.ace.draw",
        ability:"MainAbility",
        module:"entry"
      })
        .allowUpdate(true)
        .size({width:360,height:360})
        .visibility(Visibility.Visible)
        .id('FormComponent')
    }.height('100%').width('100%')
  }
}