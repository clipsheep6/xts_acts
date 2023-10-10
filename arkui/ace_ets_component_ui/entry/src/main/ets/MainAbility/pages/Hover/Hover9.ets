@Entry
@Component
struct HoverExample9 {
  @State isHoverValA9: boolean = false
  @State isHoverValB9: boolean = false

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
            this.isHoverValA9 = isHover as boolean
          })
        Text('B').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column()
          .width('100%').height('100%').backgroundColor(Color.Gray)
          .position({ x: 150, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean, event?: HoverEvent) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValB9 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA9) + 'B' + JSON.stringify(this.isHoverValB9))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hover9')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })
      // .onHover((isHover?: boolean) => {
      //   console.info('HoverEffect.None')
      //   this.isHoverVal2 = isHover as boolean
      // })
    }
  }
}