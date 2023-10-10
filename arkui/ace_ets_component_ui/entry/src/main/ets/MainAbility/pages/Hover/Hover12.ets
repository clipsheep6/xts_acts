@Entry
@Component
struct HoverExample12 {
  @State isHoverValA12: boolean = false
  @State isHoverValB12: boolean = false

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text('A').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column()
          .width('100%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA12 = isHover as boolean
          })
        Text('B').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column()
          .width('50%').height('50%').backgroundColor(Color.Gray)
          .position({ x: 200, y: 200 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean, event?: HoverEvent) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValB12 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA12) + 'B' + JSON.stringify(this.isHoverValB12))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover12')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}