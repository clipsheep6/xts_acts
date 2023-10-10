@Entry
@Component
struct HoverExample4 {
  @State isHoverValA4: boolean = false
  @State isHoverValB4: boolean = false

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text('A').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column()
          .width('60%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA4 = isHover as boolean
          })
        Text('B').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column()
          .width('100%').height('100%').backgroundColor(Color.Gray)
          .position({ x: 150, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValB4 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA4) + 'B' + JSON.stringify(this.isHoverValB4))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover4')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })
    }
  }
}