// xxx.ets
@Entry
@Component
struct GestureReject {
  @State message: string = '';

  build() {
    Column() {
      Row({ space: 20 }) {
        Text(this.message).width(100).height(40).backgroundColor(Color.Pink)
        Text('GestureReject').fontSize(28).id("GestureReject")
      }.margin(20)
    }
    .width('100%')
    .height(200)
    .borderWidth(2)
    .onDragStart(() => {
      this.message = 'drag'
      console.log("Drag start.")
    })
    .gesture(
    TapGesture()
      .tag("tap1")// 设置点击手势标志
    )
    .gesture(
    LongPressGesture()
      .tag("longPress1")// 设置长按手势标志
      .onAction(() => {
        this.message = 'longPress'
      })
    )
    .gesture(
    SwipeGesture()
      .tag("swipe1")// 设置滑动手势标志
    )
    .gesture(
    PanGesture()
      .tag("pan1")// 设置拖动手势标志
    )
    .onGestureJudgeBegin((gestureInfo: GestureInfo, event: BaseGestureEvent) => {
      // 若该手势类型为长按手势，转换为长按手势事件
      if (gestureInfo.type == GestureControl.GestureType.LONG_PRESS_GESTURE) {
        let longPressEvent = event as LongPressGestureEvent;
        console.log("repeat " + longPressEvent.repeat)
      }
      // 若该手势类型为滑动手势，转换为滑动手势事件
      if (gestureInfo.type == GestureControl.GestureType.SWIPE_GESTURE) {
        let swipeEvent = event as SwipeGestureEvent;
        console.log("angle " + swipeEvent.angle)
      }
      // 若该手势类型为拖动手势，转换为拖动手势事件
      if (gestureInfo.type == GestureControl.GestureType.PAN_GESTURE) {
        let panEvent = event as PanGestureEvent;
        console.log("velocity " + panEvent.velocity)
      }
      // 自定义判定标准
      if (gestureInfo.type == GestureControl.GestureType.DRAG) {
        // 返回 REJECT 会使拖动手势失败
        return GestureJudgeResult.REJECT;
        this.message = 'GestureJudgeResult.REJECT'
      } else if (gestureInfo.tag == 'longPress1' && event.fingerList.length > 0 && event.fingerList[0].localY < 100) {
        // 返回 CONTINUE 将保持系统判定。
        return GestureJudgeResult.CONTINUE;
        this.message = 'GestureJudgeResult.CONTINUE'
      }
      return GestureJudgeResult.CONTINUE;
    })
  }
}