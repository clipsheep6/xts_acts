// xxx.ets
import {MessageManager,Callback} from '../utils/MessageManager';

@Entry
@Component
struct GridRowCol {
  @State Number: String[] = ['0', '1', '2', '3', '4']
  scroller: Scroller = new Scroller()
  @State columnsTemplate: string = '1fr 1fr 1fr'
  messageManager:MessageManager = new MessageManager()

  onPageShow() {
    console.info('navigationPosition  onPageShow');
    globalThis.value = {
      name:'messageManager',message:this.messageManager
    }
    let callback:Callback = (message:any) => {
      console.error('message = ' + message.name + "--" + message.value);
      if (message.name == 'columnsTemplate') {
        this.columnsTemplate = message.value;
      }

    }
    this.messageManager.registerCallback(callback);
  }

  build() {
    Column({ space: 5 }) {
      Grid() {
        ForEach(this.Number, (day: string ,index1:number|undefined) => {
          ForEach(this.Number, (day: string ,index2:number|undefined) => {
            GridItem() {
              Text(day)
                .fontSize(16)
                .backgroundColor(0xF9CF93)
                .width('100%')
                .height('100%')
                .textAlign(TextAlign.Center)
            }
            .key('GridItem' + index1 + index2)
          }, (day: string) => day)
        }, (day: string) => day)
      }
      .key('GridRowColKey')
      .columnsTemplate(this.columnsTemplate)
      .rowsTemplate('1fr 1fr 1fr')
      .columnsGap(10)
      .constraintSize({minWidth:10})
      .rowsGap(10)
      .width('90%')
      .key('GridRowCol')
      .backgroundColor(0xFAEEE0)
      .height(300)
    }.width('100%').margin({ top: 5 })
  }
}