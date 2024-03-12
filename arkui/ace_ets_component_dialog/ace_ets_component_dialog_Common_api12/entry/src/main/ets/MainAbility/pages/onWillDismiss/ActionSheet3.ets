@Entry
@Component
struct ActionSheet3Example {
  @State text: string = 'ActionSheet3';

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button(this.text)
        .id("ActionSheet3")
        .onClick(() => {
          ActionSheet.show({
            title: 'ActionSheet title',
            subtitle: 'ActionSheet subtitle',
            message: 'message',
            autoCancel: false,
            confirm: {
              defaultFocus: true,
              value: 'Confirm',
              action: () => {
                console.log('Get Alert Dialog handled')
              }
            },
            cancel: () => {
              console.log('actionSheet canceled')
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
            },
            alignment: DialogAlignment.Bottom,
            offset: { dx: 0, dy: -10 },
            sheets: [
              {
                title: 'apples',
                action: () => {
                  console.log('apples')
                }
              },
              {
                title: 'bananas',
                action: () => {
                  console.log('bananas')
                }
              },
              {
                title: 'pears',
                action: () => {
                  console.log('pears')
                }
              }
            ]
          })
        })
    }.width('100%')
    .height('100%')
  }
}