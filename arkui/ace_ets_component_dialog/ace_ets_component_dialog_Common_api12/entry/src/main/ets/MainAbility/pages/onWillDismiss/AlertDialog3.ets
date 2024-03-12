// xxx.ets
@Entry
@Component
struct AlertDialog3Example {
  @State text: string = 'AlertDialog3';

  build() {
    Column({ space: 5 }) {
      Button(this.text)
        .id("AlertDialog3")
        .onClick(() => {
          AlertDialog.show(
            {
              title: 'title',
              subtitle: 'subtitle',
              message: 'text',
              autoCancel: false,
              alignment: DialogAlignment.Bottom,
              gridCount: 4,
              offset: { dx: 0, dy: -20 },
              primaryButton: {
                value: 'cancel',
                action: () => {
                  console.info('Callback when the first button is clicked')
                }
              },
              secondaryButton: {
                enabled: true,
                defaultFocus: true,
                style: DialogButtonStyle.HIGHLIGHT,
                value: 'confirm',
                action: () => {
                  console.info('Callback when the second button is clicked')
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
                  dismissDialog.dismiss()
                }
                if (dismissDialog.reason == DismissReason.TOUCH_OUTSIDE) {
                  dismissDialog.dismiss()
                }
              }
            }
          )
        }).backgroundColor(0x317aff)
    }.width('100%').margin({ top: 5 })
  }
}