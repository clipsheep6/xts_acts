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
struct SliderMinDistanceExample {
  @State text5:string="";
  @State text6:string="";
  @State text8:string="";
  @State text9:string="";
  @State text10:string="";
  @State text11:string="";
  @State text17:string="";
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text(this.text5)
        .borderWidth(2)
        .id('text5')
        .fontSize(20)
      Slider({value:40,max:100,min:0}).id('Slider50')
        .onChange((value: number, mode: SliderChangeMode) => {
        if(mode==2){
          this.text5 = ""+value.toFixed(0);
        }
      })
        .width(300)
      Text(this.text6)
        .borderWidth(2)
        .id('text6')
        .fontSize(20)

      Slider({value:40,max:100,min:0}).id('Slider60')
        .onChange((value: number, mode: SliderChangeMode) => {
        if(mode==2){
            this.text6 = ""+value.toFixed(0);
          }
        })
        .minResponsiveDistance(-1)
        .width(300)
      Text(this.text8)
        .borderWidth(2)
        .id('text8')
        .fontSize(20)

      Slider({value:40,max:100,min:0}).id('Slider80')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.text8 = ""+value.toFixed(0);
          }
        })
        .minResponsiveDistance(undefined)
        .width(300)
      Text(this.text9)
        .borderWidth(2)
        .id('text9')
        .fontSize(20)

      Slider({value:40,max:100,min:0}).id('Slider90')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.text9 = ""+value.toFixed(0);
          }
        })
        .minResponsiveDistance(-100)
        .width(300)
      Text(this.text10)
        .borderWidth(2)
        .id('text10')
        .fontSize(20)

      Slider({value:90,max:100,min:0}).id('Slider100')
        .onChange((value: number, mode: SliderChangeMode) => {
       if(mode==2){
          this.text10 = ""+value.toFixed(0);
        }
      })
        .minResponsiveDistance(20)
        .width(300)
      Text(this.text11)
        .borderWidth(2)
        .id('text11')
        .fontSize(20)

      Slider({value:90,max:100,min:0}).id('Slider110')
        .onChange((value: number, mode: SliderChangeMode) => {
        if(mode==2){
            this.text11 = ""+value.toFixed(0);
          }
        })
        .minResponsiveDistance(20)
        .width(300)
      Text(this.text17)
        .borderWidth(2)
        .id('text17')
        .fontSize(20)

      Slider({value:0,max:101,min:0}).id('Slider170')
        .onChange((value: number, mode: SliderChangeMode) => {
         if(mode==2){
            this.text17 = ""+value.toFixed(0);
          }
        })
        .minResponsiveDistance(100)
        .width(300)
    }.height('100%').width('100%')
  }
}