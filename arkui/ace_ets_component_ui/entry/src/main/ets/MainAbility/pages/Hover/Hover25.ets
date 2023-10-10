@Entry
@Component
struct HoverExample25 {
  @State isHoverVal25: boolean = false
  @State color: Color = Color.Blue

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text('hover25')
          .key("hover25")
          .width(1000).height(2000).backgroundColor(this.color)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            if(isHover){
              this.isHoverVal25 = isHover as boolean
              this.color = Color.Pink
            }
          })
        Text('onhover' + JSON.stringify(this.color) )
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover25')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}