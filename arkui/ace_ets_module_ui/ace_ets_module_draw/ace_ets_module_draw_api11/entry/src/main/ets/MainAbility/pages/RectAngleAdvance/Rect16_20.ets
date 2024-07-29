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
struct Rect16_20Example {
  @State text: string = '';
  @State numbers: string[] = []

  aboutToAppear() {
    for (let i = 1; i <= 30; i++) {
      this.numbers.push(i + '')
    }
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('16')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Gauge');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          })
          .id('button16')
          .stateEffect(true)
          .backgroundColor('#ff89bbef')
        Button('17')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('GridRow');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button17').stateEffect(true).backgroundColor('#ff89bbef')
        Button('18')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('Grid');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button18').stateEffect(true).backgroundColor('#ff89bbef')
        Button('19')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('ImageAnimator');
            let str1:string = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
            let str2:string = '{"offsetY":'+modePosition.localOffset.y/1.5+',"offsetX":'+modePosition.localOffset.x/1.5+'}';
            this.text = 'size:'+str1+',localOffset:'+str2;
          }).id('button19').stateEffect(true).backgroundColor('#ff89bbef')
        Button('20')
          .onClick(() => {
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('ImageSpan');
            this.text  = '{"width":'+modePosition.size.width/1.5+',"height":'+modePosition.size.height/1.5+'}';
          }).id('button20').stateEffect(true).backgroundColor('#ff89bbef')
      }.height(10)
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Gauge({ value: 50, min: 1, max: 100 }).width(140).height(100).id('Gauge')
        GridRow().width(140).height(140).id('GridRow')
        Text() {
        ImageSpan($r('app.media.icon'))
          .width(100)
          .height(100)
          .id('ImageSpan')
        }
      }

      Grid() {
        ForEach(this.numbers, (day: string) => {
          GridItem() {
            Text(day).fontSize(16).backgroundColor(0xF9CF93)
          }.width(40).height(80).borderWidth(2).borderColor(Color.Red)
        }, (day: string) => day)
      }
      .width(360)
      .height(240)
      .columnsGap(10)
      .rowsGap(10)
      .backgroundColor(0xFAEEE0)
      .maxCount(6)
      .minCount(2)
      .cellLength(0)
      .layoutDirection(GridDirection.Row)
      .id('Grid')

      Column(){
        ImageAnimator()
          .images([
            {
              src: $r('app.media.icon')
            }
          ]).width(340).height(240).margin({top:100}).id('ImageAnimator')
      }.height(340)

    }.height('100%').width('100%')
  }
}