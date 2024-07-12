@Entry
@Component
struct secondIndex {
  @State message: string = '这是测试Ability2';

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