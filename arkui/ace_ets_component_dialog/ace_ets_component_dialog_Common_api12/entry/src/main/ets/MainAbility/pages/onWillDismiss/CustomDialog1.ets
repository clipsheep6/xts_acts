@CustomDialog
struct CustomDialogExample1 {
  @Link textValue: string
  @Link inputValue: string

  controller?: CustomDialogController
  // 若尝试在CustomDialog中传入多个其他的Controller，以实现在CustomDialog中打开另一个或另一些CustomDialog，那么此处需要将指向自己的controller放在所有controller的后面
  cancel: () => void = () => {
  }
  confirm: () => void = () => {
  }

  build() {
    Column() {
      Text('Change text').fontSize(20).margin({ top: 10, bottom: 10 })
      TextInput({ placeholder: '', text: this.textValue }).height(60).width('90%')
        .onChange((value: string) => {
          this.textValue = value
        })
      Text('Whether to change a text?').fontSize(16).margin({ bottom: 10 })
      Flex({ justifyContent: FlexAlign.SpaceAround }) {
        Button('cancel')
          .onClick(() => {
            if (this.controller != undefined) {
              this.controller.close()
              this.cancel()
            }
          }).backgroundColor(0xffffff).fontColor(Color.Black)
        Button('confirm')
          .onClick(() => {
            if (this.controller != undefined) {
              this.inputValue = this.textValue
              this.controller.close()
              this.confirm()
            }
          }).backgroundColor(0xffffff).fontColor(Color.Red)
      }.margin({ bottom: 10 })

    }.borderRadius(10)
    // 如果需要使用border属性或cornerRadius属性，请和borderRadius属性一起使用。
  }
}
@Entry
@Component
struct CustomDialogUser1 {
  @State textValue: string = ''
  @State inputValue: string = 'click me'
  @State text: string = 'CustomDialog1';
  dialogController: CustomDialogController | null = new CustomDialogController({
    builder: CustomDialogExample1({
      cancel: ()=> { this.onCancel() },
      confirm: ()=> { this.onAccept() },
      textValue: $textValue,
      inputValue: $inputValue
    }),
    cancel: this.exitApp,
    autoCancel: true,
    onWillDismiss:(dismissDialog: DismissDialog)=> {
      console.info("reason=" + JSON.stringify(dismissDialog.reason))
      this.text = "reason=" + JSON.stringify(dismissDialog.reason)
      console.log("dialog onWillDismiss")
      if (dismissDialog.reason == DismissReason.PRESS_BACK) {
        // dismissDialog.dismiss()
      }
      if (dismissDialog.reason == DismissReason.TOUCH_OUTSIDE) {
        // dismissDialog.dismiss()
      }
    },
    alignment: DialogAlignment.Bottom,
    offset: { dx: 0, dy: -20 },
    gridCount: 4,
    customStyle: false,
    cornerRadius: 10,
  })

  // 在自定义组件即将析构销毁时将dialogControlle置空
  aboutToDisappear() {
    this.dialogController = null // 将dialogController置空
  }

  onCancel() {
    console.info('Callback when the first button is clicked')
  }

  onAccept() {
    console.info('Callback when the second button is clicked')
  }

  exitApp() {
    console.info('Click the callback in the blank area')
  }
  build() {
    Column() {
      Text(this.text).fontSize(30).margin(30).id("CustomDialog1Text")
      Button(this.inputValue)
        .id("CustomDialog1")
        .onClick(() => {
          if (this.dialogController != null) {
            this.dialogController.open()
          }
        }).backgroundColor(0x317aff)
    }.width('100%').margin({ top: 5 })
  }
}