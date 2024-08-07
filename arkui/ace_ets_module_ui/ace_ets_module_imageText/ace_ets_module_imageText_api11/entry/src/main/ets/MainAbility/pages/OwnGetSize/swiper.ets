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
struct Swiper001 {
  private swiperController: SwiperController = new SwiperController()
  @State text:string='0'
  build() {
    Column({ space: 5 }) {
      Swiper(this.swiperController) {
        Text("0")
          .backgroundColor(Color.Gray)
          .textAlign(TextAlign.Center)
          .fontSize(30)
        Text("1")
          .backgroundColor(Color.Green)
          .textAlign(TextAlign.Center)
          .fontSize(30)

        Text("2")
          .backgroundColor(Color.Blue)
          .textAlign(TextAlign.Center)
          .fontSize(30)
      }
      .width(250)
      .height(100)
      .cachedCount(3)
      .autoPlay(true)
      .interval(1500)
      .duration(1000)
      .loop(false)
      .id("swiper001")

      Row(){
        Button('获取属性')
          .id('swiperbutton')
          .onClick(()=>{
            let modePosition:componentUtils.ComponentInfo = componentUtils.getRectangleById("swiper001");
            this.text='{width:'+modePosition.size.width/1.5+',height:'+ modePosition.size.height/1.5+'}'
          }).width(50).height(20)
      }

      Row(){
        Text(this.text)
          .id('getswipersize001')
      }


    }.width('100%')
    .margin({ top: 5 })
  }
}
