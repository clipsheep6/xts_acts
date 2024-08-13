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
struct text001 {
  @State text:string='0'
  build() {
    Column({ space: 5 }) {
        Text('own')
      .width(155)
      .height(100)
      .id('text001')
      Row(){
        Button('获取属性')
          .id('textbutton')
          .onClick(()=>{
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById('text001');
            this.text='{width:'+modePosition.size.width/1.5+',height:'+ modePosition.size.height/1.5+'}'
          }).width(50).height(20)
      }
      Row(){
        Text(this.text)
          .id('gettextsize001')
      }
    }.width('100%')
    .margin({ top: 5 })
  }
}
