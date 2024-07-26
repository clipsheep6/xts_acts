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

@Entry
@Component
struct ToggleAttrsExample {
  @State colorFocus:string='#ff688ade'
  @State colorEnable:string='#ff688ade'
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Toggle({ type: ToggleType.Switch, isOn: true  })
          .selectedColor('#ffff0026')
          .switchPointColor('#FFFFFF')
          .id('redToggle')
        Toggle({ type: ToggleType.Switch, isOn: false})
          .selectedColor('#ff688ade')
          .switchPointColor('#FFFFFF')
          .onChange((isOn: boolean) => {
            console.log('Component status:' + isOn)
          }).id('logToggle')
        Toggle({ type: ToggleType.Switch, isOn: false})
          .selectedColor('#ff688ade')
          .switchPointColor('#FFFFFF')
          .id('sizeToggle')
          .width('100vp')
          .height('100vp')
      }
      Column(){
        Toggle({ type: ToggleType.Switch, isOn: false})
          .selectedColor('#ff688ade')
          .switchPointColor('#FFFFFF')
          .position({x:'100vp'})
          .id('positionToggle')
      }
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Toggle({ type: ToggleType.Switch, isOn: false})
          .selectedColor(this.colorFocus)
          .switchPointColor('#FFFFFF')
          .id('focusableToggle')
          .defaultFocus(true)
          .onFocus(() => {
            this.colorFocus = '#FFFF0000'
        })
        Toggle({ type: ToggleType.Switch, isOn: true})
          .selectedColor('#ff688ade')
          .switchPointColor('#FFFFFF')
          .id('enableToggle')
          .enabled(false)
          .onChange((isOn: boolean) => {
            this.colorEnable = '#FFFF0000'
          })
      }
      Toggle({ type: ToggleType.Switch, isOn: false})
        .selectedColor('#ff688ade')
        .switchPointColor('#FFFFFF')
        .id('marginToggle')
        .margin(100)

    }.height('100%').width('100%')
  }
}