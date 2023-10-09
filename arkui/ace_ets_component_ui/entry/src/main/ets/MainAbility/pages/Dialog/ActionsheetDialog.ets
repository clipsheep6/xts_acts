@Entry
@Component
struct ActionSheetExampleA {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button('ActionSheet按esc弹窗逐层退出').key('Actionsheet_dialog_A')
        .onClick(() => {
          ActionSheet.show({
            title: 'ActionSheet title',
            subtitle: 'ActionSheet subtitle',
            message: 'message',
            autoCancel: true,
            sheets: [
              {
                title: 'apples',
                action: () => {
                  console.log('apples')
                }
              },
            ]
          })
          ActionSheet.show({
            title: 'ActionSheet title',
            subtitle: 'ActionSheet subtitle',
            message: 'message',
            autoCancel: true,
            sheets: [
              {
                title: 'apples',
                action: () => {
                  console.log('apples')
                }
              },
            ]
          })
        })
    }.width('100%')
    .height('100%')
  }
}