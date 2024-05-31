import { CounterComponent, CounterType, DateData } from '@ohos.arkui.advanced.Counter';

@Entry
@Component
struct DataStyleExample {
  @State value1: string = ""
  @State value2: string = ""
  @State type: string = ""
  @State mType: CounterType = CounterType.INLINE_DATE
  build() {
    Row() {
      Column({ space: 12 }) {
        //日期内联型counter
        Text(this.value1)
        Text(this.value2)
        Text(this.type)
          .id("type")
        CounterComponent({
          options: {
            type: this.mType,
            dateOptions: {
              year: 2016,
              onDateChange: (date: DateData) => {
                console.log("onDateChange Date: " + date.toString());
              },
              onHoverIncrease: () => {
                this.value1 = "onHoverIncrease trigger"
              },
              onHoverDecrease: () => {
                this.value2 = "onHoverDecrease trigger"
              }
            }
          }
        })
        Button("click to show value")
          .id("btn")
          .onClick(() => {
            if (this.mType == CounterType.INLINE_DATE) {
              this.type = "INLINE_DATE"
            }
          })
      }.width("100%")
    }.height("100%")
  }
}