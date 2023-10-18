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

var hasSoBundleName = "com.example.quickfixassistsoapp"
var noSoBundleName = "com.example.quickfixassistapp"

@Entry
@Component
struct Index {
  @State message: string = 'Hello World'
  build() {
    Row() {
      List(){
        ListItem(){
          Column() {
            Text(" ")
            Button('Revoke_0100')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_0200')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_0300')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(hasSoBundleName);
              })
            Text(" ")
            Button('Revoke_0400')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(hasSoBundleName);
              })
            Text(" ")
            Button('Revoke_0500')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_0600')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_0700')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(hasSoBundleName);
              })
            Text(" ")
            Button('Revoke_0800')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(hasSoBundleName);
              })
            Text(" ")
            Button('Revoke_0900')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_1000')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_1900')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_2000')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback(noSoBundleName);
              })
            Text(" ")
            Button('Revoke_2100')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise("com.ohos.XXXXX");
              })
            Text(" ")
            Button('Revoke_2200')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback("com.ohos.XXXXX");
              })
            Text(" ")
            Button('Revoke_2300')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Promise("com.example.demolib");
              })
            Text(" ")
            Button('Revoke_2400')
              .fontSize(25)
              .fontWeight(FontWeight.Bold)
              .onClick(() => {
                globalThis.revokeQuickFixTest_Callback("com.example.demolib");
              })
          }
          .width('100%')

        }
      }
      .edgeEffect(EdgeEffect.Spring)
      .margin({top:5})


    }
    .height('100%')
  }
}