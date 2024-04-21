@Entry
@Component
struct ListFadeOut {
  @State message: string = 'Hello World';
  private arr: number[] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]

  @Builder OverlayNode() {
    Column(){Text("This is User").fontSize(20).fontColor(Color.White)
    }.height(100)
    .width(100)
    .alignItems(HorizontalAlign.Center)
    .zIndex(21)
  }
  build() {
    Column() {
      List({ space: 25, initialIndex: 0}) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%')
              .height(60)
              .fontSize(26)
              .fontColor(Color.Blue)
              .textAlign(TextAlign.Center)
              .borderRadius(10)
              .backgroundColor(Color.White)
          }
        }, (item: string) => item)
      }
      .key('list')
      .fadingEdge(true)
      .width('100%')
      .scrollBar(BarState.Off)
      .blendMode(BlendMode.SRC_OVER, BlendApplyType.OFFSCREEN)
    }
    .alignItems(HorizontalAlign.Center)
    .width('100%')
    .height('100%')
    .backgroundImageSize({width: '100%',
      height: '100%'}).padding({ top: 10 })
    .overlay(this.OverlayNode(),{align:Alignment.Center})
  }
}