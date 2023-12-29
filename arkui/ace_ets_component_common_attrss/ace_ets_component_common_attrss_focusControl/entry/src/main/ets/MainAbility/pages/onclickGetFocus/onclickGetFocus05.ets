// father 获焦
@Entry
@Component
struct onclickGetFocus05 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Start, justifyContent: FlexAlign.SpaceBetween }) {
      Column(){
        Text('son')
          .clip(false)
          .width('90%').height(100).backgroundColor(Color.Grey)
      }.width(200).height(200).border({width:1,color:Color.Blue})
      .onClick(()=>{
        this.father = 'focus'
      })
      Text('father'+ this.father).key('onclickGetFocus05Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus05Text_Son')

    }.height(400).padding({ left: 35, right: 35, top: 35 })
  }
}