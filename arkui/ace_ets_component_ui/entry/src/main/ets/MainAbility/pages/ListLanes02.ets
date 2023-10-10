// xxx.ets
import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct ListLanes02 {
  private arr: number[] = [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
  listGutter: Dimension = '0vp'
  @State listDirection: Axis = Axis.Vertical
  @State listSpace: string = '20'
  @State alignListItem: ListItemAlign = ListItemAlign.Start
  @State initialIndex: number = 0
  messageManager:MessageManager = new MessageManager()

  onPageShow() {
    console.info('ListLanes  onPageShow');
    globalThis.value = {
      name:'messageManager',message:this.messageManager
    }
    let callback:Callback = (message:any) => {
      console.error('message = ' + message.name + "--" + message.value);
      if (message.name == 'listGutter') {
        this.listGutter = message.value;
      }
      if (message.name == 'listDirection') {
        this.listDirection = message.value;
      }
      if (message.name == 'listSpace') {
        this.listSpace = message.value;
      }
      if (message.name == 'initialIndex') {
        this.initialIndex = message.value;
      }

    }
    this.messageManager.registerCallback(callback);
  }

  build() {
    Column() {
      List({ space: this.listSpace, initialIndex: this.initialIndex }) {
        ForEach(this.arr, (item: number) => {
          ListItem() {
            Text('' + item)
              .width('100%').height(100).fontSize(16)
              .textAlign(TextAlign.Center).borderRadius(10).backgroundColor(0xFFFFFF)
          }.key('ListItem02_' + item).borderWidth(1)
        }, (item: string) => item)
      }
      .key('ListLanesKey02')
      .listDirection(this.listDirection) // 排列方向
      .alignListItem(this.alignListItem)
      .borderWidth(1)
      .lanes(3,$r('app.string.gutter_10'))
      .width('100%')
    }
    .width('100%')
    .height('100%')
    .backgroundColor(0xDCDCDC)
  }
}