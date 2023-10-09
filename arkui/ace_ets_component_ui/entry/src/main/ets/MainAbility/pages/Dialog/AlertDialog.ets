// xxx.ets
@Entry
@Component
struct AlertDialogExampleA {
  build() {
    Column({ space: 5 }) {
      Button('AlertDialog按esc弹窗逐层退出').key('Alert_Dialog_A')
        .onClick(() => {
          AlertDialog.show(
            {
              title: 'title',
              subtitle: 'subtitle',
              message: 'text',
              autoCancel: true,
              alignment: DialogAlignment.Bottom,
              buttonDirection: DialogButtonDirection.HORIZONTAL,
              cancel: () => {
                console.info('Closed callbacks')
              }
            }
          )
          AlertDialog.show(
            {
              title: 'title',
              subtitle: 'subtitle',
              message: 'text',
              autoCancel: true,
              alignment: DialogAlignment.Bottom,
              buttonDirection: DialogButtonDirection.HORIZONTAL,
              cancel: () => {
                console.info('Closed callbacks')
              }
            }
          )
        }).backgroundColor(0x317aff)
    }.width('100%').margin({ top: 200 })
  }
}