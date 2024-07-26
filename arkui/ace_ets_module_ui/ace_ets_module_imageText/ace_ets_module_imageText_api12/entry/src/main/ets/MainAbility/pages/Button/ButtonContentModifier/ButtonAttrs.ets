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
class MyButtonStyle1 implements ContentModifier<ButtonConfiguration> {
  x: number = 0
  y: number = 0
  selectedColor:Color = Color.Black

  constructor(x : number, y: number,ColorType:Color) {
    this.x = x
    this.y = y
    this.selectedColor = ColorType
  }
  applyContent() : WrappedBuilder<[ButtonConfiguration]>
  {
    return wrapBuilder(buildButton2)
  }
}

@Builder function buildButton2(config: ButtonConfiguration) {
  Column({space:30}) {
    Text(config.enabled ? "enabled true" : "enabled false")
    Text('圆圈状态' + (config.pressed ? "（ 按压 ）" : "（ 非按压 ）"))
    Text("{x:"+(config.enabled ? (config.contentModifier as MyButtonStyle1).x.toString() : "0")+",y:"+(config.enabled ? (config.contentModifier as MyButtonStyle1).y.toString(): "0")+"}").id('circlePosition')
    Circle({ width: 50, height: 50 })
      .fill(config.pressed ? (config.contentModifier as MyButtonStyle1).selectedColor : Color.Black)
      .gesture(
        TapGesture({count:1}).onAction((event: GestureEvent)=>{
          config.triggerClick(event.fingerList[0].localX,event.fingerList[0].localY)
        })).opacity(config.enabled ? 1 : 0.1)
      .id('circle')
  }
}

@Entry
@Component
struct ButtonAttrsExample {
  @State buttonEnabled: boolean = true;
  @State positionX: number = 0;
  @State positionY: number = 0;
  @State buttonPosition: string = "";
  @State message: string = "";
  build() {
    Column() {
      Text(this.buttonPosition).id('buttonPosition')
      Text(this.message).id('message')
      Button('OK')
        .contentModifier(new MyButtonStyle1(this.positionX,this.positionY,Color.Red))
        .onClick((event) => {
          this.positionX = event.displayX
          this.positionY = event.displayY
          this.buttonPosition = "{x:"+this.positionX+",y:"+this.positionY+"}"
          this.message = "button click"
        }).enabled(this.buttonEnabled)
      Button('buttonEnabled')
        .onClick(() => {
          this.buttonEnabled=true;
        })
        .id('buttonEnabled')
      Button('buttonDisabled')
        .onClick(() => {
          this.buttonEnabled=false;
        })
        .id('buttonDisabled')
      Button('undefined')
        .contentModifier(undefined)
        .onClick(() => {
          this.message = "undefined button click"
        })
        .id('undefined')
      Button('null')
        .contentModifier(null)
        .onClick(() => {
          this.message = "null button click"
        })
        .id('null')
    }.height('100%').width('100%').justifyContent(FlexAlign.Center)
  }
}