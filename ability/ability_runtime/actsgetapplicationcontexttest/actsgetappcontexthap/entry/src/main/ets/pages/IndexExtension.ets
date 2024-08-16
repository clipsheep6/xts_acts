@Entry
@Component
struct Index {
  @State inputTxt: string = '';
  build() {
    Column() {
      Flex({ justifyContent: FlexAlign.Center, alignItems: ItemAlign.Center }) {
        Text('Extension Context')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
      }
      .margin({ top: 10 })

      UIExtensionComponent({
        bundleName: 'com.example.getapplicationcontexthap',
        abilityName: 'UIExtAbility',
        moduleName: 'entry',
        parameters: {
          'ability.want.params.uiExtensionType': 'sys/commonUI',
        }
      })
      .margin(10)
      .size({ width: '80%', height: 300 })
      .border({
        width: 5,
        color: 0x317AF7,
        radius: 10,
        style: BorderStyle.Dotted
      })

    }

    .height('100%')
  }
}