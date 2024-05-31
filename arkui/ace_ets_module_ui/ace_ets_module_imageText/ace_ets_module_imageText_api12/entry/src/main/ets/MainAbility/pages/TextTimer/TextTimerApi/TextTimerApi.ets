// xxx.ets
class MyTextTimerModifier implements ContentModifier<TextTimerConfiguration> {
  constructor() {
  }
  applyContent() : WrappedBuilder<[TextTimerConfiguration]>
  {
    return wrapBuilder(buildTextTimer)
  }
}

@Builder function buildTextTimer(config: TextTimerConfiguration) {
  Column() {
    Text(config.started + '')
      .id('started')
    Stack({ alignContent: Alignment.Center }) {
      Circle({ width: 150, height: 150 }).fill(config.started ? (config.isCountDown ? 0xFF232323 : 0xFF717171) : 0xFF929292)
      Column(){
        Text(
          (config.isCountDown ? "剩余" : "已经过去了") + (config.isCountDown?
            (Math.max((config.count - config.elapsedTime) / 1000,0)).toFixed(1) + "/" + (config.count / 1000).toFixed(0)
            :((config.elapsedTime / 1000).toFixed(0))
          ) + "秒"
        ).fontColor(Color.White)
      }
    }
  }
}

@Entry
@Component
struct TextTimerIndex {
  @State count: number = 10000
  @State myTimerModifier: MyTextTimerModifier = new MyTextTimerModifier()
  countDownTextTimerController: TextTimerController = new TextTimerController()
  countUpTextTimerController: TextTimerController = new TextTimerController()

  build() {
    Row() {
      Column() {
        TextTimer({isCountDown: false, controller: this.countUpTextTimerController})
          .contentModifier(this.myTimerModifier)
          .onTimer((utc: number, elapsedTime: number) => {
            console.info('textTimer onTimer utc is：' + utc + ', elapsedTime: ' + elapsedTime)
          })
          .margin(10)
        Row() {
          Button("start").onClick(()=>{
            this.countDownTextTimerController.start()
            this.countUpTextTimerController.start()
          }).margin(10).id("start")
          Button("pause").onClick(()=>{
            this.countDownTextTimerController.pause()
            this.countUpTextTimerController.pause()
          }).margin(10)
          Button("reset").onClick(()=>{
            this.countDownTextTimerController.reset()
            this.countUpTextTimerController.reset()
          }).margin(10)
        }.margin(20)
      }.width('100%')
    }.height('100%')
  }
}