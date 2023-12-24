import dragController from "@ohos.arkui.dragController"
import componentSnapshot from '@ohos.arkui.componentSnapshot';
import image from '@ohos.multimedia.image';
import UDC from '@ohos.data.unifiedDataChannel';

@Entry
@Component
struct DragControllerPage {
  @State pixmap: image.PixelMap|null = null
  private dragAction: dragController.DragAction|null = null;
  customBuilders:Array<CustomBuilder | DragItemInfo> = new Array<CustomBuilder | DragItemInfo>();
  @Builder DraggingBuilder() {
    Column() {
      Text("DraggingBuilder")
    }
    .width(100)
    .height(100)
    .backgroundColor(Color.Blue)
  }

  build() {
    Column() {

      Column() {
        Text("测试")
      }
      .width(100)
      .height(100)
      .backgroundColor(Color.Red)

      Button('createDragAction').onTouch((event?:TouchEvent) => {
        if(event){
          if (event.type == TouchType.Down) {
            console.log("drag Down by listener");
            this.customBuilders.push(()=>{this.DraggingBuilder()});
            this.customBuilders.push(()=>{this.DraggingBuilder()});
            this.customBuilders.push(()=>{this.DraggingBuilder()});
            let text = new UDC.Text()
            let unifiedData = new UDC.UnifiedData(text)
            let dragInfo: dragController.DragInfo = {
              pointerId: 0,
              data: unifiedData,
              extraParams: '',
              touchPoint:	{x:10,y:10},
              previewOptions:{ mode: DragPreviewMode.AUTO }
            }
            try{
              this.dragAction = dragController.createDragAction(this.customBuilders, dragInfo)
            if(!this.dragAction){
              console.log("listener dragAction is null");
              return
            }
            this.dragAction.on('statusChange', (dragAndDropInfo)=>{
              if (dragAndDropInfo.status == dragController.DragStatus.STARTED) {
                console.log("drag has start");
              } else if (dragAndDropInfo.status == dragController.DragStatus.ENDED){
                console.log("drag has end");
                if (!this.dragAction) {
                  return
                }
                this.customBuilders.splice(0, this.customBuilders.length)
                this.dragAction.off('statusChange')
              }
            })
            this.dragAction.startDrag().then(()=>{}).catch((err:Error)=>{
              console.log("start drag Error:" + err.message);
            })
            } catch(err) {
              console.log("create dragAction Error:" + err.message);
            }
          }
        }
      }).margin({top:20}).key('create')
    }
  }
}