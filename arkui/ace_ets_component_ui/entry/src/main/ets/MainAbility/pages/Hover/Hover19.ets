
@Entry
@Component
struct HoverExample192 {
  @State isHoverValA13: boolean = false
  @State isHoverValB13: boolean = false

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text('A').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column(){
          Column()
            .key("child_hover13")
            .width('100%').height('100%').backgroundColor(Color.Gray)
            .position({ x: 0, y: 0 })
            .hoverEffect(HoverEffect.Highlight)
            .onHover((isHover?: boolean, event?: HoverEvent) => {
              console.info('Scale isHover: ' + isHover as string)
              this.isHoverValB13 = isHover as boolean
            })
          Text('B' + JSON.stringify(this.isHoverValB13))
            .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover19B')
        }
          .key("parent_hover13")
          .width('100%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA13 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA13))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover19A')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}