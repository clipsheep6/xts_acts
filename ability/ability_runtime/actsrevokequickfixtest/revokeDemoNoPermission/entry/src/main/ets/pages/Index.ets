function showTest(title: string, str: string) {
  AlertDialog.show({
    title: title,
    message: str,
    confirm: {
      value: 'ok',
      action: () => {
        console.info('Button-clicking callback');
      }
    },
    cancel: () => { console.info('Closed callbacks'); }
  })
}
globalThis.showTest = showTest

var hasSoBundleName = "com.ohos.quickfix"
var noSoBundleName = "com.example.myapplication"


@Entry
@Component
struct Index {
  @State message: string = 'Hello World'

  build() {
    Row() {
      Column() {
        Button('Revoke_1100')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.revokeQuickFixTest_Promise(noSoBundleName);
          })
        Text(" ")
        Button('Revoke_1200')
          .fontSize(30)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            globalThis.revokeQuickFixTest_Callback(hasSoBundleName);
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}