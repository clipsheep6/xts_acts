import promptAction from '@ohos.promptAction'
let customDialogId: number = 0
@Builder
function customDialogBuilder2() {
  Column() {
    Text('Custom dialog Message').fontSize(10)
    Row() {
      Button("确认").onClick(() => {
        promptAction.closeCustomDialog(customDialogId)
      })
      Blank().width(50)
      Button("取消").onClick(() => {
        promptAction.closeCustomDialog(customDialogId)
      })
    }
  }.height(200).padding(5)
}

@Entry
@Component
struct openCustomDialog2 {
  @State text: string = 'openCustomDialog2';

  build() {
    Row() {
      Column() {
        Button(this.text)
          .id("openCustomDialog2")
          .onClick(() => {
            promptAction.openCustomDialog({
              isModal: true,
              showInSubWindow: true,
              builder: customDialogBuilder2.bind(this),
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
            }).then((dialogId: number) => {
              customDialogId = dialogId
            })
          })

      }
      .width('100%')
    }
    .height('100%')
  }
}