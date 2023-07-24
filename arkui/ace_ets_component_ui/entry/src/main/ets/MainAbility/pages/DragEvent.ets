import udmf from '@ohos.data.UDMF';
import promptAction from '@ohos.promptAction';
@Entry
@Component
struct DragEvent {
  @State targetImage: string = '';
  @State targetText: string = 'Drag Text';
  @State hyperLinkText: string = 'HyperLink';
  @State hyperLinkContent: string = 'HyperLink';
  @State imageWidth: number = 100;
  @State imageHeight: number = 100;
  @State abstractContent: string = "abstract";
  @State textContent: string = "";
  @State dragBehavior: string = "dragBehavior";
  @State dragRet: string = "dragRet";
  @State useCustomDropAnimation1: string = "useCustomDropAnimation";
  @State imgState: Visibility = Visibility.Visible;


  build() {
    Row() {
      Column() {
        Text(this.dragBehavior).id("dragBehavior").margin(5)
        Text(this.dragRet).id("dragRet").margin(5)
        Text(this.useCustomDropAnimation1).id("useCustomDropAnimation").margin(5)
        Image($r('app.media.icon')).margin(5)
          .width(100)
          .height(100)
          .draggable(true)
          .margin({left: 15})
          .visibility(this.imgState)
          .onDragStart((event)=>{
            event.setResult(DragRet.DRAG_SUCCESS);
          })
          .onDragEnd((event)=>{
            event.dragBehavior = DragBehavior.MOVE
            this.dragBehavior = event.dragBehavior.toString()
            event.useCustomDropAnimation === true
            if(event.useCustomDropAnimation === true){
              this.useCustomDropAnimation1 = "true"
              promptAction.showToast({duration: 100, message: 'useCustomDropAnimation==true'});
            }
            if (event.getResult() === DragRet.DRAG_SUCCESS) {
              promptAction.showToast({duration: 100, message: 'Drag Success'});
            } else if (event.getResult() === DragRet.DRAG_FAILED) {
              promptAction.showToast({duration: 100, message: 'Drag Failed'});
            } else if (event.getResult() === DragRet.DRAG_CANCELED) {
              promptAction.showToast({duration: 100, message: 'Drag Canceled'});
            } else if (event.getResult() === DragRet.DROP_DISABLED) {
              promptAction.showToast({duration: 100, message: 'Drop Disabled'});
            }
            this.dragRet = event.getResult().toString()
          })
      }.width('90%')
      .height('100%')
      .margin({left: '5%'})
    }
    .height('100%')
  }
}