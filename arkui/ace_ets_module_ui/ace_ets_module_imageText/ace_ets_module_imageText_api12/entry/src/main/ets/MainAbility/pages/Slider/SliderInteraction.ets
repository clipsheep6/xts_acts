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
struct SliderInteractionExample {
  @State text14:string="";
  @State text16:string="";
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text(this.text14)
        .borderWidth(2)
        .id('text14')
        .fontSize(20)
      //1.SLIDE_AND_CLICK
      Slider({value:0,max:100,min:0}).id('Slider140')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.text14 = ""+value.toFixed(0);
          }
        })
        .sliderInteractionMode(SliderInteraction.SLIDE_AND_CLICK)
      Text(this.text16)
        .borderWidth(2)
        .id('text16')
        .fontSize(20)
      //2.SLIDE_ONLY
      Slider({value:0,max:100,min:0}).id('Slider160')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.text16 = ""+value.toFixed(0);
          }
        })
        .sliderInteractionMode(SliderInteraction.SLIDE_ONLY)
    }.height('100%').width('100%')
  }
}