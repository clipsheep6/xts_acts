// father 获焦
@Entry
@Component
struct onclickGetFocus09 {
  @State active: boolean = false
  @State father: string = 'start'
  @State son: string = 'start'

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween }) {
      Navigator({ target: '', type: NavigationType.Push }) {
        Text('Go to page')
          .width('90%')
          .clip(false)
      }
      .onClick(()=>{
        this.father = 'focus'
      })

      Text('father'+ this.father).key('onclickGetFocus09Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus09Text_Son')
    }.height(150).width(350).padding(35)
  }
}
