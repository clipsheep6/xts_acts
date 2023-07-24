@Entry
@Component
struct Index {

  @Builder
  SubMenu() {
    Menu() {
      MenuItem({ content: "复制", labelInfo: "Ctrl+C" })
      MenuItem({ content: "粘贴", labelInfo: "Ctrl+V" })
    }
  }

  @Builder
  MyMenu(){
    Menu() {
      MenuItem({
        content: "content1",
        endIcon: "resource/base/media/icon.png",
        labelInfo: "labelInfo1",
      }).id("menuItem_options1")

      MenuItem({
        content: "content2",
        endIcon: $r("app.media.icon"),
        labelInfo: $r("app.string.MenuItem2_labelInfo"),
      }).id("menuItem_options2")

      MenuItemGroup({
        footer: "footer1"
      }).id("MenuItemGroup_options1")

      MenuItemGroup({
        footer: $r("app.string.MenuItemGroup2_footer"),
      }).id("MenuItemGroup_options2")

      MenuItemGroup({
        footer: this.SubMenu.bind(this)
      }).id("MenuItemGroup_options3")
    }
  }

  build() {
    Row() {
      Column() {
        Button('click to show menu')
          .id("button_menu")
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
      }
      .bindMenu(this.MyMenu)
      .width('100%')
    }
    .height('100%')
  }
}