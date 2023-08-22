import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct DialogPage {
  @State title: string = 'title'
  @State message: string = "This is the message of alertdialog"
  @State autoCancel: boolean = false
  @State button_value: string = "button"
  @State buttonName: string = 'OneButton'
  @State buttonName1: string = 'Button'
  messageManager: MessageManager = new MessageManager()

  onPageShow() {
    console.info('DialogPage onPageShow')
    globalThis.value = {
      name: 'messageManager', message: this.messageManager
    }

    let callback: Callback = (message: any) => {
      console.error('message = ' + message.name + "--" + message.value)
      if (message.name == 'autoCancel') {
        this.autoCancel = message.value
      }
    }
    this.messageManager.registerCallback(callback)
  }

  build() {
    Column({ space: 10 }) {
      Button(this.buttonName)
        .key('button')
        .onClick(() => {
          this.buttonName = 'OneButton:succ'
          this.showOneButton()
        }).backgroundColor(0x317aff)


      Button(this.buttonName1)
        .onClick(() => {
          this.showTwoButton()
        }).backgroundColor(0x317aff)

    }.width("100%").margin({ top: 30 })
  }


  private showTwoButton() {
    AlertDialog.show(
      {
        title: this.title,
        message: this.message,
        autoCancel: this.autoCancel,

        buttons: [
          {
            value: this.button_value,
            fontColor: 0xffffff,
            backgroundColor: 0x317aff,
            action: () => {
              this.button_value = "OneButton3:succ"
              console.info("Button AlertDialog Button-Clicking callback")
            }
          },

          {
            value: this.button_value,
            fontColor: 0xffffff,
            backgroundColor: 0x317aff,
            action: () => {
              this.button_value = "OneButton3:succ"
              console.info("Button AlertDialog Button-Clicking callback")
            }
          },

        ],


        cancel: () => {
          console.info('Closed callbacks')
        }
      }
    )
  }

  private showOneButton() {
    AlertDialog.show(
      {
        title: this.title,
        message: this.message,
        autoCancel: this.autoCancel,

        buttons: [
          {
            value: this.button_value,
            fontColor: 0xffffff,
            backgroundColor: 0x317aff,
            action: () => {
              this.button_value = "OneButton2:succ"
              console.info("Button AlertDialog Button-Clicking callback")
            }
          },
        ],
        cancel: () => {
          console.info('Closed callbacks')
        }
      }
    )
  }
}