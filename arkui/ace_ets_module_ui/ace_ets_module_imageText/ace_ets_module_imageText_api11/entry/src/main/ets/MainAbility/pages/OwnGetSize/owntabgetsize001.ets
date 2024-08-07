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
struct owntab {
  private controller: TabsController = new TabsController();
  @State text:string='未获取'
  build() {
    Column() {
      Tabs({
        barPosition: BarPosition.Start,
        controller: this.controller
      }) {
        TabContent() {
          Column()
            .width('100%')
            .height('100%')
            .backgroundColor("#aabbcc")
        }
        .tabBar("1")

        TabContent() {
          Column()
            .width('100%')
            .height('100%')
            .backgroundColor("#bbccaa")
        }
        .tabBar("2")
      }
      .width(240)
      .height(140)
      .id("tab0010")
      .padding(10)
      Row(){
        Button('获取属性')
          .id('tabbutton')
          .onClick(()=>{
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById("tab0010");
            this.text='{width:'+modePosition.size.width/1.5+',height:'+ modePosition.size.height/1.5+'}'
          }).width(50).height(20)
      }
      Row(){
        Text(this.text)
          .id('gettabsize001')
      }
    }.width('100%')
    .margin({ top: 5 })
  }
}

