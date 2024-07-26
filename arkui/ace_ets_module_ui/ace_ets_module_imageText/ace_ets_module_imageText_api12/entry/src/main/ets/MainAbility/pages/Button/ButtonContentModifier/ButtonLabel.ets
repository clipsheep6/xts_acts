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
class MyButtonStyle implements ContentModifier<ButtonConfiguration>{
  constructor() {
  }
  applyContent() : WrappedBuilder<[ButtonConfiguration]>
  {
    return wrapBuilder(buildButton1)
  }
}

@Builder function buildButton1(config: ButtonConfiguration) {
  Column({space:30})  {
    Button(config.label)
      .gesture(
        TapGesture({count:1}).onAction((event: GestureEvent)=>{
          config.triggerClick(event.fingerList[0].localX,event.fingerList[0].localY)
        })).opacity(config.enabled ? 1 : 0.1)
  }
}

@Entry
@Component
struct ButtonLabelExample {
  @State longStr:string="";
  @State text:string="";
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text(this.text)
        .borderWidth(2)
        .id('text')
        .fontSize(20)
      Button("begin")
        .onClick(() => {
          let i:number;
          for(i=2000;i>0;i--){
            this.longStr = this.longStr+"123";
          }
        }).margin(10).backgroundColor('#ff89bbef').id('begin')
      Button(null)
        .contentModifier(new MyButtonStyle())
        .onClick(()=>{
          let strJson = getInspectorByKey('null')
          this.text = JSON.parse(strJson).$attrs.label
        })
        .id('null')
      Button(undefined)
        .contentModifier(new MyButtonStyle())
        .onClick(()=>{
          let strJson = getInspectorByKey('undefined')
          this.text = JSON.parse(strJson).$attrs.label
        })
        .id('undefined')
      Button("abc")
        .contentModifier(new MyButtonStyle())
        .onClick(()=>{
          let strJson = getInspectorByKey('abc')
          this.text = JSON.parse(strJson).$attrs.label
        })
        .id('abc')
      Button("")
        .contentModifier(new MyButtonStyle())
        .onClick(()=>{
          let strJson = getInspectorByKey('empty')
          this.text = JSON.parse(strJson).$attrs.label
        })
        .id('empty')
      Button(this.longStr)
        .contentModifier(new MyButtonStyle())
        .onClick(()=>{
          let strJson = getInspectorByKey('longStr')
          this.text = JSON.parse(strJson).$attrs.label
        })
        .id('longStr')
    }.height('100%').width('100%')
  }
}