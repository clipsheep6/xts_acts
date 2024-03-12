// xxx.ets
@Entry
@Component
struct AlertDialog1Example {
  @State text: string = 'AlertDialog1';

  build() {
    Column({ space: 5 }) {
      Button(this.text)
        .id("AlertDialog1")
        .onClick(() => {
          AlertDialog.show(
            {
              title: 'title',
              message: 'text',
              autoCancel: true,
              alignment: DialogAlignment.Bottom,
              offset: { dx: 0, dy: -20 },
              gridCount: 3,
              confirm: {
                value: 'button',
                action: () => {
                  console.info('Button-clicking callback')
                }
              },
              cancel: () => {
                console.info('Closed callbacks')
              },
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
              }
            }
          )
        })
        .backgroundColor(0x317aff)
    }.width('100%').margin({ top: 5 })
  }
}