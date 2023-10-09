import prompt from '@ohos.prompt'
// xxx.ets
@Entry
@Component
struct PromptExampleA {
  build() {
    Column({ space: 5 }) {
      Button('prompt按esc弹窗逐层退出').key('Prompt_Dialog_A')
        .onClick(() => {
          prompt.showDialog({
            title: 'Title Info',
            message: 'Message Info',
            buttons: [
              {
                text: 'button1',
                color: '#000000'
              },
              {
                text: 'button2',
                color: '#000000'
              }
            ],
          })
          prompt.showDialog({
            title: 'Title Info',
            message: 'Message Info',
            buttons: [
              {
                text: 'button1',
                color: '#000000'
              },
              {
                text: 'button2',
                color: '#000000'
              }
            ],
          })
        }).backgroundColor(0x317aff)
    }.width('100%').margin({ top: 100 })
  }
}