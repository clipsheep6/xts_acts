// column 可 获焦
@Entry
@Component
struct onclickGetFocus02 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Text('son')
          .width('90%').height(100).backgroundColor(Color.Grey)
      }.width(200).height(200).border({width:1,color:Color.Blue})
      .onClick(()=>{
        this.father = 'focus'
      })
      Text('father'+ this.father).key('onclickGetFocus02Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus02Text_Son')

    }.margin(20)
  }
}