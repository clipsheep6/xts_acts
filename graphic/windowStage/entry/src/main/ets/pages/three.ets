@Entry
@Component
struct three {

  build() {
    Row() {
      Column() {
         Text('恢复应用窗口').fontSize(20).fontColor(Color.Red)
         .fontWeight(FontWeight.Bold)

      }
      .width('100%')
    }
    .height('100%')
  }
}