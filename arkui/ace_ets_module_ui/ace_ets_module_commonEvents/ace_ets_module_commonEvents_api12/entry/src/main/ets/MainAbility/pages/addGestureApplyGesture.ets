
class MyButtonModifier implements GestureModifier {
  supportDoubleTap: boolean = true
  value: string = '666'

  applyGesture(event: UIGestureEvent): void {
    if (this.supportDoubleTap) {
      event.addGesture(
        new TapGestureHandler({ count: 2, fingers: 1 })
          .tag("aaa")
          .onAction((event: GestureEvent) => {
            console.log("button tap " +JSON.stringify(event.repeat))
            return this.value
          }),
        GesturePriority.PRIORITY
      )
    } else {
      event.addGesture(
        new PanGestureHandler()
          .onActionStart(()=>{
            console.log("Pan start");
            return 'Pan start'
          })
      )
    }
  }
}

@Entry
@Component
struct applyGesture1 {
  @State modifier: MyButtonModifier = new MyButtonModifier()

  build() {
    Row() {
      Column() {
        Button(this.modifier.value).margin({bottom:20}).id('gestureText1')
        Column()
          .id('gestureColumn')
          .gestureModifier(this.modifier)
          .width(200)
          .height(200)
          .backgroundColor(Color.Blue)
      }
      .width('100%')
    }
    .height('100%')
  }
}