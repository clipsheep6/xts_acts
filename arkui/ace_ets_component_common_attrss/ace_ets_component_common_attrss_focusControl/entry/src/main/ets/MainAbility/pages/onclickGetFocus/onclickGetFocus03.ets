// column 不能 获焦， Text获焦
@Entry
@Component
struct onclickGetFocus03 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Text('son')
          .clip(false)
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('90%').height(100).backgroundColor(Color.Grey)
      }.width(200).height(200).border({width:1,color:Color.Blue})
      .onClick(()=>{
        this.father = 'focus'
      })
      Text('father'+ this.father).key('onclickGetFocus03Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus03Text_Son')

    }.margin(20)
  }
}