// 子组件 son 不能 获焦，保持默认值
@Entry
@Component
struct onclickGetFocus21 {
  @State father: string = 'start'
  @State son: string = 'start'

  build() {
    Column() {
      Column(){
        DataPanel({ values: [25], max: 100, type: DataPanelType.Circle }).width(168).height(168)
          .focusable(false)
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('80%')
          .height('80%')
          .strokeWidth(18)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus21Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus21Text_Son')

    }.margin(20)
  }
}