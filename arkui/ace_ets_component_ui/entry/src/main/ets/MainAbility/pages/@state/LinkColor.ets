@Component
struct Child_AAs {
  @Link color: Color | Number | undefined | String | null | Resource;

  build() {
    Column({ space: 20 }) {

      Text("设置变量color类型pink-->Orange")
      Button('change')
        .onClick(() => {
          this.color = Color.Orange;
        })
        .key('state1')

      Text("设置变量number类型Orange-->008000")
      Button('change')
        .onClick(() => {
          this.color = 0x0000ff;
        })
        .key('state2')

      Text("设置变量undefined类型pink-->undefined")
      Button('change')
        .onClick(() => {
          this.color = undefined;
        })
        .key('state3')

      Text("设置变量string类型pink-->'008000'")
      Button('change')
        .onClick(() => {
          this.color = '0x0000ff';
        })
        .key('state4')

      Text("设置变量string类型pink-->null")
      Button('change')
        .onClick(() => {
          this.color = null;
        })
        .key('state5')

      Text("设置变量Resource类型pink-->Resource")
      Button('change')
        .onClick(() => {
          this.color = $r('app.string.number');
        })
        .key('state6')

    }.width('100%').margin({top:10})
  }
}

@Entry
@Component
struct Index_AAs{
  @State color: Color | Number | undefined | String | null | Resource= '008000';

  build() {
    Column() {
      Text("count type of " + JSON.stringify(Object.prototype.toString.call(this.color)) + " number is " + JSON.stringify(this.color))
        .fontSize(20).margin(30).key('LinkColor')
      Child_AAs({color: this.color})

    }
  }
}