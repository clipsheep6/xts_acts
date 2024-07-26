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
class MyButtonStylePressed implements ContentModifier<ButtonConfiguration> {
  selectedColor:Color = Color.Black

  constructor(ColorType:Color) {
    this.selectedColor = ColorType
  }
  applyContent() : WrappedBuilder<[ButtonConfiguration]>
  {
    return wrapBuilder(buildButtonPressed)
  }
}

@Builder function buildButtonPressed(config: ButtonConfiguration) {
  Column({space:30}) {
    Text(config.enabled ? "enabled true" : "enabled false")
    Text('圆圈状态' + (config.pressed ? "（ 按压 ）" : "（ 非按压 ）"))
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
  @State pressed: string = "";
  build() {
    Column() {
      Text(this.message).id('message')
      Button('OK')
        .contentModifier(new MyButtonStylePressed(Color.Red))
        .gesture(
        LongPressGesture({ repeat: true })
          // 由于repeat设置为true，长按动作存在时会连续触发，触发间隔为duration（默认值500ms）
          .onAction((event: GestureEvent) => {
            if (event && event.repeat) {
              this.message = "";
            }
          })
            // 长按动作一结束触发
          .onActionEnd((event: GestureEvent) => {
            this.count = 0
          })
      )

    }.height('100%').width('100%').justifyContent(FlexAlign.Center)
  }
}