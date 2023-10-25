@Observed
class ClassAA {
  public a: number;

  constructor(a: number) {
    this.a = a;
  }
}
@Observed
class ClassBB {
  public b: number;

  constructor(b: number) {
    this.b = b;
  }
}

@Entry
@Component
struct Page2 {
  @State count: ClassAA | ClassBB | undefined | null = undefined;

  build() {
    Column() {
      Child({ count: this.count })


      Button('change count to ClassAA')
        .onClick(() => {
          // 赋值为ClassA111111的实例
          this.count = new ClassAA(100)
        }).key('state1')

      Button('change count to ClassBB')
        .onClick(() => {
          // 赋值为ClassA111111的实例
          this.count = new ClassBB(100)
        }).key('state2')

      Button('change count to undefined')
        .onClick(() => {
          // 赋值为undefined
          this.count = undefined
        }).key('state3')

      Button('change count to null')
        .onClick(() => {
          // 赋值为undefined
          this.count = null
        }).key('state4')

    }.width('100%')
  }
}

@Component
struct Child {
  @ObjectLink count: ClassAA | ClassBB | undefined | null

  build() {
    Column() {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.count)) + " number is " + JSON.stringify(this.count))
        .fontSize(20).margin(30).key('objectLinkNumber')

    }.width('100%')
  }
}