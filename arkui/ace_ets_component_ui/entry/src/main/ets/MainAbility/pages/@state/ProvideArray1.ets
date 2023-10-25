@Component
struct Child_AU {
  // @Consume装饰的变量通过相同的属性名绑定其祖先组件Ancestors内的@Provide装饰的变量
  @Consume Array1: Array<Length> | Date | Array<String> | Array<Object>
  build() {
    Column({ space: 20 }) {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.Array1)) + " number is " + JSON.stringify(this.Array1))
        .fontSize(20).margin(30).key('ProvideArray1')


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
struct Ancestors_AU {
  // @Provide装饰的联合类型count由入口组件Ancestors提供其后代组件
  @Provide Array1: Array<Length> | Date | Array<String> | Array<Object> = [1];

  build() {
    Column() {

      Child_AU()
    }
  }
}