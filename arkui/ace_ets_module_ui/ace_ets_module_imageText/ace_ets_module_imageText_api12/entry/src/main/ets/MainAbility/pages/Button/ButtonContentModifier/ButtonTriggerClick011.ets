
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