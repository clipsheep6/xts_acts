import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct ListLanes {
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
          }.key('ListItem' + item)
        }, (item: string) => item)
      }
      .key('ListLanesKey')
      .listDirection(this.listDirection) // 排列方向
      .edgeEffect(EdgeEffect.Spring) // 边缘效果设置为Spring
      .alignListItem(this.alignListItem)
      .lanes(2,this.listGutter)
      .width('100%')
      .padding(20)
      .margin({ top: 10 })
    }
    .key('ColumnKey')
    .width('100%')
    .height('100%')
    .backgroundColor(0xDCDCDC)
  }
}