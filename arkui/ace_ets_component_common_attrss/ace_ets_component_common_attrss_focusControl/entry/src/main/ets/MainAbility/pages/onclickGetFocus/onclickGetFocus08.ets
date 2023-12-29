// GridItem father 组件获焦
@Entry
@Component
struct onclickGetFocus08 {
  @State numbers: String[] = ['0', '1', '2', '3', '4']
  scroller: Scroller = new Scroller()
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column(){
      Grid() {
        ForEach(this.numbers, (day: string) => {
          ForEach(this.numbers, (day: string) => {
            GridItem() {
              Text(day)
                .fontSize(16)
                .backgroundColor(0xF9CF93)
                .width('100%')
                .height(50)
                .textAlign(TextAlign.Center)
                .clip(false)
            }
            .onClick(()=>{
              this.father = 'focus'
            })
          }, (day: string) => day)
        }, (day: string) => day)

      }
      .clip(false)
      .rowsGap(10)
      .width('90%')
      .backgroundColor(0xFAEEE0)
      .height(300)
      .margin(20)

      Text('father'+ this.father).key('onclickGetFocus08Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus08Text_Son')
    }
  }
}