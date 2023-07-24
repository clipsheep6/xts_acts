@Entry
@Component
struct ClickExample {
  @State displayX: string = 'displayX'
  @State displayY: string = 'displayY'
  @State windowX: string = 'windowX'
  @State windowY: string = 'windowY'
  @State intentionCode: string = 'intentionCode'

  build() {
    Column() {
      Text(this.displayX).id("displayX")
      Text(this.displayY).id("displayY")
      Text(this.windowX).id("windowX")
      Text(this.windowY).id("windowY")

      Text(this.intentionCode).id("intentionCode")
      Row({ space: 20 }) {
        Button('Click').width(100).height(40).id("Button_click")
          .onClick((event: ClickEvent) => {
            this.displayX = "onClick: " + event.displayX
            this.displayY = "onClick: " + event.displayY
            this.windowX = "onClick: " + event.windowX
            this.windowY = "onClick: " + event.windowY
          })
          .onTouch((event: TouchEvent) => {
            this.displayX = "onTouch: " + event.touches[0].displayX
            this.displayY = "onTouch: " + event.touches[0].displayY
            this.windowX = "onTouch: " + event.touches[0].windowX
            this.windowY = "onTouch: " + event.touches[0].windowY
          })
          .onKeyEvent((event: KeyEvent) => {
            this.intentionCode = "KeyEvent: " + event.intentionCode
          })

        Button('Mouse').width(100).height(40).id("Mouse_click")
          .onClick((event: MouseEvent) => {
            this.displayX = "MouseEvent: " + event.displayX
            this.displayY = "MouseEvent: " + event.displayY
            this.windowX = "MouseEvent: " + event.windowX
            this.windowY = "MouseEvent: " + event.windowY
          })
      }.margin(20)
    }.width('100%')
  }
}