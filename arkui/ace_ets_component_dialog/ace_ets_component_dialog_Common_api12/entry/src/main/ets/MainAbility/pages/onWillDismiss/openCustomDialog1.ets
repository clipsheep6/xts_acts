import promptAction from '@ohos.promptAction'
let customDialogId: number = 0
@Builder
function customDialogBuilder1() {
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
struct openCustomDialog1 {
  @State text: string = 'openCustomDialog1';

  build() {
    Row() {
      Column() {
        Button(this.text)
          .id("openCustomDialog1")
          .onClick(() => {
            promptAction.openCustomDialog({
              isModal: true,
              builder: customDialogBuilder1.bind(this),
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