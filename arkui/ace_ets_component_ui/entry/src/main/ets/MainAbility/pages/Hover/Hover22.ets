

@Entry
@Component
struct HoverExample222 {
  @State isHoverValA16: boolean = false
  @State isHoverValB16: boolean = false

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
              this.isHoverValB16 = isHover as boolean
            })
          Text('B' + JSON.stringify(this.isHoverValB16))
            .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverB22')
        }
          .width('60%').height('100%').backgroundColor(Color.Green)
          .position({ x: 0, y: 0 })
          .hoverEffect(HoverEffect.Highlight)
          .onHover((isHover?: boolean) => {
            console.info('Scale isHover: ' + isHover as string)
            this.isHoverValA16 = isHover as boolean
          })
        Text('A' + JSON.stringify(this.isHoverValA16))
          .fontSize(20).margin(15).position({ x: 100, y: 100 }).key('hoverA22')
      }
      .hoverEffect(HoverEffect.None)
      .width('100%').height('100%').border({ width: 1 })

    }
  }
}