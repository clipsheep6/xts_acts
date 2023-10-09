// xxx.ets
@Entry
@Component
struct PopupExampleA {
  @State customPopup: boolean = false

  // popup构造器定义弹框内容
  @Builder popupBuilder() {
    Row({ space: 2 }) {
      Text('Custom Popup').fontSize(10)
    }.width(100).height(50).padding(5)
  }
  build() {
    Flex({ direction: FlexDirection.Column }) {
      // CustomPopupOptions 类型设置弹框内容
      Button('Popup按esc逐层退出').key('Popup_dialog_A')
        .onClick(() => {
          this.customPopup = !this.customPopup
        }).bindPopup(this.customPopup, {
        builder: this.popupBuilder,
        placement: Placement.Top,
        popupColor: Color.Yellow,
        enableArrow: true,
      })
    }.width('100%').padding({ top: 200})
  }
}