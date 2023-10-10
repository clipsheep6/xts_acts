
@Entry
@Component
struct HoverExample202 {
  @State isHoverValA14: boolean = false
  @State isHoverValB14: boolean = false

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Text('A').fontSize(20).fontColor(Color.Black).width('100%').position({ x: 0, y: 0 })
        Column(){
          Column()
            .width('100%').height('100%').backgroundColor(Color.Gray)
            .position({ x: 150, y: 0 })
            .hoverEffect(HoverEffect.Highlight)
            .onHover((isHover?: boolean, event?: HoverEvent) => {
              console.info('Scale isHover: ' + isHover as string)
              this.isHoverValB14 = isHover as boolean
            })
          Text('B' + JSON.stringify(this.isHoverValB14))
            .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverB20')
        }
          .width('100%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA14 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA14))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverA20')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}