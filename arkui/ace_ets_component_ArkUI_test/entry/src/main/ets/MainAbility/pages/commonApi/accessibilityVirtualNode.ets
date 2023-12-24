// xxx.ets
@Entry
@Component
struct accessibilityVirtualNode1 {
  @Builder
  VirtualNode() {
    Text('accessibilityVirtualNode')
  }
  build() {
    Row() {
      Column() {
        Text("文本1")
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
        Text("文本2")
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .key('accessibilityVirtualNode_1')
      .width('100%')
      .accessibilityGroup(true)
      .accessibilityLevel("yes")
      .accessibilityVirtualNode(this.VirtualNode)

    }
    .height('100%')
  }
}