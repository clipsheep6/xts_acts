// 子组件 son 可 获焦
@Entry
@Component
struct onclickGetFocus12 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Text('son')
          .clip(false)
          .width('90%').height(100).backgroundColor(Color.Grey)
          .onClick(()=>{
            this.son = 'focus'
          })
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus12Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus12Text_Son')

    }.margin(20)
  }
}