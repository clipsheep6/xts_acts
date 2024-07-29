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
class MyButtonStyle011 implements ContentModifier<ButtonConfiguration> {
  public selectedColor:Color = Color.Black

  constructor(colorType:Color) {
    this.selectedColor = colorType
  }
  applyContent() : WrappedBuilder<[ButtonConfiguration]> {
    return wrapBuilder(buildButton011)
  }
}

@Builder function buildButton011(config: ButtonConfiguration) {
  Column({space:30}) {
    Text(config.enabled ? 'enabled true' : 'enabled false')
    Text('圆圈状态' + (config.pressed ? '（ 按压 ）' : '（ 非按压 ）'))
    Circle({ width: 50, height: 50 })
      .fill(config.pressed ? (config.contentModifier as MyButtonStyle1).selectedColor : Color.Black)
      .id('circle')
  }
}

@Entry
@Component
struct ButtonTriggerClick011 {
  @State buttonEnabled: boolean = true;
  @State message: string = '';
  build() {
    Column() {
      Text(this.message).id('message')
      Button('OK')
        .contentModifier(new MyButtonStyle011(Color.Red))
        .onClick((event) => {
          this.message = 'button click'
        }).enabled(this.buttonEnabled)
    }.height('100%').width('100%').justifyContent(FlexAlign.Center)
  }
}