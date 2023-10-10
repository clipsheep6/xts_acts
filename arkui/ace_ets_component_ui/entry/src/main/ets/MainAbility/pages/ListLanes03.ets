
@Entry
@Component
struct ListLanes03 {
  private arr: number[] = [0, 1]
  @State listDirection: Axis = Axis.Vertical
  @State listSpace: string = '20'
  @State alignListItem: ListItemAlign = ListItemAlign.Start
  @State initialIndex: number = 0

  build() {
    Column() {
      List({ space: this.listSpace, initialIndex: this.initialIndex }) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%').height(100).fontSize(16)
              .textAlign(TextAlign.Center).borderRadius(10).backgroundColor(0xFFFFFF)
          }.key('ListLanes31_' + item)
        }, (item: string) => item)
      }
      .listDirection(this.listDirection) // 排列方向
      .edgeEffect(EdgeEffect.Spring) // 边缘效果设置为Spring
      .alignListItem(this.alignListItem)
      .lanes(2, '10vp')
      .width('100%')
      .padding(20)
      .margin({ top: 10 })

      List({ space: this.listSpace, initialIndex: this.initialIndex }) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%').height(100).fontSize(16)
              .textAlign(TextAlign.Center).borderRadius(10).backgroundColor(0xFFFFFF)
          }.key('ListLanes32_' + item)
        }, (item: string) => item)
      }
      .listDirection(this.listDirection) // 排列方向
      .edgeEffect(EdgeEffect.Spring) // 边缘效果设置为Spring
      .alignListItem(this.alignListItem)
      .lanes(2, '10fp')
      .width('100%')
      .padding(20)
      .margin({ top: 10 })

      List({ space: this.listSpace, initialIndex: this.initialIndex }) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%').height(100).fontSize(16)
              .textAlign(TextAlign.Center).borderRadius(10).backgroundColor(0xFFFFFF)
          }.key('ListLanes33_' + item)
        }, (item: string) => item)
      }
      .listDirection(this.listDirection) // 排列方向
      .edgeEffect(EdgeEffect.Spring) // 边缘效果设置为Spring
      .alignListItem(this.alignListItem)
      .lanes(2, '10lpx')
      .width('100%')
      .padding(20)
      .margin({ top: 10 })

      List({ space: this.listSpace, initialIndex: this.initialIndex }) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%').height(100).fontSize(16)
              .textAlign(TextAlign.Center).borderRadius(10).backgroundColor(0xFFFFFF)
          }.key('ListLanes34_' + item)
        }, (item: string) => item)
      }
      .listDirection(this.listDirection) // 排列方向
      .edgeEffect(EdgeEffect.Spring) // 边缘效果设置为Spring
      .alignListItem(this.alignListItem)
      .lanes(2, '10px')
      .width('100%')
      .padding(20)
      .margin({ top: 10 })

    }
    .width('100%')
    .height('100%')
    .backgroundColor(0xDCDCDC)
  }
}