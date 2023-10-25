@Entry
@Component
struct MyComponent_AZ {
  @State  hight: Number | String | Resource = 50;

  build() {
    Column({ space: 20 }) {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.hight)) + " number is " + JSON.stringify(this.hight))
        .fontSize(20).margin(30).key('StateHight')
      Text("设置变量number类型50-->100")
      Button('change')
        .onClick(() => {
          this.hight = 100
        })
        .key('state1')

      Text("设置变量string类型50-->'200'")
      Button('change')
        .onClick(() => {
          this.hight = '200'
        })
        .key('state2')

      Text("设置变量Resource类型50-->Resource")
      Button('change')
        .onClick(() => {
          this.hight = $r('app.string.number')
        })
        .key('state3')

    }.width('100%').margin({top:10})
  }
}