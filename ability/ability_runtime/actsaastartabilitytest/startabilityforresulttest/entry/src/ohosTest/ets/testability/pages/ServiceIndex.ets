@Entry
@Component
struct ServiceIndex {
  @State message: string = '这是服务衍生Ability';

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)

      }
      .width('100%')
    }
    .height('100%')
  }
}