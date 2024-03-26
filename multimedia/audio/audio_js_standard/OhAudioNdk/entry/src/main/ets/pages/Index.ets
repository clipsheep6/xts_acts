import hilog from '@ohos.hilog';
import testNapi from 'libohaudiondk.so'
@Entry
@Component
struct Index {
  @State message: string = 'Hello world'

  build() {
    Row() {
      Column() {
        Text(this.message)
          .fontSize(50)
          .fontWeight(FontWeight.Bold)
          .onClick(() => {
            hilog.info(0x0000, 'testTag', 'Test NAPI 2 + 3 = %{public}d', testNapi.OHAudioStreamBuilderCreate(1));
          })
      }
      .width('100%')
    }
    .height('100%')
  }
}
