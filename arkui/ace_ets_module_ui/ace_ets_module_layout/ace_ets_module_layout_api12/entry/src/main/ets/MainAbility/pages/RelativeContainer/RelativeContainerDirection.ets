@Entry
@Component
struct RelativeContainerDirection {
  @State currentDirection?: Direction = Direction.Auto;

  build() {
    Column() {
      Row() {
        Text('direction:').width('30%')
        Button('Auto').onClick(() => {
          this.currentDirection = Direction.Auto
        }).backgroundColor(this.currentDirection == Direction.Auto ? Color.Red : Color.Blue).key('Auto').id('Auto')
        Button('Rtl').onClick(() => {
          this.currentDirection = Direction.Rtl
        }).backgroundColor(this.currentDirection == Direction.Rtl ? Color.Red : Color.Blue).key('Rtl').id('Rtl')
        Button('Ltr').onClick(() => {
          this.currentDirection = Direction.Ltr
        }).backgroundColor(this.currentDirection == Direction.Ltr ? Color.Red : Color.Blue).key('Ltr').id('Ltr')
        Button('Undefined').onClick(() => {
          this.currentDirection = undefined
        }).backgroundColor(this.currentDirection == undefined ? Color.Red : Color.Blue).key('Undefined').id('Undefined')
      }.margin(5)

      Row() {
        RelativeContainer() {
          Row().width(100).height(100)
            .backgroundColor('#FF3333')
            .id('row1')

          Row()
            .width(100)
            .height(100)
            .backgroundColor('#FFCC00')
            .alignRules({
              middle: { anchor: 'row1', align: HorizontalAlign.End },
              top: { anchor: 'row1', align: VerticalAlign.Bottom }
            })
            .id('row2')

          Row()
            .width(100)
            .height(100)
            .backgroundColor('#FF6633')
            .alignRules({
              start: { anchor: 'barrier1', align: HorizontalAlign.End },
              top: { anchor: 'row1', align: VerticalAlign.Top }
            })
            .id('row3')

          Row()
            .width(50)
            .height(50)
            .backgroundColor('#FF9966')
            .alignRules({
              start: { anchor: 'row1', align: HorizontalAlign.Start },
              top: { anchor: 'barrier2', align: VerticalAlign.Bottom }
            })
            .id('row4')
        }
        .direction(this.currentDirection)
        .width(300)
        .height(300)
        .margin({ left: 50 })
        .border({ width: 2, color: '#6699FF' })
        .barrier([{ id: 'barrier1', localizedDirection: LocalizedBarrierDirection.END, referencedId: ['row1', 'row2'] },
          { id: 'barrier2', localizedDirection: LocalizedBarrierDirection.BOTTOM, referencedId: ['row1', 'row2'] }])
      }
      .height('100%')
      .key('RelativeContainer')
      .id('RelativeContainer')
    }
    .key('Column')
    .id('Column')
  }
}