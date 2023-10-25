@Component
struct Child_CL {
  @Link Array1: Array<Length> | Date | Array<String> | Array<Object>

  build() {
    Column({ space: 20 }) {


      Text("设置变量Array<Length>类型[1]-->[10]")
      Button('change')
        .onClick(() => {
          this.Array1 = [10];
        })
        .key('state5')

      Text("切换变量Date类型[1]-->new Date('2021-08-08')")
      Button('change')
        .onClick(() => {
          this.Array1 = new Date('2021-08-08');
        })
        .key('state6')

      Text("切换变量Array<String>类型[1]-->['20']")
      Button('change')
        .onClick(() => {
          this.Array1 = ['20'];
        })
        .key('state7')

      Text("切换变量Array<Object>类型[1]-->[{number: 30}]")
      Button('change')
        .onClick(() => {
          this.Array1 = [{number: 30}];
        })
        .key('state8')

    }.width('100%').margin({top:10})
  }
}

@Entry
@Component
struct Index_CL {

  @State Array1: Array<Length> | Date | Array<String> | Array<Object> = [1];
  build() {
    Column() {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.Array1)) + " number is " + JSON.stringify(this.Array1))
        .fontSize(20).margin(30).key('LinkArray1')

      Child_CL({Array1: this.Array1})
    }
  }
}