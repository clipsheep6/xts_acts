// xxx.ets
@Entry
@Component
struct GestureDrag{
  @State message: string = '';
  build() {
    Row() {
      Column() {
        Image('/resource/image.jpeg')
          .margin({ top: 10 })
          .width("100%")
          .draggable(true)
          .dragPreviewOptions({ mode: DragPreviewMode.AUTO })
          .onDragStart(() => {
            this.message = 'drag'
            console.log("Drag start.")
          })

        Text('GestureDrag').width(100).height(40).backgroundColor(Color.Pink).id("GestureDrag")
      }
      .width("100%")
      .height("100%")
    }
  }
}