import file from '@system.file';

import {Core, ExpectExtend, InstrumentLog, ReportExtend} from "deccjsunit/index.ets"
import testsuite from "../../test/List.test.ets"

import router from '@system.router';

async function routePage() {
  let options = {
    uri: 'pages/second/second'
  }
  try {
    await router.push(options)
  } catch (err) {
    console.error(`fail callback, code: ${err.code}, msg: ${err.msg}`)
  }
}

@Entry
@Component
struct Index {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Text('Hello World')
        .fontSize(50)
        .fontWeight(FontWeight.Bold)

      Button() {
          Text('connectServiceExtension')
            .fontSize(25)
            .fontWeight(FontWeight.Bold)
        }.type(ButtonType.Capsule)
        .margin({
          top: 20
        })
        .onClick(() => {
          globalThis.connectService()
        })
    }
    .width('100%')
    .height('100%')
  }
}