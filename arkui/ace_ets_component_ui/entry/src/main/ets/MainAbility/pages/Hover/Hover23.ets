

@Entry
@Component
struct HoverExample232 {
  @State isHoverValA17: boolean = false
  @State isHoverValB17: boolean = false

  build() {
    Column({ space: 5 }) {
      Column({ space: 5 }) {
        Column(){
          Column()
            .width('150%').height('100%').backgroundColor(Color.Gray)
            .position({ x: 150, y: 0 })
            .hoverEffect(HoverEffect.Highlight)
            .onHover((isHover?: boolean, event?: HoverEvent) => {
              console.info('Scale isHover: ' + isHover as string)
              this.isHoverValB17 = isHover as boolean
            })
          Text('B' + JSON.stringify(this.isHoverValB17))
            .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverB23')
        }
          .width('60%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean, event?: HoverEvent) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA17 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA17))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverA23')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}