@Entry
@Component
struct MyComponent_AE {
  @State Array: Array<Number> | Array<boolean> | Boolean | Array<Resource> = [1];


  build() {
    Column({ space: 20 }) {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.Array)) + " number is " + JSON.stringify(this.Array))
        .fontSize(20).margin(30).key('StateArray')
      Text("设置变量Array<Number>类型[1]-->[10]")
      Button('change')
        .onClick(() => {
          this.Array = [10];
        })
        .key('state1')

      Text("切换变量Array<boolean>类型[1]-->[true]")
      Button('change')
        .onClick(() => {
          this.Array = [true];
        })
        .key('state2')

      Text("切换变量boolean类型[1]-->true")
      Button('change')
        .onClick(() => {
          this.Array = true;
        })
        .key('state3')

      Text("切换变量Array<Resource>类型[1]-->Array<Resource>")
      Button('change')
        .onClick(() => {
          this.Array = [$r('app.string.number')];
        })
        .key('state4')


    }.width('100%').margin({top:10})
  }
}