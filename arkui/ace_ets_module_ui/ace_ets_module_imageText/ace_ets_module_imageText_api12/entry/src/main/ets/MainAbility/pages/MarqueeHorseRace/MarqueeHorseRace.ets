@Entry
@Component
struct TextMarqueeTest {
  @State isShortText: boolean = false;
  @State chosenTextOverFlow: TextOverflow = TextOverflow.MARQUEE;
  @State marqueeStateString: string = ""
  @State settingString: string = "";
  @State loopCount: number = 0;


  build() {
    Column({ space: 10 }) {
      Text("我是一个长文本默认属性长文本默认属性的13213243215431543265432653246尾部尾部")
        .key('Marquee')
        .textOverflow({ overflow: TextOverflow.MARQUEE})
        .border({ width: 1 })
        .height(30)
        .marqueeOptions({
          start: true,
          step:9,
          loop: -1,
          fromStart: true,
          delay:0,
          // marqueeStartPolicy:MarqueeStartPolicy.ON_FOCUS,
          // fadeout:true

        })
        .onMarqueeStateChange((state: MarqueeState) => {
          if (state == MarqueeState.START) {
            console.log("11111111111开始滚动时触发回调")
          } else if (state == MarqueeState.BOUNCE) {
            this.loopCount++;
            console.log("11111111111完成一次滚动时触发" + this.loopCount)

          } else if (state == MarqueeState.FINISH) {
            console.log("1111111滚动全部循环次数完成时触发回调")
          }

        })
    }
    .justifyContent(FlexAlign.Center)
    .alignItems(HorizontalAlign.Center)
    .width("100%")
    .height("100%")
  }
}