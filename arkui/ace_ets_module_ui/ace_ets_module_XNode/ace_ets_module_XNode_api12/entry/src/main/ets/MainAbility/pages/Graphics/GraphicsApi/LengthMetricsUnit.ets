import { LengthMetricsUnit, LengthMetrics} from '@ohos.arkui.node'

@Entry
@Component
struct LengthMetricsUnitDemo {
  @State length: LengthMetricsUnit = LengthMetricsUnit.PX
  private settings: RenderingContextSettings = new RenderingContextSettings(true);
  private contextPX: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings, this.length);
  private contextVP: CanvasRenderingContext2D = new CanvasRenderingContext2D(this.settings);
  @State value: string = ""

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text(this.value)
        .id("LengthMetricsUnit")
      Canvas(this.contextPX)
        .width('100%')
        .height(150)
        .backgroundColor('#ffff00')
        .onReady(() => {
          this.contextPX.fillRect(10,10,100,100)
          this.contextPX.clearRect(10,10,50,50)
          this.value = JSON.stringify(this.length)
        })

      Canvas(this.contextVP)
        .width('100%')
        .height(150)
        .backgroundColor('#ffff00')
        .onReady(() => {
          this.contextVP.fillRect(10,10,100,100)
          this.contextVP.clearRect(10,10,50,50)
        })
    }
    .width('100%')
    .height('100%')
  }
}