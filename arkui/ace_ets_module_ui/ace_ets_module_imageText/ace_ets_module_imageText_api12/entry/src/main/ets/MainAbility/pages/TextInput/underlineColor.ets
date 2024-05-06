@Entry
@Component
struct underlineColor1 {

  build() {
    Row() {
      Column() {

        TextInput({placeholder:'提示文本内容'})
          .key('underlineColor1')
          .showUnderline(true)
          .underlineColor(Color.Gray);
      }
      .width('100%')
    }
    .height('100%')
  }
}