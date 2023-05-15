@Component
export struct NavigationView {
  private arr: number[] = [0, 1, 2, 3]
  @State isActive: boolean = false
  @State dex: number = 0

  build() {
    Navigation() {
      List({ space: 12, initialIndex: 0 }) {
        ForEach(this.arr, (item: number, index: number) => {
          ListItem() {
            NavRouter() {
              Row() {
                Image($r('app.media.icon')).width(30).height(30).borderRadius(30).margin({ left: 3, right: 10 })
                Text(`NavRouter${item + 1}`)
                  .fontSize(22)
                  .fontWeight(500)
                  .textAlign(TextAlign.Center)
              }
              .width(180)
              .height(72)
              .backgroundColor(this.dex === index ? '#ccc' : '#fff')
              .borderRadius(24)

              NavDestination() {
                Text(`我是NavDestination第${item + 1}页内容`).fontSize(50)
                Flex({ direction: FlexDirection.Row }) {
                  Row() {
                    Image($r('app.media.icon')).width(40).height(40).borderRadius(40).margin({ right: 15 })
                    Text('今天共有七节课').fontSize(30)
                  }.padding({ left: 15 })
                }
              }.backgroundColor('#ccc')
              .title(`NavDestination${item + 1}`)
            }.onStateChange((isActivated: boolean) => {
              console.info("isActivated = " + isActivated);
              this.dex = index
            })
          }
        }, item => item)
      }
      .height('100%')
      .width('100%')
      .margin({ top: 12, left: 12 })
    }
    .mode(NavigationMode.Split)
    .hideTitleBar(true)
    .hideToolBar(true)
  }
}