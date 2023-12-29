// 子组件 son 可 获焦
@Entry
@Component
struct onclickGetFocus13 {
  @State father: string = 'start'
  @State son: string = 'start'
  build() {
    Column() {
      Column(){
        Image($r('app.media.icon'))
          .width(110).height(110).margin(15)
          .overlay('son', { align: Alignment.Bottom, offset: { x: 0, y: 20 } })
          .onClick(()=>{
            this.son = 'focus'
          })
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus13Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus13Text_Son')

    }.margin(20)
  }
}