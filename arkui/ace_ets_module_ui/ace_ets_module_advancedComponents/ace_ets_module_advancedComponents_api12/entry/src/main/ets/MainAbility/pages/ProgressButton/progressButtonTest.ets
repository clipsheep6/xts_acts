import { ProgressButton } from '@ohos.arkui.advanced.ProgressButton';

@Entry
@Component
struct progressButtonTest {
  @State halfProgress: number = 0
  @State smallProgress: number = 0
  @State bigProgress: number = 0
  @State textState1: string = ''
  @State isRunning1: boolean = false
  @State enableState1: boolean = true
  @State progressState: Visibility = Visibility.None
  @State ButtonState: Visibility = Visibility.Visible
  @State buttonText: string = '下载'
  @State buttonEnable: boolean = true
  @State isEnd: boolean = false
  build() {
    Column({space: 20}) {
      Text('下载按钮')
      Button(this.buttonText)
        .fontSize($r('sys.float.ohos_id_text_size_button3'))
        .fontWeight(FontWeight.Medium)
        .fontColor($r('sys.color.ohos_id_color_emphasize'))
        .padding({left: 8, right: 8})
        .opacity(this.buttonEnable? 1: 0.4)
        .enabled(this.buttonEnable)
        .height(28)
        .borderRadius(14)
        .width(60)
        .backgroundColor($r("sys.color.ohos_id_color_button_normal"))
        .onClick(() => {
          if(!this.isEnd) {
            this.buttonText = '等待中'
            let timer1 = setInterval(() => {
              this.progressState = Visibility.Visible
              this.ButtonState = Visibility.None
              clearInterval(timer1)
              this.isRunning1 = true
              let timer = setInterval(() => {
                if (this.isRunning1) {
                  if (this.halfProgress === 100) {
                    this.isEnd = true
                  } else {
                    this.halfProgress++
                    if (this.halfProgress === 100) {
                      this.textState1 = '安装中'
                      this.enableState1 = false
                      this.ButtonState = Visibility.Visible
                      this.progressState = Visibility.None
                      this.buttonEnable = false
                      this.buttonText = '安装中'
                      let timer2 = setInterval(() => {
                        this.buttonText = '打开'
                        this.buttonEnable = true
                        this.isEnd = true
                        clearInterval(timer2)
                      }, 2000)
                    }
                    console.info('x progress++ = ' + this.halfProgress)
                  }
                } else {
                  console.info('x isRunning = ' + false)
                  clearInterval(timer)
                }
              }, 100)
            }, 2000)
          }
        }).visibility(this.ButtonState)
      ProgressButton({
        progress: this.halfProgress,
        progressButtonWidth: "60",
        content: this.textState1,
        enable: this.enableState1,

        clickCallback: () => {
          if (this.isRunning1 && this.halfProgress < 100) {
            this.textState1 = '继续'
          }
          this.isRunning1 = !this.isRunning1
          let timer = setInterval(() => {

            if (this.isRunning1) {
              if (this.halfProgress === 100) {
              } else {
                this.halfProgress++
                if (this.halfProgress === 100) {
                  this.textState1 = '安装中'
                  this.enableState1 = false
                  this.ButtonState = Visibility.Visible
                  this.progressState = Visibility.None
                  this.buttonEnable = false
                  this.buttonText = '安装中'
                  let timer2 = setInterval(() => {
                    this.buttonText = '打开'
                    this.buttonEnable = true
                    this.isEnd = true
                    clearInterval(timer2)
                  },2000)
                }
                console.info('x progress++ = ' + this.halfProgress)
              }
            } else {
              console.info('x isRunning = ' + false)
              clearInterval(timer)
            }
          }, 100)
        }
      }).visibility(this.progressState)
    }.alignItems(HorizontalAlign.Center).width('100%')
  }
}