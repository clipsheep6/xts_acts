@Entry
@Component
struct Index {
  @State message: string = 'this is a norml app'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(20)
          .fontWeight(FontWeight.Bold)
        Button('Register')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.Register()
          })
        Button('unRegister')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.unRegister()
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}