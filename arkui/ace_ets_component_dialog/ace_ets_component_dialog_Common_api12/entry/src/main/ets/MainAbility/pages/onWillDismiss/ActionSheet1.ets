@Entry
@Component
struct ActionSheet1Example {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button('Click to Show ActionSheet')
        .id("ActionSheet1")
        .onClick(() => {
          ActionSheet.show({
            title: 'ActionSheet title',
            subtitle: 'ActionSheet subtitle',
            message: 'message',
            autoCancel: true,
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
              console.log("dialog onWillDismiss")
              if (dismissDialog.reason == DismissReason.PRESS_BACK) {
                // dismissDialog.dismiss()
              }
              if (dismissDialog.reason == DismissReason.TOUCH_OUTSIDE) {
                // dismissDialog.dismiss()
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