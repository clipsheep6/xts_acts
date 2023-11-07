@Entry
@Component
struct HoverExample25 {
  @State isHoverVal25: string = 'unhover'
  @State color: ResourceColor = Color.Blue

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text(this.isHoverVal25)
          .key("hover25")
          .fontSize(50)
          .backgroundColor(this.color)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            if(isHover){
              this.isHoverVal25 = 'onhover'
              this.color = Color.Pink
            }
          })
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}