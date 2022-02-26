import file from '@system.file';

@Entry
@Component
struct Index {

  aboutToAppear() {
    console.info("start run testcase!!!!")
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('pmvendorappa')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)
      .margin({
        top: 20
      })
    }
    .width('100%')
    .height('100%')
  }
}