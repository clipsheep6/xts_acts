@Component
struct Child_CH {
  // @Consume装饰的变量通过相同的属性名绑定其祖先组件Ancestors内的@Provide装饰的变量
  @Consume hight: Number | String | Resource;

  build() {
    Column() {
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

    }
  }
}


@Entry
@Component
struct Ancestors_CH {
  // @Provide装饰的联合类型count由入口组件Ancestors提供其后代组件
  @Provide hight: Number | String | Resource = 50;

  build() {
    Column({ space: 20 }) {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.hight)) + " number is " + JSON.stringify(this.hight))
        .fontSize(20).margin(30).key('ConsumeHight')

      Child_CH()


    }.width('100%').margin({top:10})
  }
}