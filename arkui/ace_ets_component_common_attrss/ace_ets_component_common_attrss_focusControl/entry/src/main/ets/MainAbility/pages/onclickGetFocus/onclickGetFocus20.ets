// 子组件 son 不能 获焦，保持默认值
@Entry
@Component
struct onclickGetFocus20 {
  @State father: string = 'start'
  @State son: string = 'start'


  build() {
    Column() {
      Column(){
        Divider().vertical(true).height(22).color('#182431').opacity(0.6).margin({ left: 8, right: 8 })
          .onClick(()=>{
            this.son = 'focus'
          })
          .focusable(false)
          .width('80%')
          .height('80%')
          .strokeWidth(18)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus20Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus20Text_Son')

    }.margin(20)
  }
}