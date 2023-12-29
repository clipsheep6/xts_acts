// 子组件 son 可 获焦
@Entry
@Component
struct onclickGetFocus16 {
  @State father: string = 'start'
  @State son: string = 'start'
  public valueArr: number[] = [10, 10, 10, 10, 10, 10, 10, 10, 10]

  build() {
    Column() {
      Column(){
        DataPanel({ values: [25], max: 100, type: DataPanelType.Circle }).width(168).height(168)
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('80%')
          .height('80%')
          .strokeWidth(18)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus16Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus16Text_Son')

    }.margin(20)
  }
}