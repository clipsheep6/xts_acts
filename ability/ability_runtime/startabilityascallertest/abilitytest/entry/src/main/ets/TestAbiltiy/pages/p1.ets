@Entry
@Component
struct P1 {
  @State message: string = 'A'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        UIExtensionComponent({
          bundleName: "com.example.abilityB",
          abilityName: "ExtAbility"
        }).width('100%').height('50%')
      }
      .width('100%')
    }
    .height('100%')
  }
}