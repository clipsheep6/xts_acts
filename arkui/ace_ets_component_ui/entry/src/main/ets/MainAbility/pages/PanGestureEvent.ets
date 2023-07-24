@Entry
@Component
struct PanGestureEvent {
  @State velocityX: number = 0
  @State velocityY: number = 0
  @State velocity: number = 0
  private panOption: PanGestureOptions = new PanGestureOptions({ direction: PanDirection.Left | PanDirection.Right })

  build() {
    Column() {
      Column() {
        Text(this.velocityX.toString()).id("velocityX")
        Text(this.velocityY.toString()).id("velocityY")
        Text(this.velocity.toString()).id("velocity")
      }
      .height("90%")
      .width("90%")
      .padding(20)
      .border({ width: 3 })
      .margin(50)
      // 左右拖动触发该手势事件
      .gesture(
      PanGesture(this.panOption)
        .onActionUpdate((event: GestureEvent) => {
          this.velocityX = event.velocityX
          this.velocityY = event.velocityY
          this.velocity = event.velocity
        })
      )
    }
  }
}