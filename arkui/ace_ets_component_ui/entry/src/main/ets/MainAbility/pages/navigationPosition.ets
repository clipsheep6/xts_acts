// xxx.ets
import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct navigationPosition {
  private arr: number[] = [0, 1, 2, 3]
  @State isActive: boolean = false
  @State dex: number = 0
  @State navBarWidth: number = 240
  messageManager:MessageManager = new MessageManager()
  @State navMode: NavigationMode[] = [NavigationMode.Split, NavigationMode.Stack, NavigationMode.Auto]
  @State navModeIndex: number = 0
  @State hideNavBar: boolean = false
  @State minContentWidth: number = 360
  @State navBarPosition: NavBarPosition[] = [NavBarPosition.Start, NavBarPosition.End]
  @State navBarPositionIndex: number = 0


  onPageShow() {
    console.info('navigationPosition  onPageShow');
    globalThis.value = {
      name:'messageManager',message:this.messageManager
    }
    let callback:Callback = (message:any) => {
      console.error('message = ' + message.name + "--" + message.value);
      if (message.name == 'navBarWidth') {
        this.navBarWidth = message.value;
      }
      if (message.name == 'navModeIndex') {
        this.navModeIndex = message.value;
      }
      if (message.name == 'hideNavBar') {
        this.hideNavBar = message.value;
      }
      if (message.name == 'minContentWidth') {
        this.minContentWidth = message.value;
      }
      if (message.name == 'navBarPositionIndex') {
        this.navBarPositionIndex = message.value;
      }
    }
    this.messageManager.registerCallback(callback);
  }

  build() {
    Column() {
      Navigation() {
        List({ space: 12, initialIndex: 0 }) {
          ForEach(this.arr, (item: number, index: number = 0) => {
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
                this.dex = index
              })
            }
          }, (item:number) => item.toString())
        }
        .height('100%')
        .margin({ top: 12, left: 12 })
      }
      .key('navigationPosition')
      .navBarPosition(this.navBarPosition[this.navBarPositionIndex])
      .hideNavBar(this.hideNavBar)
      .hideTitleBar(true)
      .hideToolBar(true)
    }.height('100%')
  }
}