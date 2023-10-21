// xxx.ets
@Entry
@Component
struct GridExample {
  @State Number: String[] = ['0', '1', '2', '3', '4']
  scroller: Scroller = new Scroller()

  build() {
    Column({ space: 5 }) {
      Grid(this.scroller) {
        ForEach(this.Number, (day: string) => {
          ForEach(this.Number, (day: string) => {
            GridItem() {
              Text(day)
                .fontSize(16)
                .backgroundColor(0xF9CF93)
                .width('100%')
                .height(80)
                .textAlign(TextAlign.Center)
                .key('GridText' + day)
            }
          }, (day: string) => day)
        }, (day: string) => day)
      }.key('scroll')
      .columnsTemplate('1fr')
      .layoutDirection(GridDirection.Column)
      .columnsGap(10)
      .rowsGap(10)
      .friction(0.6)
      .height(80)
      .edgeEffect(EdgeEffect.Spring)
      .scrollBar(BarState.On)
      .onScrollIndex((first: number) => {
        console.info(first.toString())
      })
      .onScrollBarUpdate((index: number, offset: number) => {
        return {totalOffset: (index / 5) * (80 + 10) - offset, totalLength: 80 * 5 + 10 * 4}
      })
      .width('90%')
      .backgroundColor(0xFAEEE0)

      Button('滚动方向为纵向 scrollToIndex_-3')
        .height('5%')
        .id('Grid1')
        .onClick(() => {
          this.scroller.scrollToIndex(-3);
        })
        // .margin({top: 110,left: 20})

      Button('滚动方向为纵向 scrollToIndex_3000')
        .height('5%')
        .id('Grid2')
        .onClick(() => {
          this.scroller.scrollToIndex(3000);
        })
        // .margin({top: 270,left: 20})

      Button('滚动方向为纵向 scrollToIndex_undefined')
        .height('5%')
        .id('Grid3')
        .onClick(() => {
          // @ts-ignore
          this.scroller.scrollToIndex(undefined);
        })
        // .margin({top: 330,left: 20})

      Button('滚动方向为纵向 scrollToIndex_null')
        .height('5%')
        .id('Grid4')
        .onClick(() => {
          this.scroller.scrollToIndex(null);
        })
        // .margin({top: 390,left: 20})
    }.width('100%').margin({ top: 5 })
  }
}