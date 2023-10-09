// xxx.ets
@CustomDialog
struct CustomDialogExampleA {
  @Link inputValue: string
  controller?: CustomDialogController
  cancel: () => void = () => {}
  confirm: () => void = () => {}

  build() {
    Column() {
      Text('Change text').fontSize(20).margin({ top: 10, bottom: 10 })
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('confirm').key('Custom_Dialog_A')
          .onClick(() => {
            if (this.controller != undefined) {
              this.controller.close()
              this.confirm()
            }
          }).backgroundColor(0xffffff).fontColor(Color.Red)
      }.margin({ bottom: 10 })
    }.borderRadius(10)
  }
  }


@Entry
@Component
struct CustomDialogUserA {
  @State inputValue: string = 'CustomDialog按esc弹窗逐层退出'
  dialogController: CustomDialogController | null = new CustomDialogController({
    builder: CustomDialogExampleA({
      inputValue: $inputValue
    }),
    autoCancel: true,
    alignment: DialogAlignment.Bottom,
  })
  build() {
    Column() {
      Button(this.inputValue).key('Custom_Dialog_B')
        .onClick(() => {
          this.dialogController.open()
          this.dialogController.open()
          this.dialogController.open()
        }).backgroundColor(0x317aff)
    }.width('100%').margin({ top: 200 })
  }
}