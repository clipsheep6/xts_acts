// 子组件 son 可 获焦
@Entry
@Component
struct onclickGetFocus14 {
  @State father: string = 'start'
  @State son: string = 'start'
  @Builder descriptionBuilder() {
    Text('说明文本')
      .maxFontSize('30sp')
      .minFontSize("10.0vp")
      .fontColor("#fffa2a2d")
      .fontWeight(FontWeight.Medium)
      .width('100%')
      .height("100%")
      .textAlign(TextAlign.Center)
  }

  build() {
    Column() {
      Column(){
        Gauge({ value: 50, min: 1, max: 100 })
          .onClick(()=>{
            this.son = 'focus'
          })
          .width('80%')
          .height('80%')
          .strokeWidth(18)
      }.width(200).height(200).border({width:1,color:Color.Blue})

      Text('father'+ this.father).key('onclickGetFocus14Text_Father').margin({top:15})
      Text('son'+ this.son).key('onclickGetFocus14Text_Son')

    }.margin(20)
  }
}