// xxx.ets
@Entry
@Component
struct GestureLongPressGesture {
  @State count: number = 0

  build() {
    Column() {
      Text('GestureLongPressGesture').fontSize(28).id("GestureLongPressGesture")
        // 单指长按文本触发该手势事件
        .gesture(
        LongPressGesture({ repeat: true })
          // 由于repeat设置为true，长按动作存在时会连续触发，触发间隔为duration（默认值500ms）
          .onAction((event?: GestureEvent) => {
            if (event && event.repeat) {
              this.count++
            }
          })
            // 长按动作一结束触发
          .onActionEnd(() => {
            this.count = 0
          })
        )
    }
    .height(200)
    .width(300)
    .padding(20)
    .border({ width: 3 })
    .margin(30)
  }
}