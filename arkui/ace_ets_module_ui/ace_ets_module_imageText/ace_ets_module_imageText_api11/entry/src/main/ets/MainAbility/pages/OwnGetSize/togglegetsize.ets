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
struct Toggle001 {
  @State text:string='0'
  build() {
    Column({ space: 10 }) {
      Text('type: Button').fontSize(12).fontColor(0xcccccc).width('90%')
      Toggle({ type: ToggleType.Button, isOn: false }){
        Text('切换框')
          .fontColor('#181224')
          .fontSize(24)
      }
      .width(120)
      .height(100)
      .selectedColor('#ff5886b7')
      .id('toggle001')
      Row(){
        Button('获取属性')
          .id('togglebutton')
          .onClick(()=>{
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('toggle001');
            this.text='{width:'+modePosition.size.width/1.5+',height:'+ modePosition.size.height/1.5+'}'
          }).width(50).height(20)
      }
      Row(){
        Text(this.text)
          .id('gettoggle001')
      }
    }.width('100%').padding(24)
  }
}

