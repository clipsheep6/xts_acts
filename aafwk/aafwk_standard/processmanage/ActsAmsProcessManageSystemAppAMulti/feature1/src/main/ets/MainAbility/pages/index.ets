import file from '@system.file';

//import {Core, ExpectExtend, InstrumentLog, ReportExtend} from "deccjsunit/index.ets"
//import testsuite from "../../test/List.test.ets"

@Entry
@Component
struct Index {

  aboutToAppear() {
    console.info("start run testcase!!!!")
  }

  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('pmsystemappamulti')
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