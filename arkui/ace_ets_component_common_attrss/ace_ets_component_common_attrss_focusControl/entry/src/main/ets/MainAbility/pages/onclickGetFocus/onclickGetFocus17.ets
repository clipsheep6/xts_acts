// 子组件 son 不能 获焦，保持默认值
@Entry
@Component
struct onclickGetFocus17 {
  @State father: string = 'start'
  @State son: string = 'start'

  build() {
    Column() {
      Column(){
        Text('son')
          .clip(false)
          .focusable(false)
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('90%').height(100).backgroundColor(Color.Grey)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus17Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus17Text_Son')

    }.margin(20)
  }
}