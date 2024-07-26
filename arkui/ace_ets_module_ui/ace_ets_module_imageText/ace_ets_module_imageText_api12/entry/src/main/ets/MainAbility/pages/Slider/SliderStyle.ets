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
struct SliderStyleExample {
  @State undefined_text:string="";
  @State null_text:string="";
  @State empty_text:string="";
  @State dynamic_text:string="";
  @State sliderStyle:SliderStyle=SliderStyle.OutSet;
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {

      Text(this.undefined_text).id('undefined_text')
      Slider({value:0, max:100,min:0,style:undefined}).id('undefined')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.undefined_text = ""+value.toFixed(0);
          }
        })
      Text(this.null_text).id('null_text')
      Slider({value:0, max:100,min:0,style:null}).id('null')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.null_text = ""+value.toFixed(0);
          }
        })
      Text(this.empty_text).id('empty_text')
      Slider({value:0, max:100,min:0}).id('empty')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.empty_text = ""+value.toFixed(0);
          }
        })
      Text(this.dynamic_text).id('dynamic_text')
      Slider({value:0, max:100,min:0,style:this.sliderStyle}).id('dynamic')
        .onChange((value: number, mode: SliderChangeMode) => {
          if(mode==2){
            this.dynamic_text = ""+value.toFixed(0);
          }
        })

      Button('change sliderStyle')
        .id('changeStyle')
        .onClick(()=>{
          this.sliderStyle = SliderStyle.InSet;
        })

    }.height('100%').width('100%')
  }
}