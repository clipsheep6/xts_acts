import { Popup, PopupButtonOptions, PopupIconOptions, PopupTextOptions } from '@ohos.arkui.advanced.Popup';

@Entry
@Component
struct PopupExample {
  @State value: string = ""
  @State mes: PopupTextOptions = {
    text: 'This is the message',
    fontSize: 15,
    fontColor: Color.Black,
  } as PopupTextOptions
  build() {
    Row() {
      Column({ space: 12 }) {
        Text(this.value)
          .id("message")
        Button("click to show value")
          .id("btn")
          .onClick(() => {
            if (this.mes.text) {
              this.value = "message"
            }
          })
        // popup 自定义高级组件
        Popup({
          //PopupIconOptions 类型设置图标内容
          icon: {
            image: $r('app.media.icon'),
            width: 32,
            height: 32,
            fillColor: Color.White,
            borderRadius: 16,
          } as PopupIconOptions,
          // PopupTextOptions 类型设置文字内容
          title: {
            text: 'This is a popup with PopupOptions',
            fontSize: 20,
            fontColor: Color.Black,
            fontWeight: FontWeight.Normal,

          } as PopupTextOptions,
          //PopupTextOptions 类型设置文字内容
          message: this.mes,
          showClose: true,
          onClose: () => {
            console.info('close Button click')
            this.value = "close"
          },
          // PopupButtonOptions 类型设置按钮内容
          buttons: [{
            text: 'confirm',
            action: () => {
              console.info('confirm button click')
              this.value = "confirm"
            },
            fontSize: 15,
            fontColor: Color.Black,
          },
            {
              text: 'cancel',
              action: () => {
                console.info('cancel button click')
                this.value = "cancel"
              },
              fontSize: 15,
              fontColor: Color.Black,
            },] as [PopupButtonOptions?, PopupButtonOptions?],
        })
      }.width("100%")
    }.height("100%")
  }
}