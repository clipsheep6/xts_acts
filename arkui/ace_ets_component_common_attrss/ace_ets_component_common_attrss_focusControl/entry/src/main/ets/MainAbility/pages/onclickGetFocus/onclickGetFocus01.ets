// son 获焦
@Entry
@Component
struct onclickGetFocus01 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Button('son')
          .width('90%').height(100)
          .onClick(()=>{
            this.son = 'focus'
          })
      }.width(200).height(200).border({width:1,color:Color.Blue})
      .onClick(()=>{
        this.father = 'focus'
      })
      Text('father'+ this.father).key('onclickGetFocus01Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus01Text_Son')

    }.margin(20)
  }
}